verilator \
-cc -exe --public --trace --savable \
--compiler msvc +define+SIMULATION=1 \
-O3 --x-assign fast --x-initial fast --noassert \
--converge-limit 6000 \
-Wno-fatal \
--top-module top sim.v \
	../rtl/laser500.sv \
	../rtl/downloader.sv \
	../rtl/dpram.v \
	../rtl/eraser.v \
	../rtl/rom_charset_alternate_bb.v \
	../rtl/rom_charset_alternate.v \
	../rtl/rom_charset.v \
	../rtl/sdram.v \	
	../rtl/VTL_chip.v		
