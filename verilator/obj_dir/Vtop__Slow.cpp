// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__Mode(0U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__T2Write(1U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__IOWait(1U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Mode(0U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IOWait(1U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Flag_C(0U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Flag_N(1U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Flag_P(2U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Flag_X(3U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Flag_H(4U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Flag_Y(5U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Flag_Z(6U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Flag_S(7U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__aNone(7U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__aBC(0U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__aDE(1U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__aXY(2U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__aIOA(4U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__aSP(5U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__aZI(6U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Mode(0U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_C(0U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_N(1U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_P(2U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_X(3U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_H(4U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Y(5U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Z(6U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_S(7U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__aNone(7U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__aBC(0U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__aDE(1U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__aXY(2U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__aIOA(4U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__aSP(5U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__aZI(6U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Mode(0U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_C(0U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_N(1U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_P(2U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_X(3U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_H(4U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Y(5U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Z(6U);
const IData Vtop::var_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_S(7U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__HEIGHT(0xc0U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__TOP_BORDER_WIDTH(0x41U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__BOTTOM_BORDER_WIDTH(0x37U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__V(0x139U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__WIDTH(0x280U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__LEFT_BORDER_WIDTH(0x48U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__RIGHT_BORDER_WIDTH(0x56U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__H(0x31eU);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__col0(0U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__col1(0xfU);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__col2(0x80U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__col3(0x8fU);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__col4(0xa00U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__col5(0xf0fU);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__col6(0x780U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__col7(0x999U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__col8(0x555U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__col9(0x88fU);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__cola(0xf0U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__colb(0x4ffU);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__colc(0xf45U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__cold(0xf9fU);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__cole(0xcf0U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__colf(0xfffU);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__address_width(0xdU);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__data_width(8U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__ramLength(0x2000U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__address_width(0xdU);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__data_width(8U);
const IData Vtop::var_top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__ramLength(0x2000U);
const IData Vtop::var_top__DOT__laser500__DOT__eraser__DOT__START_RAM(0xc000U);
const IData Vtop::var_top__DOT__laser500__DOT__eraser__DOT__END_RAM(0x20000U);
const IData Vtop::var_top__DOT__laser500__DOT__dpram__DOT__address_width(0x12U);
const IData Vtop::var_top__DOT__laser500__DOT__dpram__DOT__data_width(8U);
const IData Vtop::var_top__DOT__laser500__DOT__dpram__DOT__init_file(0U);
const IData Vtop::var_top__DOT__laser500__DOT__dpram__DOT__ramLength(0x40000U);

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(_vcontextp__, this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-9);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

// Savable
void Vtop::__Vserialize(VerilatedSerialize& os) {
    vluint64_t __Vcheckval = 0x62cb0d269a178bfULL;
    os << __Vcheckval;
    os << __VlSymsp->_vm_contextp__;
    os<<clk_48;
    os<<clk_12;
    os<<reset;
    os<<inputs;
    os<<VGA_R;
    os<<VGA_G;
    os<<VGA_B;
    os<<VGA_HS;
    os<<VGA_VS;
    os<<VGA_HB;
    os<<VGA_VB;
    os<<AUDIO_L;
    os<<AUDIO_R;
    os<<ioctl_download;
    os<<ioctl_upload;
    os<<ioctl_wr;
    os<<ioctl_addr;
    os<<ioctl_dout;
    os<<ioctl_din;
    os<<ioctl_index;
    os<<ioctl_wait;
    os<<top__DOT__clk_48;
    os<<top__DOT__clk_12;
    os<<top__DOT__reset;
    os<<top__DOT__inputs;
    os<<top__DOT__VGA_R;
    os<<top__DOT__VGA_G;
    os<<top__DOT__VGA_B;
    os<<top__DOT__VGA_HS;
    os<<top__DOT__VGA_VS;
    os<<top__DOT__VGA_HB;
    os<<top__DOT__VGA_VB;
    os<<top__DOT__AUDIO_L;
    os<<top__DOT__AUDIO_R;
    os<<top__DOT__ioctl_download;
    os<<top__DOT__ioctl_upload;
    os<<top__DOT__ioctl_wr;
    os<<top__DOT__ioctl_addr;
    os<<top__DOT__ioctl_dout;
    os<<top__DOT__ioctl_din;
    os<<top__DOT__ioctl_index;
    os<<top__DOT__ioctl_wait;
    os<<top__DOT__pause;
    os<<top__DOT__audio;
    os<<top__DOT__rgb;
    os<<top__DOT__led;
    os<<top__DOT__trakball;
    os<<top__DOT__joystick;
    os<<top__DOT__playerinput;
    os<<top__DOT__video_r;
    os<<top__DOT__video_g;
    os<<top__DOT__video_b;
    os<<top__DOT__display_enable;
    os<<top__DOT__ce_pix;
    os<<top__DOT__VGA_DE;
    os<<top__DOT__video_hs;
    os<<top__DOT__video_vs;
    os<<top__DOT__unnamedblk1__DOT__old_clk;
    os<<top__DOT__laser500__DOT__clk;
    os<<top__DOT__laser500__DOT__reset;
    os<<top__DOT__laser500__DOT__pll_locked;
    os<<top__DOT__laser500__DOT__hsync;
    os<<top__DOT__laser500__DOT__vsync;
    os<<top__DOT__laser500__DOT__r;
    os<<top__DOT__laser500__DOT__g;
    os<<top__DOT__laser500__DOT__b;
    os<<top__DOT__laser500__DOT__display_enable;
    os<<top__DOT__laser500__DOT__joystick_0;
    os<<top__DOT__laser500__DOT__joystick_1;
    os<<top__DOT__laser500__DOT__ioctl_download;
    os<<top__DOT__laser500__DOT__ioctl_wr;
    os<<top__DOT__laser500__DOT__ioctl_addr;
    os<<top__DOT__laser500__DOT__ioctl_data;
    os<<top__DOT__laser500__DOT__ioctl_index;
    os<<top__DOT__laser500__DOT__CPUCK;
    os<<top__DOT__laser500__DOT__CPUENA;
    os<<top__DOT__laser500__DOT__WAIT;
    os<<top__DOT__laser500__DOT__cpu_addr;
    os<<top__DOT__laser500__DOT__cpu_din;
    os<<top__DOT__laser500__DOT__cpu_dout;
    os<<top__DOT__laser500__DOT__cpu_rd_n;
    os<<top__DOT__laser500__DOT__cpu_wr_n;
    os<<top__DOT__laser500__DOT__cpu_mreq_n;
    os<<top__DOT__laser500__DOT__cpu_m1_n;
    os<<top__DOT__laser500__DOT__cpu_iorq_n;
    os<<top__DOT__laser500__DOT____Vcellinp__cpu__reset_n;
    os<<top__DOT__laser500__DOT__sdram_clkref;
    os<<top__DOT__laser500__DOT__sdram_addr;
    os<<top__DOT__laser500__DOT__sdram_wr;
    os<<top__DOT__laser500__DOT__sdram_rd;
    os<<top__DOT__laser500__DOT__sdram_dout;
    os<<top__DOT__laser500__DOT__sdram_din;
    os<<top__DOT__laser500__DOT__vdc_sdram_addr;
    os<<top__DOT__laser500__DOT__vdc_sdram_wr;
    os<<top__DOT__laser500__DOT__vdc_sdram_rd;
    os<<top__DOT__laser500__DOT__vdc_sdram_din;
    os<<top__DOT__laser500__DOT__eraser_busy;
    os<<top__DOT__laser500__DOT__eraser_wr;
    os<<top__DOT__laser500__DOT__eraser_addr;
    os<<top__DOT__laser500__DOT__eraser_data;
    os<<top__DOT__laser500__DOT__CPU_RESET;
    os<<top__DOT__laser500__DOT__BLANK;
    os<<top__DOT__laser500__DOT__data_out_one;
    os<<top__DOT__laser500__DOT__video_vs;
    os<<top__DOT__laser500__DOT__KD;
    os<<top__DOT__laser500__DOT__BUZZER;
    os<<top__DOT__laser500__DOT__CASOUT;
    os<<top__DOT__laser500__DOT__CASIN;
    os<<top__DOT__laser500__DOT__st_alt_font;
    os<<top__DOT__laser500__DOT__hcnt;
    os<<top__DOT__laser500__DOT__img_mounted;
    os<<top__DOT__laser500__DOT__img_size;
    os<<top__DOT__laser500__DOT__cpu__DOT__reset_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__clk;
    os<<top__DOT__laser500__DOT__cpu__DOT__cen;
    os<<top__DOT__laser500__DOT__cpu__DOT__wait_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__int_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__nmi_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__busrq_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__m1_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__mreq_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__iorq_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__rd_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__wr_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__rfsh_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__halt_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__busak_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__A;
    os<<top__DOT__laser500__DOT__cpu__DOT__di;
    os<<top__DOT__laser500__DOT__cpu__DOT__dout;
    os<<top__DOT__laser500__DOT__cpu__DOT__intcycle_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__no_read;
    os<<top__DOT__laser500__DOT__cpu__DOT__write;
    os<<top__DOT__laser500__DOT__cpu__DOT__iorq;
    os<<top__DOT__laser500__DOT__cpu__DOT__di_reg;
    os<<top__DOT__laser500__DOT__cpu__DOT__mcycle;
    os<<top__DOT__laser500__DOT__cpu__DOT__tstate;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__reset_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__clk;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__cen;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__wait_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__int_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__nmi_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__busrq_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__m1_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__no_read;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__write;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__rfsh_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__halt_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__busak_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__A;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__dinst;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__di;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__dout;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mc;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ts;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__intcycle_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntE;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__stop;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ir_changed;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__flag_z;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Ap;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Fp;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SP;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PC;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA_r;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB_r;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Alternate;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA_r;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ID16;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__tstate;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusAck;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__INT_s;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IStatus;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__T_Res;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__XY_State;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusB;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusA;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F_Out;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC_r;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycles;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__tstates;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Prefix;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Arith16;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__JumpE;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Call;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RstP;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRS;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_CCF;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_SCF;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_BT;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_BC;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SetDI;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SetEI;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IMode;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Halt;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PC16;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PC16_B;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SP16;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SP16_A;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SP16_B;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ID16_B;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Oldnmi_n;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IR;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__F;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpXY;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Call;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDSPHL;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Special_LD;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CPL;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CCF;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_SCF;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Write;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Z16;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__IR;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ISet;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusA;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusB;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__F_In;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIH;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIL;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__clk;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__CEN;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__WEH;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__WEL;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vi0];
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vi0];
    }
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__B;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__BP;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__C;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__CP;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__D;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DP;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__E;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__EP;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__H;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__HP;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__L;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__LP;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__IX;
    os<<top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__IY;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__F14M;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__RESET;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__BLANK;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__CPUCK;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__CPUENA;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__WAIT_n;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__MREQ_n;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__IORQ_n;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__RD_n;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__WR_n;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__A;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__DO;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__DI;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__KD;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__CASIN;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__joystick_0;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__joystick_1;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__sdram_addr;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__sdram_dout;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__sdram_din;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__sdram_wr;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__sdram_rd;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__hsync;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__vsync;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__r;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__g;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__b;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__non_visible_area;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__BUZZER;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__CASOUT;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__alt_font;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__cnt;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__img_mounted;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__img_size;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__hfp;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__hsw;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__hbp;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__hcnt;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__vcnt;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__xcnt;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__xcnt1;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__xcnt2;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__xcnt3;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__ycnt;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__char;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__fgbg;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__ramData;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__ramDataD;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__ramAddress;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__ramQ;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__pixel;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__vdc_graphic_mode_number;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__vdc_text80_enabled;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__vdc_text80_foreground;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__vdc_text80_background;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__vdc_border_color;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__vdc_page_7;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__caps_lock_bit;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__vdc_graphic_mode_enabled;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__charsetAddress;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__charsetQ;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__charsetQ_alt;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__charsetQ_std;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__fg;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__bg;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__VDC_cnt;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__CPU_cnt;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__MREQ;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__WR;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__RD;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__IORQ;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__MREQ_old;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__skip_beat;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        os<<top__DOT__laser500__DOT__VTL_chip__DOT__banks[__Vi0];
    }
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__bank;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__bank_bits;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__base_addr;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__bank_is_ram;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__mapped_io;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__videoAddress;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__cpuReadAddress;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__clock_a;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__enable_a;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__wren_a;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__address_a;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__data_a;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__q_a;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__clock_b;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__enable_b;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__wren_b;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__address_b;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__data_b;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__q_b;
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__mem[__Vi0];
    }
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__clock_a;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__enable_a;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__wren_a;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__address_a;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__data_a;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__q_a;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__clock_b;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__enable_b;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__wren_b;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__address_b;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__data_b;
    os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__q_b;
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        os<<top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__mem[__Vi0];
    }
    os<<top__DOT__laser500__DOT__eraser__DOT__clk;
    os<<top__DOT__laser500__DOT__eraser__DOT__ena;
    os<<top__DOT__laser500__DOT__eraser__DOT__trigger;
    os<<top__DOT__laser500__DOT__eraser__DOT__erasing;
    os<<top__DOT__laser500__DOT__eraser__DOT__wr;
    os<<top__DOT__laser500__DOT__eraser__DOT__addr;
    os<<top__DOT__laser500__DOT__eraser__DOT__data;
    os<<top__DOT__laser500__DOT__eraser__DOT__pos;
    os<<top__DOT__laser500__DOT__dpram__DOT__clock_a;
    os<<top__DOT__laser500__DOT__dpram__DOT__enable_a;
    os<<top__DOT__laser500__DOT__dpram__DOT__wren_a;
    os<<top__DOT__laser500__DOT__dpram__DOT__address_a;
    os<<top__DOT__laser500__DOT__dpram__DOT__data_a;
    os<<top__DOT__laser500__DOT__dpram__DOT__q_a;
    os<<top__DOT__laser500__DOT__dpram__DOT__clock_b;
    os<<top__DOT__laser500__DOT__dpram__DOT__enable_b;
    os<<top__DOT__laser500__DOT__dpram__DOT__wren_b;
    os<<top__DOT__laser500__DOT__dpram__DOT__address_b;
    os<<top__DOT__laser500__DOT__dpram__DOT__data_b;
    os<<top__DOT__laser500__DOT__dpram__DOT__q_b;
    for (int __Vi0=0; __Vi0<262144; ++__Vi0) {
        os<<top__DOT__laser500__DOT__dpram__DOT__mem[__Vi0];
    }
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub;
    os<<__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In;
    os<<__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__hcnt;
    os<<__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__vcnt;
    os<<__Vdlyvset__top__DOT__laser500__DOT__VTL_chip__DOT__banks__v0;
    os<<__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__vdc_graphic_mode_enabled;
    os<<__Vdly__top__DOT__laser500__DOT__cpu_din;
    os<<__Vdlyvset__top__DOT__laser500__DOT__VTL_chip__DOT__banks__v1;
    os<<__Vdlyvset__top__DOT__laser500__DOT__VTL_chip__DOT__banks__v2;
    os<<__Vdlyvset__top__DOT__laser500__DOT__VTL_chip__DOT__banks__v3;
    os<<__Vdlyvset__top__DOT__laser500__DOT__VTL_chip__DOT__banks__v4;
    os<<__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__vdc_text80_enabled;
    os<<__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__vdc_border_color;
    os<<__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__vdc_graphic_mode_number;
    os<<__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__hsw;
    os<<__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__hbp;
    os<<__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__char;
    os<<__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__ramDataD;
    os<<__Vdlyvdim0__top__DOT__laser500__DOT__dpram__DOT__mem__v0;
    os<<__Vdlyvval__top__DOT__laser500__DOT__dpram__DOT__mem__v0;
    os<<__Vdlyvset__top__DOT__laser500__DOT__dpram__DOT__mem__v0;
    os<<__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r;
    os<<__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PC;
    os<<__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__XY_State;
    os<<__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR;
    os<<__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr;
    os<<__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
    os<<__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F;
    os<<__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SP;
    os<<__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    os<<__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2;
    os<<__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF;
    os<<__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__tstate;
    os<<__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    os<<__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle;
    os<<__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle;
    os<<__Vdlyvdim0__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__mem__v0;
    os<<__Vdlyvval__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__mem__v0;
    os<<__Vdlyvset__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__mem__v0;
    os<<__Vdlyvdim0__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__mem__v0;
    os<<__Vdlyvval__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__mem__v0;
    os<<__Vdlyvset__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__mem__v0;
    os<<__Vdlyvdim0__top__DOT__laser500__DOT__dpram__DOT__mem__v1;
    os<<__Vdlyvval__top__DOT__laser500__DOT__dpram__DOT__mem__v1;
    os<<__Vdlyvset__top__DOT__laser500__DOT__dpram__DOT__mem__v1;
    os<<__VinpClk__TOP__top__DOT__laser500__DOT____Vcellinp__cpu__reset_n;
    os<<__Vclklast__TOP__top__DOT__laser500__DOT__dpram__DOT__clock_b;
    os<<__Vclklast__TOP__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__clock_b;
    os<<__Vclklast__TOP__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__clock_b;
    os<<__Vclklast__TOP__clk_48;
    os<<__Vclklast__TOP____VinpClk__TOP__top__DOT__laser500__DOT____Vcellinp__cpu__reset_n;
    os<<__Vchglast__TOP__top__DOT__laser500__DOT____Vcellinp__cpu__reset_n;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        os<<__Vm_traceActivity[__Vi0];
    }
    __VlSymsp->__Vserialize(os);
}
void Vtop::__Vdeserialize(VerilatedDeserialize& os) {
    vluint64_t __Vcheckval = 0x62cb0d269a178bfULL;
    os.readAssert(__Vcheckval);
    os >> __VlSymsp->_vm_contextp__;
    os>>clk_48;
    os>>clk_12;
    os>>reset;
    os>>inputs;
    os>>VGA_R;
    os>>VGA_G;
    os>>VGA_B;
    os>>VGA_HS;
    os>>VGA_VS;
    os>>VGA_HB;
    os>>VGA_VB;
    os>>AUDIO_L;
    os>>AUDIO_R;
    os>>ioctl_download;
    os>>ioctl_upload;
    os>>ioctl_wr;
    os>>ioctl_addr;
    os>>ioctl_dout;
    os>>ioctl_din;
    os>>ioctl_index;
    os>>ioctl_wait;
    os>>top__DOT__clk_48;
    os>>top__DOT__clk_12;
    os>>top__DOT__reset;
    os>>top__DOT__inputs;
    os>>top__DOT__VGA_R;
    os>>top__DOT__VGA_G;
    os>>top__DOT__VGA_B;
    os>>top__DOT__VGA_HS;
    os>>top__DOT__VGA_VS;
    os>>top__DOT__VGA_HB;
    os>>top__DOT__VGA_VB;
    os>>top__DOT__AUDIO_L;
    os>>top__DOT__AUDIO_R;
    os>>top__DOT__ioctl_download;
    os>>top__DOT__ioctl_upload;
    os>>top__DOT__ioctl_wr;
    os>>top__DOT__ioctl_addr;
    os>>top__DOT__ioctl_dout;
    os>>top__DOT__ioctl_din;
    os>>top__DOT__ioctl_index;
    os>>top__DOT__ioctl_wait;
    os>>top__DOT__pause;
    os>>top__DOT__audio;
    os>>top__DOT__rgb;
    os>>top__DOT__led;
    os>>top__DOT__trakball;
    os>>top__DOT__joystick;
    os>>top__DOT__playerinput;
    os>>top__DOT__video_r;
    os>>top__DOT__video_g;
    os>>top__DOT__video_b;
    os>>top__DOT__display_enable;
    os>>top__DOT__ce_pix;
    os>>top__DOT__VGA_DE;
    os>>top__DOT__video_hs;
    os>>top__DOT__video_vs;
    os>>top__DOT__unnamedblk1__DOT__old_clk;
    os>>top__DOT__laser500__DOT__clk;
    os>>top__DOT__laser500__DOT__reset;
    os>>top__DOT__laser500__DOT__pll_locked;
    os>>top__DOT__laser500__DOT__hsync;
    os>>top__DOT__laser500__DOT__vsync;
    os>>top__DOT__laser500__DOT__r;
    os>>top__DOT__laser500__DOT__g;
    os>>top__DOT__laser500__DOT__b;
    os>>top__DOT__laser500__DOT__display_enable;
    os>>top__DOT__laser500__DOT__joystick_0;
    os>>top__DOT__laser500__DOT__joystick_1;
    os>>top__DOT__laser500__DOT__ioctl_download;
    os>>top__DOT__laser500__DOT__ioctl_wr;
    os>>top__DOT__laser500__DOT__ioctl_addr;
    os>>top__DOT__laser500__DOT__ioctl_data;
    os>>top__DOT__laser500__DOT__ioctl_index;
    os>>top__DOT__laser500__DOT__CPUCK;
    os>>top__DOT__laser500__DOT__CPUENA;
    os>>top__DOT__laser500__DOT__WAIT;
    os>>top__DOT__laser500__DOT__cpu_addr;
    os>>top__DOT__laser500__DOT__cpu_din;
    os>>top__DOT__laser500__DOT__cpu_dout;
    os>>top__DOT__laser500__DOT__cpu_rd_n;
    os>>top__DOT__laser500__DOT__cpu_wr_n;
    os>>top__DOT__laser500__DOT__cpu_mreq_n;
    os>>top__DOT__laser500__DOT__cpu_m1_n;
    os>>top__DOT__laser500__DOT__cpu_iorq_n;
    os>>top__DOT__laser500__DOT____Vcellinp__cpu__reset_n;
    os>>top__DOT__laser500__DOT__sdram_clkref;
    os>>top__DOT__laser500__DOT__sdram_addr;
    os>>top__DOT__laser500__DOT__sdram_wr;
    os>>top__DOT__laser500__DOT__sdram_rd;
    os>>top__DOT__laser500__DOT__sdram_dout;
    os>>top__DOT__laser500__DOT__sdram_din;
    os>>top__DOT__laser500__DOT__vdc_sdram_addr;
    os>>top__DOT__laser500__DOT__vdc_sdram_wr;
    os>>top__DOT__laser500__DOT__vdc_sdram_rd;
    os>>top__DOT__laser500__DOT__vdc_sdram_din;
    os>>top__DOT__laser500__DOT__eraser_busy;
    os>>top__DOT__laser500__DOT__eraser_wr;
    os>>top__DOT__laser500__DOT__eraser_addr;
    os>>top__DOT__laser500__DOT__eraser_data;
    os>>top__DOT__laser500__DOT__CPU_RESET;
    os>>top__DOT__laser500__DOT__BLANK;
    os>>top__DOT__laser500__DOT__data_out_one;
    os>>top__DOT__laser500__DOT__video_vs;
    os>>top__DOT__laser500__DOT__KD;
    os>>top__DOT__laser500__DOT__BUZZER;
    os>>top__DOT__laser500__DOT__CASOUT;
    os>>top__DOT__laser500__DOT__CASIN;
    os>>top__DOT__laser500__DOT__st_alt_font;
    os>>top__DOT__laser500__DOT__hcnt;
    os>>top__DOT__laser500__DOT__img_mounted;
    os>>top__DOT__laser500__DOT__img_size;
    os>>top__DOT__laser500__DOT__cpu__DOT__reset_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__clk;
    os>>top__DOT__laser500__DOT__cpu__DOT__cen;
    os>>top__DOT__laser500__DOT__cpu__DOT__wait_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__int_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__nmi_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__busrq_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__m1_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__mreq_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__iorq_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__rd_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__wr_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__rfsh_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__halt_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__busak_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__A;
    os>>top__DOT__laser500__DOT__cpu__DOT__di;
    os>>top__DOT__laser500__DOT__cpu__DOT__dout;
    os>>top__DOT__laser500__DOT__cpu__DOT__intcycle_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__no_read;
    os>>top__DOT__laser500__DOT__cpu__DOT__write;
    os>>top__DOT__laser500__DOT__cpu__DOT__iorq;
    os>>top__DOT__laser500__DOT__cpu__DOT__di_reg;
    os>>top__DOT__laser500__DOT__cpu__DOT__mcycle;
    os>>top__DOT__laser500__DOT__cpu__DOT__tstate;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__reset_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__clk;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__cen;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__wait_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__int_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__nmi_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__busrq_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__m1_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__no_read;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__write;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__rfsh_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__halt_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__busak_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__A;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__dinst;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__di;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__dout;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mc;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ts;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__intcycle_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntE;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__stop;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ir_changed;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__flag_z;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Ap;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Fp;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SP;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PC;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA_r;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB_r;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Alternate;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA_r;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ID16;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__tstate;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusAck;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__INT_s;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IStatus;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__T_Res;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__XY_State;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusB;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusA;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F_Out;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC_r;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycles;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__tstates;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Prefix;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Arith16;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__JumpE;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Call;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RstP;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRS;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_CCF;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_SCF;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_BT;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_BC;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SetDI;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SetEI;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IMode;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Halt;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PC16;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PC16_B;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SP16;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SP16_A;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SP16_B;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ID16_B;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Oldnmi_n;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IR;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__F;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpXY;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Call;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDSPHL;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Special_LD;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CPL;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CCF;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_SCF;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Write;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Z16;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__IR;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ISet;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusA;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusB;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__F_In;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIH;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIL;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__clk;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__CEN;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__WEH;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__WEL;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vi0];
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vi0];
    }
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__B;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__BP;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__C;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__CP;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__D;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DP;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__E;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__EP;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__H;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__HP;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__L;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__LP;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__IX;
    os>>top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__IY;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__F14M;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__RESET;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__BLANK;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__CPUCK;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__CPUENA;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__WAIT_n;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__MREQ_n;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__IORQ_n;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__RD_n;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__WR_n;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__A;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__DO;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__DI;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__KD;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__CASIN;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__joystick_0;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__joystick_1;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__sdram_addr;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__sdram_dout;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__sdram_din;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__sdram_wr;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__sdram_rd;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__hsync;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__vsync;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__r;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__g;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__b;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__non_visible_area;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__BUZZER;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__CASOUT;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__alt_font;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__cnt;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__img_mounted;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__img_size;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__hfp;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__hsw;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__hbp;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__hcnt;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__vcnt;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__xcnt;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__xcnt1;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__xcnt2;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__xcnt3;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__ycnt;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__char;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__fgbg;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__ramData;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__ramDataD;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__ramAddress;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__ramQ;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__pixel;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__vdc_graphic_mode_number;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__vdc_text80_enabled;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__vdc_text80_foreground;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__vdc_text80_background;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__vdc_border_color;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__vdc_page_7;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__caps_lock_bit;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__vdc_graphic_mode_enabled;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__charsetAddress;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__charsetQ;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__charsetQ_alt;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__charsetQ_std;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__fg;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__bg;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__VDC_cnt;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__CPU_cnt;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__MREQ;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__WR;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__RD;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__IORQ;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__MREQ_old;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__skip_beat;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        os>>top__DOT__laser500__DOT__VTL_chip__DOT__banks[__Vi0];
    }
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__bank;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__bank_bits;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__base_addr;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__bank_is_ram;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__mapped_io;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__videoAddress;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__cpuReadAddress;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__clock_a;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__enable_a;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__wren_a;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__address_a;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__data_a;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__q_a;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__clock_b;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__enable_b;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__wren_b;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__address_b;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__data_b;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__q_b;
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__mem[__Vi0];
    }
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__clock_a;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__enable_a;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__wren_a;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__address_a;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__data_a;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__q_a;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__clock_b;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__enable_b;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__wren_b;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__address_b;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__data_b;
    os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__q_b;
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        os>>top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__mem[__Vi0];
    }
    os>>top__DOT__laser500__DOT__eraser__DOT__clk;
    os>>top__DOT__laser500__DOT__eraser__DOT__ena;
    os>>top__DOT__laser500__DOT__eraser__DOT__trigger;
    os>>top__DOT__laser500__DOT__eraser__DOT__erasing;
    os>>top__DOT__laser500__DOT__eraser__DOT__wr;
    os>>top__DOT__laser500__DOT__eraser__DOT__addr;
    os>>top__DOT__laser500__DOT__eraser__DOT__data;
    os>>top__DOT__laser500__DOT__eraser__DOT__pos;
    os>>top__DOT__laser500__DOT__dpram__DOT__clock_a;
    os>>top__DOT__laser500__DOT__dpram__DOT__enable_a;
    os>>top__DOT__laser500__DOT__dpram__DOT__wren_a;
    os>>top__DOT__laser500__DOT__dpram__DOT__address_a;
    os>>top__DOT__laser500__DOT__dpram__DOT__data_a;
    os>>top__DOT__laser500__DOT__dpram__DOT__q_a;
    os>>top__DOT__laser500__DOT__dpram__DOT__clock_b;
    os>>top__DOT__laser500__DOT__dpram__DOT__enable_b;
    os>>top__DOT__laser500__DOT__dpram__DOT__wren_b;
    os>>top__DOT__laser500__DOT__dpram__DOT__address_b;
    os>>top__DOT__laser500__DOT__dpram__DOT__data_b;
    os>>top__DOT__laser500__DOT__dpram__DOT__q_b;
    for (int __Vi0=0; __Vi0<262144; ++__Vi0) {
        os>>top__DOT__laser500__DOT__dpram__DOT__mem[__Vi0];
    }
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub;
    os>>__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In;
    os>>__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__hcnt;
    os>>__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__vcnt;
    os>>__Vdlyvset__top__DOT__laser500__DOT__VTL_chip__DOT__banks__v0;
    os>>__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__vdc_graphic_mode_enabled;
    os>>__Vdly__top__DOT__laser500__DOT__cpu_din;
    os>>__Vdlyvset__top__DOT__laser500__DOT__VTL_chip__DOT__banks__v1;
    os>>__Vdlyvset__top__DOT__laser500__DOT__VTL_chip__DOT__banks__v2;
    os>>__Vdlyvset__top__DOT__laser500__DOT__VTL_chip__DOT__banks__v3;
    os>>__Vdlyvset__top__DOT__laser500__DOT__VTL_chip__DOT__banks__v4;
    os>>__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__vdc_text80_enabled;
    os>>__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__vdc_border_color;
    os>>__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__vdc_graphic_mode_number;
    os>>__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__hsw;
    os>>__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__hbp;
    os>>__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__char;
    os>>__Vdly__top__DOT__laser500__DOT__VTL_chip__DOT__ramDataD;
    os>>__Vdlyvdim0__top__DOT__laser500__DOT__dpram__DOT__mem__v0;
    os>>__Vdlyvval__top__DOT__laser500__DOT__dpram__DOT__mem__v0;
    os>>__Vdlyvset__top__DOT__laser500__DOT__dpram__DOT__mem__v0;
    os>>__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r;
    os>>__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PC;
    os>>__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__XY_State;
    os>>__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR;
    os>>__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr;
    os>>__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
    os>>__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F;
    os>>__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SP;
    os>>__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    os>>__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2;
    os>>__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF;
    os>>__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__tstate;
    os>>__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    os>>__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle;
    os>>__Vdly__top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle;
    os>>__Vdlyvdim0__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__mem__v0;
    os>>__Vdlyvval__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__mem__v0;
    os>>__Vdlyvset__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__mem__v0;
    os>>__Vdlyvdim0__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__mem__v0;
    os>>__Vdlyvval__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__mem__v0;
    os>>__Vdlyvset__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__mem__v0;
    os>>__Vdlyvdim0__top__DOT__laser500__DOT__dpram__DOT__mem__v1;
    os>>__Vdlyvval__top__DOT__laser500__DOT__dpram__DOT__mem__v1;
    os>>__Vdlyvset__top__DOT__laser500__DOT__dpram__DOT__mem__v1;
    os>>__VinpClk__TOP__top__DOT__laser500__DOT____Vcellinp__cpu__reset_n;
    os>>__Vclklast__TOP__top__DOT__laser500__DOT__dpram__DOT__clock_b;
    os>>__Vclklast__TOP__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__clock_b;
    os>>__Vclklast__TOP__top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__clock_b;
    os>>__Vclklast__TOP__clk_48;
    os>>__Vclklast__TOP____VinpClk__TOP__top__DOT__laser500__DOT____Vcellinp__cpu__reset_n;
    os>>__Vchglast__TOP__top__DOT__laser500__DOT____Vcellinp__cpu__reset_n;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        os>>__Vm_traceActivity[__Vi0];
    }
    __VlSymsp->__Vdeserialize(os);
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1;
    VlWide<5>/*159:0*/ __Vtemp2;
    // Body
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__enable_a = 1U;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__wren_a = 0U;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__enable_a = 1U;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__wren_a = 0U;
    vlTOPp->top__DOT__laser500__DOT__eraser__DOT__ena = 1U;
    vlTOPp->ioctl_wait = 0U;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__rfsh_n = 1U;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__nmi_n = 1U;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__busrq_n = 1U;
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x6574386bU;
    __Vtemp1[2U] = 0x68617273U;
    __Vtemp1[3U] = 0x65782f63U;
    __Vtemp1[4U] = 0x2e2e2f68U;
    VL_READMEM_N(true, 8, 8192, 0, VL_CVT_PACK_STR_NW(5, __Vtemp1)
                 ,  &(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__mem)
                 , 0, ~0ULL);
    __Vtemp2[0U] = 0x2e686578U;
    __Vtemp2[1U] = 0x65743634U;
    __Vtemp2[2U] = 0x68617273U;
    __Vtemp2[3U] = 0x65782f63U;
    __Vtemp2[4U] = 0x2e2e2f68U;
    VL_READMEM_N(true, 8, 8192, 0, VL_CVT_PACK_STR_NW(5, __Vtemp2)
                 ,  &(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__mem)
                 , 0, ~0ULL);
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__hfp = 0xaU;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__hbp = 0x46U;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__hsw = 0x42U;
    vlTOPp->top__DOT__laser500__DOT__WAIT = 0U;
    vlTOPp->top__DOT__ioctl_wait = vlTOPp->ioctl_wait;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__rfsh_n 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__rfsh_n;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__nmi_n 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__nmi_n;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__busrq_n 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__busrq_n;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__wait_n 
        = (1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__WAIT)));
}

void Vtop::_settle__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__VGA_HB = vlTOPp->VGA_HB;
    vlTOPp->top__DOT__VGA_VB = vlTOPp->VGA_VB;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__KD 
        = vlTOPp->top__DOT__laser500__DOT__KD;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__CASIN 
        = vlTOPp->top__DOT__laser500__DOT__CASIN;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__joystick_0 
        = vlTOPp->top__DOT__laser500__DOT__joystick_0;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__joystick_1 
        = vlTOPp->top__DOT__laser500__DOT__joystick_1;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__alt_font 
        = vlTOPp->top__DOT__laser500__DOT__st_alt_font;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__img_mounted 
        = vlTOPp->top__DOT__laser500__DOT__img_mounted;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__img_size 
        = vlTOPp->top__DOT__laser500__DOT__img_size;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__reset_n 
        = vlTOPp->top__DOT__laser500__DOT____Vcellinp__cpu__reset_n;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__int_n 
        = vlTOPp->top__DOT__laser500__DOT__video_vs;
    vlTOPp->AUDIO_L = (0xffffU & (((IData)(vlTOPp->top__DOT__audio) 
                                   << 8U) | (IData)(vlTOPp->top__DOT__audio)));
    vlTOPp->top__DOT__clk_12 = vlTOPp->clk_12;
    vlTOPp->top__DOT__inputs = vlTOPp->inputs;
    vlTOPp->top__DOT__ioctl_upload = vlTOPp->ioctl_upload;
    vlTOPp->top__DOT__ioctl_din = vlTOPp->ioctl_din;
    vlTOPp->top__DOT__laser500__DOT__sdram_clkref = vlTOPp->clk_48;
    vlTOPp->top__DOT__ioctl_download = vlTOPp->ioctl_download;
    vlTOPp->top__DOT__ioctl_wr = vlTOPp->ioctl_wr;
    vlTOPp->top__DOT__ioctl_addr = vlTOPp->ioctl_addr;
    vlTOPp->top__DOT__ioctl_dout = vlTOPp->ioctl_dout;
    vlTOPp->top__DOT__ioctl_index = vlTOPp->ioctl_index;
    vlTOPp->top__DOT__reset = vlTOPp->reset;
    vlTOPp->top__DOT__clk_48 = vlTOPp->clk_48;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__iorq_n 
        = vlTOPp->top__DOT__laser500__DOT__cpu_iorq_n;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__rd_n 
        = vlTOPp->top__DOT__laser500__DOT__cpu_rd_n;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__wr_n 
        = vlTOPp->top__DOT__laser500__DOT__cpu_wr_n;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__m1_n 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__m1_n;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__di 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__di_reg;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntE 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__B 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [0U];
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__BP 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [4U];
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__C 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [0U];
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__CP 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [4U];
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__D 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [1U];
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DP 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [5U];
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__E 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [1U];
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__EP 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [5U];
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__H 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [2U];
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__HP 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [6U];
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__L 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [2U];
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__LP 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [6U];
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__IORQ_n 
        = vlTOPp->top__DOT__laser500__DOT__cpu_iorq_n;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__RD_n 
        = vlTOPp->top__DOT__laser500__DOT__cpu_rd_n;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__WR_n 
        = vlTOPp->top__DOT__laser500__DOT__cpu_wr_n;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__sdram_addr 
        = vlTOPp->top__DOT__laser500__DOT__vdc_sdram_addr;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__sdram_rd 
        = vlTOPp->top__DOT__laser500__DOT__vdc_sdram_rd;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__q_a 
        = vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__charsetQ_std;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__q_a 
        = vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__charsetQ_alt;
    vlTOPp->top__DOT__laser500__DOT__eraser__DOT__erasing 
        = vlTOPp->top__DOT__laser500__DOT__eraser_busy;
    vlTOPp->top__DOT__laser500__DOT__eraser__DOT__wr 
        = vlTOPp->top__DOT__laser500__DOT__eraser_wr;
    vlTOPp->top__DOT__laser500__DOT__eraser__DOT__addr 
        = vlTOPp->top__DOT__laser500__DOT__eraser_addr;
    vlTOPp->top__DOT__laser500__DOT__eraser__DOT__data 
        = vlTOPp->top__DOT__laser500__DOT__eraser_data;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__IX 
        = ((vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [3U] << 8U) | vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [3U]);
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__IY 
        = ((vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [7U] << 8U) | vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [7U]);
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__busak_n 
        = (1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusAck)));
    vlTOPp->top__DOT__laser500__DOT__cpu_mreq_n = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__mreq_n;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC];
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC];
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset__DOT__address_a 
        = vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__charsetAddress;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__rom_charset_alternate__DOT__address_a 
        = vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__charsetAddress;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__WR 
        = (1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu_wr_n)));
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__RD 
        = (1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu_rd_n)));
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__IORQ 
        = (1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu_iorq_n)));
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__charsetQ 
        = ((IData)(vlTOPp->top__DOT__laser500__DOT__st_alt_font)
            ? (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__charsetQ_alt)
            : (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__charsetQ_std));
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__CPUENA 
        = vlTOPp->top__DOT__laser500__DOT__CPUENA;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__sdram_din 
        = vlTOPp->top__DOT__laser500__DOT__vdc_sdram_din;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__sdram_wr 
        = vlTOPp->top__DOT__laser500__DOT__vdc_sdram_wr;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__BUZZER 
        = vlTOPp->top__DOT__laser500__DOT__BUZZER;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__CASOUT 
        = vlTOPp->top__DOT__laser500__DOT__CASOUT;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__ycnt 
        = (0x3ffU & ((IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__vcnt) 
                     - (IData)(0x41U)));
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__videoAddress 
        = ((IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__vdc_page_7)
            ? (0x1c000U | (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__ramAddress))
            : (0xc000U | (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__ramAddress)));
    if ((((IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__vdc_graphic_mode_enabled) 
          & ((5U == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__vdc_graphic_mode_number)) 
             | (2U == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__vdc_graphic_mode_number)))) 
         | ((~ (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__vdc_graphic_mode_enabled)) 
            & (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__vdc_text80_enabled)))) {
        vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__fg 
            = (0xfU & (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__vdc_text80_foreground));
        vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__bg 
            = (0xfU & (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__vdc_text80_background));
    } else {
        vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__fg 
            = (0xfU & ((IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__fgbg) 
                       >> 4U));
        vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__bg 
            = (0xfU & (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__fgbg));
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__cen 
        = vlTOPp->top__DOT__laser500__DOT__CPUENA;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__VDC_cnt 
        = (7U & (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__hcnt));
    vlTOPp->top__DOT__video_vs = ((2U > (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__vcnt))
                                   ? 0U : 1U);
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))) {
        vlTOPp->top__DOT__video_r = 0U;
        vlTOPp->top__DOT__video_g = 0U;
        vlTOPp->top__DOT__video_b = 0U;
    } else {
        vlTOPp->top__DOT__video_r = ((1U == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                      ? 0U : ((2U == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                               ? 0U
                                               : ((3U 
                                                   == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                    ? 0x28U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                     ? 0x3cU
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                      ? 0x1cU
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                       ? 0x24U
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                        ? 0x14U
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                         ? 0x20U
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                          ? 0U
                                                          : 
                                                         ((0xbU 
                                                           == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                           ? 0x10U
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                            ? 0x3cU
                                                            : 
                                                           ((0xdU 
                                                             == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                             ? 0x3cU
                                                             : 
                                                            ((0xeU 
                                                              == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                              ? 0x30U
                                                              : 0x3cU))))))))))))));
        vlTOPp->top__DOT__video_g = ((1U == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                      ? 0U : ((2U == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                               ? 0x20U
                                               : ((3U 
                                                   == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                   ? 0x20U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                     ? 0U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                      ? 0x20U
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                       ? 0x24U
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                        ? 0x14U
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                         ? 0x20U
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                          ? 0x3cU
                                                          : 
                                                         ((0xbU 
                                                           == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                           ? 0x3cU
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                            ? 0x10U
                                                            : 
                                                           ((0xdU 
                                                             == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                             ? 0x24U
                                                             : 0x3cU)))))))))))));
        vlTOPp->top__DOT__video_b = ((1U == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                      ? 0x3cU : ((2U 
                                                  == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                  ? 0U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                   ? 0x3cU
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                     ? 0x3cU
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                      ? 0U
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                       ? 0x24U
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                        ? 0x14U
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                         ? 0x3cU
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                          ? 0U
                                                          : 
                                                         ((0xbU 
                                                           == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                           ? 0x3cU
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                            ? 0x14U
                                                            : 
                                                           ((0xdU 
                                                             == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                             ? 0x3cU
                                                             : 
                                                            ((0xeU 
                                                              == (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__pixel))
                                                              ? 0U
                                                              : 0x3cU))))))))))))));
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IR 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Z16 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__IR 
        = (0x3fU & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                    >> 0U));
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__DO 
        = vlTOPp->top__DOT__laser500__DOT__cpu_dout;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__DI 
        = vlTOPp->top__DOT__laser500__DOT__cpu_din;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__di = vlTOPp->top__DOT__laser500__DOT__cpu_din;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__dout 
        = vlTOPp->top__DOT__laser500__DOT__cpu_dout;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__halt_n 
        = (1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF)));
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__intcycle_n 
        = (1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle)));
    vlTOPp->top__DOT__laser500__DOT__cpu_addr = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__A;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask 
        = ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))
            ? ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                ? ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? 0x80U : 0x40U) : ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? 0x20U : 0x10U))
            : ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                ? ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? 8U : 4U) : ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                   ? 2U : 1U)));
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__CPU_cnt 
        = (3U & (IData)(vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__hcnt));
    vlTOPp->top__DOT__laser500__DOT__BLANK = vlTOPp->ioctl_download;
    vlTOPp->top__DOT__laser500__DOT__sdram_wr = ((((IData)(vlTOPp->ioctl_download) 
                                                   & (IData)(vlTOPp->ioctl_wr)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->ioctl_index)))
                                                  ? (IData)(vlTOPp->ioctl_wr)
                                                  : (IData)(vlTOPp->top__DOT__laser500__DOT__vdc_sdram_wr));
    vlTOPp->top__DOT__laser500__DOT__sdram_rd = ((((IData)(vlTOPp->ioctl_download) 
                                                   & (IData)(vlTOPp->ioctl_wr)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->ioctl_index))) 
                                                 | (IData)(vlTOPp->top__DOT__laser500__DOT__vdc_sdram_rd));
    if ((((IData)(vlTOPp->ioctl_download) & (IData)(vlTOPp->ioctl_wr)) 
         & (0U == (IData)(vlTOPp->ioctl_index)))) {
        vlTOPp->top__DOT__laser500__DOT__sdram_din 
            = vlTOPp->ioctl_dout;
        vlTOPp->top__DOT__laser500__DOT__sdram_addr 
            = vlTOPp->ioctl_addr;
    } else {
        vlTOPp->top__DOT__laser500__DOT__sdram_din 
            = vlTOPp->top__DOT__laser500__DOT__vdc_sdram_din;
        vlTOPp->top__DOT__laser500__DOT__sdram_addr 
            = vlTOPp->top__DOT__laser500__DOT__vdc_sdram_addr;
    }
    vlTOPp->top__DOT__laser500__DOT__CPU_RESET = ((IData)(vlTOPp->ioctl_download) 
                                                  | (IData)(vlTOPp->reset));
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__di_reg;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__flag_z 
        = (1U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                 >> 6U));
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__F 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ISet 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusA 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusA;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusB 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusB;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__F_In 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F;
    vlTOPp->top__DOT__laser500__DOT__VTL_chip__DOT__sdram_dout 
        = vlTOPp->top__DOT__laser500__DOT__sdram_dout;
    vlTOPp->top__DOT__laser500__DOT__dpram__DOT__q_a 
        = vlTOPp->top__DOT__laser500__DOT__sdram_dout;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 3U;
    if ((0U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IMode 
                                            = ((1U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                ? 2U
                                                : 1U);
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 2U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_SCF = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_SCF = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRS = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRS = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 3U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 2U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 3U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_CCF = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_CCF = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 5U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 4U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 7U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 6U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SetDI = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SetDI = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SetEI = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__SetEI = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Halt = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x36U == (0x3fU & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Halt = 1U;
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x36U != (0x3fU & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((6U != (7U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry 
        = (IData)((1U == (5U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In 
        = (1U & (((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                  >> 1U) ^ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                            & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F))));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B 
        = (0xfU & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusB));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A 
        = (0xfU & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusA));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout 
        = (0x1fU & (((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A) 
                     + (0xfU & ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub)
                                 ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B))
                                 : (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B)))) 
                    + (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In)));
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v 
        = (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In 
        = (1U & (((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                  >> 1U) ^ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                            & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F))));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B 
        = (0xfU & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusB));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A 
        = (0xfU & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusA));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout 
        = (0x1fU & (((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A) 
                     + (0xfU & ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub)
                                 ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B))
                                 : (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B)))) 
                    + (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In)));
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0xf0U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
           | (0xfU & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout)));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B 
        = (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A 
        = (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout 
        = (0xfU & (((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A) 
                    + (7U & ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub)
                              ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B))
                              : (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B)))) 
                   + (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In)));
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v 
        = (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout) 
                 >> 3U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B 
        = (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A 
        = (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout 
        = (0xfU & (((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A) 
                    + (7U & ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub)
                              ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B))
                              : (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B)))) 
                   + (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In)));
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0x8fU & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
           | (0x70U & ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout) 
                       << 4U)));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B 
        = (1U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A 
        = (1U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout 
        = (3U & (((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A) 
                  + (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub)
                            ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B))
                            : (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B)))) 
                 + (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In)));
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v 
        = (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B 
        = (1U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A 
        = (1U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout 
        = (3U & (((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A) 
                  + (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub)
                            ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B))
                            : (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B)))) 
                 + (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In)));
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0x7fU & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
           | (0x80U & ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout) 
                       << 7U)));
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v 
        = ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v) 
           ^ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v));
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn 
        = ((IData)(vlTOPp->top__DOT__laser500__DOT__CPUENA) 
           & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__BusAck)));
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle 
        = (1U & ((1U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                  ? (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)
                  : ((2U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                      ? ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                         >> 1U) : ((3U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                    ? ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                       >> 2U) : ((4U 
                                                  == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                                  ? 
                                                 ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                                   ? 
                                                  ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 4U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                                    ? 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 5U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycles)) 
                                                    & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                       >> 6U)))))))));
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait = 0U;
    if (((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) 
         | (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle))) {
        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait = 1U;
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__mcycle 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__tstate 
        = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__tstate;
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                }
            } else if ((6U == (7U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            } else {
                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            }
        }
    } else if ((1U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             | ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U))))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        }
    } else if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
        = (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                 >> 3U));
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((6U == 
                                             (7U & 
                                              ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                        }
                                    } else if ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xcU;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             | ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U))))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                     | ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                        >> 6U))))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
            }
        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
        }
    } else if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 7U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xdU;
                                }
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xeU;
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                }
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((6U == 
                                             (7U & 
                                              ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    } else if ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 2U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 1U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((1U & (~ 
                                                  ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                }
            } else if ((6U == (7U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else {
                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x36U != (0x3fU & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((6U == (7U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            }
        } else if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else {
                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 1U)))) {
            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            }
        }
    } else if ((1U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             | ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U))))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        }
    } else if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    if ((6U != (7U 
                                                & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 2U)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 2U)))) {
            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_BT = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_BT = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_BC = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_BC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 2U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Call = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 3U)))) {
                                                    if (
                                                        (0x10U 
                                                         & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 3U)))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 3U)))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 3U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 3U)))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 3U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 3U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                 >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                 >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)))) {
                                    if (vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)))) {
                    if (vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
    }
    if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        if (((0x36U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
             | (1U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))) {
            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                    } else if ((8U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 2U)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        if ((1U & (~ ((0x36U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                      | (1U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))))) {
            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__no_read = 1U;
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                            } else if (
                                                       (0x10U 
                                                        & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                 >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         >> 1U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 2U)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x36U != (0x3fU & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((6U != (7U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                        }
                    }
                }
            }
        } else if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 2U)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                        }
                    }
                }
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                }
            }
        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
            if (vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                    }
                }
            } else if (vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          | ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 6U))))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      | ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         >> 6U))))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      | ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         >> 6U))))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 2U)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 2U)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 2U)))) {
            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 2U)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__write = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF 
                                                    = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                                vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout 
                                                    = 
                                                    (1U 
                                                     & ((4U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? 
                                                          ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                           >> 7U)
                                                           : 
                                                          (~ 
                                                           ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                            >> 7U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? 
                                                          ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                           >> 2U)
                                                           : 
                                                          (~ 
                                                           ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                            >> 2U))))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF)
                                                           : 
                                                          (~ (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? 
                                                          ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                           >> 6U)
                                                           : 
                                                          (~ 
                                                           ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                            >> 6U))))));
                                                if (vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout) {
                                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc 
                                                = (7U 
                                                   & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF 
                                                = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                            vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                         ? (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF)
                                                         : 
                                                        (~ (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                          >> 6U))))));
                                            if (vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc 
                                                = (7U 
                                                   & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF 
                                                = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                            vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF)
                                                         : 
                                                        (~ (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                          >> 6U))))));
                                            if (vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF 
                                            = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                    >> 6U))))));
                                        if (vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc 
                                                = (7U 
                                                   & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF 
                                                = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                            vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF)
                                                         : 
                                                        (~ (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                          >> 6U))))));
                                            if (vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF 
                                            = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                    >> 6U))))));
                                        if (vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF 
                                            = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                    >> 6U))))));
                                        if (vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF 
                                    = vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)))) {
                                        if (vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (0x10U 
                                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
