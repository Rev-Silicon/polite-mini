// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_polite_dbg__Syms.h"


VL_ATTR_COLD void Vtb_polite_dbg___024root__trace_init_sub__TOP__0(Vtb_polite_dbg___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_polite_dbg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"NUM_RANDOM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+75,0,"OP_DFLAG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+76,0,"OP_DBUF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+77,0,"OP_DPSUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+78,0,"OP_DMUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"OP_DADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+80,0,"OP_DINP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+71,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"pe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5,0,"run_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"inbuf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+9,0,"psum_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+12,0,"mul_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+13,0,"sum_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+67,0,"open",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"ofz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"dbg_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"dbg_nib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"m_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"m_k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"m_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+23,0,"s_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"s_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"s_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"s_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+27,0,"s_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+19,0,"err_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+20,0,"chk_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+21,0,"sb_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+28,0,"sb_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+29,0,"sb_got",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+30,0,"sb_need",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"sb_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+32,0,"n_reads",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("cov_op_phase", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+33,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+34,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+35,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+36,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+37,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+39,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+40,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+41,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+42,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+43,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+44,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("cov_add_rb", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+45+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cov_pe", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+47+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+51,0,"cov_hold_in_freeze",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+52,0,"cov_b2b_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+22,0,"prev_open",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"phase",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"pe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5,0,"run_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"status",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"inbuf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+9,0,"psum_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+12,0,"mul_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+13,0,"sum_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+67,0,"open",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"ofz",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"dbg_tick",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"dbg_nib",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+68,0,"fz_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+69,0,"fz_k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+70,0,"fz_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+53,0,"ps",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+54,0,"mu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"sm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+56,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+57,0,"wide",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"left_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+62,0,"k_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+63,0,"val_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+64,0,"fk_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+65,0,"fk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+60,0,"vn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("u_sva", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"open",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"phase",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"dbg_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+68,0,"fz_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+69,0,"fz_k",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+70,0,"fz_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"n_rand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_polite_dbg___024root__trace_init_top(Vtb_polite_dbg___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_polite_dbg___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_polite_dbg___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_polite_dbg___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_polite_dbg___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_polite_dbg___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_polite_dbg___024root__trace_register(Vtb_polite_dbg___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_polite_dbg___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_polite_dbg___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_polite_dbg___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_polite_dbg___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_polite_dbg___024root__trace_const_0_sub_0(Vtb_polite_dbg___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_polite_dbg___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root__trace_const_0\n"); );
    // Init
    Vtb_polite_dbg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_polite_dbg___024root*>(voidSelf);
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_polite_dbg___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_polite_dbg___024root__trace_const_0_sub_0(Vtb_polite_dbg___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+74,(0x1388U),32);
    bufp->fullCData(oldp+75,(6U),4);
    bufp->fullCData(oldp+76,(7U),4);
    bufp->fullCData(oldp+77,(8U),4);
    bufp->fullCData(oldp+78,(9U),4);
    bufp->fullCData(oldp+79,(0xaU),4);
    bufp->fullCData(oldp+80,(0xbU),4);
}

VL_ATTR_COLD void Vtb_polite_dbg___024root__trace_full_0_sub_0(Vtb_polite_dbg___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_polite_dbg___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root__trace_full_0\n"); );
    // Init
    Vtb_polite_dbg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_polite_dbg___024root*>(voidSelf);
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_polite_dbg___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_polite_dbg___024root__trace_full_0_sub_0(Vtb_polite_dbg___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_polite_dbg__DOT__en));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_polite_dbg__DOT__start));
    bufp->fullCData(oldp+3,(vlSelfRef.tb_polite_dbg__DOT__op),4);
    bufp->fullCData(oldp+4,(vlSelfRef.tb_polite_dbg__DOT__pe),2);
    bufp->fullBit(oldp+5,(vlSelfRef.tb_polite_dbg__DOT__run_busy));
    bufp->fullCData(oldp+6,(vlSelfRef.tb_polite_dbg__DOT__status),8);
    bufp->fullCData(oldp+7,(vlSelfRef.tb_polite_dbg__DOT__inbuf),8);
    bufp->fullCData(oldp+8,(vlSelfRef.tb_polite_dbg__DOT__d),8);
    bufp->fullWData(oldp+9,(vlSelfRef.tb_polite_dbg__DOT__psum_all),96);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_polite_dbg__DOT__mul_all),32);
    bufp->fullWData(oldp+13,(vlSelfRef.tb_polite_dbg__DOT__sum_all),96);
    bufp->fullCData(oldp+16,(vlSelfRef.tb_polite_dbg__DOT__m_left),4);
    bufp->fullCData(oldp+17,(vlSelfRef.tb_polite_dbg__DOT__m_k),3);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_polite_dbg__DOT__m_val),24);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_polite_dbg__DOT__err_count),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_polite_dbg__DOT__chk_count),32);
    bufp->fullBit(oldp+21,(vlSelfRef.tb_polite_dbg__DOT__sb_active));
    bufp->fullBit(oldp+22,(vlSelfRef.tb_polite_dbg__DOT__prev_open));
    bufp->fullBit(oldp+23,(vlSelfRef.tb_polite_dbg__DOT__s_en));
    bufp->fullBit(oldp+24,(vlSelfRef.tb_polite_dbg__DOT__s_start));
    bufp->fullBit(oldp+25,(vlSelfRef.tb_polite_dbg__DOT__s_tick));
    bufp->fullCData(oldp+26,(vlSelfRef.tb_polite_dbg__DOT__s_len),4);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_polite_dbg__DOT__s_val),24);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_polite_dbg__DOT__sb_exp),24);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_polite_dbg__DOT__sb_got),24);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_polite_dbg__DOT__sb_need),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_polite_dbg__DOT__sb_cnt),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_polite_dbg__DOT__n_reads),32);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                             [0U][0U]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                             [0U][1U]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                             [1U][0U]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                             [1U][1U]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                             [2U][0U]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                             [2U][1U]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                             [3U][0U]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                             [3U][1U]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                             [4U][0U]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                             [4U][1U]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                             [5U][0U]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                             [5U][1U]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.tb_polite_dbg__DOT__cov_add_rb[0]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.tb_polite_dbg__DOT__cov_add_rb[1]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.tb_polite_dbg__DOT__cov_pe[0]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.tb_polite_dbg__DOT__cov_pe[1]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.tb_polite_dbg__DOT__cov_pe[2]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.tb_polite_dbg__DOT__cov_pe[3]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.tb_polite_dbg__DOT__cov_hold_in_freeze),32);
    bufp->fullIData(oldp+52,(vlSelfRef.tb_polite_dbg__DOT__cov_b2b_min),32);
    bufp->fullIData(oldp+53,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps),24);
    bufp->fullCData(oldp+54,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu),8);
    bufp->fullIData(oldp+55,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm),24);
    bufp->fullIData(oldp+56,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v),24);
    bufp->fullBit(oldp+57,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__wide));
    bufp->fullBit(oldp+58,(vlSelfRef.tb_polite_dbg__DOT__ofz));
    bufp->fullBit(oldp+59,(vlSelfRef.tb_polite_dbg__DOT__dbg_tick));
    bufp->fullCData(oldp+60,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn),4);
    bufp->fullCData(oldp+61,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e),4);
    bufp->fullCData(oldp+62,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e),3);
    bufp->fullIData(oldp+63,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e),24);
    bufp->fullCData(oldp+64,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw),3);
    bufp->fullCData(oldp+65,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk),3);
    bufp->fullBit(oldp+66,(vlSelfRef.tb_polite_dbg__DOT__phase));
    bufp->fullBit(oldp+67,((0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left))));
    bufp->fullCData(oldp+68,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left),4);
    bufp->fullCData(oldp+69,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k),3);
    bufp->fullIData(oldp+70,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val),24);
    bufp->fullBit(oldp+71,(vlSelfRef.tb_polite_dbg__DOT__clk));
    bufp->fullBit(oldp+72,(vlSelfRef.tb_polite_dbg__DOT__rst_n));
    bufp->fullIData(oldp+73,(vlSelfRef.tb_polite_dbg__DOT__unnamedblk11__DOT__n_rand),32);
}
