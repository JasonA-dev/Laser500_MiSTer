
module laser500 (
    input wire F14M,
	input wire F14Mx2,
	input wire F3M,
    input wire reset,
    input wire pll_locked,

	// video
	output wire video_hs,
	output wire video_vs,
	output wire [5:0] video_r,
	output wire [5:0] video_g,
	output wire [5:0] video_b,
	output wire non_visible_area,

	input wire  alt_font,
	
	input wire [31:0] joystick_0,
	input wire [31:0] joystick_1,

	//input wire [ 6:0] KD, 

	input wire [10:0] ps2_key,

	//output wire [15:0] CPU_ADDR,

	output wire AUDIO_L,
	output wire AUDIO_R,

	input wire  UART_RX,

	input wire        ioctl_download,
	input wire        ioctl_wr,
	input wire [24:0] ioctl_addr,
    input wire [7:0]  ioctl_data,
	input wire [7:0]  ioctl_index

);

//assign CPU_ADDR = cpu_addr;

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

T80pa cpu
(
	.reset_n ( ~CPU_RESET    ),  
	
	.clk     ( F14M          ),   
	.cen_p   ( CPUENA        ),   // CPU enable (positive edge)
	.cen_n   ( ~CPUENA       ),   // CPU enable (negative edge)

	.a       ( cpu_addr      ),   // 16 bit address bus
	.DO      ( cpu_dout      ),   // 8 bit data bus (output)
	.di      ( cpu_din       ),   // 8 bit data bus (input)
	
	.rd_n    ( cpu_rd_n      ),   // READ       0=cpu reads
	.wr_n    ( cpu_wr_n      ),   // WRITE      0=cpu writes
	
	.iorq_n  ( cpu_iorq_n    ),   // IO REQUEST 0=read from I/O
	.mreq_n  ( cpu_mreq_n    ),   // MEMORY REQUEST, idicates the bus has a valid memory address
	.m1_n    ( 1'b1          ),   // connected to expansion port on the Laser 500
	.rfsh_n  ( 1'b1          ),   // connected to expansion port on the Laser 500

	.busrq_n ( 1'b1          ),   // connected to VCC on the Laser 500
	.int_n   ( video_vs      ),   // VSYNC interrupt
	.nmi_n   ( 1'b1          ),   // connected to VCC on the Laser 500
	.wait_n  ( ~WAIT         )    // 
	
);


/*
tv80s cpu 
(
	.reset_n(~CPU_RESET ),
	.clk(clk),
	//.cen(CPUENA),
	.wait_n(~WAIT ),
	.int_n(video_vs),
	.nmi_n(1'b1),
	.busrq_n(1'b1),
	.m1_n(),
	.rfsh_n(rfsh_n),
	.mreq_n(cpu_mreq_n),
	.iorq_n(cpu_iorq_n),
	.rd_n(cpu_rd_n),
	.wr_n(cpu_wr_n),
	.A(cpu_addr),
	.di(cpu_din),
	.dout(cpu_dout)
);
*/

///////////////////////////////////////////////////////////////////////////////
// 1. Generate a valid strobe whenever ps2_key[10] toggles
///////////////////////////////////////////////////////////////////////////////
reg old_state;
reg key_strobe;

wire [ 6:0] KD;

always @(posedge F14M or posedge CPU_RESET) begin
    if (CPU_RESET) begin
        old_state   <= 1'b0;
        key_strobe  <= 1'b0;
    end else begin
        // Watch bit [10] for toggles
        old_state <= ps2_key[10];
        if (old_state != ps2_key[10]) begin
            // Toggle key_strobe every time ps2_key[10] changes
            key_strobe <= ~key_strobe;
        end
    end
end

keyboard keyboard 
(
	.reset    ( CPU_RESET ),
	.clk      ( F14M  ),

	.ps2_key  ( ps2_key ),
	.valid	  ( key_strobe  ),

	.address  ( cpu_addr  ),
	.KD       ( KD        ),
	.reset_key( reset_key )	
);

/******************************************************************************************/
/******************************************************************************************/
/***************************************** @vdc *******************************************/
/******************************************************************************************/
/******************************************************************************************/

//
// VTL CHIP GA1
//
					
//wire       F3M;					
//wire       F14M;
//wire [5:0] video_r;
//wire [5:0] video_g; 
//wire [5:0] video_b;
//wire       video_hs;
//wire       video_vs;

wire [24:0] vdc_sdram_addr; 
wire        vdc_sdram_wr;
wire        vdc_sdram_rd;
wire  [7:0] vdc_sdram_din;
		  
// VTL custom chip
VTL_chip VTL_chip 
(	
	.F14M   ( F14M        ),
	.F14Mx2	( F14Mx2	  ),
	.RESET  ( CPU_RESET   ),
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
	.hsync  ( video_hs    ),
	.vsync  ( video_vs    ),
	.r      ( video_r     ),
	.g      ( video_g     ),
	.b      ( video_b     ),

	.non_visible_area(non_visible_area),
	
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
	
	.alt_font     ( alt_font ),
	.cnt          ( hcnt ),
	
	.img_mounted  ( img_mounted ),
	.img_size     ( img_size    ) 
);

/******************************************************************************************/
/******************************************************************************************/
/***************************************** @downloader ************************************/
/******************************************************************************************/
/******************************************************************************************/

wire        is_downloading;
wire [24:0] download_addr;
wire [7:0]  download_data;
wire        download_wr;
wire        boot_completed;

// ROM download helper
downloader 
#
(
	.ROM_START_ADDR(25'h0),               // start of ROM in SDRAM
	.PRG_START_ADDR(25'h10000 + 25'h995), // start of PRG in SDRAM (0x8995)
	.PTR_END_BASE('h8995),                // base value to sum to END pointer (0x8995)
	.PTR_PROGND(25'h10000 + 25'h3E9)      // SDRAM address of END pointer (0x83e9)
)
downloader (
	
	// new SPI interface
    //.SPI_DO ( SPI_DO  ),
	//.SPI_DI ( SPI_DI  ),
    //.SPI_SCK( SPI_SCK ),
    //.SPI_SS2( SPI_SS2 ),
    //.SPI_SS3( SPI_SS3 ),
    //.SPI_SS4( SPI_SS4 ),
	
	.ioctl_download(ioctl_download),
    .ioctl_index   (ioctl_index),
    .ioctl_addr    (ioctl_addr),
    .ioctl_dout    (ioctl_data),
    .ioctl_wr      (ioctl_wr),

	// signal indicating an active rom download
	.downloading ( is_downloading  ),
    .ROM_done    ( boot_completed  ),	
	         
    // external ram interface
    .clk    ( F14Mx2        ),
	.clk_ena( 1             ),
    .wr     ( download_wr   ),
    .addr   ( download_addr ),
    .data   ( download_data )
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
	.clk      ( F14Mx2      ),
	.ena      ( 1           ),
	.trigger  ( reset       ),	
	.erasing  ( eraser_busy ),
	.wr       ( eraser_wr   ),
	.addr     ( eraser_addr ),
	.data     ( eraser_data )
);

assign WAIT = 0; 

/******************************************************************************************/
/******************************************************************************************/
/***************************************** @sdram *****************************************/
/******************************************************************************************/
/******************************************************************************************/

reg LED_ON = 0;
assign LED = ~LED_ON;

	
//
// RAM (SDRAM)
//
						
// SDRAM control signals
wire ram_clock;
assign SDRAM_CKE = pll_locked; // was: 1'b1;
//assign SDRAM_CLK = ram_clock;

wire        sdram_clkref ;
wire [24:0] sdram_addr   ;
wire        sdram_wr     ;
wire        sdram_rd     ;
wire [7:0]  sdram_dout   ; 
wire [7:0]  sdram_din    ; 

always @(*) begin
	if(is_downloading && download_wr) begin
		sdram_din    = download_data;
		sdram_addr   = download_addr;
		sdram_wr     = download_wr;
		sdram_rd     = 1'b1;
		sdram_clkref = F14M;
	end	
	else if(eraser_busy) begin		
		sdram_din    = eraser_data;
		sdram_addr   = eraser_addr;
		sdram_wr     = eraser_wr;
		sdram_rd     = 1'b1;		
		sdram_clkref = F14M;
	end	
	else begin
		sdram_din    = vdc_sdram_din;
		sdram_addr   = vdc_sdram_addr;
		sdram_wr     = vdc_sdram_wr;
		sdram_rd     = vdc_sdram_rd;
		sdram_clkref = F14M;
	end	
end

wire CPU_RESET = ~boot_completed | is_downloading | eraser_busy | reset;
wire BLANK     = ~boot_completed | is_downloading | eraser_busy;

/*
// sdram from zx spectrum core	
sdram sdram (
	// interface to the MT48LC16M16 chip
   .sd_data        ( SDRAM_DQ                  ),
   .sd_addr        ( SDRAM_A                   ),
   .sd_dqm         ( {SDRAM_DQMH, SDRAM_DQML}  ),
   .sd_cs          ( SDRAM_nCS                 ),
   .sd_ba          ( SDRAM_BA                  ),
   .sd_we          ( SDRAM_nWE                 ),
   .sd_ras         ( SDRAM_nRAS                ),
   .sd_cas         ( SDRAM_nCAS                ),

   // system interface
   .clk            ( ram_clock                 ),
   .clkref         ( sdram_clkref              ),
   .init           ( !pll_locked               ),

   // cpu interface	
   .din            ( sdram_din                 ),
   .addr           ( sdram_addr                ),
   .we             ( sdram_wr                  ),
   .oe         	 ( sdram_rd                  ),	
   .dout           ( sdram_dout                )	
);
*/


/******************************************************************************************/
/******************************************************************************************/
/***************************************** @audio *****************************************/
/******************************************************************************************/
/******************************************************************************************/
// latches cassette input

reg CASIN;
always @(posedge F14M) begin
	CASIN <= ~UART_RX;
end

wire BUZZER;
wire CASOUT;
wire audio;

//
// BUZZER for emulating the keyboard builtin speaker
// CASIN for tape monitor
// CASOUT for save to tape wire
//
/*
dac #(.C_bits(16)) dac_AUDIO_L
(
	.clk_i(F14M),
   .res_n_i(pll_locked),	
	.dac_i({ BUZZER ^ CASIN ^ (~CASOUT), 15'b0000000 }),
	.dac_o(audio)
);
*/

always @(posedge F14M) begin
	AUDIO_L <= audio;
	AUDIO_R <= audio;
end

dpram #(8, 18) dpram
(
	.address_a(sdram_addr[17:0]),
	.clock_a(F14Mx2),
	.data_a(sdram_din),
	.q_a(sdram_dout),
	.wren_a(sdram_wr)
	//.enable_a(sdram_rd)
);

endmodule