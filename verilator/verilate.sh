verilator \
-cc -exe --public --trace --savable \
--compiler msvc +define+SIMULATION=1 \
-O3 --x-assign fast --x-initial fast --noassert \
--converge-limit 6000 \
-Wno-fatal \
--top-module top sim.v \
	../rtl/laser500.sv \
	../rtl/downloader.sv \
	../rtl/dpram.sv \
	../rtl/VTL_chip.sv \
	../rtl/eraser.v \
	../rtl/keyboard.v \
	../rtl/rom_charset_alternate.v \
	../rtl/rom_charset.v \
	../rtl/tv80/tv80s.v \
	../rtl/tv80/tv80_core.v \
	../rtl/tv80/tv80_alu.v \
	../rtl/tv80/tv80_reg.v \
	../rtl/tv80/tv80_mcode.v \
	../rtl/sdram.v
