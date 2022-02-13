//============================================================================
//
//  This program is free software; you can redistribute it and/or modify it
//  under the terms of the GNU General Public License as published by the Free
//  Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope that it will be useful, but WITHOUT
//  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
//  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
//  more details.
//
//  You should have received a copy of the GNU General Public License along
//  with this program; if not, write to the Free Software Foundation, Inc.,
//  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
//============================================================================

module emu
(
	//Master input clock
	input         CLK_50M,

	//Async reset from top-level module.
	//Can be used as initial reset.
	input         RESET,

	//Must be passed to hps_io module
	inout  [47:0] HPS_BUS,

	//Base video clock. Usually equals to CLK_SYS.
	output        CLK_VIDEO,

	//Multiple resolutions are supported using different CE_PIXEL rates.
	//Must be based on CLK_VIDEO
	output        CE_PIXEL,

	//Video aspect ratio for HDMI. Most retro systems have ratio 4:3.
	//if VIDEO_ARX[12] or VIDEO_ARY[12] is set then [11:0] contains scaled size instead of aspect ratio.
	output [12:0] VIDEO_ARX,
	output [12:0] VIDEO_ARY,

	output  [7:0] VGA_R,
	output  [7:0] VGA_G,
	output  [7:0] VGA_B,
	output        VGA_HS,
	output        VGA_VS,
	output        VGA_DE,    // = ~(VBlank | HBlank)
	output        VGA_F1,
	output [1:0]  VGA_SL,
	output        VGA_SCALER, // Force VGA scaler

	input  [11:0] HDMI_WIDTH,
	input  [11:0] HDMI_HEIGHT,
	output        HDMI_FREEZE,

`ifdef MISTER_FB
	// Use framebuffer in DDRAM (USE_FB=1 in qsf)
	// FB_FORMAT:
	//    [2:0] : 011=8bpp(palette) 100=16bpp 101=24bpp 110=32bpp
	//    [3]   : 0=16bits 565 1=16bits 1555
	//    [4]   : 0=RGB  1=BGR (for 16/24/32 modes)
	//
	// FB_STRIDE either 0 (rounded to 256 bytes) or multiple of pixel size (in bytes)
	output        FB_EN,
	output  [4:0] FB_FORMAT,
	output [11:0] FB_WIDTH,
	output [11:0] FB_HEIGHT,
	output [31:0] FB_BASE,
	output [13:0] FB_STRIDE,
	input         FB_VBL,
	input         FB_LL,
	output        FB_FORCE_BLANK,

`ifdef MISTER_FB_PALETTE
	// Palette control for 8bit modes.
	// Ignored for other video modes.
	output        FB_PAL_CLK,
	output  [7:0] FB_PAL_ADDR,
	output [23:0] FB_PAL_DOUT,
	input  [23:0] FB_PAL_DIN,
	output        FB_PAL_WR,
`endif
`endif

	output        LED_USER,  // 1 - ON, 0 - OFF.

	// b[1]: 0 - LED status is system status OR'd with b[0]
	//       1 - LED status is controled solely by b[0]
	// hint: supply 2'b00 to let the system control the LED.
	output  [1:0] LED_POWER,
	output  [1:0] LED_DISK,

	// I/O board button press simulation (active high)
	// b[1]: user button
	// b[0]: osd button
	output  [1:0] BUTTONS,

	input         CLK_AUDIO, // 24.576 MHz
	output [15:0] AUDIO_L,
	output [15:0] AUDIO_R,
	output        AUDIO_S,   // 1 - signed audio samples, 0 - unsigned
	output  [1:0] AUDIO_MIX, // 0 - no mix, 1 - 25%, 2 - 50%, 3 - 100% (mono)

	//ADC
	inout   [3:0] ADC_BUS,

	//SD-SPI
	output        SD_SCK,
	output        SD_MOSI,
	input         SD_MISO,
	output        SD_CS,
	input         SD_CD,

	//High latency DDR3 RAM interface
	//Use for non-critical time purposes
	output        DDRAM_CLK,
	input         DDRAM_BUSY,
	output  [7:0] DDRAM_BURSTCNT,
	output [28:0] DDRAM_ADDR,
	input  [63:0] DDRAM_DOUT,
	input         DDRAM_DOUT_READY,
	output        DDRAM_RD,
	output [63:0] DDRAM_DIN,
	output  [7:0] DDRAM_BE,
	output        DDRAM_WE,

	//SDRAM interface with lower latency
	output        SDRAM_CLK,
	output        SDRAM_CKE,
	output [12:0] SDRAM_A,
	output  [1:0] SDRAM_BA,
	inout  [15:0] SDRAM_DQ,
	output        SDRAM_DQML,
	output        SDRAM_DQMH,
	output        SDRAM_nCS,
	output        SDRAM_nCAS,
	output        SDRAM_nRAS,
	output        SDRAM_nWE,

`ifdef MISTER_DUAL_SDRAM
	//Secondary SDRAM
	//Set all output SDRAM_* signals to Z ASAP if SDRAM2_EN is 0
	input         SDRAM2_EN,
	output        SDRAM2_CLK,
	output [12:0] SDRAM2_A,
	output  [1:0] SDRAM2_BA,
	inout  [15:0] SDRAM2_DQ,
	output        SDRAM2_nCS,
	output        SDRAM2_nCAS,
	output        SDRAM2_nRAS,
	output        SDRAM2_nWE,
`endif

	input         UART_CTS,
	output        UART_RTS,
	input         UART_RXD,
	output        UART_TXD,
	output        UART_DTR,
	input         UART_DSR,

	// Open-drain User port.
	// 0 - D+/RX
	// 1 - D-/TX
	// 2..6 - USR2..USR6
	// Set USER_OUT to 1 to read from USER_IN.
	input   [6:0] USER_IN,
	output  [6:0] USER_OUT,

	input         OSD_STATUS
);

