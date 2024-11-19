// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain.h for the primary calling header

#ifndef VERILATED_VMAIN___024ROOT_H_
#define VERILATED_VMAIN___024ROOT_H_  // guard

#include "verilated.h"


class Vmain__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmain___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ main__DOT__ALUsrc;
    CData/*1:0*/ main__DOT__ALUop;
    CData/*2:0*/ main__DOT__ALUctrl;
    CData/*0:0*/ main__DOT__RegWrite;
    CData/*1:0*/ main__DOT__IMMsrc;
    CData/*0:0*/ main__DOT__D1__DOT__I1__DOT__sign;
    CData/*6:0*/ main__DOT__C1__DOT__op7;
    CData/*2:0*/ main__DOT__A11__DOT__func3;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ __VdfgRegularize_h6171c202_0_0;
    VL_OUT(A0,31,0);
    IData/*31:0*/ main__DOT__instr;
    IData/*31:0*/ main__DOT__IMMop;
    IData/*31:0*/ main__DOT__D1__DOT__DOut1;
    IData/*31:0*/ main__DOT__D1__DOT__N2;
    IData/*31:0*/ main__DOT__D1__DOT__DIn;
    IData/*31:0*/ main__DOT__D2__DOT__PC;
    IData/*31:0*/ main__DOT__D2__DOT__PCN;
    IData/*23:0*/ __VdfgRegularize_h6171c202_0_1;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> main__DOT__D1__DOT__R1__DOT__RomArr;
    VlUnpacked<CData/*7:0*/, 256> main__DOT__D2__DOT__R1__DOT__RomArr;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmain__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmain___024root(Vmain__Syms* symsp, const char* v__name);
    ~Vmain___024root();
    VL_UNCOPYABLE(Vmain___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
