// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_mini.h for the primary calling header

#include "Vtb_polite_mini__pch.h"
#include "Vtb_polite_mini__Syms.h"
#include "Vtb_polite_mini___024root.h"

VlCoroutine Vtb_polite_mini___024root___eval_initial__TOP__Vtiming__0__2(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___eval_initial__TOP__Vtiming__0__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_polite_mini__DOT__seq_nop__931__n;
    __Vtask_tb_polite_mini__DOT__seq_nop__931__n = 0;
    IData/*31:0*/ __Vtask_tb_polite_mini__DOT__seq_nop__931__tb_polite_mini__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_polite_mini__DOT__seq_nop__931__tb_polite_mini__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    CData/*7:0*/ __Vtask_tb_polite_mini__DOT__driver_drive_item__932__ins;
    __Vtask_tb_polite_mini__DOT__driver_drive_item__932__ins = 0;
    CData/*7:0*/ __Vtask_tb_polite_mini__DOT__driver_drive_item__932__d;
    __Vtask_tb_polite_mini__DOT__driver_drive_item__932__d = 0;
    CData/*0:0*/ __Vtask_tb_polite_mini__DOT__driver_drive_item__932__e;
    __Vtask_tb_polite_mini__DOT__driver_drive_item__932__e = 0;
    // Body
    __Vtask_tb_polite_mini__DOT__seq_nop__931__n = 0xaU;
    __Vtask_tb_polite_mini__DOT__seq_nop__931__tb_polite_mini__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = __Vtask_tb_polite_mini__DOT__seq_nop__931__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_polite_mini__DOT__seq_nop__931__tb_polite_mini__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        __Vtask_tb_polite_mini__DOT__driver_drive_item__932__e = 1U;
        __Vtask_tb_polite_mini__DOT__driver_drive_item__932__d = 0U;
        __Vtask_tb_polite_mini__DOT__driver_drive_item__932__ins = 0U;
        co_await vlSelfRef.__VtrigSched_h6384728f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_polite_mini.clk)", 
                                                             "tb/tb_polite_mini.sv", 
                                                             97);
        vlSelfRef.tb_polite_mini__DOT__uio_in = __Vtask_tb_polite_mini__DOT__driver_drive_item__932__ins;
        vlSelfRef.tb_polite_mini__DOT__ui_in = __Vtask_tb_polite_mini__DOT__driver_drive_item__932__d;
        vlSelfRef.tb_polite_mini__DOT__ena = __Vtask_tb_polite_mini__DOT__driver_drive_item__932__e;
        co_await vlSelfRef.__VtrigSched_h638472ce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_polite_mini.clk)", 
                                                             "tb/tb_polite_mini.sv", 
                                                             99);
        co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                             nullptr, 
                                             "tb/tb_polite_mini.sv", 
                                             100);
        ++(vlSymsp->__Vcoverage[38]);
        ++(vlSymsp->__Vcoverage[398]);
        __Vtask_tb_polite_mini__DOT__seq_nop__931__tb_polite_mini__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_polite_mini__DOT__seq_nop__931__tb_polite_mini__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    ++(vlSymsp->__Vcoverage[399]);
    ++(vlSymsp->__Vcoverage[550]);
    VL_WRITEF_NX("------------------------------------------------\n %@: %0d checks, %0d errors -> %s\n------------------------------------------------\n",0,
                 -1,&(vlSelfRef.tb_polite_mini__DOT__cfg_test_name),
                 32,vlSelfRef.tb_polite_mini__DOT__check_count,
                 32,vlSelfRef.tb_polite_mini__DOT__error_count,
                 32,((0U == vlSelfRef.tb_polite_mini__DOT__error_count)
                      ? 0x50415353U : 0x4641494cU));
    ++(vlSymsp->__Vcoverage[551]);
    VL_FINISH_MT("tb/tb_polite_mini.sv", 749, "");
    ++(vlSymsp->__Vcoverage[552]);
}

VL_INLINE_OPT VlCoroutine Vtb_polite_mini___024root___eval_initial__TOP__Vtiming__1(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1d98ULL, 
                                             nullptr, 
                                             "tb/tb_polite_mini.sv", 
                                             50);
        vlSelfRef.tb_polite_mini__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.tb_polite_mini__DOT__clk)));
        ++(vlSymsp->__Vcoverage[29]);
    }
}

VL_INLINE_OPT VlCoroutine Vtb_polite_mini___024root___eval_initial__TOP__Vtiming__2(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h638472ce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_polite_mini.clk)", 
                                                             "tb/tb_polite_mini.sv", 
                                                             287);
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "tb/tb_polite_mini.sv", 
                                             288);
        if (vlSelfRef.tb_polite_mini__DOT__rst_n) {
            vlSelfRef.tb_polite_mini__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_mini__DOT__check_count);
            if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad) 
                             != (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad)))) {
                vlSelfRef.tb_polite_mini__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_polite_mini__DOT__error_count);
                VL_WRITEF_NX("[%0t] %%Error: tb_polite_mini.sv:279: Assertion failed in %Ntb_polite_mini.sb_compare_pins: [%0t] edge %0d: uo_out mismatch got %02x exp %02x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1000),
                             -9,64,vlSelfRef.tb_polite_mini__DOT__edge_n,
                             8,(IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad),
                             8,vlSelfRef.tb_polite_mini__DOT__m_uo_pad);
                VL_STOP_MT("tb/tb_polite_mini.sv", 279, "");
            } else {
                ++(vlSymsp->__Vcoverage[378]);
            }
            ++(vlSymsp->__Vcoverage[379]);
            if (vlSelfRef.tb_polite_mini__DOT__m_pad_loaded) {
                vlSelfRef.tb_polite_mini__DOT__mon_q.push_back(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad);
                ++(vlSymsp->__Vcoverage[380]);
            } else {
                ++(vlSymsp->__Vcoverage[381]);
            }
            ++(vlSymsp->__Vcoverage[382]);
            ++(vlSymsp->__Vcoverage[383]);
        } else {
            ++(vlSymsp->__Vcoverage[384]);
        }
        ++(vlSymsp->__Vcoverage[385]);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_mini___024root___dump_triggers__act(Vtb_polite_mini___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_polite_mini___024root___eval_triggers__act(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_polite_mini__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_mini__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_polite_mini__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_mini__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.tb_polite_mini__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_mini__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_mini__DOT__clk__0 
        = vlSelfRef.tb_polite_mini__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_mini__DOT__rst_n__0 
        = vlSelfRef.tb_polite_mini__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_polite_mini___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_polite_mini___024root___act_sequent__TOP__0(Vtb_polite_mini___024root* vlSelf);
void Vtb_polite_mini_polite_pe___act_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0(Vtb_polite_mini_polite_pe* vlSelf);
void Vtb_polite_mini___024root___act_comb__TOP__0(Vtb_polite_mini___024root* vlSelf);
void Vtb_polite_mini_polite_pe___act_comb__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0(Vtb_polite_mini_polite_pe* vlSelf);

void Vtb_polite_mini___024root___eval_act(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_polite_mini___024root___act_sequent__TOP__0(vlSelf);
        Vtb_polite_mini_polite_pe___act_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___act_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___act_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___act_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe));
    }
    if ((0xdULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_polite_mini___024root___act_comb__TOP__0(vlSelf);
        Vtb_polite_mini_polite_pe___act_comb__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___act_comb__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___act_comb__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___act_comb__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe));
    }
}

VL_INLINE_OPT void Vtb_polite_mini___024root___act_sequent__TOP__0(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__clk) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__clk 
            = vlSelfRef.tb_polite_mini__DOT__clk;
    }
}

VL_INLINE_OPT void Vtb_polite_mini___024root___act_comb__TOP__0(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__rst_n 
            = vlSelfRef.tb_polite_mini__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__ena) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ena))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__ena 
            = vlSelfRef.tb_polite_mini__DOT__ena;
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__ui_in) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__ui_in)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__ui_in) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__ui_in)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__ui_in) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__ui_in)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__ui_in) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__ui_in)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__ui_in) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__ui_in)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__ui_in) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__ui_in)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__ui_in) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__ui_in)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__ui_in) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__ui_in)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__ui_in)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__uio_in) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__uio_in)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__uio_in) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__uio_in)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__uio_in) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__uio_in)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__uio_in) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__uio_in)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__uio_in) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__uio_in)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__uio_in) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__uio_in)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__uio_in) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__uio_in)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__uio_in) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uio_in)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__uio_in)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__exp_buf)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__exp_buf)));
    }
}

void Vtb_polite_mini___024root___nba_sequent__TOP__0(Vtb_polite_mini___024root* vlSelf);
void Vtb_polite_mini___024root___nba_sequent__TOP__1(Vtb_polite_mini___024root* vlSelf);
void Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0(Vtb_polite_mini_polite_pe* vlSelf);
void Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0(Vtb_polite_mini_polite_pe* vlSelf);
void Vtb_polite_mini___024root___nba_sequent__TOP__2(Vtb_polite_mini___024root* vlSelf);
void Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__1(Vtb_polite_mini_polite_pe* vlSelf);
void Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__1(Vtb_polite_mini_polite_pe* vlSelf);
void Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__1(Vtb_polite_mini_polite_pe* vlSelf);
void Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__1(Vtb_polite_mini_polite_pe* vlSelf);

void Vtb_polite_mini___024root___eval_nba(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_polite_mini___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_polite_mini___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe));
        Vtb_polite_mini___024root___nba_sequent__TOP__2(vlSelf);
        Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__1((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__1((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__1((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__1((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe));
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_polite_mini___024root___act_sequent__TOP__0(vlSelf);
        Vtb_polite_mini_polite_pe___act_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___act_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___act_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___act_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe));
    }
    if ((0xdULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_polite_mini___024root___act_comb__TOP__0(vlSelf);
        Vtb_polite_mini_polite_pe___act_comb__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___act_comb__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___act_comb__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe));
        Vtb_polite_mini_polite_pe___act_comb__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe));
    }
}

