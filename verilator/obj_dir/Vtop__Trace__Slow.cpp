// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk_48", false,-1);
        tracep->declBit(c+2,"clk_12", false,-1);
        tracep->declBit(c+3,"reset", false,-1);
        tracep->declBus(c+4,"inputs", false,-1, 11,0);
        tracep->declBus(c+5,"VGA_R", false,-1, 7,0);
        tracep->declBus(c+6,"VGA_G", false,-1, 7,0);
        tracep->declBus(c+7,"VGA_B", false,-1, 7,0);
        tracep->declBit(c+8,"VGA_HS", false,-1);
        tracep->declBit(c+9,"VGA_VS", false,-1);
        tracep->declBit(c+10,"VGA_HB", false,-1);
        tracep->declBit(c+11,"VGA_VB", false,-1);
        tracep->declBus(c+12,"AUDIO_L", false,-1, 15,0);
        tracep->declBus(c+13,"AUDIO_R", false,-1, 15,0);
        tracep->declBit(c+14,"ioctl_download", false,-1);
        tracep->declBit(c+15,"ioctl_upload", false,-1);
        tracep->declBit(c+16,"ioctl_wr", false,-1);
        tracep->declBus(c+17,"ioctl_addr", false,-1, 24,0);
        tracep->declBus(c+18,"ioctl_dout", false,-1, 7,0);
        tracep->declBus(c+19,"ioctl_din", false,-1, 7,0);
        tracep->declBus(c+20,"ioctl_index", false,-1, 7,0);
        tracep->declBit(c+21,"ioctl_wait", false,-1);
        tracep->declBit(c+22,"top clk_48", false,-1);
        tracep->declBit(c+23,"top clk_12", false,-1);
        tracep->declBit(c+24,"top reset", false,-1);
        tracep->declBus(c+25,"top inputs", false,-1, 11,0);
        tracep->declBus(c+26,"top VGA_R", false,-1, 7,0);
        tracep->declBus(c+27,"top VGA_G", false,-1, 7,0);
        tracep->declBus(c+28,"top VGA_B", false,-1, 7,0);
        tracep->declBit(c+29,"top VGA_HS", false,-1);
        tracep->declBit(c+30,"top VGA_VS", false,-1);
        tracep->declBit(c+31,"top VGA_HB", false,-1);
        tracep->declBit(c+32,"top VGA_VB", false,-1);
        tracep->declBus(c+33,"top AUDIO_L", false,-1, 15,0);
        tracep->declBus(c+34,"top AUDIO_R", false,-1, 15,0);
        tracep->declBit(c+35,"top ioctl_download", false,-1);
        tracep->declBit(c+36,"top ioctl_upload", false,-1);
        tracep->declBit(c+37,"top ioctl_wr", false,-1);
        tracep->declBus(c+38,"top ioctl_addr", false,-1, 24,0);
        tracep->declBus(c+39,"top ioctl_dout", false,-1, 7,0);
        tracep->declBus(c+40,"top ioctl_din", false,-1, 7,0);
        tracep->declBus(c+41,"top ioctl_index", false,-1, 7,0);
        tracep->declBit(c+42,"top ioctl_wait", false,-1);
        tracep->declBit(c+43,"top pause", false,-1);
        tracep->declBus(c+44,"top audio", false,-1, 7,0);
        tracep->declBus(c+45,"top rgb", false,-1, 8,0);
        tracep->declBus(c+46,"top led", false,-1, 3,0);
        tracep->declBus(c+47,"top trakball", false,-1, 7,0);
        tracep->declBus(c+48,"top joystick", false,-1, 7,0);
        tracep->declBus(c+49,"top playerinput", false,-1, 9,0);
        tracep->declBus(c+50,"top sw1", false,-1, 7,0);
        tracep->declBus(c+51,"top sw2", false,-1, 7,0);
        tracep->declBit(c+52,"top ce_pix", false,-1);
        tracep->declBit(c+53,"top unnamedblk1 old_clk", false,-1);
    }
}

