// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "Vsim_top__pch.h"
#include "Vsim_top___024root.h"

VL_ATTR_COLD void Vsim_top___024root___eval_static(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsim_top___024root___eval_initial__TOP(Vsim_top___024root* vlSelf);

VL_ATTR_COLD void Vsim_top___024root___eval_initial(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_initial\n"); );
    // Body
    Vsim_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vsim_top___024root___eval_final(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__stl(Vsim_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsim_top___024root___eval_phase__stl(Vsim_top___024root* vlSelf);

VL_ATTR_COLD void Vsim_top___024root___eval_settle(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vsim_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/tb/sim_top.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsim_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__stl(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim_top___024root___eval_triggers__stl(Vsim_top___024root* vlSelf);
VL_ATTR_COLD void Vsim_top___024root___eval_stl(Vsim_top___024root* vlSelf);

VL_ATTR_COLD bool Vsim_top___024root___eval_phase__stl(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsim_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vsim_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__ico(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__act(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__nba(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim_top___024root___ctor_var_reset(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->ena = VL_RAND_RESET_I(1);
    vlSelf->ui_in = VL_RAND_RESET_I(8);
    vlSelf->uio_in = VL_RAND_RESET_I(8);
    vlSelf->uo_out = VL_RAND_RESET_I(8);
    vlSelf->uio_out = VL_RAND_RESET_I(8);
    vlSelf->uio_oe = VL_RAND_RESET_I(8);
    vlSelf->ena_q = VL_RAND_RESET_I(1);
    vlSelf->phase = VL_RAND_RESET_I(1);
    vlSelf->otick_q = VL_RAND_RESET_I(1);
    vlSelf->run_busy = VL_RAND_RESET_I(1);
    vlSelf->illegal = VL_RAND_RESET_I(1);
    vlSelf->ovf = VL_RAND_RESET_I(1);
    vlSelf->dump_busy = VL_RAND_RESET_I(1);
    vlSelf->fz_open = VL_RAND_RESET_I(1);
    vlSelf->in_i_q = VL_RAND_RESET_I(8);
    vlSelf->in_d_q = VL_RAND_RESET_I(8);
    vlSelf->uo_q = VL_RAND_RESET_I(8);
    vlSelf->core_uo = VL_RAND_RESET_I(8);
    vlSelf->inbuf = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->psum[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->product[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->sim_top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT____Vtogcov__rst_n = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT____Vtogcov__ena = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT____Vtogcov__ui_in = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT____Vtogcov__uio_in = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT____Vtogcov__uo_out = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT____Vtogcov__uio_out = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT____Vtogcov__uio_oe = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT____Vtogcov__ena_q = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT____Vtogcov__phase = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT____Vtogcov__otick_q = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT____Vtogcov__run_busy = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT____Vtogcov__illegal = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT____Vtogcov__ovf = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT____Vtogcov__dump_busy = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT____Vtogcov__fz_open = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT____Vtogcov__in_i_q = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT____Vtogcov__in_d_q = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT____Vtogcov__uo_q = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT____Vtogcov__core_uo = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT____Vtogcov__inbuf = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->sim_top__DOT____Vtogcov__psum[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->sim_top__DOT____Vtogcov__product[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->sim_top__DOT__dut__DOT__ena_q = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__in_d_q = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT__in_i_q = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT__uo_q = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT__uo_pad = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT__otick_q = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__core_uo = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT__phase = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__run_busy = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__illegal = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__illegal_d = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__ovf_d = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__run_now = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__clr_psum = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__clr_outbuf = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__dump_load = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__dbg_start = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__dump_busy = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__ofz = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__dbg_tick = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__dump_nib = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__dut__DOT__inbuf = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT__status = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT__pe_ovf = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(96, vlSelf->sim_top__DOT__dut__DOT__psum_all);
    VL_RAND_RESET_W(96, vlSelf->sim_top__DOT__dut__DOT__sum_all);
    vlSelf->sim_top__DOT__dut__DOT__mul_all = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->sim_top__DOT__dut__DOT__cap);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uio_out = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__ena_q = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__otick_q = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__phase = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__run_busy = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__illegal = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__ovf = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__illegal_d = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__ovf_d = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__run_now = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__clr_psum = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__clr_outbuf = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_load = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_abort = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_start = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_busy = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__fz_open = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__ofz = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_tick = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_nib = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_nib = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__pe_ovf = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(96, vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all);
    VL_RAND_RESET_W(96, vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all);
    vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__is_dbg = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__bad_bank = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__dbg_req = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clr_coll = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clr_ok = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clr_flg = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__ill_set = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__acc_ovf = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__inbuf_d = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__pe_ovf_any = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_load = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_run = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dload = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_clear = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_rsvd = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dbg = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__bad_bank = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__dbg_req = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_coll = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_ok = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_flg = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__ill_set = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__acc_ovf = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fz_left = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fz_k = VL_RAND_RESET_I(3);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fz_val = VL_RAND_RESET_I(24);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__ps = VL_RAND_RESET_I(24);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__mu = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__sm = VL_RAND_RESET_I(24);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__v = VL_RAND_RESET_I(24);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__wide = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__left_e = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__k_e = VL_RAND_RESET_I(3);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__val_e = VL_RAND_RESET_I(24);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fk_raw = VL_RAND_RESET_I(3);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fk = VL_RAND_RESET_I(3);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__vn = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_k = VL_RAND_RESET_I(3);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val = VL_RAND_RESET_I(24);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps = VL_RAND_RESET_I(24);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu = VL_RAND_RESET_I(8);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm = VL_RAND_RESET_I(24);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v = VL_RAND_RESET_I(24);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__wide = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__k_e = VL_RAND_RESET_I(3);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e = VL_RAND_RESET_I(24);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk_raw = VL_RAND_RESET_I(3);
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx = VL_RAND_RESET_I(5);
    vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel = VL_RAND_RESET_I(2);
    vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub = VL_RAND_RESET_I(5);
    vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w = VL_RAND_RESET_I(24);
    vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__step = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__k = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx = VL_RAND_RESET_I(5);
    vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__pe_sel = VL_RAND_RESET_I(2);
    vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub = VL_RAND_RESET_I(5);
    vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w = VL_RAND_RESET_I(24);
    vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__step = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
