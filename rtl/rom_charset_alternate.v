`timescale 1ns / 1ps

//-------------------------------------------------------------------------------------------------
module rom_charset_alternate
//-------------------------------------------------------------------------------------------------
#
(
	parameter DW = 8,
	parameter AW = 13,
	parameter FN = "../hex/charset64new.hex"
)
(
	input  wire         clock,
	input  wire         ce,
	output reg [DW-1:0] q,
	input  wire[AW-1:0] address
);
//-------------------------------------------------------------------------------------------------

reg[DW-1:0] d[(2**AW)-1:0];
initial $readmemh(FN, d, 0);

always @(posedge clock) q <= d[address];

//-------------------------------------------------------------------------------------------------
endmodule
//-------------------------------------------------------------------------------------------------
