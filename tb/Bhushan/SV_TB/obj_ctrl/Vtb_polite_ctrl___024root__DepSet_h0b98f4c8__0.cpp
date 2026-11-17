// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_ctrl.h for the primary calling header

#include "Vtb_polite_ctrl__pch.h"
#include "Vtb_polite_ctrl___024root.h"

VL_ATTR_COLD void Vtb_polite_ctrl___024root___eval_initial__TOP(Vtb_polite_ctrl___024root* vlSelf);
VlCoroutine Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0(Vtb_polite_ctrl___024root* vlSelf);
VlCoroutine Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__1(Vtb_polite_ctrl___024root* vlSelf);

void Vtb_polite_ctrl___024root___eval_initial(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_polite_ctrl___024root___eval_initial__TOP(vlSelf);
    Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_ctrl__DOT__clk__0 
        = vlSelfRef.tb_polite_ctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_ctrl__DOT__rst_n__0 
        = vlSelfRef.tb_polite_ctrl__DOT__rst_n;
}

VlCoroutine Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__0(Vtb_polite_ctrl___024root* vlSelf);
VlCoroutine Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__1(Vtb_polite_ctrl___024root* vlSelf);
VlCoroutine Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__2(Vtb_polite_ctrl___024root* vlSelf);
VlCoroutine Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__3(Vtb_polite_ctrl___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
    co_await Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__2(vlSelf);
    co_await Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__3(vlSelf);
}

void Vtb_polite_ctrl___024root___act_sequent__TOP__0(Vtb_polite_ctrl___024root* vlSelf);
void Vtb_polite_ctrl___024root___act_comb__TOP__0(Vtb_polite_ctrl___024root* vlSelf);

void Vtb_polite_ctrl___024root___eval_act(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_polite_ctrl___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0xdULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_polite_ctrl___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

void Vtb_polite_ctrl___024root___nba_sequent__TOP__0(Vtb_polite_ctrl___024root* vlSelf);
void Vtb_polite_ctrl___024root___nba_sequent__TOP__1(Vtb_polite_ctrl___024root* vlSelf);
void Vtb_polite_ctrl___024root___nba_comb__TOP__0(Vtb_polite_ctrl___024root* vlSelf);
void Vtb_polite_ctrl___024root___nba_comb__TOP__1(Vtb_polite_ctrl___024root* vlSelf);

void Vtb_polite_ctrl___024root___eval_nba(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_polite_ctrl___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_polite_ctrl___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_polite_ctrl___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0xdULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_polite_ctrl___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_polite_ctrl___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
}

void Vtb_polite_ctrl___024root___timing_resume(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h8f84950f__0.resume(
                                                   "@(posedge tb_polite_ctrl.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h8f848dce__0.resume(
                                                   "@(negedge tb_polite_ctrl.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_polite_ctrl___024root___timing_commit(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h8f84950f__0.commit(
                                                   "@(posedge tb_polite_ctrl.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h8f848dce__0.commit(
                                                   "@(negedge tb_polite_ctrl.clk)");
    }
}

void Vtb_polite_ctrl___024root___eval_triggers__act(Vtb_polite_ctrl___024root* vlSelf);

bool Vtb_polite_ctrl___024root___eval_phase__act(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_polite_ctrl___024root___eval_triggers__act(vlSelf);
    Vtb_polite_ctrl___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_polite_ctrl___024root___timing_resume(vlSelf);
        Vtb_polite_ctrl___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_polite_ctrl___024root___eval_phase__nba(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_polite_ctrl___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_ctrl___024root___dump_triggers__nba(Vtb_polite_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_ctrl___024root___dump_triggers__act(Vtb_polite_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_polite_ctrl___024root___eval(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n 
        = vlSelfRef.tb_polite_ctrl__DOT__rst_n;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__en 
        = vlSelfRef.tb_polite_ctrl__DOT__en;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__run_now 
        = vlSelfRef.tb_polite_ctrl__DOT__run_now;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__acc_en 
        = vlSelfRef.tb_polite_ctrl__DOT__acc_en;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__clr_psum 
        = vlSelfRef.tb_polite_ctrl__DOT__clr_psum;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__clr_outbuf 
        = vlSelfRef.tb_polite_ctrl__DOT__clr_outbuf;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dump_load 
        = vlSelfRef.tb_polite_ctrl__DOT__dump_load;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dump_abort 
        = vlSelfRef.tb_polite_ctrl__DOT__dump_abort;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dbg_start 
        = vlSelfRef.tb_polite_ctrl__DOT__dbg_start;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_0_0 
        = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_0_0;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_1_0 
        = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_1_0;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__phase 
        = vlSelfRef.tb_polite_ctrl__DOT__phase;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__run_busy 
        = vlSelfRef.tb_polite_ctrl__DOT__run_busy;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__inbuf 
        = vlSelfRef.tb_polite_ctrl__DOT__inbuf;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__illegal 
        = vlSelfRef.tb_polite_ctrl__DOT__illegal;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__ovf 
        = vlSelfRef.tb_polite_ctrl__DOT__ovf;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_2_0 
        = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_2_0;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_3_0 
        = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_3_0;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_4_0 
        = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_4_0;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_5_0 
        = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_5_0;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__fz_open 
        = vlSelfRef.tb_polite_ctrl__DOT__fz_open;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dump_busy 
        = vlSelfRef.tb_polite_ctrl__DOT__dump_busy;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_6_0 
        = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_6_0;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_7_0 
        = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_7_0;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_8_0 
        = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_8_0;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__status 
        = vlSelfRef.tb_polite_ctrl__DOT__status;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__clr_flg 
        = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_flg;
    vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__pe_ovf_any 
        = vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_polite_ctrl___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("polite_ctrl_tb.sv", 26, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_polite_ctrl___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("polite_ctrl_tb.sv", 26, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_polite_ctrl___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_polite_ctrl___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_polite_ctrl___024root___eval_debug_assertions(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
