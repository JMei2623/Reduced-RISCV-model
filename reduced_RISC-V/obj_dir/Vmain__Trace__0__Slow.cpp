// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


VL_ATTR_COLD void Vmain___024root__trace_init_sub__TOP__0(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"A0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("main", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+72,0,"WA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"A0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"IMMop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"AdIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"AdOut1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"AdOut2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+6,0,"ALUsrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"ALUop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,0,"ALUctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+9,0,"RamWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"IMMsrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"ResultSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+13,0,"PCsrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"PCN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"EQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("A11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"ALUop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,0,"ALUctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+17,0,"func75",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"op5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("C1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"EQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"RamWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"ALUop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+6,0,"ALUsrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"IMMsrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+13,0,"PCsrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"ResultSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+19,0,"op7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+20,0,"PCsrc_req1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"PCsrc_req2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("D1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+72,0,"WAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"AdIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"AdOut1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"AdOut2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"PCN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"ALUsrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"ALUctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+12,0,"ResultSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+10,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"RamWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"IMMsrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+71,0,"A0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"EQ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"IMM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"DOut1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"DOut2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"N2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"DInReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"DOutAlu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"DOutRam",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("A1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"ALUctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,0,"N1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"N2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"EQ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("I1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"IMMsrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("R1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+72,0,"WAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"R0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"AdIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"AdOut1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"AdOut2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+26,0,"DIn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"DOut1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"DOut2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"A0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"examine1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("RomArr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+31+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("R2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"WA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"Ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+9,0,"RamWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"DIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"DOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("D2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"PCsrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"IMMop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"PCN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"branch_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("P1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"PCN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("R1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"WAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"AddrIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1,0,"DOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmain___024root__trace_init_top(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmain___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmain___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmain___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmain___024root__trace_register(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmain___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmain___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmain___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmain___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmain___024root__trace_const_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmain___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_const_0\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmain___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmain___024root__trace_const_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+72,(5U),32);
    bufp->fullIData(oldp+73,(0x20U),32);
    bufp->fullIData(oldp+74,(0xaU),32);
    bufp->fullIData(oldp+75,(8U),32);
}

VL_ATTR_COLD void Vmain___024root__trace_full_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmain___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_0\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmain___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmain___024root__trace_full_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.main__DOT__instr),32);
    bufp->fullIData(oldp+2,(vlSelfRef.main__DOT__IMMop),32);
    bufp->fullCData(oldp+3,((0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_0) 
                                      >> 7U))),5);
    bufp->fullCData(oldp+4,((0x1fU & (vlSelfRef.__VdfgRegularize_h6171c202_0_1 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+5,((0x1fU & (vlSelfRef.main__DOT__instr 
                                      >> 0x14U))),5);
    bufp->fullBit(oldp+6,(vlSelfRef.main__DOT__ALUsrc));
    bufp->fullCData(oldp+7,(vlSelfRef.main__DOT__ALUop),2);
    bufp->fullCData(oldp+8,(vlSelfRef.main__DOT__ALUctrl),3);
    bufp->fullBit(oldp+9,((0x23U == (IData)(vlSelfRef.main__DOT__C1__DOT__op7))));
    bufp->fullBit(oldp+10,(vlSelfRef.main__DOT__RegWrite));
    bufp->fullCData(oldp+11,(vlSelfRef.main__DOT__IMMsrc),2);
    bufp->fullCData(oldp+12,(vlSelfRef.main__DOT__ResultSrc),2);
    bufp->fullBit(oldp+13,((((0x63U == (IData)(vlSelfRef.main__DOT__C1__DOT__op7)) 
                             || ((0x67U == (IData)(vlSelfRef.main__DOT__C1__DOT__op7)) 
                                 || (0x6fU == (IData)(vlSelfRef.main__DOT__C1__DOT__op7)))) 
                            & (0U != vlSelfRef.main__DOT__D1__DOT__DOutAlu))));
    bufp->fullBit(oldp+14,((1U & vlSelfRef.main__DOT____Vcellout__D2__PCN)));
    bufp->fullBit(oldp+15,((0U == vlSelfRef.main__DOT__D1__DOT__DOutAlu)));
    bufp->fullCData(oldp+16,(vlSelfRef.main__DOT__A11__DOT__func3),3);
    bufp->fullBit(oldp+17,((1U & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                  [(0xffU & vlSelfRef.main__DOT__D2__DOT__PC)] 
                                  >> 2U))));
    bufp->fullBit(oldp+18,((1U & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                  [(0xffU & ((IData)(3U) 
                                             + vlSelfRef.main__DOT__D2__DOT__PC))] 
                                  >> 2U))));
    bufp->fullCData(oldp+19,(vlSelfRef.main__DOT__C1__DOT__op7),7);
    bufp->fullBit(oldp+20,(((0x63U == (IData)(vlSelfRef.main__DOT__C1__DOT__op7)) 
                            || ((0x67U == (IData)(vlSelfRef.main__DOT__C1__DOT__op7)) 
                                || (0x6fU == (IData)(vlSelfRef.main__DOT__C1__DOT__op7))))));
    bufp->fullBit(oldp+21,((0U != vlSelfRef.main__DOT__D1__DOT__DOutAlu)));
    bufp->fullIData(oldp+22,((1U & vlSelfRef.main__DOT____Vcellout__D2__PCN)),32);
    bufp->fullIData(oldp+23,(vlSelfRef.main__DOT__D1__DOT__DOut1),32);
    bufp->fullIData(oldp+24,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr
                             [(0x1fU & (vlSelfRef.main__DOT__instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.main__DOT__D1__DOT__N2),32);
    bufp->fullIData(oldp+26,(((0U == (IData)(vlSelfRef.main__DOT__ResultSrc))
                               ? vlSelfRef.main__DOT__D1__DOT__DOutAlu
                               : ((1U == (IData)(vlSelfRef.main__DOT__ResultSrc))
                                   ? vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                  [(0xffU & vlSelfRef.main__DOT__D1__DOT__DOutAlu)]
                                   : ((2U == (IData)(vlSelfRef.main__DOT__ResultSrc))
                                       ? (1U & vlSelfRef.main__DOT____Vcellout__D2__PCN)
                                       : vlSelfRef.main__DOT__D1__DOT__DOutAlu)))),32);
    bufp->fullIData(oldp+27,(vlSelfRef.main__DOT__D1__DOT__DOutAlu),32);
    bufp->fullIData(oldp+28,(vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                             [(0xffU & vlSelfRef.main__DOT__D1__DOT__DOutAlu)]),32);
    bufp->fullBit(oldp+29,(vlSelfRef.main__DOT__D1__DOT__I1__DOT__sign));
    bufp->fullIData(oldp+30,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr
                             [(0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_0) 
                                        >> 7U))]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[0]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[1]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[2]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[3]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[4]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[5]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[6]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[7]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[8]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[9]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[10]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[11]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[12]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[13]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[14]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[15]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[16]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[17]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[18]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[19]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[20]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[21]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[22]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[23]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[24]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[25]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[26]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[27]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[28]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[29]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[30]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[31]),32);
    bufp->fullCData(oldp+63,((0xffU & vlSelfRef.main__DOT__D1__DOT__DOutAlu)),8);
    bufp->fullCData(oldp+64,((0xffU & vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr
                              [(0x1fU & (vlSelfRef.main__DOT__instr 
                                         >> 0x14U))])),8);
    bufp->fullIData(oldp+65,(vlSelfRef.main__DOT____Vcellout__D2__PCN),32);
    bufp->fullIData(oldp+66,(vlSelfRef.main__DOT__D2__DOT__PC),32);
    bufp->fullIData(oldp+67,((vlSelfRef.main__DOT__D2__DOT__PC 
                              + vlSelfRef.main__DOT__IMMop)),32);
    bufp->fullCData(oldp+68,((0xffU & vlSelfRef.main__DOT__D2__DOT__PC)),8);
    bufp->fullBit(oldp+69,(vlSelfRef.clk));
    bufp->fullBit(oldp+70,(vlSelfRef.rst));
    bufp->fullIData(oldp+71,(vlSelfRef.A0),32);
}
