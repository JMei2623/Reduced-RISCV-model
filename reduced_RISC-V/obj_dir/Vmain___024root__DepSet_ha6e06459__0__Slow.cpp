// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"
#include "Vmain___024root.h"

VL_ATTR_COLD void Vmain___024root___eval_static(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmain___024root___eval_initial__TOP(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_initial(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmain___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vmain___024root___eval_initial__TOP(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[0U] = 0U;
    VL_READMEM_N(true, 8, 256, 0, std::string{"rom.mem"}
                 ,  &(vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vmain___024root___eval_final(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__stl(Vmain___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmain___024root___eval_phase__stl(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_settle(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vmain___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("main.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmain___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__stl(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmain___024root___stl_sequent__TOP__0(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_stl(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmain___024root___stl_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 32> Vmain__ConstPool__TABLE_h2dc6852c_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vmain__ConstPool__TABLE_hc8f406f0_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vmain__ConstPool__TABLE_h58917218_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vmain__ConstPool__TABLE_hd4a324e7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vmain__ConstPool__TABLE_h160fd8a8_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vmain__ConstPool__TABLE_hee2ee10b_0;

VL_ATTR_COLD void Vmain___024root___stl_sequent__TOP__0(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*4:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.A0 = vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr
        [0xaU];
    vlSelfRef.main__DOT__D1__DOT__I1__DOT__sign = (1U 
                                                   & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                      [
                                                      (0xffU 
                                                       & vlSelfRef.main__DOT__D2__DOT__PC)] 
                                                      >> 7U));
    vlSelfRef.main__DOT__A11__DOT__func3 = (7U & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                  [
                                                  (0xffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.main__DOT__D2__DOT__PC))] 
                                                  >> 4U));
    vlSelfRef.__VdfgRegularize_h6171c202_0_0 = ((vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                 [(0xffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.main__DOT__D2__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + vlSelfRef.main__DOT__D2__DOT__PC))]);
    vlSelfRef.main__DOT__C1__DOT__op7 = (0x7fU & vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                         [(0xffU & 
                                           ((IData)(3U) 
                                            + vlSelfRef.main__DOT__D2__DOT__PC))]);
    vlSelfRef.main__DOT__ALUctrl = ((2U == (IData)(vlSelfRef.main__DOT__A11__DOT__func3))
                                     ? 5U : ((6U == (IData)(vlSelfRef.main__DOT__A11__DOT__func3))
                                              ? 3U : 
                                             ((7U == (IData)(vlSelfRef.main__DOT__A11__DOT__func3))
                                               ? 2U
                                               : 0U)));
    __Vtableidx5 = ((0x10U & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                              [(0xffU & vlSelfRef.main__DOT__D2__DOT__PC)] 
                              << 2U)) | ((8U & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + vlSelfRef.main__DOT__D2__DOT__PC))] 
                                                << 1U)) 
                                         | (IData)(vlSelfRef.main__DOT__A11__DOT__func3)));
    if (Vmain__ConstPool__TABLE_h2dc6852c_0[__Vtableidx5]) {
        vlSelfRef.main__DOT__ALUctrl = Vmain__ConstPool__TABLE_hc8f406f0_0
            [__Vtableidx5];
    }
    vlSelfRef.__VdfgRegularize_h6171c202_0_1 = ((vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                 [(0xffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.main__DOT__D2__DOT__PC))] 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_0));
    __Vtableidx4 = vlSelfRef.main__DOT__C1__DOT__op7;
    vlSelfRef.main__DOT__RegWrite = Vmain__ConstPool__TABLE_h58917218_0
        [__Vtableidx4];
    __Vtableidx3 = vlSelfRef.main__DOT__C1__DOT__op7;
    vlSelfRef.main__DOT__ALUop = Vmain__ConstPool__TABLE_hd4a324e7_0
        [__Vtableidx3];
    __Vtableidx2 = vlSelfRef.main__DOT__C1__DOT__op7;
    vlSelfRef.main__DOT__ALUsrc = Vmain__ConstPool__TABLE_h160fd8a8_0
        [__Vtableidx2];
    __Vtableidx1 = vlSelfRef.main__DOT__C1__DOT__op7;
    vlSelfRef.main__DOT__IMMsrc = Vmain__ConstPool__TABLE_hee2ee10b_0
        [__Vtableidx1];
    vlSelfRef.main__DOT__D1__DOT__DOut1 = vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr
        [(0x1fU & (vlSelfRef.__VdfgRegularize_h6171c202_0_1 
                   >> 0xfU))];
    vlSelfRef.main__DOT__instr = ((vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                   [(0xffU & vlSelfRef.main__DOT__D2__DOT__PC)] 
                                   << 0x18U) | vlSelfRef.__VdfgRegularize_h6171c202_0_1);
    if ((0U == (IData)(vlSelfRef.main__DOT__ALUop))) {
        vlSelfRef.main__DOT__ALUctrl = 0U;
    } else if ((1U == (IData)(vlSelfRef.main__DOT__ALUop))) {
        vlSelfRef.main__DOT__ALUctrl = 1U;
    }
    vlSelfRef.main__DOT__IMMop = ((2U & (IData)(vlSelfRef.main__DOT__IMMsrc))
                                   ? ((1U & (IData)(vlSelfRef.main__DOT__IMMsrc))
                                       ? (0xfffff000U 
                                          & vlSelfRef.main__DOT__instr)
                                       : (((- (IData)((IData)(vlSelfRef.main__DOT__D1__DOT__I1__DOT__sign))) 
                                           << 0xdU) 
                                          | ((0x1000U 
                                              & (vlSelfRef.main__DOT__instr 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelfRef.main__DOT__instr 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelfRef.main__DOT__instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelfRef.main__DOT__instr 
                                                         >> 7U)))))))
                                   : ((1U & (IData)(vlSelfRef.main__DOT__IMMsrc))
                                       ? (((- (IData)((IData)(vlSelfRef.main__DOT__D1__DOT__I1__DOT__sign))) 
                                           << 0xcU) 
                                          | ((0xfe0U 
                                              & (vlSelfRef.main__DOT__instr 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelfRef.main__DOT__instr 
                                                   >> 7U))))
                                       : (((- (IData)((IData)(vlSelfRef.main__DOT__D1__DOT__I1__DOT__sign))) 
                                           << 0xcU) 
                                          | (vlSelfRef.main__DOT__instr 
                                             >> 0x14U))));
    vlSelfRef.main__DOT__D1__DOT__N2 = ((IData)(vlSelfRef.main__DOT__ALUsrc)
                                         ? vlSelfRef.main__DOT__IMMop
                                         : vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr
                                        [(0x1fU & (vlSelfRef.main__DOT__instr 
                                                   >> 0x14U))]);
    vlSelfRef.main__DOT__D1__DOT__DIn = ((4U & (IData)(vlSelfRef.main__DOT__ALUctrl))
                                          ? ((2U & (IData)(vlSelfRef.main__DOT__ALUctrl))
                                              ? (vlSelfRef.main__DOT__D1__DOT__DOut1 
                                                 + vlSelfRef.main__DOT__D1__DOT__N2)
                                              : ((1U 
                                                  & (IData)(vlSelfRef.main__DOT__ALUctrl))
                                                  ? 
                                                 ((vlSelfRef.main__DOT__D1__DOT__DOut1 
                                                   < vlSelfRef.main__DOT__D1__DOT__N2)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (vlSelfRef.main__DOT__D1__DOT__DOut1 
                                                  + vlSelfRef.main__DOT__D1__DOT__N2)))
                                          : ((2U & (IData)(vlSelfRef.main__DOT__ALUctrl))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.main__DOT__ALUctrl))
                                                  ? 
                                                 (vlSelfRef.main__DOT__D1__DOT__DOut1 
                                                  | vlSelfRef.main__DOT__D1__DOT__N2)
                                                  : 
                                                 (vlSelfRef.main__DOT__D1__DOT__DOut1 
                                                  & vlSelfRef.main__DOT__D1__DOT__N2))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.main__DOT__ALUctrl))
                                                  ? 
                                                 (vlSelfRef.main__DOT__D1__DOT__DOut1 
                                                  - vlSelfRef.main__DOT__D1__DOT__N2)
                                                  : 
                                                 (vlSelfRef.main__DOT__D1__DOT__DOut1 
                                                  + vlSelfRef.main__DOT__D1__DOT__N2))));
    vlSelfRef.main__DOT__D2__DOT__PCN = ((((0x63U == (IData)(vlSelfRef.main__DOT__C1__DOT__op7)) 
                                           || ((0x67U 
                                                == (IData)(vlSelfRef.main__DOT__C1__DOT__op7)) 
                                               || (0x6fU 
                                                   == (IData)(vlSelfRef.main__DOT__C1__DOT__op7)))) 
                                          & (0U != vlSelfRef.main__DOT__D1__DOT__DIn))
                                          ? (vlSelfRef.main__DOT__D2__DOT__PC 
                                             + vlSelfRef.main__DOT__IMMop)
                                          : ((IData)(4U) 
                                             + vlSelfRef.main__DOT__D2__DOT__PC));
}

VL_ATTR_COLD void Vmain___024root___eval_triggers__stl(Vmain___024root* vlSelf);

VL_ATTR_COLD bool Vmain___024root___eval_phase__stl(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmain___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmain___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__act(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__nba(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmain___024root___ctor_var_reset(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->A0 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__IMMop = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__ALUop = VL_RAND_RESET_I(2);
    vlSelf->main__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->main__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__IMMsrc = VL_RAND_RESET_I(2);
    vlSelf->main__DOT__D1__DOT__DOut1 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__D1__DOT__N2 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__D1__DOT__DIn = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->main__DOT__D1__DOT__R1__DOT__RomArr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->main__DOT__D1__DOT__I1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__C1__DOT__op7 = VL_RAND_RESET_I(7);
    vlSelf->main__DOT__A11__DOT__func3 = VL_RAND_RESET_I(3);
    vlSelf->main__DOT__D2__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__D2__DOT__PCN = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->main__DOT__D2__DOT__R1__DOT__RomArr[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__VdfgRegularize_h6171c202_0_0 = VL_RAND_RESET_I(16);
    vlSelf->__VdfgRegularize_h6171c202_0_1 = VL_RAND_RESET_I(24);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