///////// Default values for ports not used in this core /////////

assign ADC_BUS  = 'Z;
assign USER_OUT = '1;
assign {UART_RTS, UART_TXD, UART_DTR} = 0;
assign {SD_SCK, SD_MOSI, SD_CS} = 'Z;
assign {SDRAM_DQ, SDRAM_A, SDRAM_BA, SDRAM_CLK, SDRAM_CKE, SDRAM_DQML, SDRAM_DQMH, SDRAM_nWE, SDRAM_nCAS, SDRAM_nRAS, SDRAM_nCS} = 'Z;
assign {DDRAM_CLK, DDRAM_BURSTCNT, DDRAM_ADDR, DDRAM_DIN, DDRAM_BE, DDRAM_RD, DDRAM_WE} = '0;  

assign VGA_SL = 0;
assign VGA_F1 = 0;
assign VGA_SCALER = 0;
assign HDMI_FREEZE = 0;

assign AUDIO_S = 0;
assign AUDIO_L = 0;
assign AUDIO_R = 0;
assign AUDIO_MIX = 0;

assign LED_DISK = 0;
assign LED_POWER = 0;
assign BUTTONS = 0;

//////////////////////////////////////////////////////////////////

wire [1:0] ar = status[9:8];

assign VIDEO_ARX = (!ar) ? 12'd4 : (ar - 1'd1);
assign VIDEO_ARY = (!ar) ? 12'd3 : 12'd0;




`include "build_id.v" 
localparam CONF_STR = {
	"LASER500;;",
	"-;",
	"O89,Aspect ratio,Original,Full Screen,[ARC1],[ARC2];",
	"O2,Custom charset ROM,Off,On;",
	"F1,PRG,Load Program;",

	"-;",
	"R0,Reset;",
	"V,v",`BUILD_DATE 
};

wire forced_scandoubler;
wire  [1:0] buttons;
wire [31:0] status;
wire [10:0] ps2_key;


wire        ioctl_download;
wire  [7:0] ioctl_index;
wire        ioctl_wr;
wire [24:0] ioctl_addr;
wire  [7:0] ioctl_data;

wire [31:0] joystick_0, joystick_1;
wire st_alt_font = status[2];

hps_io #(.CONF_STR(CONF_STR),.PS2DIV(1000)) hps_io
(
	.clk_sys(clk_sys),
	.HPS_BUS(HPS_BUS),
	.EXT_BUS(),
	.gamma_bus(),

	.forced_scandoubler(forced_scandoubler),

	.ioctl_download(ioctl_download),
	.ioctl_wr(ioctl_wr),
	.ioctl_addr(ioctl_addr),
	.ioctl_dout(ioctl_data),
	.ioctl_index(ioctl_index),
	
	.joystick_0(joystick_0),
	.joystick_1(joystick_1),
	 
	
	.buttons(buttons),
	.status(status),
	.status_menumask({status[5]}),
	
	.ps2_key(ps2_key),
	
	
	.ps2_kbd_clk_out    ( ps2_kbd_clk    ),
	.ps2_kbd_data_out   ( ps2_kbd_data   )
	
);

///////////////////////   CLOCKS   ///////////////////////////////

wire clk_sys = F14M;
wire F14Mx2, F14M,F3M;
pll pll
(
	.refclk(CLK_50M),
	.locked(pll_locked),
	.rst(0),
	.outclk_0(SDRAM_CLK),
	.outclk_1(F14Mx2),
	.outclk_2(F14M),
	.outclk_3(F3M)
);

wire reset = RESET | status[0] | buttons[1];
//////////////////////////////////////////////////////////////////

wire [1:0] col = status[4:3];

wire HBlank;
wire video_hs;
wire VBlank;
wire video_vs;
wire ce_pix;
wire [7:0] video;



assign CLK_VIDEO = clk_sys;
assign CE_PIXEL = 1'b1;

assign VGA_DE = display_enable;
assign VGA_HS = video_hs;
assign VGA_VS = video_vs;
assign VGA_R  = { video_r[5:4] , video_r};
assign VGA_G  = { video_g[5:4] , video_g};
assign VGA_B  = { video_b[5:4] , video_b};




reg  [26:0] act_cnt;
always @(posedge clk_sys) act_cnt <= act_cnt + 1'd1; 
assign LED_USER    = act_cnt[26]  ? act_cnt[25:18]  > act_cnt[7:0]  : act_cnt[25:18]  <= act_cnt[7:0];



