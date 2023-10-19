`timescale 1ns/1ns
// top end ff for verilator

module top(

   input clk_48 /*verilator public_flat*/,
   input clk_12 /*verilator public_flat*/,
   input reset/*verilator public_flat*/,
   input [11:0]  inputs/*verilator public_flat*/,

   output [7:0] VGA_R/*verilator public_flat*/,
   output [7:0] VGA_G/*verilator public_flat*/,
   output [7:0] VGA_B/*verilator public_flat*/,
   
   output VGA_HS,
   output VGA_VS,
   output VGA_HB,
   output VGA_VB,

   output [15:0] AUDIO_L,
   output [15:0] AUDIO_R,
   
   input [10:0] ps2_key,

   input        ioctl_download,
   input        ioctl_upload,
   input        ioctl_wr,
   input [24:0] ioctl_addr,
   input [7:0]  ioctl_dout,
   input [7:0]  ioctl_din,   
   input [7:0]  ioctl_index,
   output  reg  ioctl_wait=1'b0
   
);
   
   // Core inputs/outputs
   wire       pause;
   wire [7:0] audio;
   wire [8:0] rgb;
   wire [3:0] led/*verilator public_flat*/;
   reg [7:0]  trakball/*verilator public_flat*/;
   reg [7:0]  joystick/*verilator public_flat*/;
   reg [9:0]  playerinput/*verilator public_flat*/;  

wire [5:0] video_r;
wire [5:0] video_g; 
wire [5:0] video_b;
wire display_enable;

   assign VGA_DE = ~display_enable;
   assign VGA_HS = video_hs;
   assign VGA_VS = video_vs;
   assign VGA_R  = { video_r[5:4] , video_r};
   assign VGA_G  = { video_g[5:4] , video_g};
   assign VGA_B  = { video_b[5:4] , video_b};

   // MAP OUTPUTS
   assign AUDIO_L = {audio,audio};
   assign AUDIO_R = AUDIO_L;

   reg ce_pix;
   always @(posedge clk_48) begin
      reg old_clk;
      
      old_clk <= clk_12;
      ce_pix <= old_clk & ~clk_12;
   end


laser500 laser500 (
    .clk(clk_48),
    .reset(reset),

	// video
	.hsync  ( video_hs ),
	.vsync  ( video_vs ),
	.r      ( video_r  ),
	.g      ( video_g  ),
	.b      ( video_b  ),
	.display_enable(display_enable),
	
   .KD     (ps2_key[6:0]),

	.ioctl_download(ioctl_download),
	.ioctl_wr(ioctl_wr),
	.ioctl_addr(ioctl_addr),
	.ioctl_data(ioctl_dout),
	.ioctl_index(ioctl_index)
);
   
endmodule
