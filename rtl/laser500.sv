
module laser500 (
    input wire clk,
    input wire reset,
    input wire pll_locked,

	// video
	output wire hsync,
	output wire vsync,
	output wire [5:0] r,
	output wire [5:0] g,
	output wire [5:0] b,
	output wire display_enable,
	
	input wire [31:0] joystick_0,
	input wire [31:0] joystick_1,

	input wire        ioctl_download,
	input wire        ioctl_wr,
	input wire [24:0] ioctl_addr,
    input wire [7:0]  ioctl_data,
	input wire [7:0]  ioctl_index

);

/******************************************************************************************/
/******************************************************************************************/
/***************************************** @t80 *******************************************/
/******************************************************************************************/
/******************************************************************************************/
	
//
// Z80 CPU
//
	
// CPU control signals
wire        CPUCK;          // CPU Clock not used yet
wire        CPUENA;         // CPU enable
wire        WAIT;           // CPU WAIT 
wire [15:0] cpu_addr;
wire [7:0]  cpu_din;
wire [7:0]  cpu_dout;
wire        cpu_rd_n;
wire        cpu_wr_n;
wire        cpu_mreq_n;
wire        cpu_m1_n;
wire        cpu_iorq_n;

tv80e cpu
(
	.reset_n ( ~CPU_RESET   ),  
	
	.clk     ( clk          ),   
	.cen     ( CPUENA        ),   // CPU enable (positive edge)

	.A       ( cpu_addr      ),   // 16 bit address bus
	.dout    ( cpu_dout      ),   // 8 bit data bus (output)
	.di      ( cpu_din       ),   // 8 bit data bus (input)
	
	.rd_n    ( cpu_rd_n      ),   // READ       0=cpu reads
	.wr_n    ( cpu_wr_n      ),   // WRITE      0=cpu writes
	
	.iorq_n  ( cpu_iorq_n    ),   // IO REQUEST 0=read from I/O
	.mreq_n  ( cpu_mreq_n    ),   // MEMORY REQUEST, idicates the bus has a valid memory address
	.m1_n    (         ),   // 1'b1 connected to expansion port on the Laser 500
	.rfsh_n  (         ),   // 1'b1 connected to expansion port on the Laser 500

	.busrq_n ( 1'b1          ),   // connected to VCC on the Laser 500
	.int_n   ( video_vs      ),   // VSYNC interrupt
	.nmi_n   ( 1'b1          ),   // connected to VCC on the Laser 500
	.wait_n  ( ~WAIT         )    // 
	/*
  	.halt_n;
  	.busak_n;
  	*/	
);

/******************************************************************************************/
/******************************************************************************************/
/***************************************** @vdc *******************************************/
/******************************************************************************************/
/******************************************************************************************/

//
// VTL CHIP GA1
//
reg        sdram_clkref ;
reg [24:0] sdram_addr   ;
reg        sdram_wr     ;
reg        sdram_rd     ;
reg [7:0]  sdram_dout   ; 
reg [7:0]  sdram_din    ; 

wire [24:0] vdc_sdram_addr; 
wire        vdc_sdram_wr;
wire        vdc_sdram_rd;
wire  [7:0] vdc_sdram_din;

// VTL custom chip
VTL_chip VTL_chip 
(	
	.F14M   ( clk         ),
	.RESET  ( CPU_RESET ),
	.BLANK  ( BLANK       ),		
	
	// cpu
    .CPUCK    ( CPUCK         ),
	.CPUENA   ( CPUENA        ),
	.MREQ_n   ( cpu_mreq_n    ),	
	.IORQ_n   ( cpu_iorq_n    ),
	.RD_n     ( cpu_rd_n      ), 
	.WR_n     ( cpu_wr_n      ),
	.A        ( cpu_addr      ),
	.DI       ( cpu_din       ),
	.DO       ( cpu_dout      ),
		
	// video
	.hsync  ( hsync    ),
	.vsync  ( vsync    ),
	.r      ( r     ),
	.g      ( g     ),
	.b      ( b     ),
	
	.non_visible_area(display_enable),

	//	SDRAM interface
	.sdram_addr   ( vdc_sdram_addr   ), 
	.sdram_din    ( vdc_sdram_din    ),
	.sdram_rd     ( vdc_sdram_rd     ),
	.sdram_wr     ( vdc_sdram_wr     ),
	.sdram_dout   ( sdram_dout       ), 
	
	.joystick_0   ( joystick_0 ),
	.joystick_1   ( joystick_1 ),
	
	.KD           ( KD      ),	
	.BUZZER       ( BUZZER  ),
	.CASOUT       ( CASOUT  ),
	.CASIN        ( CASIN   ),
	
	.alt_font     ( st_alt_font ),
	.cnt          ( hcnt ),
	
	.img_mounted  ( img_mounted ),
	.img_size     ( img_size    ) 
);

/******************************************************************************************/
/******************************************************************************************/
/***************************************** @eraser ****************************************/
/******************************************************************************************/
/******************************************************************************************/

wire eraser_busy;
wire eraser_wr;
wire [24:0] eraser_addr;
wire [7:0]  eraser_data;

eraser 
#(
	// erases from page 3 to page 7 (all 64K RAM)
	.START_RAM( { 7'd0, 4'h3, 14'b0 }),  
	.END_RAM  ( { 7'd0, 4'h8, 14'b0 })  
)
eraser
(
	.clk      ( clk         ),
	.ena      ( 1           ),
	.trigger  ( reset       ),	
	.erasing  ( eraser_busy ),
	.wr       ( eraser_wr   ),
	.addr     ( eraser_addr ),
	.data     ( eraser_data )
);

assign WAIT = 0; 

wire CPU_RESET =   ioctl_download | reset; //eraser_busy | reset;
wire BLANK     =   ioctl_download; // | eraser_busy;

/******************************************************************************************/
/******************************************************************************************/
/***************************************** @sdram *****************************************/
/******************************************************************************************/
/******************************************************************************************/

//
// RAM (SDRAM)
//

reg [7:0]data_out_one;

always @(posedge clk) begin
	data_out_one <= sdram_dout;
end



// AJS TODO -- see downloader.sv -- we need to write
// the basic address into RAM after we load the PRG file

always @(*) begin
	if(ioctl_download && ioctl_wr && ioctl_index==0) begin
		sdram_din    <= ioctl_data;
		sdram_addr   <= ioctl_addr;
		sdram_wr     <= ioctl_wr;
		sdram_rd     <= 1'b1;
		sdram_clkref <= clk;
	end	
	//else if(ioctl_download && ioctl_wr && ioctl_index==1) begin
	//	sdram_din    = ioctl_data;
	//	sdram_addr   = ioctl_addr + 'h8995;
	//	sdram_wr     = ioctl_wr;
	//	sdram_rd     = 1'b1;
	//	sdram_clkref = clk;
	//end	
	//else if(eraser_busy) begin	
	//	sdram_din    = eraser_data;
	//	sdram_addr   = eraser_addr;
	//	sdram_wr     = eraser_wr;
	//	sdram_rd     = 1'b1;		
	//	sdram_clkref = clk;
	//end	
	else begin
		sdram_din    = vdc_sdram_din;
		sdram_addr   = vdc_sdram_addr;
		sdram_wr     = vdc_sdram_wr;
		sdram_rd     = vdc_sdram_rd;
		sdram_clkref = clk;
	end	
end

dpram #(.address_width(18),.data_width(8)) dpram
(
	.address_a(sdram_addr[17:0]),
	.clock_a(clk),
	.data_a(sdram_din),
	.q_a(sdram_dout),
	.wren_a(sdram_wr),
	.enable_a(sdram_rd),
	
	//.address_b(sdram_addr[17:0]),
	//.clock_b(clk)
);

endmodule