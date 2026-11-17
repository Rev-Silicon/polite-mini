// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_dbg.h for the primary calling header

#include "Vtb_polite_dbg__pch.h"
#include "Vtb_polite_dbg___024root.h"

VL_ATTR_COLD void Vtb_polite_dbg___024root___eval_static__TOP(Vtb_polite_dbg___024root* vlSelf);
VL_ATTR_COLD void Vtb_polite_dbg___024root____Vm_traceActivitySetAll(Vtb_polite_dbg___024root* vlSelf);

VL_ATTR_COLD void Vtb_polite_dbg___024root___eval_static(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_polite_dbg___024root___eval_static__TOP(vlSelf);
    Vtb_polite_dbg___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtb_polite_dbg___024root___eval_final(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_dbg___024root___dump_triggers__stl(Vtb_polite_dbg___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_polite_dbg___024root___eval_phase__stl(Vtb_polite_dbg___024root* vlSelf);

VL_ATTR_COLD void Vtb_polite_dbg___024root___eval_settle(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___eval_settle\n"); );
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
            Vtb_polite_dbg___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("polite_dbg_tb.sv", 47, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_polite_dbg___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_dbg___024root___dump_triggers__stl(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vtb_polite_dbg___024root___stl_sequent__TOP__0(Vtb_polite_dbg___024root* vlSelf);

VL_ATTR_COLD void Vtb_polite_dbg___024root___eval_stl(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_polite_dbg___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_polite_dbg___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_polite_dbg___024root___eval_triggers__stl(Vtb_polite_dbg___024root* vlSelf);

VL_ATTR_COLD bool Vtb_polite_dbg___024root___eval_phase__stl(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_polite_dbg___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_polite_dbg___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_dbg___024root___dump_triggers__act(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_polite_dbg.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_polite_dbg.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_polite_dbg.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_dbg___024root___dump_triggers__nba(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_polite_dbg.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_polite_dbg.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_polite_dbg.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_polite_dbg___024root____Vm_traceActivitySetAll(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
}

VL_ATTR_COLD void Vtb_polite_dbg___024root___ctor_var_reset(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_polite_dbg__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__phase = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__op = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_dbg__DOT__pe = VL_RAND_RESET_I(2);
    vlSelf->tb_polite_dbg__DOT__run_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__status = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_dbg__DOT__inbuf = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_dbg__DOT__d = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(96, vlSelf->tb_polite_dbg__DOT__psum_all);
    vlSelf->tb_polite_dbg__DOT__mul_all = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->tb_polite_dbg__DOT__sum_all);
    vlSelf->tb_polite_dbg__DOT__ofz = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__dbg_tick = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__m_left = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_dbg__DOT__m_k = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_dbg__DOT__m_val = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT__s_en = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__s_start = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__s_tick = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__s_len = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_dbg__DOT__s_val = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT__err_count = 0;
    vlSelf->tb_polite_dbg__DOT__chk_count = 0;
    vlSelf->tb_polite_dbg__DOT__sb_active = 0;
    vlSelf->tb_polite_dbg__DOT__sb_exp = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT__sb_got = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT__sb_need = 0;
    vlSelf->tb_polite_dbg__DOT__sb_cnt = 0;
    vlSelf->tb_polite_dbg__DOT__n_reads = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_polite_dbg__DOT__cov_op_phase[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_polite_dbg__DOT__cov_add_rb[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_polite_dbg__DOT__cov_pe[__Vi0] = 0;
    }
    vlSelf->tb_polite_dbg__DOT__cov_hold_in_freeze = 0;
    vlSelf->tb_polite_dbg__DOT__cov_b2b_min = 0;
    vlSelf->tb_polite_dbg__DOT__prev_open = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__en = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__phase = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__start = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__op = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__pe = VL_RAND_RESET_I(2);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__run_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__status = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__inbuf = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__d = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(96, vlSelf->tb_polite_dbg__DOT____Vtogcov__psum_all);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__mul_all = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->tb_polite_dbg__DOT____Vtogcov__sum_all);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__open = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__ofz = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__dbg_tick = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__dbg_nib = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__m_left = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__m_k = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__m_val = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__s_en = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__s_start = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__s_tick = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__s_len = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__s_val = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__sb_active = 0;
    vlSelf->tb_polite_dbg__DOT____Vtogcov__sb_exp = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__sb_got = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT____Vtogcov__prev_open = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__unnamedblk11__DOT__n_rand = 0;
    vlSelf->tb_polite_dbg__DOT____Vlvbound_hf74c54a3__0 = 0;
    vlSelf->tb_polite_dbg__DOT____Vlvbound_h66fb07c1__0 = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__fz_left = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__fz_k = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__fz_val = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__ps = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__mu = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__sm = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__v = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__wide = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__left_e = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__k_e = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__val_e = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__fk_raw = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__fk = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__vn = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_left = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_k = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT__dut__DOT____Vtogcov__v = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT__dut__DOT____Vtogcov__wide = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk = VL_RAND_RESET_I(3);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_1_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_3_0 = VL_RAND_RESET_I(24);
    vlSelf->tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_4_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_dbg__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_dbg__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_left = VL_RAND_RESET_I(4);
    vlSelf->__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_1_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_3_0 = VL_RAND_RESET_I(24);
    vlSelf->__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_val = VL_RAND_RESET_I(24);
    vlSelf->__Vsampled_TOP__tb_polite_dbg__DOT__dbg_tick = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_dbg__DOT__phase = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_4_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_k = VL_RAND_RESET_I(3);
    vlSelf->__Vsampled_TOP__tb_polite_dbg__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_dbg__DOT__op = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_polite_dbg__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_polite_dbg__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
