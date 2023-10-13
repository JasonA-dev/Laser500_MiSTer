// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"


void Vtop__Syms::__Vserialize(VerilatedSerialize& os) {
    // LOCAL STATE
    os<<__Vm_activity;
    os<<__Vm_didInit;
    // SUBCELL STATE
}
void Vtop__Syms::__Vdeserialize(VerilatedDeserialize& os) {
    // LOCAL STATE
    os>>__Vm_activity;
    os>>__Vm_didInit;
    // SUBCELL STATE
}


// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, Vtop* topp, const char* namep)
    // Setup locals
    : VerilatedSyms{contextp}
    , __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top.configure(this, name(), "top", "top", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__laser500__cpu.configure(this, name(), "top.laser500.cpu", "cpu", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__laser500__cpu__i_tv80_core.configure(this, name(), "top.laser500.cpu.i_tv80_core", "i_tv80_core", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__laser500__cpu__i_tv80_core__i_reg.configure(this, name(), "top.laser500.cpu.i_tv80_core.i_reg", "i_reg", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_TOP.varInsert(__Vfinal,"VGA_B", &(TOPp->VGA_B), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"VGA_G", &(TOPp->VGA_G), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"VGA_R", &(TOPp->VGA_R), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk_12", &(TOPp->clk_12), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk_48", &(TOPp->clk_48), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"inputs", &(TOPp->inputs), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,11,0);
        __Vscope_TOP.varInsert(__Vfinal,"reset", &(TOPp->reset), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"VGA_B", &(TOPp->top__DOT__VGA_B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top.varInsert(__Vfinal,"VGA_G", &(TOPp->top__DOT__VGA_G), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top.varInsert(__Vfinal,"VGA_R", &(TOPp->top__DOT__VGA_R), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top.varInsert(__Vfinal,"clk_12", &(TOPp->top__DOT__clk_12), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"clk_48", &(TOPp->top__DOT__clk_48), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"inputs", &(TOPp->top__DOT__inputs), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_top.varInsert(__Vfinal,"joystick", &(TOPp->top__DOT__joystick), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top.varInsert(__Vfinal,"led", &(TOPp->top__DOT__led), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_top.varInsert(__Vfinal,"playerinput", &(TOPp->top__DOT__playerinput), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,9,0);
        __Vscope_top.varInsert(__Vfinal,"reset", &(TOPp->top__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"trakball", &(TOPp->top__DOT__trakball), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top__laser500__cpu.varInsert(__Vfinal,"cen", &(TOPp->top__DOT__laser500__DOT__cpu__DOT__cen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__laser500__cpu.varInsert(__Vfinal,"mcycle", &(TOPp->top__DOT__laser500__DOT__cpu__DOT__mcycle), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_top__laser500__cpu.varInsert(__Vfinal,"mreq_n", &(TOPp->top__DOT__laser500__DOT__cpu__DOT__mreq_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__laser500__cpu.varInsert(__Vfinal,"tstate", &(TOPp->top__DOT__laser500__DOT__cpu__DOT__tstate), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_top__laser500__cpu__i_tv80_core.varInsert(__Vfinal,"A", &(TOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__A), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_top__laser500__cpu__i_tv80_core.varInsert(__Vfinal,"ACC", &(TOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ACC), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top__laser500__cpu__i_tv80_core.varInsert(__Vfinal,"I", &(TOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__I), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top__laser500__cpu__i_tv80_core.varInsert(__Vfinal,"ISet", &(TOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ISet), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_top__laser500__cpu__i_tv80_core.varInsert(__Vfinal,"di", &(TOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__di), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top__laser500__cpu__i_tv80_core.varInsert(__Vfinal,"flag_z", &(TOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__flag_z), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__laser500__cpu__i_tv80_core.varInsert(__Vfinal,"ir_changed", &(TOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__ir_changed), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__laser500__cpu__i_tv80_core.varInsert(__Vfinal,"last_mcycle", &(TOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__laser500__cpu__i_tv80_core.varInsert(__Vfinal,"m1_n", &(TOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__m1_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__laser500__cpu__i_tv80_core__i_reg.varInsert(__Vfinal,"D", &(TOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__D), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top__laser500__cpu__i_tv80_core__i_reg.varInsert(__Vfinal,"E", &(TOPp->top__DOT__laser500__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__E), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
    }
}