VL_INLINE_OPT void Vtb_polite_mini___024root___nba_sequent__TOP__0(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtask_tb_polite_mini__DOT__predictor_write__0__e;
    __Vtask_tb_polite_mini__DOT__predictor_write__0__e = 0;
    CData/*7:0*/ __Vtask_tb_polite_mini__DOT__predictor_write__0__ui;
    __Vtask_tb_polite_mini__DOT__predictor_write__0__ui = 0;
    CData/*7:0*/ __Vtask_tb_polite_mini__DOT__predictor_write__0__uio;
    __Vtask_tb_polite_mini__DOT__predictor_write__0__uio = 0;
    CData/*7:0*/ __Vtask_tb_polite_mini__DOT__predictor_write__0__cu;
    __Vtask_tb_polite_mini__DOT__predictor_write__0__cu = 0;
    CData/*0:0*/ __Vtask_tb_polite_mini__DOT__predictor_write__0__ph;
    __Vtask_tb_polite_mini__DOT__predictor_write__0__ph = 0;
    CData/*7:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__Vfuncout;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__d;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__d = 0;
    CData/*7:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ins;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ins = 0;
    IData/*24:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__unnamedblk2__DOT__unnamedblk3__DOT__full;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__unnamedblk2__DOT__unnamedblk3__DOT__full = 0;
    CData/*3:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op = 0;
    CData/*3:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__a;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__a = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__fz_open;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__fz_open = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__db;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__db = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__rb;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__rb = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ph;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ph = 0;
    VlUnpacked<IData/*23:0*/, 4> __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__sum;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__sum[__Vi0] = 0;
    }
    VlUnpacked<IData/*23:0*/, 4> __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__cap;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__cap[__Vi0] = 0;
    }
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__any_ovf;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__any_ovf = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__is_dbg;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__bad_bank;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_req;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_coll;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_ok;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_flg;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__run_now;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__run_now = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_psum;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_psum = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_ob;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dload;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dload = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dabort;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dabort = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_start;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_start = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ill_set;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__acc_ovf;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__acc_ovf = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ill_d;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ill_d = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ovf_d;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ovf_d = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ofz;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ofz = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_tick;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_tick = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__wide;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__wide = 0;
    CData/*0:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__step;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__step = 0;
    CData/*7:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__status;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__status = 0;
    IData/*23:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__v;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__v = 0;
    IData/*23:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__val_e;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__val_e = 0;
    IData/*31:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__left_e;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__left_e = 0;
    IData/*31:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__k_e;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__k_e = 0;
    IData/*31:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__pe;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__pe = 0;
    IData/*31:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__kk;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__kk = 0;
    CData/*3:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_nib;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_nib = 0;
    CData/*3:0*/ __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dump_nib;
    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dump_nib = 0;
    CData/*3:0*/ __Vfunc_tb_polite_mini__DOT__lane__2__Vfuncout;
    __Vfunc_tb_polite_mini__DOT__lane__2__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_polite_mini__DOT__lane__2__b;
    __Vfunc_tb_polite_mini__DOT__lane__2__b = 0;
    CData/*3:0*/ __Vfunc_tb_polite_mini__DOT__lane__4__Vfuncout;
    __Vfunc_tb_polite_mini__DOT__lane__4__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_polite_mini__DOT__lane__4__b;
    __Vfunc_tb_polite_mini__DOT__lane__4__b = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__dbg_start)) 
                                     | (0U == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_top_sva.sv:44: Assertion failed in %Ntb_polite_mini.dut.u_top_sva.assert_no_freeze_restart: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/polite_top_sva.sv", 44, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n)) 
                                  | (~ ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__clr_psum) 
                                        & (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__acc_en)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_top_sva.sv:38: Assertion failed in %Ntb_polite_mini.dut.u_top_sva.assert_no_clr_during_acc: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/polite_top_sva.sv", 38, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__dump_load)) 
                                     | (~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__dump_busy)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_top_sva.sv:39: Assertion failed in %Ntb_polite_mini.dut.u_top_sva.assert_load_not_busy: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/polite_top_sva.sv", 39, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__dump_busy)) 
                                     | (0x17U >= (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_top_sva.sv:42: Assertion failed in %Ntb_polite_mini.dut.u_top_sva.assert_dump_idx_range: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/polite_top_sva.sv", 42, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_13_0)) 
                                     | ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_14_0) 
                                        == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_top_sva.sv:43: Assertion failed in %Ntb_polite_mini.dut.u_top_sva.assert_dump_pause: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/polite_top_sva.sv", 43, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_9_0)) 
                                     | (vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_10_0 
                                        == vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__mul_all))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_top_sva.sv:34: Assertion failed in %Ntb_polite_mini.dut.u_top_sva.assert_mul_sticky: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/polite_top_sva.sv", 34, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_11_0)) 
                                     | (0U == (((vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_12_0[0U] 
                                                 ^ 
                                                 vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__psum_all[0U]) 
                                                | (vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_12_0[1U] 
                                                   ^ 
                                                   vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__psum_all[1U])) 
                                               | (vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_12_0[2U] 
                                                  ^ 
                                                  vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__psum_all[2U]))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_top_sva.sv:35: Assertion failed in %Ntb_polite_mini.dut.u_top_sva.assert_psum_update: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/polite_top_sva.sv", 35, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n)) 
                                  | (IData)((0xc0U 
                                             != (0xc0U 
                                                 & (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_pad))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_top_sva.sv:30: Assertion failed in %Ntb_polite_mini.dut.u_top_sva.assert_markers_exclusive: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/polite_top_sva.sv", 30, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n)) 
                                  | ((~ (IData)((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_pad))))) 
                                     | (0U == (0xfU 
                                               & (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_pad))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_top_sva.sv:31: Assertion failed in %Ntb_polite_mini.dut.u_top_sva.assert_idle_nibble: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/polite_top_sva.sv", 31, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_1_0)) 
                                     | ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__ena_q) 
                                        == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_2_0)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_top_sva.sv:24: Assertion failed in %Ntb_polite_mini.dut.u_top_sva.assert_ena_lag: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/polite_top_sva.sv", 24, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_5_0)) 
                                     | (0U == ((((vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_6_0[0U] 
                                                  ^ vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__mul_all) 
                                                 | (vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_6_0[1U] 
                                                    ^ 
                                                    vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__psum_all[0U])) 
                                                | (vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_6_0[2U] 
                                                   ^ 
                                                   vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__psum_all[1U])) 
                                               | (vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_6_0[3U] 
                                                  ^ 
                                                  vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__psum_all[2U]))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_top_sva.sv:26: Assertion failed in %Ntb_polite_mini.dut.u_top_sva.assert_hold_datapath: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/polite_top_sva.sv", 26, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n)) 
                                  | (((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_7_0) 
                                      == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_pad)) 
                                     | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_8_0))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_top_sva.sv:29: Assertion failed in %Ntb_polite_mini.dut.u_top_sva.assert_out_rate: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/polite_top_sva.sv", 29, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_0_0)) 
                                      & (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n))) 
                                  | ((0U == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_pad)) 
                                     & (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__ena_q))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_top_sva.sv:20: Assertion failed in %Ntb_polite_mini.dut.u_top_sva.assert_reset_outputs: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/polite_top_sva.sv", 20, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_3_0)) 
                                     | (vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_4_0 
                                        == (((QData)((IData)(
                                                             (((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                                               << 8U) 
                                                              | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__in_i_q)))) 
                                             << 0x11U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_q) 
                                                                << 9U) 
                                                               | (((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_pad) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__otick_q))))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_top_sva.sv:25: Assertion failed in %Ntb_polite_mini.dut.u_top_sva.assert_hold_pads: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/polite_top_sva.sv", 25, "");
        }
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__rst_n) 
         & ((~ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_15_0)) 
            & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad) 
               >> 4U)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[1165]);
        }
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__rst_n) 
         & ((~ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_16_0)) 
            & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad) 
               >> 5U)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[1166]);
        }
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__rst_n) 
         & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_load) 
            & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_busy)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[1164]);
        }
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__rst_n) 
         & ((~ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q)) 
            & (0U != (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[1161]);
        }
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__rst_n) 
         & ((~ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q)) 
            & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_busy)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[1162]);
        }
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__rst_n) 
         & (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad) 
             >> 7U) & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[1167]);
        }
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__rst_n) 
         & ((~ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q)) 
            & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[1160]);
        }
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__rst_n) 
         & (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q) 
             & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ofz)) 
            & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[1163]);
        }
    }
    vlSelfRef.tb_polite_mini__DOT__edge_n = (1ULL + vlSelfRef.tb_polite_mini__DOT__edge_n);
    if (vlSelfRef.tb_polite_mini__DOT__rst_n) {
        __Vtask_tb_polite_mini__DOT__predictor_write__0__uio 
            = vlSelfRef.tb_polite_mini__DOT__uio_in;
        __Vtask_tb_polite_mini__DOT__predictor_write__0__ui 
            = vlSelfRef.tb_polite_mini__DOT__ui_in;
        __Vtask_tb_polite_mini__DOT__predictor_write__0__e 
            = vlSelfRef.tb_polite_mini__DOT__ena;
        vlSelfRef.tb_polite_mini__DOT__m_pad_loaded = 0U;
        if (vlSelfRef.tb_polite_mini__DOT__m_ena_q) {
            __Vtask_tb_polite_mini__DOT__predictor_write__0__ph 
                = vlSelfRef.tb_polite_mini__DOT__m_phase;
            vlSelfRef.tb_polite_mini__DOT__m_exec_phase 
                = __Vtask_tb_polite_mini__DOT__predictor_write__0__ph;
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ins 
                = vlSelfRef.tb_polite_mini__DOT__m_in_i;
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__d 
                = vlSelfRef.tb_polite_mini__DOT__m_in_d;
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op 
                = (0xfU & ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ins) 
                           >> 4U));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__a 
                = (0xfU & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ins));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__fz_open 
                = (0U != vlSelfRef.tb_polite_mini__DOT__m_fz_left);
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__db 
                = vlSelfRef.tb_polite_mini__DOT__m_busy;
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__rb 
                = vlSelfRef.tb_polite_mini__DOT__m_rb;
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ph 
                = vlSelfRef.tb_polite_mini__DOT__m_phase;
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__any_ovf = 0U;
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__unnamedblk2__DOT__unnamedblk3__DOT__full 
                = (0x1ffffffU & (((0x1000000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                                                 [0U] 
                                                 << 1U)) 
                                  | vlSelfRef.tb_polite_mini__DOT__m_psum
                                  [0U]) + ((0x1ffff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_polite_mini__DOT__m_mul
                                                              [0U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                                           | vlSelfRef.tb_polite_mini__DOT__m_mul
                                           [0U])));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__sum[0U] 
                = (0xffffffU & __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__unnamedblk2__DOT__unnamedblk3__DOT__full);
            if ((1U & VL_REDXOR_32((0x1800000U & __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__unnamedblk2__DOT__unnamedblk3__DOT__full)))) {
                __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__any_ovf = 1U;
                ++(vlSymsp->__Vcoverage[341]);
            } else {
                ++(vlSymsp->__Vcoverage[342]);
            }
            ++(vlSymsp->__Vcoverage[343]);
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__unnamedblk2__DOT__unnamedblk3__DOT__full 
                = (0x1ffffffU & (((0x1000000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                                                 [1U] 
                                                 << 1U)) 
                                  | vlSelfRef.tb_polite_mini__DOT__m_psum
                                  [1U]) + ((0x1ffff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_polite_mini__DOT__m_mul
                                                              [1U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                                           | vlSelfRef.tb_polite_mini__DOT__m_mul
                                           [1U])));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__sum[1U] 
                = (0xffffffU & __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__unnamedblk2__DOT__unnamedblk3__DOT__full);
            if ((1U & VL_REDXOR_32((0x1800000U & __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__unnamedblk2__DOT__unnamedblk3__DOT__full)))) {
                ++(vlSymsp->__Vcoverage[341]);
                __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__any_ovf = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[342]);
            }
            ++(vlSymsp->__Vcoverage[343]);
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__unnamedblk2__DOT__unnamedblk3__DOT__full 
                = (0x1ffffffU & (((0x1000000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                                                 [2U] 
                                                 << 1U)) 
                                  | vlSelfRef.tb_polite_mini__DOT__m_psum
                                  [2U]) + ((0x1ffff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_polite_mini__DOT__m_mul
                                                              [2U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                                           | vlSelfRef.tb_polite_mini__DOT__m_mul
                                           [2U])));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__sum[2U] 
                = (0xffffffU & __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__unnamedblk2__DOT__unnamedblk3__DOT__full);
            if ((1U & VL_REDXOR_32((0x1800000U & __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__unnamedblk2__DOT__unnamedblk3__DOT__full)))) {
                ++(vlSymsp->__Vcoverage[341]);
                __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__any_ovf = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[342]);
            }
            ++(vlSymsp->__Vcoverage[343]);
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__unnamedblk2__DOT__unnamedblk3__DOT__full 
                = (0x1ffffffU & (((0x1000000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                                                 [3U] 
                                                 << 1U)) 
                                  | vlSelfRef.tb_polite_mini__DOT__m_psum
                                  [3U]) + ((0x1ffff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_polite_mini__DOT__m_mul
                                                              [3U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                                           | vlSelfRef.tb_polite_mini__DOT__m_mul
                                           [3U])));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__sum[3U] 
                = (0xffffffU & __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__unnamedblk2__DOT__unnamedblk3__DOT__full);
            if ((1U & VL_REDXOR_32((0x1800000U & __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__unnamedblk2__DOT__unnamedblk3__DOT__full)))) {
                ++(vlSymsp->__Vcoverage[341]);
                __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__any_ovf = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[342]);
            }
            ++(vlSymsp->__Vcoverage[343]);
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__is_dbg 
                = ((6U <= (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op)) 
                   & (0xbU >= (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op)));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__bad_bank 
                = ((6U == (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op)) 
                   & (0U != (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__a)));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_req 
                = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__is_dbg) 
                   & (~ (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__bad_bank)));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_coll 
                = ((((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__a) 
                     >> 3U) & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__rb)) 
                   | (((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__a) 
                       >> 2U) & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__db)));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_ok 
                = ((5U == (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op)) 
                   & (~ (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_coll)));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_flg 
                = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_ok) 
                   & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__a));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__run_now 
                = ((2U == (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op)) 
                   & (~ (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__fz_open)));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_psum 
                = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__a) 
                      >> 3U));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_ob 
                = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__a) 
                      >> 2U));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dload 
                = ((3U == (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op)) 
                   & (~ (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__db)));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dabort 
                = (4U == (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_start 
                = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_req) 
                   & (~ (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__fz_open)));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ill_set 
                = (((((((2U == (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op)) 
                        & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__fz_open)) 
                       | ((3U == (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op)) 
                          & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__db))) 
                      | ((5U == (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op)) 
                         & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_coll))) 
                     | (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__bad_bank)) 
                    | ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_req) 
                       & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__fz_open))) 
                   | (0xbU < (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op)));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__acc_ovf 
                = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__rb) 
                   & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__any_ovf));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ill_d 
                = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ill_set) 
                   | ((IData)(vlSelfRef.tb_polite_mini__DOT__m_ill) 
                      & (~ (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_flg))));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ovf_d 
                = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__acc_ovf) 
                   | ((IData)(vlSelfRef.tb_polite_mini__DOT__m_ovf) 
                      & (~ (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_flg))));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__status 
                = (0x80U | ((((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__db) 
                              << 6U) | (((IData)(vlSelfRef.tb_polite_mini__DOT__m_ill) 
                                         << 5U) | (
                                                   ((IData)(vlSelfRef.tb_polite_mini__DOT__m_ovf) 
                                                    | (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__acc_ovf)) 
                                                   << 4U))) 
                            | ((((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__db) 
                                 << 3U) | ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ph) 
                                           << 2U)) 
                               | (((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__db) 
                                   << 1U) | (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__rb)))));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__pe 
                = (3U & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__a));
            if ((8U & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op))) {
                if ((4U & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op))) {
                    ++(vlSymsp->__Vcoverage[349]);
                    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__v 
                        = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__d;
                } else if ((2U & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op))) {
                    if ((1U & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op))) {
                        ++(vlSymsp->__Vcoverage[349]);
                        __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__v 
                            = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__d;
                    } else {
                        ++(vlSymsp->__Vcoverage[348]);
                        __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__v 
                            = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__rb)
                                ? __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__sum
                               [(3U & __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__pe)]
                                : vlSelfRef.tb_polite_mini__DOT__m_psum
                               [(3U & __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__pe)]);
                    }
                } else if ((1U & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op))) {
                    ++(vlSymsp->__Vcoverage[347]);
                    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__v 
                        = vlSelfRef.tb_polite_mini__DOT__m_mul
                        [(3U & __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__pe)];
                } else {
                    ++(vlSymsp->__Vcoverage[346]);
                    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__v 
                        = vlSelfRef.tb_polite_mini__DOT__m_psum
                        [(3U & __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__pe)];
                }
            } else if ((4U & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op))) {
                if ((2U & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op))) {
                    if ((1U & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op))) {
                        ++(vlSymsp->__Vcoverage[345]);
                        __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__v 
                            = vlSelfRef.tb_polite_mini__DOT__m_inbuf;
                    } else {
                        ++(vlSymsp->__Vcoverage[344]);
                        __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__v 
                            = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__status;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[349]);
                    __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__v 
                        = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__d;
                }
            } else {
                ++(vlSymsp->__Vcoverage[349]);
                __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__v 
                    = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__d;
            }
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__wide 
                = ((8U == (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op)) 
                   | (0xaU == (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op)));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ofz 
                = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_start) 
                   | (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__fz_open));
            if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_start) {
                __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__left_e 
                    = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__wide)
                        ? 0xcU : 4U);
                __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__k_e = 0U;
                __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__val_e 
                    = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__v;
            } else {
                __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__left_e 
                    = vlSelfRef.tb_polite_mini__DOT__m_fz_left;
                __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__k_e 
                    = vlSelfRef.tb_polite_mini__DOT__m_fz_k;
                __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__val_e 
                    = vlSelfRef.tb_polite_mini__DOT__m_fz_val;
            }
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_tick 
                = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ofz) 
                   & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ph));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__kk 
                = (VL_LTS_III(32, 5U, __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__k_e)
                    ? 5U : __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__k_e);
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_nib 
                = ((0x17U >= (0x1fU & VL_MULS_III(32, (IData)(4U), __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__kk)))
                    ? (0xfU & (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__val_e 
                               >> (0x1fU & VL_MULS_III(32, (IData)(4U), __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__kk))))
                    : 0U);
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dump_nib 
                = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__db)
                    ? ((0x17U >= (0x1fU & VL_MULS_III(32, (IData)(4U), 
                                                      VL_MODDIVS_III(32, vlSelfRef.tb_polite_mini__DOT__m_idx, (IData)(6U)))))
                        ? (0xfU & (vlSelfRef.tb_polite_mini__DOT__m_word
                                   [(3U & VL_DIVS_III(32, vlSelfRef.tb_polite_mini__DOT__m_idx, (IData)(6U)))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(4U), 
                                                           VL_MODDIVS_III(32, vlSelfRef.tb_polite_mini__DOT__m_idx, (IData)(6U))))))
                        : 0U) : 0U);
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__step 
                = (((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__db) 
                    & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ph)) 
                   & (~ (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ofz)));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__Vfuncout 
                = ((((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_tick) 
                     << 7U) | (((~ (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_tick)) 
                                & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__db)) 
                               << 6U)) | (((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ill_d) 
                                           << 5U) | 
                                          (((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ovf_d) 
                                            << 4U) 
                                           | ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_tick)
                                               ? (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dbg_nib)
                                               : (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dump_nib)))));
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__cap[0U] 
                = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__rb)
                    ? __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__sum
                   [0U] : vlSelfRef.tb_polite_mini__DOT__m_psum
                   [0U]);
            ++(vlSymsp->__Vcoverage[350]);
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__cap[1U] 
                = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__rb)
                    ? __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__sum
                   [1U] : vlSelfRef.tb_polite_mini__DOT__m_psum
                   [1U]);
            ++(vlSymsp->__Vcoverage[350]);
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__cap[2U] 
                = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__rb)
                    ? __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__sum
                   [2U] : vlSelfRef.tb_polite_mini__DOT__m_psum
                   [2U]);
            ++(vlSymsp->__Vcoverage[350]);
            __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__cap[3U] 
                = ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__rb)
                    ? __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__sum
                   [3U] : vlSelfRef.tb_polite_mini__DOT__m_psum
                   [3U]);
            ++(vlSymsp->__Vcoverage[350]);
            if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__rb) {
                ++(vlSymsp->__Vcoverage[353]);
                vlSelfRef.tb_polite_mini__DOT__m_psum[0U] 
                    = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__sum
                    [0U];
            } else if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_psum) {
                ++(vlSymsp->__Vcoverage[351]);
                vlSelfRef.tb_polite_mini__DOT__m_psum[0U] = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[352]);
            }
            if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__run_now) {
                vlSelfRef.tb_polite_mini__DOT__m_mul[0U] 
                    = (0xffU & VL_MULS_III(8, (0xffU 
                                               & VL_EXTENDS_II(8,4, 
                                                               ([&]() {
                                        ++(vlSymsp->__Vcoverage[35]);
                                        __Vfunc_tb_polite_mini__DOT__lane__2__b 
                                            = vlSelfRef.tb_polite_mini__DOT__m_inbuf;
                                        __Vfunc_tb_polite_mini__DOT__lane__2__Vfuncout 
                                            = (0xfU 
                                               & ((IData)(__Vfunc_tb_polite_mini__DOT__lane__2__b) 
                                                  >> 4U));
                                        ++(vlSymsp->__Vcoverage[34]);
                                    }(), (IData)(__Vfunc_tb_polite_mini__DOT__lane__2__Vfuncout)))), 
                                           (0xffU & 
                                            VL_EXTENDS_II(8,4, 
                                                          ([&]() {
                                        ++(vlSymsp->__Vcoverage[36]);
                                        __Vfunc_tb_polite_mini__DOT__lane__4__b 
                                            = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__d;
                                        __Vfunc_tb_polite_mini__DOT__lane__4__Vfuncout 
                                            = (0xfU 
                                               & ((IData)(__Vfunc_tb_polite_mini__DOT__lane__4__b) 
                                                  >> 4U));
                                        ++(vlSymsp->__Vcoverage[34]);
                                    }(), (IData)(__Vfunc_tb_polite_mini__DOT__lane__4__Vfuncout))))));
                ++(vlSymsp->__Vcoverage[354]);
            } else {
                ++(vlSymsp->__Vcoverage[355]);
            }
            ++(vlSymsp->__Vcoverage[356]);
            if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__rb) {
                ++(vlSymsp->__Vcoverage[353]);
                vlSelfRef.tb_polite_mini__DOT__m_psum[1U] 
                    = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__sum
                    [1U];
            } else if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_psum) {
                ++(vlSymsp->__Vcoverage[351]);
                vlSelfRef.tb_polite_mini__DOT__m_psum[1U] = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[352]);
            }
            if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__run_now) {
                vlSelfRef.tb_polite_mini__DOT__m_mul[1U] 
                    = (0xffU & VL_MULS_III(8, (0xffU 
                                               & VL_EXTENDS_II(8,4, 
                                                               ([&]() {
                                        ++(vlSymsp->__Vcoverage[35]);
                                        __Vfunc_tb_polite_mini__DOT__lane__2__b 
                                            = vlSelfRef.tb_polite_mini__DOT__m_inbuf;
                                        __Vfunc_tb_polite_mini__DOT__lane__2__Vfuncout 
                                            = (0xfU 
                                               & ((IData)(__Vfunc_tb_polite_mini__DOT__lane__2__b) 
                                                  >> 4U));
                                        ++(vlSymsp->__Vcoverage[34]);
                                    }(), (IData)(__Vfunc_tb_polite_mini__DOT__lane__2__Vfuncout)))), 
                                           (0xffU & 
                                            VL_EXTENDS_II(8,4, 
                                                          ([&]() {
                                        ++(vlSymsp->__Vcoverage[36]);
                                        __Vfunc_tb_polite_mini__DOT__lane__4__b 
                                            = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__d;
                                        __Vfunc_tb_polite_mini__DOT__lane__4__Vfuncout 
                                            = (0xfU 
                                               & (IData)(__Vfunc_tb_polite_mini__DOT__lane__4__b));
                                        ++(vlSymsp->__Vcoverage[34]);
                                    }(), (IData)(__Vfunc_tb_polite_mini__DOT__lane__4__Vfuncout))))));
                ++(vlSymsp->__Vcoverage[354]);
            } else {
                ++(vlSymsp->__Vcoverage[355]);
            }
            ++(vlSymsp->__Vcoverage[356]);
            if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__rb) {
                ++(vlSymsp->__Vcoverage[353]);
                vlSelfRef.tb_polite_mini__DOT__m_psum[2U] 
                    = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__sum
                    [2U];
            } else if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_psum) {
                ++(vlSymsp->__Vcoverage[351]);
                vlSelfRef.tb_polite_mini__DOT__m_psum[2U] = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[352]);
            }
            if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__run_now) {
                vlSelfRef.tb_polite_mini__DOT__m_mul[2U] 
                    = (0xffU & VL_MULS_III(8, (0xffU 
                                               & VL_EXTENDS_II(8,4, 
                                                               ([&]() {
                                        ++(vlSymsp->__Vcoverage[35]);
                                        __Vfunc_tb_polite_mini__DOT__lane__2__b 
                                            = vlSelfRef.tb_polite_mini__DOT__m_inbuf;
                                        __Vfunc_tb_polite_mini__DOT__lane__2__Vfuncout 
                                            = (0xfU 
                                               & (IData)(__Vfunc_tb_polite_mini__DOT__lane__2__b));
                                        ++(vlSymsp->__Vcoverage[34]);
                                    }(), (IData)(__Vfunc_tb_polite_mini__DOT__lane__2__Vfuncout)))), 
                                           (0xffU & 
                                            VL_EXTENDS_II(8,4, 
                                                          ([&]() {
                                        ++(vlSymsp->__Vcoverage[36]);
                                        __Vfunc_tb_polite_mini__DOT__lane__4__b 
                                            = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__d;
                                        __Vfunc_tb_polite_mini__DOT__lane__4__Vfuncout 
                                            = (0xfU 
                                               & ((IData)(__Vfunc_tb_polite_mini__DOT__lane__4__b) 
                                                  >> 4U));
                                        ++(vlSymsp->__Vcoverage[34]);
                                    }(), (IData)(__Vfunc_tb_polite_mini__DOT__lane__4__Vfuncout))))));
                ++(vlSymsp->__Vcoverage[354]);
            } else {
                ++(vlSymsp->__Vcoverage[355]);
            }
            ++(vlSymsp->__Vcoverage[356]);
            if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__rb) {
                ++(vlSymsp->__Vcoverage[353]);
                vlSelfRef.tb_polite_mini__DOT__m_psum[3U] 
                    = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__sum
                    [3U];
            } else if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_psum) {
                ++(vlSymsp->__Vcoverage[351]);
                vlSelfRef.tb_polite_mini__DOT__m_psum[3U] = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[352]);
            }
            if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__run_now) {
                vlSelfRef.tb_polite_mini__DOT__m_mul[3U] 
                    = (0xffU & VL_MULS_III(8, (0xffU 
                                               & VL_EXTENDS_II(8,4, 
                                                               ([&]() {
                                        ++(vlSymsp->__Vcoverage[35]);
                                        __Vfunc_tb_polite_mini__DOT__lane__2__b 
                                            = vlSelfRef.tb_polite_mini__DOT__m_inbuf;
                                        __Vfunc_tb_polite_mini__DOT__lane__2__Vfuncout 
                                            = (0xfU 
                                               & (IData)(__Vfunc_tb_polite_mini__DOT__lane__2__b));
                                        ++(vlSymsp->__Vcoverage[34]);
                                    }(), (IData)(__Vfunc_tb_polite_mini__DOT__lane__2__Vfuncout)))), 
                                           (0xffU & 
                                            VL_EXTENDS_II(8,4, 
                                                          ([&]() {
                                        ++(vlSymsp->__Vcoverage[36]);
                                        __Vfunc_tb_polite_mini__DOT__lane__4__b 
                                            = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__d;
                                        __Vfunc_tb_polite_mini__DOT__lane__4__Vfuncout 
                                            = (0xfU 
                                               & (IData)(__Vfunc_tb_polite_mini__DOT__lane__4__b));
                                        ++(vlSymsp->__Vcoverage[34]);
                                    }(), (IData)(__Vfunc_tb_polite_mini__DOT__lane__4__Vfuncout))))));
                ++(vlSymsp->__Vcoverage[354]);
            } else {
                ++(vlSymsp->__Vcoverage[355]);
            }
            ++(vlSymsp->__Vcoverage[356]);
            if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dload) {
                vlSelfRef.tb_polite_mini__DOT__m_word[0U] 
                    = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__cap
                    [0U];
                ++(vlSymsp->__Vcoverage[357]);
                vlSelfRef.tb_polite_mini__DOT__m_idx = 0U;
                vlSelfRef.tb_polite_mini__DOT__m_busy = 1U;
                vlSelfRef.tb_polite_mini__DOT__m_word[1U] 
                    = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__cap
                    [1U];
                ++(vlSymsp->__Vcoverage[357]);
                vlSelfRef.tb_polite_mini__DOT__m_word[2U] 
                    = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__cap
                    [2U];
                ++(vlSymsp->__Vcoverage[357]);
                vlSelfRef.tb_polite_mini__DOT__m_word[3U] 
                    = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__cap
                    [3U];
                ++(vlSymsp->__Vcoverage[357]);
                ++(vlSymsp->__Vcoverage[365]);
            } else {
                if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_ob) {
                    vlSelfRef.tb_polite_mini__DOT__m_word[0U] = 0U;
                    ++(vlSymsp->__Vcoverage[358]);
                    vlSelfRef.tb_polite_mini__DOT__m_word[1U] = 0U;
                    ++(vlSymsp->__Vcoverage[358]);
                    vlSelfRef.tb_polite_mini__DOT__m_word[2U] = 0U;
                    ++(vlSymsp->__Vcoverage[358]);
                    vlSelfRef.tb_polite_mini__DOT__m_word[3U] = 0U;
                    ++(vlSymsp->__Vcoverage[358]);
                    ++(vlSymsp->__Vcoverage[359]);
                } else {
                    ++(vlSymsp->__Vcoverage[360]);
                }
                if ((((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__step) 
                      & (0x17U == vlSelfRef.tb_polite_mini__DOT__m_idx)) 
                     | (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__dabort))) {
                    ++(vlSymsp->__Vcoverage[361]);
                    vlSelfRef.tb_polite_mini__DOT__m_busy = 0U;
                } else {
                    ++(vlSymsp->__Vcoverage[362]);
                }
                if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__step) {
                    vlSelfRef.tb_polite_mini__DOT__m_idx 
                        = ((IData)(1U) + vlSelfRef.tb_polite_mini__DOT__m_idx);
                    ++(vlSymsp->__Vcoverage[363]);
                } else {
                    ++(vlSymsp->__Vcoverage[364]);
                }
                ++(vlSymsp->__Vcoverage[366]);
            }
            vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__val_e;
            vlSelfRef.tb_polite_mini__DOT__m_fz_k = 
                (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__k_e 
                 + (((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ofz) 
                     & (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ph))
                     ? 1U : 0U));
            if (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ofz) {
                ++(vlSymsp->__Vcoverage[367]);
                vlSelfRef.tb_polite_mini__DOT__m_fz_left 
                    = (__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__left_e 
                       - (IData)(1U));
            } else {
                ++(vlSymsp->__Vcoverage[368]);
            }
            vlSelfRef.tb_polite_mini__DOT__m_inbuf 
                = ((1U == (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__op))
                    ? (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__d)
                    : (((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__clr_ok) 
                        & ((IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__a) 
                           >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf)));
            vlSelfRef.tb_polite_mini__DOT__m_phase 
                = (1U & (~ (IData)(__Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ph)));
            vlSelfRef.tb_polite_mini__DOT__m_rb = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__run_now;
            vlSelfRef.tb_polite_mini__DOT__m_ill = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ill_d;
            vlSelfRef.tb_polite_mini__DOT__m_ovf = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__ovf_d;
            ++(vlSymsp->__Vcoverage[369]);
            __Vtask_tb_polite_mini__DOT__predictor_write__0__cu 
                = __Vfunc_tb_polite_mini__DOT__predictor_core_step__1__Vfuncout;
            if (vlSelfRef.tb_polite_mini__DOT__m_otick) {
                ++(vlSymsp->__Vcoverage[370]);
                vlSelfRef.tb_polite_mini__DOT__m_uo_pad 
                    = vlSelfRef.tb_polite_mini__DOT__m_uo_q;
                vlSelfRef.tb_polite_mini__DOT__m_pad_loaded = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[371]);
            }
            vlSelfRef.tb_polite_mini__DOT__m_uo_q = __Vtask_tb_polite_mini__DOT__predictor_write__0__cu;
            vlSelfRef.tb_polite_mini__DOT__m_otick 
                = __Vtask_tb_polite_mini__DOT__predictor_write__0__ph;
            vlSelfRef.tb_polite_mini__DOT__m_in_d = __Vtask_tb_polite_mini__DOT__predictor_write__0__ui;
            vlSelfRef.tb_polite_mini__DOT__m_in_i = __Vtask_tb_polite_mini__DOT__predictor_write__0__uio;
            ++(vlSymsp->__Vcoverage[372]);
        } else {
            ++(vlSymsp->__Vcoverage[373]);
        }
        vlSelfRef.tb_polite_mini__DOT__m_ena_q = __Vtask_tb_polite_mini__DOT__predictor_write__0__e;
        ++(vlSymsp->__Vcoverage[374]);
        ++(vlSymsp->__Vcoverage[376]);
    } else {
        vlSelfRef.tb_polite_mini__DOT__m_ena_q = 1U;
        vlSelfRef.tb_polite_mini__DOT__m_in_d = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_in_i = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_uo_q = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_uo_pad = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_otick = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_pad_loaded = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_exec_phase = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_phase = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_rb = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_inbuf = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_ill = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_ovf = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_psum[0U] = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_mul[0U] = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_word[0U] = 0U;
        ++(vlSymsp->__Vcoverage[339]);
        vlSelfRef.tb_polite_mini__DOT__m_busy = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_idx = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_fz_left = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_fz_k = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_fz_val = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_psum[1U] = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_mul[1U] = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_word[1U] = 0U;
        ++(vlSymsp->__Vcoverage[339]);
        vlSelfRef.tb_polite_mini__DOT__m_psum[2U] = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_mul[2U] = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_word[2U] = 0U;
        ++(vlSymsp->__Vcoverage[339]);
        vlSelfRef.tb_polite_mini__DOT__m_psum[3U] = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_mul[3U] = 0U;
        vlSelfRef.tb_polite_mini__DOT__m_word[3U] = 0U;
        ++(vlSymsp->__Vcoverage[339]);
        ++(vlSymsp->__Vcoverage[340]);
        ++(vlSymsp->__Vcoverage[375]);
    }
    ++(vlSymsp->__Vcoverage[377]);
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_2_0 
        = vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__ena;
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_14_0 
        = vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx;
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_10_0 
        = vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__mul_all;
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_12_0[0U] 
        = vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__psum_all[0U];
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_12_0[1U] 
        = vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__psum_all[1U];
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_12_0[2U] 
        = vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__psum_all[2U];
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_6_0[0U] 
        = vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__mul_all;
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_6_0[1U] 
        = vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__psum_all[0U];
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_6_0[2U] 
        = vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__psum_all[1U];
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_6_0[3U] 
        = vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__psum_all[2U];
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_7_0 
        = vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_pad;
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_8_0 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__ena_q) 
           & (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__otick_q));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_4_0 
        = (((QData)((IData)((((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__in_d_q) 
                              << 8U) | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__in_i_q)))) 
            << 0x11U) | (QData)((IData)((((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_q) 
                                          << 9U) | 
                                         (((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_pad) 
                                           << 1U) | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__otick_q))))));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_0_0 
        = vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n;
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_1_0 
        = vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n;
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_3_0 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n) 
           & (~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__ena_q)));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_5_0 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n) 
           & (~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__ena_q)));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_9_0 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n) 
           & (~ ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__ena_q) 
                 & (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__run_now))));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_13_0 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n) 
           & (((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__ena_q) 
               & (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__ofz)) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__dump_load))));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_11_0 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__rst_n) 
           & (~ ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__ena_q) 
                 & ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__acc_en) 
                    | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__clr_psum)))));
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__m_pad_loaded) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_pad_loaded))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_pad_loaded 
            = vlSelfRef.tb_polite_mini__DOT__m_pad_loaded;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__m_exec_phase) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_exec_phase))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_exec_phase 
            = vlSelfRef.tb_polite_mini__DOT__m_exec_phase;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__m_busy) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_busy))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_busy 
            = vlSelfRef.tb_polite_mini__DOT__m_busy;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__m_phase) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_phase))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_phase 
            = vlSelfRef.tb_polite_mini__DOT__m_phase;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__m_rb) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_rb))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_rb 
            = vlSelfRef.tb_polite_mini__DOT__m_rb;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__m_ill) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_ill))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_ill 
            = vlSelfRef.tb_polite_mini__DOT__m_ill;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__m_ovf) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_ovf))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_ovf 
            = vlSelfRef.tb_polite_mini__DOT__m_ovf;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__m_otick) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_otick))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_otick 
            = vlSelfRef.tb_polite_mini__DOT__m_otick;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__m_ena_q) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_ena_q))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_ena_q 
            = vlSelfRef.tb_polite_mini__DOT__m_ena_q;
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_inbuf)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_inbuf)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_pad)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_pad)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_uo_q)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_uo_q)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_d)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_d)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_in_i)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__m_in_i)));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
               ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
               ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
               ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
               ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                  ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                  ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                  ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                  ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                   ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                   ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                   ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                   ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                    ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                    ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                    ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                    ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                     ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                     ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                     ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                     ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                      ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                      ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                      ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__m_fz_val 
                      ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_fz_val) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__m_fz_val));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [0U]))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[0U] 
            = ((0xfeU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [0U]) | (1U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [0U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [0U]))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[0U] 
            = ((0xfdU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [0U]) | (2U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [0U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [0U]))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[0U] 
            = ((0xfbU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [0U]) | (4U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [0U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [0U]))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[0U] 
            = ((0xf7U & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [0U]) | (8U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [0U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[0U] 
            = ((0xefU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [0U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [0U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[0U] 
            = ((0xdfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [0U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [0U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[0U] 
            = ((0xbfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [0U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [0U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[0U] 
            = ((0x7fU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [0U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [0U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [1U]))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[1U] 
            = ((0xfeU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [1U]) | (1U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [1U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [1U]))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[1U] 
            = ((0xfdU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [1U]) | (2U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [1U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [1U]))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[1U] 
            = ((0xfbU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [1U]) | (4U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [1U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [1U]))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[1U] 
            = ((0xf7U & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [1U]) | (8U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [1U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[1U] 
            = ((0xefU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [1U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [1U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[1U] 
            = ((0xdfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [1U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [1U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[1U] 
            = ((0xbfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [1U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [1U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[1U] 
            = ((0x7fU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [1U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [1U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [2U]))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[2U] 
            = ((0xfeU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [2U]) | (1U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [2U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [2U]))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[2U] 
            = ((0xfdU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [2U]) | (2U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [2U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [2U]))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[2U] 
            = ((0xfbU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [2U]) | (4U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [2U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [2U]))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[2U] 
            = ((0xf7U & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [2U]) | (8U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [2U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[2U] 
            = ((0xefU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [2U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [2U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[2U] 
            = ((0xdfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [2U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [2U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[2U] 
            = ((0xbfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [2U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [2U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[2U] 
            = ((0x7fU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [2U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [2U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [3U]))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[3U] 
            = ((0xfeU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [3U]) | (1U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [3U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [3U]))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[3U] 
            = ((0xfdU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [3U]) | (2U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [3U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [3U]))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[3U] 
            = ((0xfbU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [3U]) | (4U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [3U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__m_mul
               [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
               [3U]))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[3U] 
            = ((0xf7U & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [3U]) | (8U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [3U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[3U] 
            = ((0xefU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [3U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [3U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[3U] 
            = ((0xdfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [3U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [3U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[3U] 
            = ((0xbfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [3U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [3U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__m_mul
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul[3U] 
            = ((0x7fU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_mul
                [3U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__m_mul
                         [3U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [0U]))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (1U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [0U]))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (2U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [0U]))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (4U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [0U]))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (8U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x100U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x200U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x400U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x800U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x1000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x2000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x4000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x8000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x10000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x20000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x40000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x80000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x100000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x200000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x400000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[0U] 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [0U]) | (0x800000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [0U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [1U]))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (1U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [1U]))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (2U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [1U]))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (4U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [1U]))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (8U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x100U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x200U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x400U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x800U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x1000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x2000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x4000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x8000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x10000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x20000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x40000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x80000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x100000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x200000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x400000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[1U] 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [1U]) | (0x800000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [1U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [2U]))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (1U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [2U]))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (2U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [2U]))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (4U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [2U]))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (8U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x100U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x200U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x400U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x800U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x1000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x2000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x4000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x8000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x10000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x20000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x40000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x80000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x100000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x200000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x400000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[2U] 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [2U]) | (0x800000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [2U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [3U]))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (1U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [3U]))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (2U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [3U]))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (4U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__m_psum
               [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
               [3U]))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (8U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x100U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x200U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x400U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                   [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x800U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x1000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x2000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x4000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                    [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x8000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x10000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x20000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x40000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                     [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x80000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x100000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x200000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x400000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__m_psum
                      [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum[3U] 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_psum
                [3U]) | (0x800000U & vlSelfRef.tb_polite_mini__DOT__m_psum
                         [3U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [0U]))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (1U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [0U]))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (2U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [0U]))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (4U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [0U]))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (8U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x100U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x200U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x400U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x800U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x1000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x2000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x4000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x8000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x10000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x20000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x40000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x80000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x100000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x200000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x400000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [0U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[0U] 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [0U]) | (0x800000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [0U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [1U]))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (1U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [1U]))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (2U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [1U]))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (4U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [1U]))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (8U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x100U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x200U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x400U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x800U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x1000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x2000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x4000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x8000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x10000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x20000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x40000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x80000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x100000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x200000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x400000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [1U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[1U] 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [1U]) | (0x800000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [1U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [2U]))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (1U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [2U]))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (2U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [2U]))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (4U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [2U]))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (8U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x100U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x200U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x400U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x800U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x1000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x2000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x4000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x8000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x10000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x20000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x40000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x80000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x100000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x200000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x400000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [2U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[2U] 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [2U]) | (0x800000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [2U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [3U]))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (1U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [3U]))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (2U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [3U]))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (4U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__m_word
               [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
               [3U]))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (8U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__m_word
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x100U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x200U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x400U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__m_word
                   [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x800U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x1000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x2000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x4000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                    [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x8000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x10000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x20000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x40000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                     [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x80000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x100000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x200000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x400000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__m_word
                      [3U] ^ vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word[3U] 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT____Vtogcov__m_word
                [3U]) | (0x800000U & vlSelfRef.tb_polite_mini__DOT__m_word
                         [3U]));
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_15_0 
        = (1U & ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_pad) 
                 >> 4U));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_16_0 
        = (1U & ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_pad) 
                 >> 5U));
}

VL_INLINE_OPT void Vtb_polite_mini___024root___nba_sequent__TOP__1(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____VdfgExtracted_h7d306778__0;
    tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____VdfgExtracted_h7d306778__0 = 0;
    CData/*4:0*/ __Vdly__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx;
    __Vdly__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx = 0;
    IData/*23:0*/ __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v0;
    __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v0;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v0 = 0;
    IData/*23:0*/ __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v1;
    __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v1;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v1 = 0;
    IData/*23:0*/ __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v2;
    __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v2;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v2 = 0;
    IData/*23:0*/ __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v3;
    __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v3;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v4;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v5;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v6;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v7;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v8;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v9;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v10;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v11;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v11 = 0;
    // Body
    vlSelfRef.__Vdly__tb_polite_mini__DOT__dut__DOT__phase 
        = vlSelfRef.tb_polite_mini__DOT__dut__DOT__phase;
    __Vdly__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx 
        = vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v0 = 0U;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v1 = 0U;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v2 = 0U;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v3 = 0U;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v4 = 0U;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v5 = 0U;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v6 = 0U;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v7 = 0U;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v8 = 0U;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v9 = 0U;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v10 = 0U;
    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v11 = 0U;
    if (vlSelfRef.tb_polite_mini__DOT__rst_n) {
        if (vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q) {
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e;
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_k 
                = (7U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e) 
                         + ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ofz) 
                            & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__phase))));
            if (vlSelfRef.tb_polite_mini__DOT__dut__DOT__ofz) {
                ++(vlSymsp->__Vcoverage[1149]);
                vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left 
                    = (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__left_e) 
                               - (IData)(1U)));
            } else {
                ++(vlSymsp->__Vcoverage[1150]);
            }
            ++(vlSymsp->__Vcoverage[1151]);
        } else {
            ++(vlSymsp->__Vcoverage[1152]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left = 0U;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_k = 0U;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val = 0U;
    }
    ++(vlSymsp->__Vcoverage[1154]);
    if (vlSelfRef.tb_polite_mini__DOT__rst_n) {
        if (vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q) {
            vlSelfRef.__Vdly__tb_polite_mini__DOT__dut__DOT__phase 
                = (1U & (~ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__phase)));
            ++(vlSymsp->__Vcoverage[982]);
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_busy 
                = vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_now;
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf 
                = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d;
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__illegal 
                = vlSelfRef.tb_polite_mini__DOT__dut__DOT__illegal_d;
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__ovf 
                = vlSelfRef.tb_polite_mini__DOT__dut__DOT__ovf_d;
        } else {
            ++(vlSymsp->__Vcoverage[983]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelfRef.__Vdly__tb_polite_mini__DOT__dut__DOT__phase = 0U;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_busy = 0U;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf = 0U;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__illegal = 0U;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__ovf = 0U;
    }
    ++(vlSymsp->__Vcoverage[985]);
    if (vlSelfRef.tb_polite_mini__DOT__rst_n) {
        if (vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q) {
            if (vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_load) {
                ++(vlSymsp->__Vcoverage[1308]);
                vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__k = 4U;
                __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v0 
                    = (0xffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]);
                __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v0 = 1U;
                ++(vlSymsp->__Vcoverage[1308]);
                __Vdly__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx = 0U;
                vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy = 1U;
                __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v1 
                    = (0xffffffU & ((vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                                     << 8U) | (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                                               >> 0x18U)));
                __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v1 = 1U;
                ++(vlSymsp->__Vcoverage[1308]);
                __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v2 
                    = (0xffffffU & ((vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                                     << 0x10U) | (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                                                  >> 0x10U)));
                __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v2 = 1U;
                ++(vlSymsp->__Vcoverage[1308]);
                __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v3 
                    = (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                       >> 8U);
                __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v3 = 1U;
                ++(vlSymsp->__Vcoverage[1316]);
            } else {
                if (vlSelfRef.tb_polite_mini__DOT__dut__DOT__clr_outbuf) {
                    ++(vlSymsp->__Vcoverage[1309]);
                    vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__k = 4U;
                    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v4 = 1U;
                    ++(vlSymsp->__Vcoverage[1309]);
                    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v5 = 1U;
                    ++(vlSymsp->__Vcoverage[1309]);
                    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v6 = 1U;
                    ++(vlSymsp->__Vcoverage[1309]);
                    __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v7 = 1U;
                    ++(vlSymsp->__Vcoverage[1310]);
                } else {
                    ++(vlSymsp->__Vcoverage[1311]);
                }
                if (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__step) {
                    __Vdly__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx)));
                    ++(vlSymsp->__Vcoverage[1312]);
                } else {
                    ++(vlSymsp->__Vcoverage[1313]);
                }
                if ((((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__step) 
                      & (0x17U == (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx))) 
                     | (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_abort))) {
                    ++(vlSymsp->__Vcoverage[1314]);
                    vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy = 0U;
                } else {
                    ++(vlSymsp->__Vcoverage[1315]);
                }
                ++(vlSymsp->__Vcoverage[1317]);
            }
            ++(vlSymsp->__Vcoverage[1318]);
        } else {
            ++(vlSymsp->__Vcoverage[1319]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__k = 4U;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy = 0U;
        __Vdly__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx = 0U;
        __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v8 = 1U;
        ++(vlSymsp->__Vcoverage[1307]);
        __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v9 = 1U;
        ++(vlSymsp->__Vcoverage[1307]);
        __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v10 = 1U;
        ++(vlSymsp->__Vcoverage[1307]);
        __VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v11 = 1U;
        ++(vlSymsp->__Vcoverage[1320]);
    }
    ++(vlSymsp->__Vcoverage[1321]);
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx 
        = __Vdly__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx;
    if (__VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v0) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[0U] 
            = __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v0;
    }
    if (__VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v1) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[1U] 
            = __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v1;
    }
    if (__VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v2) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[2U] 
            = __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v2;
    }
    if (__VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v3) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[3U] 
            = __VdlyVal__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v3;
    }
    if (__VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v4) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[0U] = 0U;
    }
    if (__VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v5) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[1U] = 0U;
    }
    if (__VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v6) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[2U] = 0U;
    }
    if (__VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v7) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[3U] = 0U;
    }
    if (__VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v8) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[0U] = 0U;
    }
    if (__VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v9) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[1U] = 0U;
    }
    if (__VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v10) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[2U] = 0U;
    }
    if (__VdlySet__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word__v11) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[3U] = 0U;
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_k) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_k)))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_k 
            = ((6U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_k)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_k)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_k) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_k)))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_k 
            = ((5U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_k)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_k)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_k) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_k)))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_k 
            = ((3U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_k)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_k)));
    }
    if (((0U != (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left)) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__fz_open))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__fz_open 
            = (0U != (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left)))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left)))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left)))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left)))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left 
            = ((7U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left)));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val));
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__illegal) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__illegal))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__illegal 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__illegal;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ovf) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__ovf 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__ovf;
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf)));
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_busy) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__run_busy))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__run_busy 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_busy;
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx 
            = ((0x1eU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx 
            = ((0x1dU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx 
            = ((0x1bU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx 
            = ((0x17U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx)))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx 
            = ((0xfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx)));
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel 
        = ((0x12U <= (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx))
            ? 3U : ((0xcU <= (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx))
                     ? 2U : ((6U <= (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx))
                              ? 1U : 0U)));
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_busy))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_busy 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy;
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [0U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[0U] 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [0U]) | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [0U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [1U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[1U] 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [1U]) | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [1U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [2U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[2U] 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [2U]) | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [2U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                  [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                    [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                     [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                      [3U] ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word[3U] 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word
                [3U]) | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                         [3U]));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__pe_sel)))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__pe_sel 
            = ((2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__pe_sel)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__pe_sel)))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__pe_sel 
            = ((1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__pe_sel)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel)));
    }
    tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____VdfgExtracted_h7d306778__0 
        = (0xfU & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                   [vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel] 
                   >> 0x14U));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub 
        = (0x1fU & (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx) 
                     - ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel) 
                        << 1U)) - ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel) 
                                   << 2U)));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
        = vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
        [vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel];
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub)))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub 
            = ((0x1eU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub)))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub 
            = ((0x1dU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub)))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub 
            = ((0x1bU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub)))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub 
            = ((0x17U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub)))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub 
            = ((0xfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub)));
    }
    if ((4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub))) {
        if ((2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub))) {
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn 
                = tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____VdfgExtracted_h7d306778__0;
            ++(vlSymsp->__Vcoverage[1304]);
        } else if ((1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub))) {
            ++(vlSymsp->__Vcoverage[1304]);
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn 
                = tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____VdfgExtracted_h7d306778__0;
        } else {
            ++(vlSymsp->__Vcoverage[1303]);
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn 
                = (0xfU & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                           [vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel] 
                           >> 0x10U));
        }
    } else if ((2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub))) {
        if ((1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub))) {
            ++(vlSymsp->__Vcoverage[1302]);
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn 
                = (0xfU & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                           [vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel] 
                           >> 0xcU));
        } else {
            ++(vlSymsp->__Vcoverage[1301]);
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn 
                = (0xfU & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                           [vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel] 
                           >> 8U));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn 
            = (0xfU & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
                       [vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel] 
                       >> 4U));
    } else {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn 
            = (0xfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word
               [vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel]);
    }
    ++(vlSymsp->__Vcoverage[1305]);
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn)))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn)))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn)))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn)))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn 
            = ((7U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn)));
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_nib 
        = ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy)
            ? (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn)
            : 0U);
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_nib) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_nib)))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_nib 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_nib)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_nib)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_nib) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_nib)))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_nib 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_nib)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_nib)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_nib) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_nib)))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_nib 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_nib)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_nib)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_nib) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_nib)))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_nib 
            = ((7U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_nib)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_nib)));
    }
}

