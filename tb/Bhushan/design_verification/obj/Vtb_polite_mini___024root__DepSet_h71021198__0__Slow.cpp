// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_mini.h for the primary calling header

#include "Vtb_polite_mini__pch.h"
#include "Vtb_polite_mini___024root.h"

VL_ATTR_COLD void Vtb_polite_mini___024root___eval_static__TOP(Vtb_polite_mini___024root* vlSelf);
VL_ATTR_COLD void Vtb_polite_mini___024root____Vm_traceActivitySetAll(Vtb_polite_mini___024root* vlSelf);

VL_ATTR_COLD void Vtb_polite_mini___024root___eval_static(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_polite_mini___024root___eval_static__TOP(vlSelf);
    Vtb_polite_mini___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtb_polite_mini___024root___eval_final(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_mini___024root___dump_triggers__stl(Vtb_polite_mini___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_polite_mini___024root___eval_phase__stl(Vtb_polite_mini___024root* vlSelf);

VL_ATTR_COLD void Vtb_polite_mini___024root___eval_settle(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
            Vtb_polite_mini___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_polite_mini.sv", 33, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_polite_mini___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_mini___024root___dump_triggers__stl(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_polite_mini___024root___eval_triggers__stl(Vtb_polite_mini___024root* vlSelf);
VL_ATTR_COLD void Vtb_polite_mini___024root___eval_stl(Vtb_polite_mini___024root* vlSelf);

VL_ATTR_COLD bool Vtb_polite_mini___024root___eval_phase__stl(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_polite_mini___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_polite_mini___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_mini___024root___dump_triggers__act(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_polite_mini.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_polite_mini.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_polite_mini.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_mini___024root___dump_triggers__nba(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_polite_mini.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_polite_mini.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_polite_mini.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_polite_mini___024root____Vm_traceActivitySetAll(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_polite_mini___024root___ctor_var_reset(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_polite_mini__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__ui_in = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__uio_in = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__cfg_num_items = 0;
    vlSelf->tb_polite_mini__DOT__mon_q.atDefault() = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__error_count = 0;
    vlSelf->tb_polite_mini__DOT__check_count = 0;
    vlSelf->tb_polite_mini__DOT__edge_n = 0;
    vlSelf->tb_polite_mini__DOT__m_ena_q = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__m_in_d = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__m_in_i = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__m_uo_q = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__m_uo_pad = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__m_otick = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__m_pad_loaded = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__m_exec_phase = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__m_phase = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__m_rb = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__m_inbuf = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__m_ill = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__m_ovf = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_polite_mini__DOT__m_psum[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_polite_mini__DOT__m_mul[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_polite_mini__DOT__m_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__m_idx = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_polite_mini__DOT__m_word[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->tb_polite_mini__DOT__m_fz_left = 0;
    vlSelf->tb_polite_mini__DOT__m_fz_k = 0;
    vlSelf->tb_polite_mini__DOT__m_fz_val = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_polite_mini__DOT__exp_psum[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_polite_mini__DOT__exp_mul[__Vi0] = 0;
    }
    vlSelf->tb_polite_mini__DOT__exp_buf = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_polite_mini__DOT__dump_snapshot[__Vi0] = 0;
    }
    vlSelf->tb_polite_mini__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT____Vtogcov__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT____Vtogcov__ena = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT____Vtogcov__ui_in = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT____Vtogcov__uio_in = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT____Vtogcov__uo_out = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT____Vtogcov__uio_out = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT____Vtogcov__m_ena_q = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT____Vtogcov__m_in_d = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT____Vtogcov__m_in_i = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT____Vtogcov__m_uo_q = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT____Vtogcov__m_uo_pad = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT____Vtogcov__m_otick = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT____Vtogcov__m_pad_loaded = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT____Vtogcov__m_exec_phase = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT____Vtogcov__m_phase = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT____Vtogcov__m_rb = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT____Vtogcov__m_inbuf = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT____Vtogcov__m_ill = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT____Vtogcov__m_ovf = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_polite_mini__DOT____Vtogcov__m_psum[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_polite_mini__DOT____Vtogcov__m_mul[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_polite_mini__DOT____Vtogcov__m_busy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_polite_mini__DOT____Vtogcov__m_word[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->tb_polite_mini__DOT____Vtogcov__m_fz_val = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_mini__DOT____Vtogcov__exp_buf = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT__ena_q = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__in_d_q = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT__in_i_q = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT__uo_q = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT__uo_pad = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT__otick_q = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__core_uo = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT__phase = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__run_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__illegal = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__illegal_d = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__ovf_d = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__run_now = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__acc_en = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__clr_psum = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__clr_outbuf = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__dump_load = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__dump_abort = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__dbg_start = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__dump_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__ofz = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__dbg_tick = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__dump_nib = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_mini__DOT__dut__DOT__inbuf = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT__status = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT__pe_ovf = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(96, vlSelf->tb_polite_mini__DOT__dut__DOT__psum_all);
    VL_RAND_RESET_W(96, vlSelf->tb_polite_mini__DOT__dut__DOT__sum_all);
    vlSelf->tb_polite_mini__DOT__dut__DOT__mul_all = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->tb_polite_mini__DOT__dut__DOT__cap);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__ena_q = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__otick_q = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__phase = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__run_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__illegal = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__illegal_d = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__ovf_d = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__run_now = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__acc_en = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__clr_psum = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__clr_outbuf = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_load = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_abort = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_start = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__fz_open = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__ofz = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_tick = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_nib = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_nib = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__status = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__pe_ovf = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(96, vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all);
    VL_RAND_RESET_W(96, vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all);
    vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->tb_polite_mini__DOT__dut__DOT____Vtogcov__cap);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__is_dbg = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__bad_bank = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__dbg_req = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_coll = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_ok = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_flg = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__ill_set = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__acc_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__pe_ovf_any = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_load = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_run = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dload = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_clear = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_rsvd = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dbg = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__bad_bank = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__dbg_req = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dabrt = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_coll = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_ok = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_flg = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__ill_set = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__acc_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_k = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__wide = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__left_e = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk_raw = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_k = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__wide = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__k_e = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk_raw = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx = VL_RAND_RESET_I(5);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_1_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_3_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_4_0 = VL_RAND_RESET_Q(33);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_5_0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_6_0);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_7_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_8_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_9_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_10_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_11_0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_12_0);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_13_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_14_0 = VL_RAND_RESET_I(5);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_15_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_16_0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx = VL_RAND_RESET_I(5);
    vlSelf->tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub = VL_RAND_RESET_I(5);
    vlSelf->tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__step = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__k = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__pe_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub = VL_RAND_RESET_I(5);
    vlSelf->tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__step = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_polite_mini__DOT__dut__DOT__phase = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_pad = VL_RAND_RESET_I(8);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__ena_q = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_1_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_3_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_4_0 = VL_RAND_RESET_Q(33);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__in_d_q = VL_RAND_RESET_I(8);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__in_i_q = VL_RAND_RESET_I(8);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_q = VL_RAND_RESET_I(8);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__otick_q = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_5_0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_6_0);
    VL_RAND_RESET_W(96, vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__psum_all);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__mul_all = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_7_0 = VL_RAND_RESET_I(8);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_8_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_9_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_10_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_11_0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_12_0);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__clr_psum = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__acc_en = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__dump_load = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__dump_busy = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx = VL_RAND_RESET_I(5);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_13_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_14_0 = VL_RAND_RESET_I(5);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__dbg_start = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left = VL_RAND_RESET_I(4);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__run_now = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__ofz = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_polite_mini__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_polite_mini__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
