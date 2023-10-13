//-------------------------------------------------------------------------------------------------
module dpram
//-------------------------------------------------------------------------------------------------
#
(
	parameter data_width_g = 8,
	parameter addr_width_g = 14
)
(
	input  wire         clock_a,
	input  wire         clock_b,

	input  wire         enable_a,
	input  wire         wren_a,	
	input  wire[   7:0] data_a,	
	output reg [   7:0] q_a,
	input  wire[addr_width_g-1:0] address_a,

	input  wire         enable_b,
	input  wire         wren_b,
	input  wire[   7:0] data_b,
	output reg [   7:0] q_b,
	input  wire[addr_width_g-1:0] address_b
);
//-------------------------------------------------------------------------------------------------

reg[7:0] d[(2**addr_width_g)-1:0];

always @(posedge clock_a) if(enable_a) if(wren_a) d[address_a] <= data_a; else q_a <= d[address_a];
always @(posedge clock_a) if(enable_b) if(wren_b) d[address_b] <= data_b; else q_b <= d[address_b];

/*
always @(posedge clock) begin
    do1      <= d[a1];
    if(we1) begin
        do1   <= di1;
        d[a1] <= di1;
    end
end

// Port B
always @(posedge clock) begin
    do2      <= d[a2];
    if(we2) begin
        do2   <= di2;
        d[a2] <= di2;
    end
end
*/

//-------------------------------------------------------------------------------------------------
endmodule
//-------------------------------------------------------------------------------------------------