VL_INLINE_OPT void Vtb_polite_mini___024root___nba_sequent__TOP__2(Vtb_polite_mini___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____VdfgRegularize_hf29a7531_0_1;
    tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____VdfgRegularize_hf29a7531_0_1 = 0;
    // Body
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
        = ((((IData)(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.mul) 
             << 0x18U) | ((IData)(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.mul) 
                          << 0x10U)) | (((IData)(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.mul) 
                                         << 8U) | (IData)(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.mul)));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.psum)) 
                    << 0x18U) | (QData)((IData)(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.psum))));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
        = ((vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.psum 
            << 0x10U) | (IData)(((((QData)((IData)(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.psum)) 
                                   << 0x18U) | (QData)((IData)(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.psum))) 
                                 >> 0x20U)));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
        = ((vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.psum 
            << 8U) | (vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.psum 
                      >> 0x10U));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
        = (IData)((((QData)((IData)((0xffffffU & vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__PVT__full))) 
                    << 0x18U) | (QData)((IData)((0xffffffU 
                                                 & vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__PVT__full)))));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
        = ((vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__PVT__full 
            << 0x10U) | (IData)(((((QData)((IData)(
                                                   (0xffffffU 
                                                    & vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__PVT__full))) 
                                   << 0x18U) | (QData)((IData)(
                                                               (0xffffffU 
                                                                & vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__PVT__full)))) 
                                 >> 0x20U)));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
        = ((0xffffff00U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]) 
           | (0xffU & (vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__PVT__full 
                       >> 0x10U)));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
        = ((0xffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]) 
           | (vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.__PVT__full 
              << 8U));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf 
        = ((((IData)(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.ovf) 
             << 3U) | ((IData)(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.ovf) 
                       << 2U)) | (((IData)(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.ovf) 
                                   << 1U) | (IData)(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.ovf)));
    if (vlSelfRef.tb_polite_mini__DOT__rst_n) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q 
            = vlSelfRef.tb_polite_mini__DOT__ena;
        if (vlSelfRef.tb_polite_mini__DOT__dut__DOT__en) {
            if (vlSelfRef.tb_polite_mini__DOT__dut__DOT__otick_q) {
                ++(vlSymsp->__Vcoverage[588]);
                vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad 
                    = vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q;
            } else {
                ++(vlSymsp->__Vcoverage[589]);
            }
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q 
                = vlSelfRef.tb_polite_mini__DOT__ui_in;
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q 
                = vlSelfRef.tb_polite_mini__DOT__uio_in;
            ++(vlSymsp->__Vcoverage[590]);
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q 
                = vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo;
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__otick_q 
                = vlSelfRef.tb_polite_mini__DOT__dut__DOT__phase;
        } else {
            ++(vlSymsp->__Vcoverage[591]);
        }
        ++(vlSymsp->__Vcoverage[593]);
    } else {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q = 1U;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q = 0U;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q = 0U;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q = 0U;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad = 0U;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__otick_q = 0U;
    }
    ++(vlSymsp->__Vcoverage[594]);
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xff7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfeffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x1000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfdffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x2000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfbffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x4000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x8000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xefffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x10000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xdfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x20000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xbfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x40000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if (((vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
          ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0x7fffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x80000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x1000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x2000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x4000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x8000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x10000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x20000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x40000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if (((vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U] 
          ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x80000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x1000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x2000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x4000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x8000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x10000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x20000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x40000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if (((vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U] 
          ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x80000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x1000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x2000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x4000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x8000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x10000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x20000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x40000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if (((vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U] 
          ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x80000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x1000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x2000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x4000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x8000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x10000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x20000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x40000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if (((vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U] 
          ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x80000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x1000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x2000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x4000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x8000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x10000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x20000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x40000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if (((vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U] 
          ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x80000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x1000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x2000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x4000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x8000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x10000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x20000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x40000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if (((vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U] 
          ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x80000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U]));
    }
    if (((0U != (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf)) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__pe_ovf_any))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__pe_ovf_any 
            = (0U != (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__pe_ovf)))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__pe_ovf 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__pe_ovf)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__pe_ovf)))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__pe_ovf 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__pe_ovf)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__pe_ovf)))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__pe_ovf 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__pe_ovf)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__pe_ovf)))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__pe_ovf 
            = ((7U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__pe_ovf)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf)));
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__acc_ovf 
        = ((0U != (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf)) 
           & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_busy));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__phase 
        = vlSelfRef.__Vdly__tb_polite_mini__DOT__dut__DOT__phase;
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__acc_ovf) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__acc_ovf))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__acc_ovf 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__acc_ovf;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__otick_q) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__otick_q))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__otick_q 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__otick_q;
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT____Vtogcov__uo_out)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q)));
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__phase) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__phase))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__phase 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__phase;
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__status 
        = (0x80U | ((((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy) 
                      << 6U) | (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__illegal) 
                                 << 5U) | (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ovf) 
                                            | (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__acc_ovf)) 
                                           << 4U))) 
                    | ((((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy) 
                         << 3U) | ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__phase) 
                                   << 2U)) | (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_busy)))));
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__ena_q))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__ena_q 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q;
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__en = vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q;
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__acc_en 
        = ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q) 
           & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_busy));
    if (((1U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                         >> 4U))) ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_load))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_load 
            = (1U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                              >> 4U)));
    }
    if (((2U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                         >> 4U))) ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_run))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_run 
            = (2U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                              >> 4U)));
    }
    if (((3U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                         >> 4U))) ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dload))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dload 
            = (3U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                              >> 4U)));
    }
    if (((5U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                         >> 4U))) ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_clear))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_clear 
            = (5U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                              >> 4U)));
    }
    if (((0xbU < (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                          >> 4U))) ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_rsvd))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_rsvd 
            = (0xbU < (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                               >> 4U)));
    }
    if (((4U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                         >> 4U))) ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dabrt))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dabrt 
            = (4U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                              >> 4U)));
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_abort 
        = ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q) 
           & (0x40U == (0xf0U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_load 
        = ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q) 
           & ((~ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy)) 
              & (0x30U == (0xf0U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)))));
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)));
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_now 
        = ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q) 
           & (IData)(((0U == (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left)) 
                      & (0x20U == (0xf0U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))))));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__wide 
        = ((8U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                           >> 4U))) | (0xaU == (0xfU 
                                                & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                                   >> 4U))));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_coll 
        = ((((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_busy)) 
           | (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
               >> 2U) & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy)));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__is_dbg 
        = ((6U <= (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                           >> 4U))) & (0xbU >= (0xfU 
                                                & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                                   >> 4U))));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__bad_bank 
        = (IData)(((0x60U == (0xf0U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))) 
                   & (0U != (0xfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)))));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu 
        = (0xffU & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all 
                    >> (0x1fU & VL_SHIFTL_III(5,5,32, 
                                              (3U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)), 3U))));
    if ((0x5fU >= (0x7fU & ((IData)(0x18U) * (3U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)))))) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                              * (3U 
                                                 & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)))))
                              ? 0U : (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[
                                      (((IData)(0x17U) 
                                        + (0x7fU & 
                                           ((IData)(0x18U) 
                                            * (3U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))))))) 
                            | (vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[
                               (3U & (((IData)(0x18U) 
                                       * (3U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)))))));
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                              * (3U 
                                                 & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)))))
                              ? 0U : (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[
                                      (((IData)(0x17U) 
                                        + (0x7fU & 
                                           ((IData)(0x18U) 
                                            * (3U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))))))) 
                            | (vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[
                               (3U & (((IData)(0x18U) 
                                       * (3U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q)))))));
    } else {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps = 0U;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm = 0U;
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__status)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status)));
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__acc_en) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__acc_en))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__acc_en 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__acc_en;
    }
    if (vlSelfRef.tb_polite_mini__DOT__dut__DOT__acc_en) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[0U];
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[1U];
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all[2U];
    } else {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[0U];
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[1U];
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all[2U];
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_abort) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_abort))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_abort 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_abort;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_load) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_load))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_load 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_load;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_now) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__run_now))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__run_now 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_now;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__wide) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__wide))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__wide 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__wide;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_coll) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_coll))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_coll 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_coll;
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_ok 
        = ((~ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_coll)) 
           & (0x50U == (0xf0U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))));
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__is_dbg) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dbg))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dbg 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__is_dbg;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__bad_bank) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__bad_bank))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__bad_bank 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__bad_bank;
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__dbg_req 
        = ((~ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__bad_bank)) 
           & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__is_dbg));
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu)));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm));
    }
    if ((0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))) {
        if ((0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))) {
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                = vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q;
            ++(vlSymsp->__Vcoverage[1102]);
        } else if ((0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))) {
            if ((0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))) {
                ++(vlSymsp->__Vcoverage[1102]);
                vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                    = vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q;
            } else {
                ++(vlSymsp->__Vcoverage[1101]);
                vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                    = ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_busy)
                        ? vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm
                        : vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps);
            }
        } else if ((0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))) {
            ++(vlSymsp->__Vcoverage[1100]);
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu;
        } else {
            ++(vlSymsp->__Vcoverage[1099]);
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps;
        }
    } else if ((0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))) {
        if ((0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))) {
            if ((0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))) {
                ++(vlSymsp->__Vcoverage[1098]);
                vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                    = vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf;
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
                vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                    = vlSelfRef.tb_polite_mini__DOT__dut__DOT__status;
            }
        } else {
            ++(vlSymsp->__Vcoverage[1102]);
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                = vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q;
        }
    } else {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q;
    }
    ++(vlSymsp->__Vcoverage[1103]);
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x1000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x2000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x4000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x8000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x10000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x20000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x40000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if (((vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U] 
          ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x80000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[0U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x1000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x2000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x4000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x8000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x10000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x20000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x40000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if (((vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U] 
          ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x80000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[1U]));
    }
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x1000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x2000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x4000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                       ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x8000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x10000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x20000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
                        ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x40000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if (((vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U] 
          ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x80000000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap[2U]));
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_ok) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_ok))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_ok 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_ok;
    }
    tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____VdfgRegularize_hf29a7531_0_1 
        = ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q) 
           & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_ok));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d 
        = ((1U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                           >> 4U))) ? (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q)
            : (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_ok) 
                & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                   >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf)));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_flg 
        = ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_ok) 
           & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q));
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__dbg_req) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__dbg_req))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__dbg_req 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__dbg_req;
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__ill_set 
        = ((IData)(((0x20U == (0xf0U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))) 
                    & (0U != (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left)))) 
           | ((IData)(((0x30U == (0xf0U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))) 
                       & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy))) 
              | ((IData)(((0x50U == (0xf0U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))) 
                          & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_coll))) 
                 | ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__bad_bank) 
                    | (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__dbg_req) 
                        & (0U != (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left))) 
                       | (0xbU < (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                          >> 4U))))))));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__dbg_start 
        = ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q) 
           & ((0U == (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left)) 
              & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__dbg_req)));
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1088]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1089]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v));
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__clr_outbuf 
        = ((IData)(tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____VdfgRegularize_hf29a7531_0_1) 
           & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
              >> 2U));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__clr_psum 
        = ((IData)(tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____VdfgRegularize_hf29a7531_0_1) 
           & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
              >> 3U));
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d)));
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_flg) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_flg))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_flg 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_flg;
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__ovf_d 
        = ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__acc_ovf) 
           | ((~ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_flg)) 
              & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ovf)));
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__ill_set) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__ill_set))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__ill_set 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__ill_set;
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__illegal_d 
        = ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__ill_set) 
           | ((~ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_flg)) 
              & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__illegal)));
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dbg_start) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_start))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_start 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__dbg_start;
    }
    if (vlSelfRef.tb_polite_mini__DOT__dut__DOT__dbg_start) {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__left_e 
            = ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__wide)
                ? 0xcU : 4U);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e = 0U;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v;
    } else {
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__left_e 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_k;
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val;
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__ofz = 
        ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dbg_start) 
         | (0U != (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left)));
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__clr_outbuf) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__clr_outbuf))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__clr_outbuf 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__clr_outbuf;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__clr_psum) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__clr_psum))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__clr_psum 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__clr_psum;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ovf_d) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__ovf_d))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__ovf_d 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__ovf_d;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__illegal_d) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__illegal_d))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__illegal_d 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__illegal_d;
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__left_e) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e)))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__left_e)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__left_e) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e)))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__left_e)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__left_e) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e)))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__left_e)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__left_e) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e)))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e 
            = ((7U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__left_e)));
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ofz) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__ofz))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__ofz 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__ofz;
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__step 
        = ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy) 
           & ((~ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ofz)) 
              & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__phase)));
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__dbg_tick 
        = ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ofz) 
           & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__phase));
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__k_e)))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__k_e 
            = ((6U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__k_e)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__k_e)))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__k_e 
            = ((5U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__k_e)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__k_e)))) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__k_e 
            = ((3U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__k_e)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e)));
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk_raw 
        = (7U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__phase)
                  ? (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e)
                  : ((0U == (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e))
                      ? 0U : ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e) 
                              - (IData)(1U)))));
    if ((1U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xfffffeU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (1U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((2U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xfffffdU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (2U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((4U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xfffffbU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (4U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((8U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
               ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xfffff7U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (8U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x10U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xffffefU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x10U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x20U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xffffdfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x20U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x40U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xffffbfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x40U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x80U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                  ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xffff7fU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x80U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x100U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xfffeffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x100U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x200U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xfffdffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x200U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x400U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xfffbffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x400U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x800U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                   ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xfff7ffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x800U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xffefffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x1000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xffdfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x2000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xffbfffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x4000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                    ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xff7fffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x8000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xfeffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x10000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xfdffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x20000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xfbffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x40000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                     ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xf7ffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x80000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xefffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x100000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xdfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x200000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0xbfffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x400000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                      ^ vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e 
            = ((0x7fffffU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e) 
               | (0x800000U & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e));
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__step) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__step))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__step 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__step;
    }
    if (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dbg_tick) 
         ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_tick))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_tick 
            = vlSelfRef.tb_polite_mini__DOT__dut__DOT__dbg_tick;
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk_raw) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk_raw)))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk_raw 
            = ((6U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk_raw)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk_raw)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk_raw) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk_raw)))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk_raw 
            = ((5U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk_raw)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk_raw)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk_raw) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk_raw)))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk_raw 
            = ((3U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk_raw)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk_raw)));
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk 
        = ((5U < (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk_raw))
            ? 5U : (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk_raw));
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk)))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk 
            = ((6U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk)))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk 
            = ((5U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk)))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk 
            = ((3U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk)));
    }
    if ((4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk))) {
        if ((2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk))) {
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn 
                = (0xfU & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                           >> 0x14U));
            ++(vlSymsp->__Vcoverage[1147]);
        } else if ((1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk))) {
            ++(vlSymsp->__Vcoverage[1147]);
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn 
                = (0xfU & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                           >> 0x14U));
        } else {
            ++(vlSymsp->__Vcoverage[1146]);
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn 
                = (0xfU & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                           >> 0x10U));
        }
    } else if ((2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk))) {
        if ((1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk))) {
            ++(vlSymsp->__Vcoverage[1145]);
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn 
                = (0xfU & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                           >> 0xcU));
        } else {
            ++(vlSymsp->__Vcoverage[1144]);
            vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn 
                = (0xfU & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                           >> 8U));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn 
            = (0xfU & (vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e 
                       >> 4U));
    } else {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn 
            = (0xfU & vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e);
    }
    ++(vlSymsp->__Vcoverage[1148]);
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_nib 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_nib)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_nib 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_nib)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_nib 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_nib)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_nib 
            = ((7U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_nib)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn)));
    }
    vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo 
        = ((((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dbg_tick) 
             << 7U) | (((~ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dbg_tick)) 
                        & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy)) 
                       << 6U)) | (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__illegal_d) 
                                   << 5U) | (((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ovf_d) 
                                              << 4U) 
                                             | ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dbg_tick)
                                                 ? (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn)
                                                 : (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_nib)))));
    if ((1U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (1U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (2U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (4U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo) 
               ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (8U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo) 
                  ^ (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo)));
    }
}