void Vtop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk_48));
        tracep->fullBit(oldp+2,(vlTOPp->clk_12));
        tracep->fullBit(oldp+3,(vlTOPp->reset));
        tracep->fullSData(oldp+4,(vlTOPp->inputs),12);
        tracep->fullCData(oldp+5,(vlTOPp->VGA_R),8);
        tracep->fullCData(oldp+6,(vlTOPp->VGA_G),8);
        tracep->fullCData(oldp+7,(vlTOPp->VGA_B),8);
        tracep->fullBit(oldp+8,(vlTOPp->VGA_HS));
        tracep->fullBit(oldp+9,(vlTOPp->VGA_VS));
        tracep->fullBit(oldp+10,(vlTOPp->VGA_HB));
        tracep->fullBit(oldp+11,(vlTOPp->VGA_VB));
        tracep->fullSData(oldp+12,(vlTOPp->AUDIO_L),16);
        tracep->fullSData(oldp+13,(vlTOPp->AUDIO_R),16);
        tracep->fullBit(oldp+14,(vlTOPp->ioctl_download));
        tracep->fullBit(oldp+15,(vlTOPp->ioctl_upload));
        tracep->fullBit(oldp+16,(vlTOPp->ioctl_wr));
        tracep->fullIData(oldp+17,(vlTOPp->ioctl_addr),25);
        tracep->fullCData(oldp+18,(vlTOPp->ioctl_dout),8);
        tracep->fullCData(oldp+19,(vlTOPp->ioctl_din),8);
        tracep->fullCData(oldp+20,(vlTOPp->ioctl_index),8);
        tracep->fullBit(oldp+21,(vlTOPp->ioctl_wait));
        tracep->fullBit(oldp+22,(vlTOPp->top__DOT__clk_48));
        tracep->fullBit(oldp+23,(vlTOPp->top__DOT__clk_12));
        tracep->fullBit(oldp+24,(vlTOPp->top__DOT__reset));
        tracep->fullSData(oldp+25,(vlTOPp->top__DOT__inputs),12);
        tracep->fullCData(oldp+26,(vlTOPp->top__DOT__VGA_R),8);
        tracep->fullCData(oldp+27,(vlTOPp->top__DOT__VGA_G),8);
        tracep->fullCData(oldp+28,(vlTOPp->top__DOT__VGA_B),8);
        tracep->fullBit(oldp+29,(vlTOPp->top__DOT__VGA_HS));
        tracep->fullBit(oldp+30,(vlTOPp->top__DOT__VGA_VS));
        tracep->fullBit(oldp+31,(vlTOPp->top__DOT__VGA_HB));
        tracep->fullBit(oldp+32,(vlTOPp->top__DOT__VGA_VB));
        tracep->fullSData(oldp+33,(vlTOPp->top__DOT__AUDIO_L),16);
        tracep->fullSData(oldp+34,(vlTOPp->top__DOT__AUDIO_R),16);
        tracep->fullBit(oldp+35,(vlTOPp->top__DOT__ioctl_download));
        tracep->fullBit(oldp+36,(vlTOPp->top__DOT__ioctl_upload));
        tracep->fullBit(oldp+37,(vlTOPp->top__DOT__ioctl_wr));
        tracep->fullIData(oldp+38,(vlTOPp->top__DOT__ioctl_addr),25);
        tracep->fullCData(oldp+39,(vlTOPp->top__DOT__ioctl_dout),8);
        tracep->fullCData(oldp+40,(vlTOPp->top__DOT__ioctl_din),8);
        tracep->fullCData(oldp+41,(vlTOPp->top__DOT__ioctl_index),8);
        tracep->fullBit(oldp+42,(vlTOPp->top__DOT__ioctl_wait));
        tracep->fullBit(oldp+43,(vlTOPp->top__DOT__pause));
        tracep->fullCData(oldp+44,(vlTOPp->top__DOT__audio),8);
        tracep->fullSData(oldp+45,(vlTOPp->top__DOT__rgb),9);
        tracep->fullCData(oldp+46,(vlTOPp->top__DOT__led),4);
        tracep->fullCData(oldp+47,(vlTOPp->top__DOT__trakball),8);
        tracep->fullCData(oldp+48,(vlTOPp->top__DOT__joystick),8);
        tracep->fullSData(oldp+49,(vlTOPp->top__DOT__playerinput),10);
        tracep->fullCData(oldp+50,(vlTOPp->top__DOT__sw1),8);
        tracep->fullCData(oldp+51,(vlTOPp->top__DOT__sw2),8);
        tracep->fullBit(oldp+52,(vlTOPp->top__DOT__ce_pix));
        tracep->fullBit(oldp+53,(vlTOPp->top__DOT__unnamedblk1__DOT__old_clk));
    }
}
