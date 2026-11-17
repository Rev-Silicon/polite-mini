// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_ctrl.h for the primary calling header

#include "Vtb_polite_ctrl__pch.h"
#include "Vtb_polite_ctrl___024root.h"

VL_ATTR_COLD void Vtb_polite_ctrl___024root___eval_static__TOP(Vtb_polite_ctrl___024root* vlSelf);
VL_ATTR_COLD void Vtb_polite_ctrl___024root____Vm_traceActivitySetAll(Vtb_polite_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_polite_ctrl___024root___eval_static(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_polite_ctrl___024root___eval_static__TOP(vlSelf);
    Vtb_polite_ctrl___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtb_polite_ctrl___024root___eval_final(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_ctrl___024root___dump_triggers__stl(Vtb_polite_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_polite_ctrl___024root___eval_phase__stl(Vtb_polite_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_polite_ctrl___024root___eval_settle(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_settle\n"); );
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
            Vtb_polite_ctrl___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("polite_ctrl_tb.sv", 26, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_polite_ctrl___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_ctrl___024root___dump_triggers__stl(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vtb_polite_ctrl___024root___stl_sequent__TOP__0(Vtb_polite_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_polite_ctrl___024root___eval_stl(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_polite_ctrl___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_polite_ctrl___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_polite_ctrl___024root___eval_triggers__stl(Vtb_polite_ctrl___024root* vlSelf);

VL_ATTR_COLD bool Vtb_polite_ctrl___024root___eval_phase__stl(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_polite_ctrl___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_polite_ctrl___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_ctrl___024root___dump_triggers__act(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_polite_ctrl.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_polite_ctrl.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_polite_ctrl.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_ctrl___024root___dump_triggers__nba(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_polite_ctrl.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_polite_ctrl.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_polite_ctrl.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_polite_ctrl___024root____Vm_traceActivitySetAll(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root____Vm_traceActivitySetAll\n"); );
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
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
}

VL_ATTR_COLD void Vtb_polite_ctrl___024root___ctor_var_reset(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_polite_ctrl__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__d = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_ctrl__DOT__ins = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_ctrl__DOT__dump_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__fz_open = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__pe_ovf_any = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__phase = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__run_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__inbuf = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_ctrl__DOT__illegal = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__illegal_d = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__ovf_d = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__run_now = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__acc_en = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__clr_psum = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__clr_outbuf = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dump_load = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dump_abort = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dbg_start = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dbg_op = VL_RAND_RESET_I(4);
    vlSelf->tb_polite_ctrl__DOT__dbg_pe = VL_RAND_RESET_I(2);
    vlSelf->tb_polite_ctrl__DOT__status = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_ctrl__DOT__test_step = 0;
    vlSelf->tb_polite_ctrl__DOT__cmd_strobes = VL_RAND_RESET_I(7);
    vlSelf->tb_polite_ctrl__DOT__m_phase = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__m_run_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__m_inbuf = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_ctrl__DOT__m_illegal = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__m_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__exp_now = VL_RAND_RESET_I(31);
    vlSelf->tb_polite_ctrl__DOT__err_count = 0;
    vlSelf->tb_polite_ctrl__DOT__chk_count = 0;
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__en = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__d = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__ins = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__dump_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__fz_open = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__pe_ovf_any = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__phase = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__run_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__inbuf = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__illegal = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__illegal_d = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__ovf_d = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__run_now = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__acc_en = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__clr_psum = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__clr_outbuf = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__dump_load = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__dump_abort = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__dbg_start = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__status = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__cmd_strobes = VL_RAND_RESET_I(7);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__m_phase = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__m_run_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__m_inbuf = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__m_illegal = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__m_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT____Vtogcov__exp_now = VL_RAND_RESET_I(31);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__is_dbg = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__bad_bank = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__dbg_req = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__clr_coll = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__clr_ok = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__clr_flg = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__ill_set = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__acc_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__inbuf_d = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_load = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_run = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_dload = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_clear = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_rsvd = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_dbg = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__bad_bank = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__dbg_req = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__no_ob = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_dabrt = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__clr_coll = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__clr_ok = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__clr_flg = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__ill_set = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__acc_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d = VL_RAND_RESET_I(8);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_1_0 = VL_RAND_RESET_I(12);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_3_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_4_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_5_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_6_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_7_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_8_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e = VL_RAND_RESET_I(31);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__73__arg_v = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__73__no_ob = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__73__bad_bank = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__73__dbg_req = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_coll = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_ok = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_flg = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e = VL_RAND_RESET_I(31);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__263__arg_v = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__263__no_ob = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__263__dbg_req = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_ok = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_flg = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__263__ill_set = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_polite_ctrl__DOT__model_comb__263__acc_ovf = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__run_now = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__acc_en = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__clr_psum = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__clr_outbuf = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__dump_load = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__dump_abort = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__dbg_start = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_1_0 = VL_RAND_RESET_I(12);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__phase = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__run_busy = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__inbuf = VL_RAND_RESET_I(8);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__illegal = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_3_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_4_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_5_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__fz_open = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__dump_busy = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_6_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_7_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_8_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__status = VL_RAND_RESET_I(8);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__clr_flg = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_polite_ctrl__DOT__pe_ovf_any = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_polite_ctrl__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_polite_ctrl__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
