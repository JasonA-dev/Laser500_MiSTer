/*============================================================================
	Generic dual-port RAM module

	Copyright (C) 2022 - Jim Gregory - https://github.com/JimmyStones/

	This program is free software; you can redistribute it and/or modify it
	under the terms of the GNU General Public License as published by the Free
	Software Foundation; either version 3 of the License, or (at your option)
	any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License along
	with this program. If not, see <http://www.gnu.org/licenses/>.
===========================================================================*/

`timescale 1ns / 1ns

module dpram #(
	parameter address_width = 10,
	parameter data_width = 8,
	parameter init_file= ""
) (
	input	wire						clock_a,
	input	wire						enable_a,
	input	wire						wren_a,
	input	wire	[address_width-1:0]	address_a,
	input	wire	[data_width-1:0]	data_a,
	output	reg		[data_width-1:0]	q_a,

	input	wire						clock_b,
	input	wire						enable_b,
	input	wire						wren_b,
	input	wire	[address_width-1:0]	address_b,
	input	wire	[data_width-1:0]	data_b,
	output	reg		[data_width-1:0]	q_b
);

	localparam ramLength = (2**address_width);
	reg [data_width-1:0] mem [ramLength-1:0];

	initial begin
		if (init_file>0) $readmemh(init_file, mem);
	end

	always @(posedge clock_a) begin
		if(enable_a)
		begin
			q_a <= mem[address_a];
			if(wren_a) begin
				//$display("a. Writing %h to %h", data_a, address_a);
				q_a <= data_a;
				mem[address_a] <= data_a;
			end
		end
	end

	always @(posedge clock_b) begin
		if(enable_b)
		begin
			q_b <= mem[address_b];
			if(wren_b) begin
				q_b <= data_b;
				mem[address_b] <= data_b;
			end
		end
	end

endmodule