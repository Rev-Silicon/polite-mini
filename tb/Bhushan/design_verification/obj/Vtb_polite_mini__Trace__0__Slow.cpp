// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_polite_mini__Syms.h"


VL_ATTR_COLD void Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0(Vtb_polite_mini___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__0(Vtb_polite_mini___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0(Vtb_polite_mini___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__0(Vtb_polite_mini___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_polite_mini___024root__trace_init_sub__TOP__0(Vtb_polite_mini___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_polite_mini", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+157,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+159,0,"ui_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+160,0,"uio_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"uo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"uio_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"uio_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+161,0,"cfg_num_items",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+162,0,"error_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+163,0,"check_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+15,0,"edge_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, false,-1, 63,0);
    tracep->declBit(c+17,0,"m_ena_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"m_in_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"m_in_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"m_uo_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"m_uo_pad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+22,0,"m_otick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"m_pad_loaded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"m_exec_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"m_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"m_rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"m_inbuf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+28,0,"m_ill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"m_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("m_psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+30+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("m_mul", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+34+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+38,0,"m_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"m_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("m_word", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+40+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+44,0,"m_fz_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+45,0,"m_fz_k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+46,0,"m_fz_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("exp_psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("exp_mul", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+6+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+10,0,"exp_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("dump_snapshot", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+165,0,"HAS_OUTBUF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+159,0,"ui_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"uo_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+160,0,"uio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"uio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"uio_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+158,0,"ena",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"ena_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"in_d_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+50,0,"in_i_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"uo_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"uo_pad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+52,0,"otick_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"core_uo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+54,0,"phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"run_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"illegal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"illegal_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"ovf_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"run_now",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"acc_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"clr_psum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"clr_outbuf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"dump_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"dump_abort",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"dbg_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"dump_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"fz_open",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"ofz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"dbg_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"dbg_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+72,0,"dbg_nib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+73,0,"dump_nib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+74,0,"dbg_pe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+75,0,"inbuf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+76,0,"status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+77,0,"pe_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+78,0,"psum_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declArray(c+81,0,"sum_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+84,0,"mul_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+85,0,"cap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->pushPrefix("g_outbuf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_outbuf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+157,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"phase",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"hold",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"abort",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+85,0,"cap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+67,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"nib",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("word", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+88+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+92,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+93,0,"pe_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+94,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+95,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+96,0,"wn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+97,0,"step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_pe[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+165,0,"ROW2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+165,0,"COL2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+99,0,"ps",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+100,0,"mu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_pe[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+165,0,"ROW2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+166,0,"COL2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+101,0,"ps",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+102,0,"mu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_pe[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+166,0,"ROW2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+165,0,"COL2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+103,0,"ps",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+104,0,"mu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_pe[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+166,0,"ROW2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+166,0,"COL2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+105,0,"ps",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+106,0,"mu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+165,0,"HAS_OUTBUF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+157,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+50,0,"ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+67,0,"dump_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"fz_open",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"pe_ovf_any",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"phase",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"run_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"inbuf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+56,0,"illegal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"ovf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"illegal_d",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"ovf_d",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"run_now",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"acc_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"clr_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"clr_outbuf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"dump_load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"dump_abort",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"dbg_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"dbg_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+74,0,"dbg_pe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+76,0,"status",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+167,0,"OP_NOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+168,0,"OP_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+169,0,"OP_RUN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+170,0,"OP_DLOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+171,0,"OP_DABRT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+172,0,"OP_CLEAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+173,0,"OP_DFLAG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+174,0,"OP_DINP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+71,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+108,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+109,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"is_run",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"is_dload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"is_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"is_rsvd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"is_dbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"bad_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"dbg_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"no_ob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"is_dabrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"clr_coll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"clr_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"clr_flg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"ill_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"acc_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"inbuf_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_dbg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+157,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"phase",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+74,0,"pe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+55,0,"run_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"status",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+75,0,"inbuf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+49,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+78,0,"psum_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+84,0,"mul_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+81,0,"sum_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+68,0,"open",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"ofz",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"dbg_tick",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"dbg_nib",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"fz_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+125,0,"fz_k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+126,0,"fz_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+127,0,"ps",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+128,0,"mu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+129,0,"sm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+130,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+131,0,"wide",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"left_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+133,0,"k_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+134,0,"val_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+135,0,"fk_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+136,0,"fk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+72,0,"vn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_outmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+70,0,"dbg_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"dbg_nib",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+67,0,"dump_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"dump_nib",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+58,0,"illegal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"ovf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"core_uo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_top_sva", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+157,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"ena",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"uo_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"uio_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"uio_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+48,0,"ena_q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"otick_q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"in_d_q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+50,0,"in_i_q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"uo_q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"uo_pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+78,0,"psum_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+84,0,"mul_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"run_now",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"acc_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"clr_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"run_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"dump_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"dump_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"ofz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"dbg_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"fz_open",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"dump_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0(Vtb_polite_mini___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+157,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+138,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+60,0,"run_now",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"acc_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+100,0,"mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+139,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+140,0,"ovf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
}

VL_ATTR_COLD void Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__0(Vtb_polite_mini___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+157,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+143,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+60,0,"run_now",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"acc_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+102,0,"mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+145,0,"ovf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+147,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
}

VL_ATTR_COLD void Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0(Vtb_polite_mini___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+157,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+138,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+60,0,"run_now",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"acc_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+104,0,"mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+149,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+150,0,"ovf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+152,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
}

VL_ATTR_COLD void Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__0(Vtb_polite_mini___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root__trace_init_sub__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+157,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+143,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+60,0,"run_now",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"acc_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+106,0,"mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+153,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+154,0,"ovf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+156,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
}

VL_ATTR_COLD void Vtb_polite_mini___024root__trace_init_top(Vtb_polite_mini___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_polite_mini___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_polite_mini___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_polite_mini___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_polite_mini___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_polite_mini___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_polite_mini___024root__trace_register(Vtb_polite_mini___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_polite_mini___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_polite_mini___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_polite_mini___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_polite_mini___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_polite_mini___024root__trace_const_0_sub_0(Vtb_polite_mini___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_polite_mini___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root__trace_const_0\n"); );
    // Init
    Vtb_polite_mini___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_polite_mini___024root*>(voidSelf);
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_polite_mini___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_polite_mini___024root__trace_const_0_sub_0(Vtb_polite_mini___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+164,(0U),8);
    bufp->fullBit(oldp+165,(1U));
    bufp->fullBit(oldp+166,(0U));
    bufp->fullCData(oldp+167,(0U),4);
    bufp->fullCData(oldp+168,(1U),4);
    bufp->fullCData(oldp+169,(2U),4);
    bufp->fullCData(oldp+170,(3U),4);
    bufp->fullCData(oldp+171,(4U),4);
    bufp->fullCData(oldp+172,(5U),4);
    bufp->fullCData(oldp+173,(6U),4);
    bufp->fullCData(oldp+174,(0xbU),4);
    bufp->fullBit(oldp+175,(0U));
}

VL_ATTR_COLD void Vtb_polite_mini___024root__trace_full_0_sub_0(Vtb_polite_mini___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_polite_mini___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root__trace_full_0\n"); );
    // Init
    Vtb_polite_mini___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_polite_mini___024root*>(voidSelf);
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_polite_mini___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_polite_mini___024root__trace_full_0_sub_0(Vtb_polite_mini___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_polite_mini__DOT__rst_n));
    bufp->fullIData(oldp+2,(vlSelfRef.tb_polite_mini__DOT__exp_psum[0]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_polite_mini__DOT__exp_psum[1]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_polite_mini__DOT__exp_psum[2]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_polite_mini__DOT__exp_psum[3]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_polite_mini__DOT__exp_mul[0]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_polite_mini__DOT__exp_mul[1]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_polite_mini__DOT__exp_mul[2]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_polite_mini__DOT__exp_mul[3]),32);
    bufp->fullCData(oldp+10,(vlSelfRef.tb_polite_mini__DOT__exp_buf),8);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_polite_mini__DOT__dump_snapshot[0]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_polite_mini__DOT__dump_snapshot[1]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_polite_mini__DOT__dump_snapshot[2]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_polite_mini__DOT__dump_snapshot[3]),32);
    bufp->fullQData(oldp+15,(vlSelfRef.tb_polite_mini__DOT__edge_n),64);
    bufp->fullBit(oldp+17,(vlSelfRef.tb_polite_mini__DOT__m_ena_q));
    bufp->fullCData(oldp+18,(vlSelfRef.tb_polite_mini__DOT__m_in_d),8);
    bufp->fullCData(oldp+19,(vlSelfRef.tb_polite_mini__DOT__m_in_i),8);
    bufp->fullCData(oldp+20,(vlSelfRef.tb_polite_mini__DOT__m_uo_q),8);
    bufp->fullCData(oldp+21,(vlSelfRef.tb_polite_mini__DOT__m_uo_pad),8);
    bufp->fullBit(oldp+22,(vlSelfRef.tb_polite_mini__DOT__m_otick));
    bufp->fullBit(oldp+23,(vlSelfRef.tb_polite_mini__DOT__m_pad_loaded));
    bufp->fullBit(oldp+24,(vlSelfRef.tb_polite_mini__DOT__m_exec_phase));
    bufp->fullBit(oldp+25,(vlSelfRef.tb_polite_mini__DOT__m_phase));
    bufp->fullBit(oldp+26,(vlSelfRef.tb_polite_mini__DOT__m_rb));
    bufp->fullCData(oldp+27,(vlSelfRef.tb_polite_mini__DOT__m_inbuf),8);
    bufp->fullBit(oldp+28,(vlSelfRef.tb_polite_mini__DOT__m_ill));
    bufp->fullBit(oldp+29,(vlSelfRef.tb_polite_mini__DOT__m_ovf));
    bufp->fullIData(oldp+30,(vlSelfRef.tb_polite_mini__DOT__m_psum[0]),24);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_polite_mini__DOT__m_psum[1]),24);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_polite_mini__DOT__m_psum[2]),24);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_polite_mini__DOT__m_psum[3]),24);
    bufp->fullCData(oldp+34,(vlSelfRef.tb_polite_mini__DOT__m_mul[0]),8);
    bufp->fullCData(oldp+35,(vlSelfRef.tb_polite_mini__DOT__m_mul[1]),8);
    bufp->fullCData(oldp+36,(vlSelfRef.tb_polite_mini__DOT__m_mul[2]),8);
    bufp->fullCData(oldp+37,(vlSelfRef.tb_polite_mini__DOT__m_mul[3]),8);
    bufp->fullBit(oldp+38,(vlSelfRef.tb_polite_mini__DOT__m_busy));
    bufp->fullIData(oldp+39,(vlSelfRef.tb_polite_mini__DOT__m_idx),32);
    bufp->fullIData(oldp+40,(vlSelfRef.tb_polite_mini__DOT__m_word[0]),24);
    bufp->fullIData(oldp+41,(vlSelfRef.tb_polite_mini__DOT__m_word[1]),24);
    bufp->fullIData(oldp+42,(vlSelfRef.tb_polite_mini__DOT__m_word[2]),24);
    bufp->fullIData(oldp+43,(vlSelfRef.tb_polite_mini__DOT__m_word[3]),24);
    bufp->fullIData(oldp+44,(vlSelfRef.tb_polite_mini__DOT__m_fz_left),32);
    bufp->fullIData(oldp+45,(vlSelfRef.tb_polite_mini__DOT__m_fz_k),32);
    bufp->fullIData(oldp+46,(vlSelfRef.tb_polite_mini__DOT__m_fz_val),24);
    bufp->fullCData(oldp+47,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad),8);
    bufp->fullBit(oldp+48,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q));
    bufp->fullCData(oldp+49,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q),8);
    bufp->fullCData(oldp+50,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q),8);
    bufp->fullCData(oldp+51,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q),8);
    bufp->fullBit(oldp+52,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__otick_q));
    bufp->fullCData(oldp+53,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo),8);
    bufp->fullBit(oldp+54,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__phase));
    bufp->fullBit(oldp+55,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_busy));
    bufp->fullBit(oldp+56,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__illegal));
    bufp->fullBit(oldp+57,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ovf));
    bufp->fullBit(oldp+58,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__illegal_d));
    bufp->fullBit(oldp+59,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ovf_d));
    bufp->fullBit(oldp+60,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_now));
    bufp->fullBit(oldp+61,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__acc_en));
    bufp->fullBit(oldp+62,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__clr_psum));
    bufp->fullBit(oldp+63,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__clr_outbuf));
    bufp->fullBit(oldp+64,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_load));
    bufp->fullBit(oldp+65,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_abort));
    bufp->fullBit(oldp+66,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dbg_start));
    bufp->fullBit(oldp+67,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy));
    bufp->fullBit(oldp+68,((0U != (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left))));
    bufp->fullBit(oldp+69,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ofz));
    bufp->fullBit(oldp+70,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dbg_tick));
    bufp->fullCData(oldp+71,((0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+72,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn),4);
    bufp->fullCData(oldp+73,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_nib),4);
    bufp->fullCData(oldp+74,((3U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))),2);
    bufp->fullCData(oldp+75,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf),8);
    bufp->fullCData(oldp+76,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status),8);
    bufp->fullCData(oldp+77,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf),4);
    bufp->fullWData(oldp+78,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all),96);
    bufp->fullWData(oldp+81,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all),96);
    bufp->fullIData(oldp+84,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all),32);
    bufp->fullWData(oldp+85,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap),96);
    bufp->fullIData(oldp+88,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[0]),24);
    bufp->fullIData(oldp+89,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[1]),24);
    bufp->fullIData(oldp+90,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[2]),24);
    bufp->fullIData(oldp+91,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[3]),24);
    bufp->fullCData(oldp+92,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx),5);
    bufp->fullCData(oldp+93,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel),2);
    bufp->fullCData(oldp+94,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub),5);
    bufp->fullIData(oldp+95,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w),24);
    bufp->fullCData(oldp+96,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn),4);
    bufp->fullBit(oldp+97,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__step));
    bufp->fullIData(oldp+98,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__k),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.psum),24);
    bufp->fullCData(oldp+100,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.mul),8);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.psum),24);
    bufp->fullCData(oldp+102,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.mul),8);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.psum),24);
    bufp->fullCData(oldp+104,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.mul),8);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.psum),24);
    bufp->fullCData(oldp+106,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.mul),8);
    bufp->fullBit(oldp+107,((0U != (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf))));
    bufp->fullCData(oldp+108,((0xfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))),4);
    bufp->fullBit(oldp+109,((1U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                            >> 4U)))));
    bufp->fullBit(oldp+110,((2U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                            >> 4U)))));
    bufp->fullBit(oldp+111,((3U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                            >> 4U)))));
    bufp->fullBit(oldp+112,((5U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                            >> 4U)))));
    bufp->fullBit(oldp+113,((0xbU < (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                             >> 4U)))));
    bufp->fullBit(oldp+114,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__is_dbg));
    bufp->fullBit(oldp+115,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__bad_bank));
    bufp->fullBit(oldp+116,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__dbg_req));
    bufp->fullBit(oldp+117,((4U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                            >> 4U)))));
    bufp->fullBit(oldp+118,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_coll));
    bufp->fullBit(oldp+119,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_ok));
    bufp->fullBit(oldp+120,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_flg));
    bufp->fullBit(oldp+121,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__ill_set));
    bufp->fullBit(oldp+122,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__acc_ovf));
    bufp->fullCData(oldp+123,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d),8);
    bufp->fullCData(oldp+124,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left),4);
    bufp->fullCData(oldp+125,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_k),3);
    bufp->fullIData(oldp+126,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val),24);
    bufp->fullIData(oldp+127,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps),24);
    bufp->fullCData(oldp+128,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu),8);
    bufp->fullIData(oldp+129,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm),24);
    bufp->fullIData(oldp+130,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v),24);
    bufp->fullBit(oldp+131,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__wide));
    bufp->fullCData(oldp+132,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__left_e),4);
    bufp->fullCData(oldp+133,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e),3);
    bufp->fullIData(oldp+134,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e),24);
    bufp->fullCData(oldp+135,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk_raw),3);
    bufp->fullCData(oldp+136,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk),3);
    bufp->fullCData(oldp+137,((0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+138,((0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                       >> 4U))),4);
    bufp->fullIData(oldp+139,((0xffffffU & vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__PVT__full)),24);
    bufp->fullBit(oldp+140,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.ovf));
    bufp->fullCData(oldp+141,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__PVT__prod),8);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__PVT__full),25);
    bufp->fullCData(oldp+143,((0xfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q))),4);
    bufp->fullIData(oldp+144,((0xffffffU & vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__PVT__full)),24);
    bufp->fullBit(oldp+145,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.ovf));
    bufp->fullCData(oldp+146,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__PVT__prod),8);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__PVT__full),25);
    bufp->fullCData(oldp+148,((0xfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf))),4);
    bufp->fullIData(oldp+149,((0xffffffU & vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__PVT__full)),24);
    bufp->fullBit(oldp+150,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.ovf));
    bufp->fullCData(oldp+151,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__PVT__prod),8);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__PVT__full),25);
    bufp->fullIData(oldp+153,((0xffffffU & vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.__PVT__full)),24);
    bufp->fullBit(oldp+154,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.ovf));
    bufp->fullCData(oldp+155,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.__PVT__prod),8);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.__PVT__full),25);
    bufp->fullBit(oldp+157,(vlSelfRef.tb_polite_mini__DOT__clk));
    bufp->fullBit(oldp+158,(vlSelfRef.tb_polite_mini__DOT__ena));
    bufp->fullCData(oldp+159,(vlSelfRef.tb_polite_mini__DOT__ui_in),8);
    bufp->fullCData(oldp+160,(vlSelfRef.tb_polite_mini__DOT__uio_in),8);
    bufp->fullIData(oldp+161,(vlSelfRef.tb_polite_mini__DOT__cfg_num_items),32);
    bufp->fullIData(oldp+162,(vlSelfRef.tb_polite_mini__DOT__error_count),32);
    bufp->fullIData(oldp+163,(vlSelfRef.tb_polite_mini__DOT__check_count),32);
}