/******************************************************************************************/
/******************************************************************************************/
/***************************************** @keyboard **************************************/
/******************************************************************************************/
/******************************************************************************************/
		 
wire ps2_kbd_clk;
wire ps2_kbd_data;

wire [ 6:0] KD;
wire        reset_key;

keyboard keyboard 
(
	.reset    ( !pll_locked ),
	.clk      ( F14M  ),

	.ps2_clk  ( ps2_kbd_clk  ),
	.ps2_data ( ps2_kbd_data ),
	
	.address  ( cpu_addr  ),
	.KD       ( KD        ),
	.reset_key( reset_key )	
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


// this was taken from https://github.com/sorgelig/Amstrad_MiST by sorgelig

t80pa cpu
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


/******************************************************************************************/
/******************************************************************************************/
/***************************************** @vdc *******************************************/
/******************************************************************************************/
/******************************************************************************************/

//
// VTL CHIP GA1
//
					
wire [5:0] video_r;
wire [5:0] video_g; 
wire [5:0] video_b;
wire display_enable;

wire [24:0] vdc_sdram_addr; 
wire        vdc_sdram_wr;
wire        vdc_sdram_rd;
wire  [7:0] vdc_sdram_din;
		  
// VTL custom chip
VTL_chip VTL_chip 
(	
	.F14M   ( F14M        ),
	.RESET  ( ~pll_locked ),
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
	.display_enable(display_enable),
	
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

wire [2:0] hcnt;

/******************************************************************************************/
/******************************************************************************************/
/***************************************** @pll *******************************************/
/******************************************************************************************/
/******************************************************************************************/

// F14M is the main 14MHz clock
// ram_clock is faster clock for the SDRAM chip, 1 complete read/write cycle in two F14M cyles
// pll_locked flags PLL is locked

wire pll_locked;
/*
wire F14Mx2;

pll pll (
	 .inclk0 ( CLOCK_27[0]   ),
	 .locked ( pll_locked    ),        // PLL is running stable
	 .c0     ( F14M          ),        // video generator clock frequency 14.77873 MHz
	 .c1     ( SDRAM_CLK     ),        // F14M x 8, phase shifted 	 
	 .c2     ( F3M           ),        // F14M / 4 
    .c3     ( F14Mx2        ),        // F14M x 2 for the scandoubler 
	 .c4     ( ram_clock     )         // F14M x 8, phase shifted 	 
);
*/
//
// F14M = 14778730 on real hardware with 6 clocks cycles skip every 944 ~= 14.698 
// F14M = 14700000 on the MiST almost close to the original 
//
localparam F14M_HZ = 14700000;

wire debug = 0;

// debug keyboard on the LED
always @(posedge F14M) begin
	LED_ON <= debug;
end

/******************************************************************************************/
/******************************************************************************************/
/***************************************** @ena *******************************************/
/******************************************************************************************/
/******************************************************************************************/


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
	.clk      ( F14M         ),
	.ena      ( 1           ),
	.trigger  ( reset    ),	
	.erasing  ( eraser_busy ),
	.wr       ( eraser_wr   ),
	.addr     ( eraser_addr ),
	.data     ( eraser_data )
);


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


// AJS TODO -- see downloader.sv -- we need to write
// the basic address into RAM after we load the PRG file


always @(*) begin
	if(ioctl_download && ioctl_wr && ioctl_index==0) begin
		sdram_din    = ioctl_data;
		sdram_addr   = ioctl_addr;
		sdram_wr     = ioctl_wr;
		sdram_rd     = 1'b1;
		sdram_clkref = F14M;
	end	
	else if(ioctl_download && ioctl_wr && ioctl_index==1) begin
		sdram_din    = ioctl_data;
		sdram_addr   = ioctl_addr + 'h8995;
		sdram_wr     = ioctl_wr;
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


assign WAIT = 0; 

wire CPU_RESET =   ioctl_download | eraser_busy | reset;
wire BLANK     =   ioctl_download | eraser_busy;
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

reg [7:0]data_out_one;

always @(posedge F14M) begin
	data_out_one <= sdram_dout;
end


dpram #(.addr_width_g(18),.data_width_g(8)) dpram
(
	.address_a(sdram_addr[17:0]),
	.clock_a(F14M),
	.data_a(sdram_din),
	.q_a(sdram_dout),
	.wren_a(sdram_wr),
	.enable_a(sdram_rd),
	
	.address_b(sdram_addr[17:0]),
	.clock_b(F14M)
	
	
);


/******************************************************************************************/
/******************************************************************************************/
/***************************************** @audio *****************************************/
/******************************************************************************************/
/******************************************************************************************/
// latches cassette input
/*
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
dac #(.C_bits(16)) dac_AUDIO_L
(
	.clk_i(F14M),
   .res_n_i(pll_locked),	
	.dac_i({ BUZZER ^ CASIN ^ (~CASOUT), 15'b0000000 }),
	.dac_o(audio)
);

always @(posedge F14M) begin
	AUDIO_L <= audio;
	AUDIO_R <= audio;
end

*/

endmodule
