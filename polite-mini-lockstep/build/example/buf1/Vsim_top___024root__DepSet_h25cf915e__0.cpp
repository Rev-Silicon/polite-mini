// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "Vsim_top__pch.h"
#include "Vsim_top__Syms.h"
#include "Vsim_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__ico(Vsim_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vsim_top___024root___eval_triggers__ico(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsim_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vsim_top___024root___ico_sequent__TOP__0(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->sim_top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst_n) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->sim_top__DOT____Vtogcov__rst_n = vlSelf->rst_n;
    }
    if (((IData)(vlSelf->ena) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__ena))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->sim_top__DOT____Vtogcov__ena = vlSelf->ena;
    }
    if ((1U & ((IData)(vlSelf->ui_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->sim_top__DOT____Vtogcov__ui_in = ((0xfeU 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->ui_in)));
    }
    if ((2U & ((IData)(vlSelf->ui_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->sim_top__DOT____Vtogcov__ui_in = ((0xfdU 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->ui_in)));
    }
    if ((4U & ((IData)(vlSelf->ui_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->sim_top__DOT____Vtogcov__ui_in = ((0xfbU 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->ui_in)));
    }
    if ((8U & ((IData)(vlSelf->ui_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->sim_top__DOT____Vtogcov__ui_in = ((0xf7U 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->ui_in)));
    }
    if ((0x10U & ((IData)(vlSelf->ui_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->sim_top__DOT____Vtogcov__ui_in = ((0xefU 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->ui_in)));
    }
    if ((0x20U & ((IData)(vlSelf->ui_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->sim_top__DOT____Vtogcov__ui_in = ((0xdfU 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelf->ui_in)));
    }
    if ((0x40U & ((IData)(vlSelf->ui_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->sim_top__DOT____Vtogcov__ui_in = ((0xbfU 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelf->ui_in)));
    }
    if ((0x80U & ((IData)(vlSelf->ui_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->sim_top__DOT____Vtogcov__ui_in = ((0x7fU 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__ui_in)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelf->ui_in)));
    }
    if ((1U & ((IData)(vlSelf->uio_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->sim_top__DOT____Vtogcov__uio_in = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->uio_in)));
    }
    if ((2U & ((IData)(vlSelf->uio_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->sim_top__DOT____Vtogcov__uio_in = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->uio_in)));
    }
    if ((4U & ((IData)(vlSelf->uio_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->sim_top__DOT____Vtogcov__uio_in = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->uio_in)));
    }
    if ((8U & ((IData)(vlSelf->uio_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->sim_top__DOT____Vtogcov__uio_in = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->uio_in)));
    }
    if ((0x10U & ((IData)(vlSelf->uio_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->sim_top__DOT____Vtogcov__uio_in = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->uio_in)));
    }
    if ((0x20U & ((IData)(vlSelf->uio_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->sim_top__DOT____Vtogcov__uio_in = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->uio_in)));
    }
    if ((0x40U & ((IData)(vlSelf->uio_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->sim_top__DOT____Vtogcov__uio_in = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->uio_in)));
    }
    if ((0x80U & ((IData)(vlSelf->uio_in) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->sim_top__DOT____Vtogcov__uio_in = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uio_in)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->uio_in)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__act(Vsim_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vsim_top___024root___eval_triggers__act(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_n__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsim_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__0(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__sim_top__DOT__dut__DOT__phase;
    __Vdly__sim_top__DOT__dut__DOT__phase = 0;
    CData/*2:0*/ __Vdly__sim_top__DOT__dut__DOT__u_dbg__DOT__index;
    __Vdly__sim_top__DOT__dut__DOT__u_dbg__DOT__index = 0;
    CData/*3:0*/ __Vdly__sim_top__DOT__dut__DOT__u_dbg__DOT__remaining;
    __Vdly__sim_top__DOT__dut__DOT__u_dbg__DOT__remaining = 0;
    CData/*4:0*/ __Vdly__sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx;
    __Vdly__sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx = 0;
    CData/*0:0*/ __Vdly__sim_top__DOT__dut__DOT__dump_busy;
    __Vdly__sim_top__DOT__dut__DOT__dump_busy = 0;
    // Body
    ++(vlSymsp->__Vcoverage[269]);
    ++(vlSymsp->__Vcoverage[644]);
    ++(vlSymsp->__Vcoverage[752]);
    ++(vlSymsp->__Vcoverage[867]);
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        ++(vlSymsp->__Vcoverage[267]);
        ++(vlSymsp->__Vcoverage[643]);
        ++(vlSymsp->__Vcoverage[751]);
        ++(vlSymsp->__Vcoverage[866]);
    }
    __Vdly__sim_top__DOT__dut__DOT__phase = vlSelf->sim_top__DOT__dut__DOT__phase;
    __Vdly__sim_top__DOT__dut__DOT__u_dbg__DOT__index 
        = vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__index;
    __Vdly__sim_top__DOT__dut__DOT__u_dbg__DOT__remaining 
        = vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining;
    __Vdly__sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx 
        = vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx;
    __Vdly__sim_top__DOT__dut__DOT__dump_busy = vlSelf->sim_top__DOT__dut__DOT__dump_busy;
    if (vlSelf->rst_n) {
        ++(vlSymsp->__Vcoverage[268]);
        if ((1U & (~ (IData)(vlSelf->sim_top__DOT__dut__DOT__ena_q)))) {
            ++(vlSymsp->__Vcoverage[266]);
            ++(vlSymsp->__Vcoverage[642]);
            ++(vlSymsp->__Vcoverage[750]);
            ++(vlSymsp->__Vcoverage[865]);
        }
        if (vlSelf->sim_top__DOT__dut__DOT__ena_q) {
            ++(vlSymsp->__Vcoverage[265]);
            ++(vlSymsp->__Vcoverage[641]);
            ++(vlSymsp->__Vcoverage[749]);
            ++(vlSymsp->__Vcoverage[864]);
            if ((1U & (~ (IData)(vlSelf->sim_top__DOT__dut__DOT__clr_outbuf)))) {
                ++(vlSymsp->__Vcoverage[855]);
            }
            if (vlSelf->sim_top__DOT__dut__DOT__clr_outbuf) {
                ++(vlSymsp->__Vcoverage[854]);
                vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] = 0U;
                vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] = 0U;
                vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] = 0U;
            }
            if (vlSelf->sim_top__DOT__dut__DOT__dump_load) {
                ++(vlSymsp->__Vcoverage[862]);
                __Vdly__sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx = 0U;
                __Vdly__sim_top__DOT__dut__DOT__dump_busy = 1U;
                vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                    = vlSelf->sim_top__DOT__dut__DOT__cap[0U];
                vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                    = vlSelf->sim_top__DOT__dut__DOT__cap[1U];
                vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                    = vlSelf->sim_top__DOT__dut__DOT__cap[2U];
            } else {
                if (vlSelf->sim_top__DOT__dut__DOT__dump_abort) {
                    __Vdly__sim_top__DOT__dut__DOT__dump_busy = 0U;
                }
                if ((((IData)(vlSelf->sim_top__DOT__dut__DOT__dump_busy) 
                      & (IData)(vlSelf->sim_top__DOT__dut__DOT__phase)) 
                     & (~ (IData)(vlSelf->sim_top__DOT__dut__DOT__ofz)))) {
                    __Vdly__sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx)));
                    if ((0x17U == (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx))) {
                        __Vdly__sim_top__DOT__dut__DOT__dump_busy = 0U;
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelf->sim_top__DOT__dut__DOT__dump_load)))) {
                ++(vlSymsp->__Vcoverage[863]);
                if (vlSelf->sim_top__DOT__dut__DOT__dump_abort) {
                    ++(vlSymsp->__Vcoverage[856]);
                }
                if ((1U & (~ (IData)(vlSelf->sim_top__DOT__dut__DOT__dump_abort)))) {
                    ++(vlSymsp->__Vcoverage[857]);
                }
                if ((((IData)(vlSelf->sim_top__DOT__dut__DOT__dump_busy) 
                      & (IData)(vlSelf->sim_top__DOT__dut__DOT__phase)) 
                     & (~ (IData)(vlSelf->sim_top__DOT__dut__DOT__ofz)))) {
                    ++(vlSymsp->__Vcoverage[860]);
                    if ((0x17U == (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx))) {
                        ++(vlSymsp->__Vcoverage[858]);
                    }
                    if ((0x17U != (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx))) {
                        ++(vlSymsp->__Vcoverage[859]);
                    }
                }
                if ((1U & (~ (((IData)(vlSelf->sim_top__DOT__dut__DOT__dump_busy) 
                               & (IData)(vlSelf->sim_top__DOT__dut__DOT__phase)) 
                              & (~ (IData)(vlSelf->sim_top__DOT__dut__DOT__ofz)))))) {
                    ++(vlSymsp->__Vcoverage[861]);
                }
            }
            if (vlSelf->sim_top__DOT__dut__DOT__dbg_start) {
                ++(vlSymsp->__Vcoverage[748]);
                __Vdly__sim_top__DOT__dut__DOT__u_dbg__DOT__index 
                    = vlSelf->sim_top__DOT__dut__DOT__phase;
                __Vdly__sim_top__DOT__dut__DOT__u_dbg__DOT__remaining 
                    = (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__duration) 
                               - (IData)(1U)));
                vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                    = vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture;
            } else {
                if ((0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining))) {
                    if (vlSelf->sim_top__DOT__dut__DOT__phase) {
                        __Vdly__sim_top__DOT__dut__DOT__u_dbg__DOT__index 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__index)));
                    }
                }
                if (vlSelf->sim_top__DOT__dut__DOT__fz_open) {
                    __Vdly__sim_top__DOT__dut__DOT__u_dbg__DOT__remaining 
                        = (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining) 
                                   - (IData)(1U)));
                }
            }
            if (vlSelf->sim_top__DOT__dut__DOT__otick_q) {
                ++(vlSymsp->__Vcoverage[263]);
                vlSelf->sim_top__DOT__dut__DOT__uo_pad 
                    = vlSelf->sim_top__DOT__dut__DOT__uo_q;
            }
            if ((1U & (~ (IData)(vlSelf->sim_top__DOT__dut__DOT__otick_q)))) {
                ++(vlSymsp->__Vcoverage[264]);
            }
            if ((1U & (~ (IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_start)))) {
                if ((0U == (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining))) {
                    ++(vlSymsp->__Vcoverage[747]);
                }
                if ((0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining))) {
                    ++(vlSymsp->__Vcoverage[746]);
                    if ((1U & (~ (IData)(vlSelf->sim_top__DOT__dut__DOT__phase)))) {
                        ++(vlSymsp->__Vcoverage[745]);
                    }
                    if (vlSelf->sim_top__DOT__dut__DOT__phase) {
                        ++(vlSymsp->__Vcoverage[744]);
                    }
                }
            }
            if ((1U == (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                >> 4U)))) {
                ++(vlSymsp->__Vcoverage[640]);
            }
            if ((1U != (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_ok) 
                              & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                 >> 1U))))) {
                    ++(vlSymsp->__Vcoverage[639]);
                }
                if (((IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_ok) 
                     & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                        >> 1U))) {
                    ++(vlSymsp->__Vcoverage[638]);
                }
            }
            __Vdly__sim_top__DOT__dut__DOT__phase = 
                (1U & (~ (IData)(vlSelf->sim_top__DOT__dut__DOT__phase)));
            vlSelf->sim_top__DOT__dut__DOT__ovf = vlSelf->sim_top__DOT__dut__DOT__ovf_d;
            vlSelf->sim_top__DOT__dut__DOT__illegal 
                = vlSelf->sim_top__DOT__dut__DOT__illegal_d;
            vlSelf->sim_top__DOT__dut__DOT__uo_q = vlSelf->sim_top__DOT__dut__DOT__core_uo;
            vlSelf->sim_top__DOT__dut__DOT__otick_q 
                = vlSelf->sim_top__DOT__dut__DOT__phase;
        }
    } else {
        __Vdly__sim_top__DOT__dut__DOT__phase = 0U;
        __Vdly__sim_top__DOT__dut__DOT__u_dbg__DOT__index = 0U;
        __Vdly__sim_top__DOT__dut__DOT__u_dbg__DOT__remaining = 0U;
        __Vdly__sim_top__DOT__dut__DOT__dump_busy = 0U;
        __Vdly__sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx = 0U;
        vlSelf->sim_top__DOT__dut__DOT__ovf = 0U;
        vlSelf->sim_top__DOT__dut__DOT__illegal = 0U;
        vlSelf->sim_top__DOT__dut__DOT__uo_pad = 0U;
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved = 0U;
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] = 0U;
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] = 0U;
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] = 0U;
        vlSelf->sim_top__DOT__dut__DOT__uo_q = 0U;
        vlSelf->sim_top__DOT__dut__DOT__otick_q = 0U;
    }
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__index 
        = __Vdly__sim_top__DOT__dut__DOT__u_dbg__DOT__index;
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining 
        = __Vdly__sim_top__DOT__dut__DOT__u_dbg__DOT__remaining;
    vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx 
        = __Vdly__sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx;
    vlSelf->sim_top__DOT__dut__DOT__dump_busy = __Vdly__sim_top__DOT__dut__DOT__dump_busy;
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__index) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__index)))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__index 
            = ((6U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__index)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__index)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__index) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__index)))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__index 
            = ((5U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__index)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__index)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__index) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__index)))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__index 
            = ((3U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__index)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__index)));
    }
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__previous_index 
        = ((0U == (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__index))
            ? 0U : (7U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__index) 
                          - (IData)(1U))));
    if (((0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining)) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__fz_open))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__fz_open 
            = (0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining));
    }
    vlSelf->sim_top__DOT__dut__DOT__fz_open = (0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining));
    vlSelf->fz_open = (0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining));
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__remaining)))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__remaining 
            = ((0xeU & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__remaining)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__remaining)))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__remaining 
            = ((0xdU & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__remaining)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__remaining)))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__remaining 
            = ((0xbU & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__remaining)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining)));
    }
    if ((8U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__remaining)))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__remaining 
            = ((7U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__remaining)) 
               | (8U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining)));
    }
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx)))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx 
            = ((0x1eU & (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx)))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx 
            = ((0x1dU & (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx)))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx 
            = ((0x1bU & (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx)));
    }
    if ((8U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx)))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx 
            = ((0x17U & (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx)) 
               | (8U & (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx)));
    }
    if ((0x10U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx)))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx 
            = ((0xfU & (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx)) 
               | (0x10U & (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx)));
    }
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__dump_busy) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_busy))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_busy 
            = vlSelf->sim_top__DOT__dut__DOT__dump_busy;
    }
    vlSelf->dump_busy = vlSelf->sim_top__DOT__dut__DOT__dump_busy;
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__ovf) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__ovf 
            = vlSelf->sim_top__DOT__dut__DOT__ovf;
    }
    vlSelf->ovf = vlSelf->sim_top__DOT__dut__DOT__ovf;
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__illegal) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__illegal))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__illegal 
            = vlSelf->sim_top__DOT__dut__DOT__illegal;
    }
    vlSelf->illegal = vlSelf->sim_top__DOT__dut__DOT__illegal;
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad 
            = ((0xfeU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad 
            = ((0xfdU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad 
            = ((0xfbU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad)));
    }
    if ((8U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad 
            = ((0xf7U & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)) 
               | (8U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad)));
    }
    if ((0x10U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad 
            = ((0xefU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)) 
               | (0x10U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad)));
    }
    if ((0x20U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad 
            = ((0xdfU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)) 
               | (0x20U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad)));
    }
    if ((0x40U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad 
            = ((0xbfU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)) 
               | (0x40U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad)));
    }
    if ((0x80U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad 
            = ((0x7fU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_pad)) 
               | (0x80U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_pad)));
    }
    vlSelf->uo_out = vlSelf->sim_top__DOT__dut__DOT__uo_pad;
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
               ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xfffffeU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
               ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xfffffdU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
               ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xfffffbU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
               ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xfffff7U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                  ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xffffefU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                  ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xffffdfU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                  ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xffffbfU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                  ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xffff7fU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                   ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xfffeffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                   ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xfffdffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                   ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xfffbffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                   ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xfff7ffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                    ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xffefffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                    ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xffdfffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                    ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xffbfffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                    ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xff7fffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                     ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xfeffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                     ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xfdffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                     ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xfbffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                     ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xf7ffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                      ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xefffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                      ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xdfffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                      ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0xbfffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved 
                      ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved 
            = ((0x7fffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved));
    }
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xfffffffeU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xfffffffdU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xfffffffbU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xfffffff7U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xffffffefU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xffffffdfU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xffffffbfU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xffffff7fU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xfffffeffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xfffffdffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xfffffbffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xfffff7ffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xffffefffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xffffdfffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xffffbfffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xffff7fffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xfffeffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xfffdffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xfffbffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xfff7ffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xffefffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xffdfffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xffbfffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xff7fffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x1000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xfeffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x1000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x2000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xfdffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x2000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x4000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xfbffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x4000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x8000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xf7ffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x8000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x10000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xefffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x10000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x20000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xdfffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x20000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((0x40000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0xbfffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x40000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if (((vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U] 
          ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U] 
            = ((0x7fffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[0U]) 
               | (0x80000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[0U]));
    }
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xfffffffeU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xfffffffdU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xfffffffbU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xfffffff7U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xffffffefU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xffffffdfU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xffffffbfU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xffffff7fU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xfffffeffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xfffffdffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xfffffbffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xfffff7ffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xffffefffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xffffdfffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xffffbfffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xffff7fffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xfffeffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xfffdffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xfffbffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xfff7ffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xffefffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xffdfffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xffbfffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xff7fffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x1000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xfeffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x1000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x2000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xfdffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x2000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x4000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xfbffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x4000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x8000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xf7ffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x8000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x10000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xefffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x10000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x20000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xdfffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x20000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((0x40000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0xbfffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x40000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if (((vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U] 
          ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U] 
            = ((0x7fffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[1U]) 
               | (0x80000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[1U]));
    }
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xfffffffeU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xfffffffdU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xfffffffbU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xfffffff7U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xffffffefU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xffffffdfU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xffffffbfU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xffffff7fU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xfffffeffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xfffffdffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xfffffbffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xfffff7ffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xffffefffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xffffdfffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xffffbfffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xffff7fffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xfffeffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xfffdffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xfffbffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xfff7ffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xffefffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xffdfffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xffbfffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xff7fffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x1000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xfeffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x1000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x2000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xfdffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x2000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x4000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xfbffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x4000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x8000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xf7ffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x8000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x10000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xefffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x10000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x20000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xdfffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x20000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if ((0x40000000U & (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0xbfffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x40000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    if (((vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U] 
          ^ vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U] 
            = ((0x7fffffffU & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__saved[2U]) 
               | (0x80000000U & vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[2U]));
    }
    vlSelf->sim_top__DOT__dut__DOT__dump_nib = ((IData)(vlSelf->sim_top__DOT__dut__DOT__dump_busy)
                                                 ? 
                                                ((0x5fU 
                                                  >= 
                                                  (0x7fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx), 2U)))
                                                  ? 
                                                 (0xfU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx), 2U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[
                                                       (((IData)(3U) 
                                                         + 
                                                         (0x7fU 
                                                          & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx), 2U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx), 2U))))) 
                                                     | (vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved[
                                                        (3U 
                                                         & (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx), 2U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx), 2U)))))
                                                  : 0U)
                                                 : 0U);
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__previous_index) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__previous_index)))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__previous_index 
            = ((6U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__previous_index)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__previous_index)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__previous_index) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__previous_index)))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__previous_index 
            = ((5U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__previous_index)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__previous_index)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__previous_index) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__previous_index)))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__previous_index 
            = ((3U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__previous_index)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__previous_index)));
    }
    if (((IData)(vlSelf->fz_open) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__fz_open))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->sim_top__DOT____Vtogcov__fz_open = vlSelf->fz_open;
    }
    if (((IData)(vlSelf->dump_busy) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__dump_busy))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->sim_top__DOT____Vtogcov__dump_busy 
            = vlSelf->dump_busy;
    }
    if (((IData)(vlSelf->ovf) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->sim_top__DOT____Vtogcov__ovf = vlSelf->ovf;
    }
    if (((IData)(vlSelf->illegal) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__illegal))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->sim_top__DOT____Vtogcov__illegal = vlSelf->illegal;
    }
    if ((1U & ((IData)(vlSelf->uo_out) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->sim_top__DOT____Vtogcov__uo_out = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->uo_out)));
    }
    if ((2U & ((IData)(vlSelf->uo_out) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->sim_top__DOT____Vtogcov__uo_out = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->uo_out)));
    }
    if ((4U & ((IData)(vlSelf->uo_out) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->sim_top__DOT____Vtogcov__uo_out = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->uo_out)));
    }
    if ((8U & ((IData)(vlSelf->uo_out) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->sim_top__DOT____Vtogcov__uo_out = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->uo_out)));
    }
    if ((0x10U & ((IData)(vlSelf->uo_out) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->sim_top__DOT____Vtogcov__uo_out = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->uo_out)));
    }
    if ((0x20U & ((IData)(vlSelf->uo_out) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->sim_top__DOT____Vtogcov__uo_out = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->uo_out)));
    }
    if ((0x40U & ((IData)(vlSelf->uo_out) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->sim_top__DOT____Vtogcov__uo_out = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->uo_out)));
    }
    if ((0x80U & ((IData)(vlSelf->uo_out) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->sim_top__DOT____Vtogcov__uo_out = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_out)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->uo_out)));
    }
    vlSelf->sim_top__DOT__dut__DOT__phase = __Vdly__sim_top__DOT__dut__DOT__phase;
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__dump_nib) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_nib)))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_nib 
            = ((0xeU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_nib)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__dump_nib)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__dump_nib) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_nib)))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_nib 
            = ((0xdU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_nib)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__dump_nib)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__dump_nib) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_nib)))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_nib 
            = ((0xbU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_nib)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__dump_nib)));
    }
    if ((8U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__dump_nib) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_nib)))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_nib 
            = ((7U & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_nib)) 
               | (8U & (IData)(vlSelf->sim_top__DOT__dut__DOT__dump_nib)));
    }
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0xfeU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0xfdU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0xfbU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q)));
    }
    if ((8U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0xf7U & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (8U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q)));
    }
    if ((0x10U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0xefU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (0x10U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q)));
    }
    if ((0x20U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0xdfU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (0x20U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q)));
    }
    if ((0x40U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0xbfU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (0x40U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q)));
    }
    if ((0x80U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q 
            = ((0x7fU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__uo_q)) 
               | (0x80U & (IData)(vlSelf->sim_top__DOT__dut__DOT__uo_q)));
    }
    vlSelf->uo_q = vlSelf->sim_top__DOT__dut__DOT__uo_q;
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__otick_q) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__otick_q))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__otick_q 
            = vlSelf->sim_top__DOT__dut__DOT__otick_q;
    }
    vlSelf->otick_q = vlSelf->sim_top__DOT__dut__DOT__otick_q;
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__phase) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__phase))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__phase 
            = vlSelf->sim_top__DOT__dut__DOT__phase;
    }
    vlSelf->phase = vlSelf->sim_top__DOT__dut__DOT__phase;
    if ((1U & ((IData)(vlSelf->uo_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->sim_top__DOT____Vtogcov__uo_q = ((0xfeU 
                                                  & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->uo_q)));
    }
    if ((2U & ((IData)(vlSelf->uo_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->sim_top__DOT____Vtogcov__uo_q = ((0xfdU 
                                                  & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->uo_q)));
    }
    if ((4U & ((IData)(vlSelf->uo_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->sim_top__DOT____Vtogcov__uo_q = ((0xfbU 
                                                  & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->uo_q)));
    }
    if ((8U & ((IData)(vlSelf->uo_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->sim_top__DOT____Vtogcov__uo_q = ((0xf7U 
                                                  & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)) 
                                                 | (8U 
                                                    & (IData)(vlSelf->uo_q)));
    }
    if ((0x10U & ((IData)(vlSelf->uo_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->sim_top__DOT____Vtogcov__uo_q = ((0xefU 
                                                  & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)) 
                                                 | (0x10U 
                                                    & (IData)(vlSelf->uo_q)));
    }
    if ((0x20U & ((IData)(vlSelf->uo_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->sim_top__DOT____Vtogcov__uo_q = ((0xdfU 
                                                  & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)) 
                                                 | (0x20U 
                                                    & (IData)(vlSelf->uo_q)));
    }
    if ((0x40U & ((IData)(vlSelf->uo_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->sim_top__DOT____Vtogcov__uo_q = ((0xbfU 
                                                  & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)) 
                                                 | (0x40U 
                                                    & (IData)(vlSelf->uo_q)));
    }
    if ((0x80U & ((IData)(vlSelf->uo_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->sim_top__DOT____Vtogcov__uo_q = ((0x7fU 
                                                  & (IData)(vlSelf->sim_top__DOT____Vtogcov__uo_q)) 
                                                 | (0x80U 
                                                    & (IData)(vlSelf->uo_q)));
    }
    if (((IData)(vlSelf->otick_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__otick_q))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->sim_top__DOT____Vtogcov__otick_q = vlSelf->otick_q;
    }
    if (((IData)(vlSelf->phase) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__phase))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->sim_top__DOT____Vtogcov__phase = vlSelf->phase;
    }
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__1(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____VdfgTmp_he7277885__0;
    sim_top__DOT__dut__DOT__u_ctrl__DOT____VdfgTmp_he7277885__0 = 0;
    // Body
    vlSelf->sim_top__DOT__dut__DOT__mul_all = (((IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.mul) 
                                                << 0x18U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.mul) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.mul) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.mul))));
    vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] = (IData)(
                                                           (((QData)((IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.psum)) 
                                                             << 0x18U) 
                                                            | (QData)((IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.psum))));
    vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] = 
        ((vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.psum 
          << 0x10U) | (IData)(((((QData)((IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.psum)) 
                                 << 0x18U) | (QData)((IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.psum))) 
                               >> 0x20U)));
    vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] = 
        ((vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.psum 
          << 8U) | (vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.psum 
                    >> 0x10U));
    vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] = (IData)(
                                                          (((QData)((IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.sum)) 
                                                            << 0x18U) 
                                                           | (QData)((IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.sum))));
    vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] = (
                                                   (vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.sum 
                                                    << 0x10U) 
                                                   | (IData)(
                                                             ((((QData)((IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.sum)) 
                                                                << 0x18U) 
                                                               | (QData)((IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.sum))) 
                                                              >> 0x20U)));
    vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] = (
                                                   (vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.sum 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.sum 
                                                      >> 0x10U));
    vlSelf->sim_top__DOT__dut__DOT__pe_ovf = (((IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.ovf) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.ovf) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.ovf) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.ovf))));
    if (vlSelf->rst_n) {
        if (vlSelf->sim_top__DOT__dut__DOT__ena_q) {
            if ((1U == (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                >> 4U)))) {
                vlSelf->sim_top__DOT__dut__DOT__inbuf 
                    = vlSelf->sim_top__DOT__dut__DOT__in_d_q;
            } else if (((IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_ok) 
                        & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                           >> 1U))) {
                vlSelf->sim_top__DOT__dut__DOT__inbuf = 0U;
            }
            vlSelf->sim_top__DOT__dut__DOT__run_busy 
                = vlSelf->sim_top__DOT__dut__DOT__run_now;
            vlSelf->sim_top__DOT__dut__DOT__in_d_q 
                = vlSelf->ui_in;
            vlSelf->sim_top__DOT__dut__DOT__in_i_q 
                = vlSelf->uio_in;
        }
    } else {
        vlSelf->sim_top__DOT__dut__DOT__inbuf = 0U;
        vlSelf->sim_top__DOT__dut__DOT__run_busy = 0U;
        vlSelf->sim_top__DOT__dut__DOT__in_d_q = 0U;
        vlSelf->sim_top__DOT__dut__DOT__in_i_q = 0U;
    }
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffffffeU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffffffdU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffffffbU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffffff7U & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffffffefU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffffffdfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffffffbfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffffff7fU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffffeffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffffdffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffffbffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffff7ffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffffefffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffffdfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffffbfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffff7fffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffeffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffdffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfffbffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfff7ffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffefffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffdfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xffbfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xff7fffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x1000000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfeffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x1000000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x2000000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfdffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x2000000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x4000000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xfbffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x4000000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x8000000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xf7ffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x8000000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x10000000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xefffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x10000000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x20000000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xdfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x20000000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if ((0x40000000U & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0xbfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x40000000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    if (((vlSelf->sim_top__DOT__dut__DOT__mul_all ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all 
            = ((0x7fffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__mul_all) 
               | (0x80000000U & vlSelf->sim_top__DOT__dut__DOT__mul_all));
    }
    vlSelf->product[0U] = (0xffU & vlSelf->sim_top__DOT__dut__DOT__mul_all);
    vlSelf->product[1U] = (0xffU & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                                    >> 8U));
    vlSelf->product[2U] = (0xffU & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                                    >> 0x10U));
    vlSelf->product[3U] = (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                           >> 0x18U);
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffffeU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffffdU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffffbU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffff7U & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffffefU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffffdfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffffbfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffff7fU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffeffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffdffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffbffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffff7ffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffefffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffdfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffbfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffff7fffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffeffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffdffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffbffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfff7ffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffefffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffdfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xffbfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xff7fffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x1000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfeffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x1000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x2000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfdffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x2000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x4000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xfbffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x4000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x8000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xf7ffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x8000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x10000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xefffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x10000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x20000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xdfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x20000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((0x40000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0xbfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x40000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if (((vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
          ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U] 
            = ((0x7fffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[0U]) 
               | (0x80000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]));
    }
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffffeU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffffdU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffffbU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffff7U & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffffefU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffffdfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffffbfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffff7fU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffeffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffdffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffbffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffff7ffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffefffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffdfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffbfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffff7fffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffeffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffdffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffbffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfff7ffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffefffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffdfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xffbfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xff7fffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x1000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfeffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x1000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x2000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfdffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x2000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x4000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xfbffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x4000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x8000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xf7ffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x8000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x10000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xefffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x10000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x20000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xdfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x20000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((0x40000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0xbfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x40000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if (((vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
          ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U] 
            = ((0x7fffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[1U]) 
               | (0x80000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[1U]));
    }
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffffeU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffffdU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffffbU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffff7U & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffffefU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffffdfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffffbfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffff7fU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffeffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffdffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffbffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffff7ffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffefffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffdfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffbfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffff7fffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffeffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffdffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffbffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfff7ffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffefffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffdfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xffbfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xff7fffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x1000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfeffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x1000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x2000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfdffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x2000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x4000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xfbffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x4000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x8000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xf7ffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x8000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x10000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xefffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x10000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x20000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xdfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x20000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if ((0x40000000U & (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0xbfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x40000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    if (((vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
          ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U] 
            = ((0x7fffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__psum_all[2U]) 
               | (0x80000000U & vlSelf->sim_top__DOT__dut__DOT__psum_all[2U]));
    }
    vlSelf->psum[0U] = (0xffffffU & vlSelf->sim_top__DOT__dut__DOT__psum_all[0U]);
    vlSelf->psum[1U] = (0xffffffU & ((vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                                      << 8U) | (vlSelf->sim_top__DOT__dut__DOT__psum_all[0U] 
                                                >> 0x18U)));
    vlSelf->psum[2U] = (0xffffffU & ((vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                                      << 0x10U) | (
                                                   vlSelf->sim_top__DOT__dut__DOT__psum_all[1U] 
                                                   >> 0x10U)));
    vlSelf->psum[3U] = (vlSelf->sim_top__DOT__dut__DOT__psum_all[2U] 
                        >> 8U);
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffffeU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffffdU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffffbU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffff7U & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffffefU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffffdfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffffbfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffff7fU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffeffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffdffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffbffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffff7ffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffefffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffdfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffbfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffff7fffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffeffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffdffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffbffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfff7ffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffefffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffdfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xffbfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xff7fffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x1000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfeffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x1000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x2000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfdffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x2000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x4000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xfbffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x4000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x8000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xf7ffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x8000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x10000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xefffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x10000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x20000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xdfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x20000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((0x40000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0xbfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x40000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if (((vlSelf->sim_top__DOT__dut__DOT__sum_all[0U] 
          ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U] 
            = ((0x7fffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[0U]) 
               | (0x80000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[0U]));
    }
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffffeU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffffdU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffffbU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffff7U & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffffefU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffffdfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffffbfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffff7fU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffeffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffdffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffbffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffff7ffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffefffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffdfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffbfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffff7fffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffeffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffdffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffbffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfff7ffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffefffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffdfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xffbfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xff7fffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x1000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfeffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x1000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x2000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfdffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x2000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x4000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xfbffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x4000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x8000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xf7ffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x8000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x10000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xefffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x10000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x20000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xdfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x20000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((0x40000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0xbfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x40000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if (((vlSelf->sim_top__DOT__dut__DOT__sum_all[1U] 
          ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U] 
            = ((0x7fffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[1U]) 
               | (0x80000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[1U]));
    }
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffffeU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffffdU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffffbU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffff7U & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffffefU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffffdfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffffbfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffff7fU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffeffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffdffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffbffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffff7ffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffefffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffdfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffbfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffff7fffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffeffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffdffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffbffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfff7ffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffefffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffdfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xffbfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xff7fffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x1000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfeffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x1000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x2000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfdffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x2000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x4000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xfbffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x4000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x8000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xf7ffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x8000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x10000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xefffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x10000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x20000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xdfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x20000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if ((0x40000000U & (vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0xbfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x40000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if (((vlSelf->sim_top__DOT__dut__DOT__sum_all[2U] 
          ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U] 
            = ((0x7fffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__sum_all[2U]) 
               | (0x80000000U & vlSelf->sim_top__DOT__dut__DOT__sum_all[2U]));
    }
    if (((0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__pe_ovf)) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__pe_ovf_any))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__pe_ovf_any 
            = (0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__pe_ovf));
    }
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__pe_ovf) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__pe_ovf)))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__pe_ovf 
            = ((0xeU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__pe_ovf)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__pe_ovf)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__pe_ovf) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__pe_ovf)))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__pe_ovf 
            = ((0xdU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__pe_ovf)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__pe_ovf)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__pe_ovf) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__pe_ovf)))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__pe_ovf 
            = ((0xbU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__pe_ovf)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__pe_ovf)));
    }
    if ((8U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__pe_ovf) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__pe_ovf)))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__pe_ovf 
            = ((7U & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__pe_ovf)) 
               | (8U & (IData)(vlSelf->sim_top__DOT__dut__DOT__pe_ovf)));
    }
    if ((1U & (vlSelf->product[0U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [0U]))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->sim_top__DOT____Vtogcov__product[0U] 
            = ((0xfeU & vlSelf->sim_top__DOT____Vtogcov__product
                [0U]) | (1U & vlSelf->product[0U]));
    }
    if ((2U & (vlSelf->product[0U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [0U]))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->sim_top__DOT____Vtogcov__product[0U] 
            = ((0xfdU & vlSelf->sim_top__DOT____Vtogcov__product
                [0U]) | (2U & vlSelf->product[0U]));
    }
    if ((4U & (vlSelf->product[0U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [0U]))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->sim_top__DOT____Vtogcov__product[0U] 
            = ((0xfbU & vlSelf->sim_top__DOT____Vtogcov__product
                [0U]) | (4U & vlSelf->product[0U]));
    }
    if ((8U & (vlSelf->product[0U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [0U]))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->sim_top__DOT____Vtogcov__product[0U] 
            = ((0xf7U & vlSelf->sim_top__DOT____Vtogcov__product
                [0U]) | (8U & vlSelf->product[0U]));
    }
    if ((0x10U & (vlSelf->product[0U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->sim_top__DOT____Vtogcov__product[0U] 
            = ((0xefU & vlSelf->sim_top__DOT____Vtogcov__product
                [0U]) | (0x10U & vlSelf->product[0U]));
    }
    if ((0x20U & (vlSelf->product[0U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->sim_top__DOT____Vtogcov__product[0U] 
            = ((0xdfU & vlSelf->sim_top__DOT____Vtogcov__product
                [0U]) | (0x20U & vlSelf->product[0U]));
    }
    if ((0x40U & (vlSelf->product[0U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->sim_top__DOT____Vtogcov__product[0U] 
            = ((0xbfU & vlSelf->sim_top__DOT____Vtogcov__product
                [0U]) | (0x40U & vlSelf->product[0U]));
    }
    if ((0x80U & (vlSelf->product[0U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->sim_top__DOT____Vtogcov__product[0U] 
            = ((0x7fU & vlSelf->sim_top__DOT____Vtogcov__product
                [0U]) | (0x80U & vlSelf->product[0U]));
    }
    if ((1U & (vlSelf->product[1U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [1U]))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->sim_top__DOT____Vtogcov__product[1U] 
            = ((0xfeU & vlSelf->sim_top__DOT____Vtogcov__product
                [1U]) | (1U & vlSelf->product[1U]));
    }
    if ((2U & (vlSelf->product[1U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [1U]))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->sim_top__DOT____Vtogcov__product[1U] 
            = ((0xfdU & vlSelf->sim_top__DOT____Vtogcov__product
                [1U]) | (2U & vlSelf->product[1U]));
    }
    if ((4U & (vlSelf->product[1U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [1U]))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->sim_top__DOT____Vtogcov__product[1U] 
            = ((0xfbU & vlSelf->sim_top__DOT____Vtogcov__product
                [1U]) | (4U & vlSelf->product[1U]));
    }
    if ((8U & (vlSelf->product[1U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [1U]))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->sim_top__DOT____Vtogcov__product[1U] 
            = ((0xf7U & vlSelf->sim_top__DOT____Vtogcov__product
                [1U]) | (8U & vlSelf->product[1U]));
    }
    if ((0x10U & (vlSelf->product[1U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->sim_top__DOT____Vtogcov__product[1U] 
            = ((0xefU & vlSelf->sim_top__DOT____Vtogcov__product
                [1U]) | (0x10U & vlSelf->product[1U]));
    }
    if ((0x20U & (vlSelf->product[1U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->sim_top__DOT____Vtogcov__product[1U] 
            = ((0xdfU & vlSelf->sim_top__DOT____Vtogcov__product
                [1U]) | (0x20U & vlSelf->product[1U]));
    }
    if ((0x40U & (vlSelf->product[1U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->sim_top__DOT____Vtogcov__product[1U] 
            = ((0xbfU & vlSelf->sim_top__DOT____Vtogcov__product
                [1U]) | (0x40U & vlSelf->product[1U]));
    }
    if ((0x80U & (vlSelf->product[1U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->sim_top__DOT____Vtogcov__product[1U] 
            = ((0x7fU & vlSelf->sim_top__DOT____Vtogcov__product
                [1U]) | (0x80U & vlSelf->product[1U]));
    }
    if ((1U & (vlSelf->product[2U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [2U]))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->sim_top__DOT____Vtogcov__product[2U] 
            = ((0xfeU & vlSelf->sim_top__DOT____Vtogcov__product
                [2U]) | (1U & vlSelf->product[2U]));
    }
    if ((2U & (vlSelf->product[2U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [2U]))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->sim_top__DOT____Vtogcov__product[2U] 
            = ((0xfdU & vlSelf->sim_top__DOT____Vtogcov__product
                [2U]) | (2U & vlSelf->product[2U]));
    }
    if ((4U & (vlSelf->product[2U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [2U]))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->sim_top__DOT____Vtogcov__product[2U] 
            = ((0xfbU & vlSelf->sim_top__DOT____Vtogcov__product
                [2U]) | (4U & vlSelf->product[2U]));
    }
    if ((8U & (vlSelf->product[2U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [2U]))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->sim_top__DOT____Vtogcov__product[2U] 
            = ((0xf7U & vlSelf->sim_top__DOT____Vtogcov__product
                [2U]) | (8U & vlSelf->product[2U]));
    }
    if ((0x10U & (vlSelf->product[2U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->sim_top__DOT____Vtogcov__product[2U] 
            = ((0xefU & vlSelf->sim_top__DOT____Vtogcov__product
                [2U]) | (0x10U & vlSelf->product[2U]));
    }
    if ((0x20U & (vlSelf->product[2U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->sim_top__DOT____Vtogcov__product[2U] 
            = ((0xdfU & vlSelf->sim_top__DOT____Vtogcov__product
                [2U]) | (0x20U & vlSelf->product[2U]));
    }
    if ((0x40U & (vlSelf->product[2U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->sim_top__DOT____Vtogcov__product[2U] 
            = ((0xbfU & vlSelf->sim_top__DOT____Vtogcov__product
                [2U]) | (0x40U & vlSelf->product[2U]));
    }
    if ((0x80U & (vlSelf->product[2U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->sim_top__DOT____Vtogcov__product[2U] 
            = ((0x7fU & vlSelf->sim_top__DOT____Vtogcov__product
                [2U]) | (0x80U & vlSelf->product[2U]));
    }
    if ((1U & (vlSelf->product[3U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [3U]))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->sim_top__DOT____Vtogcov__product[3U] 
            = ((0xfeU & vlSelf->sim_top__DOT____Vtogcov__product
                [3U]) | (1U & vlSelf->product[3U]));
    }
    if ((2U & (vlSelf->product[3U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [3U]))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->sim_top__DOT____Vtogcov__product[3U] 
            = ((0xfdU & vlSelf->sim_top__DOT____Vtogcov__product
                [3U]) | (2U & vlSelf->product[3U]));
    }
    if ((4U & (vlSelf->product[3U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [3U]))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->sim_top__DOT____Vtogcov__product[3U] 
            = ((0xfbU & vlSelf->sim_top__DOT____Vtogcov__product
                [3U]) | (4U & vlSelf->product[3U]));
    }
    if ((8U & (vlSelf->product[3U] ^ vlSelf->sim_top__DOT____Vtogcov__product
               [3U]))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->sim_top__DOT____Vtogcov__product[3U] 
            = ((0xf7U & vlSelf->sim_top__DOT____Vtogcov__product
                [3U]) | (8U & vlSelf->product[3U]));
    }
    if ((0x10U & (vlSelf->product[3U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->sim_top__DOT____Vtogcov__product[3U] 
            = ((0xefU & vlSelf->sim_top__DOT____Vtogcov__product
                [3U]) | (0x10U & vlSelf->product[3U]));
    }
    if ((0x20U & (vlSelf->product[3U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->sim_top__DOT____Vtogcov__product[3U] 
            = ((0xdfU & vlSelf->sim_top__DOT____Vtogcov__product
                [3U]) | (0x20U & vlSelf->product[3U]));
    }
    if ((0x40U & (vlSelf->product[3U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->sim_top__DOT____Vtogcov__product[3U] 
            = ((0xbfU & vlSelf->sim_top__DOT____Vtogcov__product
                [3U]) | (0x40U & vlSelf->product[3U]));
    }
    if ((0x80U & (vlSelf->product[3U] ^ vlSelf->sim_top__DOT____Vtogcov__product
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->sim_top__DOT____Vtogcov__product[3U] 
            = ((0x7fU & vlSelf->sim_top__DOT____Vtogcov__product
                [3U]) | (0x80U & vlSelf->product[3U]));
    }
    if ((1U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [0U]))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xfffffeU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (1U & vlSelf->psum[0U]));
    }
    if ((2U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [0U]))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xfffffdU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (2U & vlSelf->psum[0U]));
    }
    if ((4U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [0U]))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xfffffbU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (4U & vlSelf->psum[0U]));
    }
    if ((8U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [0U]))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xfffff7U & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (8U & vlSelf->psum[0U]));
    }
    if ((0x10U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xffffefU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x10U & vlSelf->psum[0U]));
    }
    if ((0x20U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xffffdfU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x20U & vlSelf->psum[0U]));
    }
    if ((0x40U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xffffbfU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x40U & vlSelf->psum[0U]));
    }
    if ((0x80U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xffff7fU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x80U & vlSelf->psum[0U]));
    }
    if ((0x100U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xfffeffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x100U & vlSelf->psum[0U]));
    }
    if ((0x200U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xfffdffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x200U & vlSelf->psum[0U]));
    }
    if ((0x400U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xfffbffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x400U & vlSelf->psum[0U]));
    }
    if ((0x800U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xfff7ffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x800U & vlSelf->psum[0U]));
    }
    if ((0x1000U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xffefffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x1000U & vlSelf->psum[0U]));
    }
    if ((0x2000U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xffdfffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x2000U & vlSelf->psum[0U]));
    }
    if ((0x4000U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xffbfffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x4000U & vlSelf->psum[0U]));
    }
    if ((0x8000U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xff7fffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x8000U & vlSelf->psum[0U]));
    }
    if ((0x10000U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xfeffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x10000U & vlSelf->psum[0U]));
    }
    if ((0x20000U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xfdffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x20000U & vlSelf->psum[0U]));
    }
    if ((0x40000U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xfbffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x40000U & vlSelf->psum[0U]));
    }
    if ((0x80000U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xf7ffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x80000U & vlSelf->psum[0U]));
    }
    if ((0x100000U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xefffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x100000U & vlSelf->psum[0U]));
    }
    if ((0x200000U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xdfffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x200000U & vlSelf->psum[0U]));
    }
    if ((0x400000U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0xbfffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x400000U & vlSelf->psum[0U]));
    }
    if ((0x800000U & (vlSelf->psum[0U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->sim_top__DOT____Vtogcov__psum[0U] = 
            ((0x7fffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [0U]) | (0x800000U & vlSelf->psum[0U]));
    }
    if ((1U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [1U]))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xfffffeU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (1U & vlSelf->psum[1U]));
    }
    if ((2U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [1U]))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xfffffdU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (2U & vlSelf->psum[1U]));
    }
    if ((4U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [1U]))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xfffffbU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (4U & vlSelf->psum[1U]));
    }
    if ((8U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [1U]))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xfffff7U & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (8U & vlSelf->psum[1U]));
    }
    if ((0x10U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xffffefU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x10U & vlSelf->psum[1U]));
    }
    if ((0x20U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xffffdfU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x20U & vlSelf->psum[1U]));
    }
    if ((0x40U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xffffbfU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x40U & vlSelf->psum[1U]));
    }
    if ((0x80U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xffff7fU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x80U & vlSelf->psum[1U]));
    }
    if ((0x100U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xfffeffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x100U & vlSelf->psum[1U]));
    }
    if ((0x200U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xfffdffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x200U & vlSelf->psum[1U]));
    }
    if ((0x400U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xfffbffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x400U & vlSelf->psum[1U]));
    }
    if ((0x800U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xfff7ffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x800U & vlSelf->psum[1U]));
    }
    if ((0x1000U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xffefffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x1000U & vlSelf->psum[1U]));
    }
    if ((0x2000U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xffdfffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x2000U & vlSelf->psum[1U]));
    }
    if ((0x4000U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xffbfffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x4000U & vlSelf->psum[1U]));
    }
    if ((0x8000U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xff7fffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x8000U & vlSelf->psum[1U]));
    }
    if ((0x10000U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xfeffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x10000U & vlSelf->psum[1U]));
    }
    if ((0x20000U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xfdffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x20000U & vlSelf->psum[1U]));
    }
    if ((0x40000U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xfbffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x40000U & vlSelf->psum[1U]));
    }
    if ((0x80000U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xf7ffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x80000U & vlSelf->psum[1U]));
    }
    if ((0x100000U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xefffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x100000U & vlSelf->psum[1U]));
    }
    if ((0x200000U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xdfffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x200000U & vlSelf->psum[1U]));
    }
    if ((0x400000U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0xbfffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x400000U & vlSelf->psum[1U]));
    }
    if ((0x800000U & (vlSelf->psum[1U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->sim_top__DOT____Vtogcov__psum[1U] = 
            ((0x7fffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [1U]) | (0x800000U & vlSelf->psum[1U]));
    }
    if ((1U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [2U]))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xfffffeU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (1U & vlSelf->psum[2U]));
    }
    if ((2U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [2U]))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xfffffdU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (2U & vlSelf->psum[2U]));
    }
    if ((4U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [2U]))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xfffffbU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (4U & vlSelf->psum[2U]));
    }
    if ((8U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [2U]))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xfffff7U & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (8U & vlSelf->psum[2U]));
    }
    if ((0x10U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xffffefU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x10U & vlSelf->psum[2U]));
    }
    if ((0x20U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xffffdfU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x20U & vlSelf->psum[2U]));
    }
    if ((0x40U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xffffbfU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x40U & vlSelf->psum[2U]));
    }
    if ((0x80U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xffff7fU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x80U & vlSelf->psum[2U]));
    }
    if ((0x100U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xfffeffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x100U & vlSelf->psum[2U]));
    }
    if ((0x200U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xfffdffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x200U & vlSelf->psum[2U]));
    }
    if ((0x400U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xfffbffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x400U & vlSelf->psum[2U]));
    }
    if ((0x800U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xfff7ffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x800U & vlSelf->psum[2U]));
    }
    if ((0x1000U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xffefffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x1000U & vlSelf->psum[2U]));
    }
    if ((0x2000U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xffdfffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x2000U & vlSelf->psum[2U]));
    }
    if ((0x4000U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xffbfffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x4000U & vlSelf->psum[2U]));
    }
    if ((0x8000U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xff7fffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x8000U & vlSelf->psum[2U]));
    }
    if ((0x10000U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xfeffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x10000U & vlSelf->psum[2U]));
    }
    if ((0x20000U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xfdffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x20000U & vlSelf->psum[2U]));
    }
    if ((0x40000U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xfbffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x40000U & vlSelf->psum[2U]));
    }
    if ((0x80000U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xf7ffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x80000U & vlSelf->psum[2U]));
    }
    if ((0x100000U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xefffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x100000U & vlSelf->psum[2U]));
    }
    if ((0x200000U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xdfffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x200000U & vlSelf->psum[2U]));
    }
    if ((0x400000U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0xbfffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x400000U & vlSelf->psum[2U]));
    }
    if ((0x800000U & (vlSelf->psum[2U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->sim_top__DOT____Vtogcov__psum[2U] = 
            ((0x7fffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [2U]) | (0x800000U & vlSelf->psum[2U]));
    }
    if ((1U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [3U]))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xfffffeU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (1U & vlSelf->psum[3U]));
    }
    if ((2U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [3U]))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xfffffdU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (2U & vlSelf->psum[3U]));
    }
    if ((4U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [3U]))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xfffffbU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (4U & vlSelf->psum[3U]));
    }
    if ((8U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
               [3U]))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xfffff7U & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (8U & vlSelf->psum[3U]));
    }
    if ((0x10U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xffffefU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x10U & vlSelf->psum[3U]));
    }
    if ((0x20U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xffffdfU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x20U & vlSelf->psum[3U]));
    }
    if ((0x40U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xffffbfU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x40U & vlSelf->psum[3U]));
    }
    if ((0x80U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xffff7fU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x80U & vlSelf->psum[3U]));
    }
    if ((0x100U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xfffeffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x100U & vlSelf->psum[3U]));
    }
    if ((0x200U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xfffdffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x200U & vlSelf->psum[3U]));
    }
    if ((0x400U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xfffbffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x400U & vlSelf->psum[3U]));
    }
    if ((0x800U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xfff7ffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x800U & vlSelf->psum[3U]));
    }
    if ((0x1000U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xffefffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x1000U & vlSelf->psum[3U]));
    }
    if ((0x2000U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xffdfffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x2000U & vlSelf->psum[3U]));
    }
    if ((0x4000U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xffbfffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x4000U & vlSelf->psum[3U]));
    }
    if ((0x8000U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xff7fffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x8000U & vlSelf->psum[3U]));
    }
    if ((0x10000U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xfeffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x10000U & vlSelf->psum[3U]));
    }
    if ((0x20000U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xfdffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x20000U & vlSelf->psum[3U]));
    }
    if ((0x40000U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xfbffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x40000U & vlSelf->psum[3U]));
    }
    if ((0x80000U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xf7ffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x80000U & vlSelf->psum[3U]));
    }
    if ((0x100000U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xefffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x100000U & vlSelf->psum[3U]));
    }
    if ((0x200000U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xdfffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x200000U & vlSelf->psum[3U]));
    }
    if ((0x400000U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0xbfffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x400000U & vlSelf->psum[3U]));
    }
    if ((0x800000U & (vlSelf->psum[3U] ^ vlSelf->sim_top__DOT____Vtogcov__psum
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->sim_top__DOT____Vtogcov__psum[3U] = 
            ((0x7fffffU & vlSelf->sim_top__DOT____Vtogcov__psum
              [3U]) | (0x800000U & vlSelf->psum[3U]));
    }
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0xfeU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0xfdU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0xfbU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf)));
    }
    if ((8U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0xf7U & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (8U & (IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf)));
    }
    if ((0x10U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0xefU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (0x10U & (IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf)));
    }
    if ((0x20U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0xdfU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (0x20U & (IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf)));
    }
    if ((0x40U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0xbfU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (0x40U & (IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf)));
    }
    if ((0x80U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf 
            = ((0x7fU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__inbuf)) 
               | (0x80U & (IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf)));
    }
    vlSelf->inbuf = vlSelf->sim_top__DOT__dut__DOT__inbuf;
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__run_busy) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__run_busy))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__run_busy 
            = vlSelf->sim_top__DOT__dut__DOT__run_busy;
    }
    if (vlSelf->sim_top__DOT__dut__DOT__run_busy) {
        vlSelf->run_busy = 1U;
        vlSelf->sim_top__DOT__dut__DOT__cap[0U] = vlSelf->sim_top__DOT__dut__DOT__sum_all[0U];
        vlSelf->sim_top__DOT__dut__DOT__cap[1U] = vlSelf->sim_top__DOT__dut__DOT__sum_all[1U];
        vlSelf->sim_top__DOT__dut__DOT__cap[2U] = vlSelf->sim_top__DOT__dut__DOT__sum_all[2U];
        sim_top__DOT__dut__DOT__u_ctrl__DOT____VdfgTmp_he7277885__0 
            = (0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__pe_ovf));
    } else {
        vlSelf->run_busy = 0U;
        vlSelf->sim_top__DOT__dut__DOT__cap[0U] = vlSelf->sim_top__DOT__dut__DOT__psum_all[0U];
        vlSelf->sim_top__DOT__dut__DOT__cap[1U] = vlSelf->sim_top__DOT__dut__DOT__psum_all[1U];
        vlSelf->sim_top__DOT__dut__DOT__cap[2U] = vlSelf->sim_top__DOT__dut__DOT__psum_all[2U];
        sim_top__DOT__dut__DOT__u_ctrl__DOT____VdfgTmp_he7277885__0 = 0U;
    }
    if ((1U & ((IData)(vlSelf->inbuf) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->sim_top__DOT____Vtogcov__inbuf = ((0xfeU 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->inbuf)));
    }
    if ((2U & ((IData)(vlSelf->inbuf) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->sim_top__DOT____Vtogcov__inbuf = ((0xfdU 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->inbuf)));
    }
    if ((4U & ((IData)(vlSelf->inbuf) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->sim_top__DOT____Vtogcov__inbuf = ((0xfbU 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->inbuf)));
    }
    if ((8U & ((IData)(vlSelf->inbuf) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->sim_top__DOT____Vtogcov__inbuf = ((0xf7U 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->inbuf)));
    }
    if ((0x10U & ((IData)(vlSelf->inbuf) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->sim_top__DOT____Vtogcov__inbuf = ((0xefU 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->inbuf)));
    }
    if ((0x20U & ((IData)(vlSelf->inbuf) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->sim_top__DOT____Vtogcov__inbuf = ((0xdfU 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelf->inbuf)));
    }
    if ((0x40U & ((IData)(vlSelf->inbuf) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->sim_top__DOT____Vtogcov__inbuf = ((0xbfU 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelf->inbuf)));
    }
    if ((0x80U & ((IData)(vlSelf->inbuf) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->sim_top__DOT____Vtogcov__inbuf = ((0x7fU 
                                                   & (IData)(vlSelf->sim_top__DOT____Vtogcov__inbuf)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelf->inbuf)));
    }
    if (((IData)(vlSelf->run_busy) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__run_busy))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->sim_top__DOT____Vtogcov__run_busy = vlSelf->run_busy;
    }
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffffffeU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffffffdU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffffffbU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffffff7U & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffffffefU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffffffdfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffffffbfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffffff7fU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffffeffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffffdffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffffbffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffff7ffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffffefffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffffdfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffffbfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffff7fffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffeffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffdffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfffbffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfff7ffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffefffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffdfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xffbfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xff7fffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x1000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfeffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x1000000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x2000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfdffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x2000000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x4000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xfbffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x4000000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x8000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xf7ffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x8000000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x10000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xefffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x10000000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x20000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xdfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x20000000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((0x40000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[0U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0xbfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x40000000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if (((vlSelf->sim_top__DOT__dut__DOT__cap[0U] ^ 
          vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U] 
            = ((0x7fffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[0U]) 
               | (0x80000000U & vlSelf->sim_top__DOT__dut__DOT__cap[0U]));
    }
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffffffeU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffffffdU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffffffbU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffffff7U & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffffffefU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffffffdfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffffffbfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffffff7fU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffffeffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffffdffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffffbffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffff7ffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffffefffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffffdfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffffbfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffff7fffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffeffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffdffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfffbffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfff7ffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffefffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffdfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xffbfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xff7fffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x1000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfeffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x1000000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x2000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfdffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x2000000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x4000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xfbffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x4000000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x8000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xf7ffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x8000000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x10000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xefffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x10000000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x20000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xdfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x20000000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((0x40000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[1U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0xbfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x40000000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if (((vlSelf->sim_top__DOT__dut__DOT__cap[1U] ^ 
          vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U] 
            = ((0x7fffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[1U]) 
               | (0x80000000U & vlSelf->sim_top__DOT__dut__DOT__cap[1U]));
    }
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffffffeU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffffffdU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffffffbU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
               ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffffff7U & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffffffefU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffffffdfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffffffbfU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                  ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffffff7fU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffffeffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffffdffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffffbffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                   ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffff7ffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffffefffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffffdfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffffbfffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                    ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffff7fffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffeffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffdffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfffbffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                     ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfff7ffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffefffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffdfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xffbfffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                      ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xff7fffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x1000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfeffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x1000000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x2000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfdffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x2000000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x4000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xfbffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x4000000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x8000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                       ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xf7ffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x8000000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x10000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xefffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x10000000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x20000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xdfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x20000000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if ((0x40000000U & (vlSelf->sim_top__DOT__dut__DOT__cap[2U] 
                        ^ vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0xbfffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x40000000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    if (((vlSelf->sim_top__DOT__dut__DOT__cap[2U] ^ 
          vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U] 
            = ((0x7fffffffU & vlSelf->sim_top__DOT__dut__DOT____Vtogcov__cap[2U]) 
               | (0x80000000U & vlSelf->sim_top__DOT__dut__DOT__cap[2U]));
    }
    vlSelf->sim_top__DOT__dut__DOT__status = (0x80U 
                                              | (((IData)(vlSelf->sim_top__DOT__dut__DOT__dump_busy) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->sim_top__DOT__dut__DOT__illegal) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->sim_top__DOT__dut__DOT__ovf) 
                                                         | (IData)(sim_top__DOT__dut__DOT__u_ctrl__DOT____VdfgTmp_he7277885__0)) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->sim_top__DOT__dut__DOT__dump_busy) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->sim_top__DOT__dut__DOT__phase) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->sim_top__DOT__dut__DOT__dump_busy) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->sim_top__DOT__dut__DOT__run_busy))))))));
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0xfeU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0xfdU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0xfbU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q)));
    }
    if ((8U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0xf7U & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (8U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q)));
    }
    if ((0x10U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0xefU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (0x10U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q)));
    }
    if ((0x20U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0xdfU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (0x20U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q)));
    }
    if ((0x40U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0xbfU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (0x40U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q)));
    }
    if ((0x80U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q 
            = ((0x7fU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_d_q)) 
               | (0x80U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q)));
    }
    vlSelf->in_d_q = vlSelf->sim_top__DOT__dut__DOT__in_d_q;
    vlSelf->sim_top__DOT__dut__DOT__ena_q = ((1U & 
                                              (~ (IData)(vlSelf->rst_n))) 
                                             || (IData)(vlSelf->ena));
    if ((0x80U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))) {
        if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                              >> 4U)))) {
                    ++(vlSymsp->__Vcoverage[739]);
                }
                if ((0x10U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))) {
                    ++(vlSymsp->__Vcoverage[740]);
                }
            }
            if ((0x20U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))) {
                if ((0x10U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))) {
                    ++(vlSymsp->__Vcoverage[742]);
                }
                if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                              >> 4U)))) {
                    ++(vlSymsp->__Vcoverage[741]);
                }
            }
        }
        if ((0x40U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))) {
            ++(vlSymsp->__Vcoverage[742]);
            vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                = (0xffffffU & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q));
        } else {
            vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                = (0xffffffU & ((0x20U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))
                                 ? ((0x10U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))
                                     ? (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q)
                                     : ((IData)(vlSelf->sim_top__DOT__dut__DOT__run_busy)
                                         ? ((0x5fU 
                                             >= (0x7fU 
                                                 & ((IData)(0x18U) 
                                                    * 
                                                    (3U 
                                                     & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q)))))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q)))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->sim_top__DOT__dut__DOT__sum_all[
                                                  (((IData)(0x17U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x18U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))))))) 
                                                | (vlSelf->sim_top__DOT__dut__DOT__sum_all[
                                                   (3U 
                                                    & (((IData)(0x18U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))))))
                                             : 0U) : 
                                        ((0x5fU >= 
                                          (0x7fU & 
                                           ((IData)(0x18U) 
                                            * (3U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q)))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x18U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q)))))
                                               ? 0U
                                               : (vlSelf->sim_top__DOT__dut__DOT__psum_all[
                                                  (((IData)(0x17U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x18U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))))))) 
                                             | (vlSelf->sim_top__DOT__dut__DOT__psum_all[
                                                (3U 
                                                 & (((IData)(0x18U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x18U) 
                                                    * 
                                                    (3U 
                                                     & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))))))
                                          : 0U))) : 
                                ((0x10U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))
                                  ? (0xffU & (vlSelf->sim_top__DOT__dut__DOT__mul_all 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(5,32,32, 
                                                                  (3U 
                                                                   & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q)), 3U))))
                                  : ((0x5fU >= (0x7fU 
                                                & ((IData)(0x18U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q)))))
                                      ? (((0U == (0x1fU 
                                                  & ((IData)(0x18U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q)))))
                                           ? 0U : (
                                                   vlSelf->sim_top__DOT__dut__DOT__psum_all[
                                                   (((IData)(0x17U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x18U) 
                                                         * 
                                                         (3U 
                                                          & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x18U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))))))) 
                                         | (vlSelf->sim_top__DOT__dut__DOT__psum_all[
                                            (3U & (
                                                   ((IData)(0x18U) 
                                                    * 
                                                    (3U 
                                                     & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))) 
                                                   >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(0x18U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))))))
                                      : 0U))));
        }
    } else {
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
            = (0xffffffU & ((0x40U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))
                             ? ((0x20U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))
                                 ? ((0x10U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))
                                     ? (IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf)
                                     : (IData)(vlSelf->sim_top__DOT__dut__DOT__status))
                                 : (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q))
                             : (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q)));
    }
    if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                      >> 6U)))) {
            ++(vlSymsp->__Vcoverage[742]);
        }
        if ((0x40U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))) {
            if ((0x20U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))) {
                if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                              >> 4U)))) {
                    ++(vlSymsp->__Vcoverage[737]);
                }
                if ((0x10U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))) {
                    ++(vlSymsp->__Vcoverage[738]);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                          >> 5U)))) {
                ++(vlSymsp->__Vcoverage[742]);
            }
        }
    }
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0xfeU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0xfdU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0xfbU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q)));
    }
    if ((8U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0xf7U & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (8U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q)));
    }
    if ((0x10U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0xefU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (0x10U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q)));
    }
    if ((0x20U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0xdfU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (0x20U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q)));
    }
    if ((0x40U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0xbfU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (0x40U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q)));
    }
    if ((0x80U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q 
            = ((0x7fU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__in_i_q)) 
               | (0x80U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q)));
    }
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__duration 
        = (((8U == (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                            >> 4U))) | (0xaU == (0xfU 
                                                 & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                                    >> 4U))))
            ? 0xcU : 4U);
    vlSelf->in_i_q = vlSelf->sim_top__DOT__dut__DOT__in_i_q;
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__debug_read 
        = ((6U <= (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                           >> 4U))) & (0xbU >= (0xfU 
                                                & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                                   >> 4U))));
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__status) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status 
            = ((0xfeU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__status)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__status) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status 
            = ((0xfdU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__status)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__status) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status 
            = ((0xfbU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__status)));
    }
    if ((8U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__status) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status 
            = ((0xf7U & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)) 
               | (8U & (IData)(vlSelf->sim_top__DOT__dut__DOT__status)));
    }
    if ((0x10U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__status) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status 
            = ((0xefU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)) 
               | (0x10U & (IData)(vlSelf->sim_top__DOT__dut__DOT__status)));
    }
    if ((0x20U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__status) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status 
            = ((0xdfU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)) 
               | (0x20U & (IData)(vlSelf->sim_top__DOT__dut__DOT__status)));
    }
    if ((0x40U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__status) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status 
            = ((0xbfU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)) 
               | (0x40U & (IData)(vlSelf->sim_top__DOT__dut__DOT__status)));
    }
    if ((0x80U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__status) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status 
            = ((0x7fU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__status)) 
               | (0x80U & (IData)(vlSelf->sim_top__DOT__dut__DOT__status)));
    }
    if ((1U & ((IData)(vlSelf->in_d_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->sim_top__DOT____Vtogcov__in_d_q = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->in_d_q)));
    }
    if ((2U & ((IData)(vlSelf->in_d_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->sim_top__DOT____Vtogcov__in_d_q = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->in_d_q)));
    }
    if ((4U & ((IData)(vlSelf->in_d_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->sim_top__DOT____Vtogcov__in_d_q = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->in_d_q)));
    }
    if ((8U & ((IData)(vlSelf->in_d_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->sim_top__DOT____Vtogcov__in_d_q = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->in_d_q)));
    }
    if ((0x10U & ((IData)(vlSelf->in_d_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->sim_top__DOT____Vtogcov__in_d_q = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->in_d_q)));
    }
    if ((0x20U & ((IData)(vlSelf->in_d_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->sim_top__DOT____Vtogcov__in_d_q = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->in_d_q)));
    }
    if ((0x40U & ((IData)(vlSelf->in_d_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->sim_top__DOT____Vtogcov__in_d_q = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->in_d_q)));
    }
    if ((0x80U & ((IData)(vlSelf->in_d_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->sim_top__DOT____Vtogcov__in_d_q = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_d_q)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->in_d_q)));
    }
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__duration) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__duration)))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__duration 
            = ((0xeU & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__duration)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__duration)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__duration) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__duration)))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__duration 
            = ((0xdU & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__duration)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__duration)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__duration) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__duration)))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__duration 
            = ((0xbU & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__duration)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__duration)));
    }
    if ((8U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__duration) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__duration)))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__duration 
            = ((7U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__duration)) 
               | (8U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__duration)));
    }
    if ((1U & ((IData)(vlSelf->in_i_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->sim_top__DOT____Vtogcov__in_i_q = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->in_i_q)));
    }
    if ((2U & ((IData)(vlSelf->in_i_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->sim_top__DOT____Vtogcov__in_i_q = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->in_i_q)));
    }
    if ((4U & ((IData)(vlSelf->in_i_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->sim_top__DOT____Vtogcov__in_i_q = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->in_i_q)));
    }
    if ((8U & ((IData)(vlSelf->in_i_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->sim_top__DOT____Vtogcov__in_i_q = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->in_i_q)));
    }
    if ((0x10U & ((IData)(vlSelf->in_i_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->sim_top__DOT____Vtogcov__in_i_q = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->in_i_q)));
    }
    if ((0x20U & ((IData)(vlSelf->in_i_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->sim_top__DOT____Vtogcov__in_i_q = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->in_i_q)));
    }
    if ((0x40U & ((IData)(vlSelf->in_i_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->sim_top__DOT____Vtogcov__in_i_q = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->in_i_q)));
    }
    if ((0x80U & ((IData)(vlSelf->in_i_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->sim_top__DOT____Vtogcov__in_i_q = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->sim_top__DOT____Vtogcov__in_i_q)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->in_i_q)));
    }
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__debug_read) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__debug_read))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__debug_read 
            = vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__debug_read;
    }
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__bad 
        = ((0xcU <= (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                             >> 4U))) | (((0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining)) 
                                          & ((2U == 
                                              (0xfU 
                                               & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                                  >> 4U))) 
                                             | (IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__debug_read))) 
                                         | ((IData)(
                                                    ((0x60U 
                                                      == 
                                                      (0xf0U 
                                                       & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))) 
                                                     & (0U 
                                                        != 
                                                        (0xfU 
                                                         & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))))) 
                                            | ((IData)(
                                                       ((0x50U 
                                                         == 
                                                         (0xf0U 
                                                          & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))) 
                                                        & ((((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                                             >> 3U) 
                                                            & (IData)(vlSelf->sim_top__DOT__dut__DOT__run_busy)) 
                                                           | (((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                                               >> 2U) 
                                                              & (IData)(vlSelf->sim_top__DOT__dut__DOT__dump_busy))))) 
                                               | (IData)(
                                                         ((0x30U 
                                                           == 
                                                           (0xf0U 
                                                            & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))) 
                                                          & (IData)(vlSelf->sim_top__DOT__dut__DOT__dump_busy)))))));
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
               ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xfffffeU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
               ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xfffffdU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
               ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xfffffbU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
               ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xfffff7U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                  ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xffffefU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                  ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xffffdfU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                  ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xffffbfU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                  ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xffff7fU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                   ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xfffeffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                   ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xfffdffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                   ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xfffbffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                   ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xfff7ffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                    ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xffefffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                    ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xffdfffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                    ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xffbfffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                    ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xff7fffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                     ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xfeffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                     ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xfdffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                     ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xfbffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                     ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xf7ffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                      ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xefffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                      ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xdfffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                      ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0xbfffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture 
                      ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture 
            = ((0x7fffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture));
    }
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__ena_q) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__ena_q))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__ena_q 
            = vlSelf->sim_top__DOT__dut__DOT__ena_q;
    }
    vlSelf->ena_q = vlSelf->sim_top__DOT__dut__DOT__ena_q;
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__bad) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__bad))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__bad 
            = vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__bad;
    }
    vlSelf->sim_top__DOT__dut__DOT__run_now = ((~ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__bad)) 
                                               & (0x20U 
                                                  == 
                                                  (0xf0U 
                                                   & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))));
    vlSelf->sim_top__DOT__dut__DOT__dump_load = ((~ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__bad)) 
                                                 & (0x30U 
                                                    == 
                                                    (0xf0U 
                                                     & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))));
    vlSelf->sim_top__DOT__dut__DOT__dump_abort = ((~ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__bad)) 
                                                  & (0x40U 
                                                     == 
                                                     (0xf0U 
                                                      & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))));
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_ok 
        = ((~ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__bad)) 
           & (0x50U == (0xf0U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))));
    vlSelf->sim_top__DOT__dut__DOT__dbg_start = ((~ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__bad)) 
                                                 & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__debug_read));
    if (((IData)(vlSelf->ena_q) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__ena_q))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->sim_top__DOT____Vtogcov__ena_q = vlSelf->ena_q;
    }
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__run_now) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__run_now))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__run_now 
            = vlSelf->sim_top__DOT__dut__DOT__run_now;
    }
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__dump_load) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_load))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_load 
            = vlSelf->sim_top__DOT__dut__DOT__dump_load;
    }
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__dump_abort) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_abort))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dump_abort 
            = vlSelf->sim_top__DOT__dut__DOT__dump_abort;
    }
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_ok) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clear_ok))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clear_ok 
            = vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_ok;
    }
    vlSelf->sim_top__DOT__dut__DOT__clr_psum = ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_ok) 
                                                & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                                   >> 3U));
    vlSelf->sim_top__DOT__dut__DOT__clr_outbuf = ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_ok) 
                                                  & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                                     >> 2U));
    vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_flags 
        = ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_ok) 
           & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q));
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_start) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_start))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_start 
            = vlSelf->sim_top__DOT__dut__DOT__dbg_start;
    }
    vlSelf->sim_top__DOT__dut__DOT__ofz = ((IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_start) 
                                           | (0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining)));
    if (vlSelf->sim_top__DOT__dut__DOT__dbg_start) {
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__effective_index = 0U;
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
            = vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture;
    } else {
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__effective_index 
            = ((IData)(vlSelf->sim_top__DOT__dut__DOT__phase)
                ? (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__index)
                : (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__previous_index));
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
            = vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved;
    }
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__clr_psum) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__clr_psum))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__clr_psum 
            = vlSelf->sim_top__DOT__dut__DOT__clr_psum;
    }
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__clr_outbuf) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__clr_outbuf))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__clr_outbuf 
            = vlSelf->sim_top__DOT__dut__DOT__clr_outbuf;
    }
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_flags) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clear_flags))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clear_flags 
            = vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_flags;
    }
    vlSelf->sim_top__DOT__dut__DOT__illegal_d = ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__bad) 
                                                 | ((~ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_flags)) 
                                                    & (IData)(vlSelf->sim_top__DOT__dut__DOT__illegal)));
    vlSelf->sim_top__DOT__dut__DOT__ovf_d = ((IData)(sim_top__DOT__dut__DOT__u_ctrl__DOT____VdfgTmp_he7277885__0) 
                                             | ((~ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_flags)) 
                                                & (IData)(vlSelf->sim_top__DOT__dut__DOT__ovf)));
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__ofz) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__ofz))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__ofz 
            = vlSelf->sim_top__DOT__dut__DOT__ofz;
    }
    vlSelf->sim_top__DOT__dut__DOT__dbg_tick = ((IData)(vlSelf->sim_top__DOT__dut__DOT__ofz) 
                                                & (IData)(vlSelf->sim_top__DOT__dut__DOT__phase));
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__effective_index) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__effective_index)))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__effective_index 
            = ((6U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__effective_index)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__effective_index)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__effective_index) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__effective_index)))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__effective_index 
            = ((5U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__effective_index)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__effective_index)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__effective_index) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__effective_index)))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__effective_index 
            = ((3U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__effective_index)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__effective_index)));
    }
    vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__limited_index 
        = ((5U < (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__effective_index))
            ? 5U : (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__effective_index));
    if ((1U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
               ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xfffffeU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (1U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((2U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
               ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xfffffdU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (2U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((4U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
               ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xfffffbU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (4U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((8U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
               ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xfffff7U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (8U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x10U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                  ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xffffefU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x10U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x20U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                  ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xffffdfU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x20U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x40U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                  ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xffffbfU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x40U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x80U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                  ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xffff7fU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x80U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x100U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                   ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xfffeffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x100U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x200U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                   ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xfffdffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x200U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x400U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                   ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xfffbffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x400U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x800U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                   ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xfff7ffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x800U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x1000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                    ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xffefffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x1000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x2000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                    ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xffdfffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x2000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x4000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                    ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xffbfffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x4000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x8000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                    ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xff7fffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x8000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x10000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                     ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xfeffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x10000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x20000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                     ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xfdffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x20000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x40000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                     ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xfbffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x40000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x80000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                     ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xf7ffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x80000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x100000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                      ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xefffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x100000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x200000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                      ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xdfffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x200000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x400000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                      ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0xbfffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x400000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if ((0x800000U & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                      ^ vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now 
            = ((0x7fffffU & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now) 
               | (0x800000U & vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now));
    }
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__illegal_d) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__illegal_d))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__illegal_d 
            = vlSelf->sim_top__DOT__dut__DOT__illegal_d;
    }
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__ovf_d) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__ovf_d))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__ovf_d 
            = vlSelf->sim_top__DOT__dut__DOT__ovf_d;
    }
    if (((IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_tick) 
         ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_tick))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_tick 
            = vlSelf->sim_top__DOT__dut__DOT__dbg_tick;
    }
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__limited_index) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__limited_index)))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__limited_index 
            = ((6U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__limited_index)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__limited_index)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__limited_index) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__limited_index)))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__limited_index 
            = ((5U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__limited_index)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__limited_index)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__limited_index) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__limited_index)))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__limited_index 
            = ((3U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__limited_index)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__limited_index)));
    }
    vlSelf->sim_top__DOT__dut__DOT__dbg_nib = ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__limited_index), 2U)))
                                                ? (0xfU 
                                                   & (vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__limited_index), 2U))))
                                                : 0U);
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_nib) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_nib 
            = ((0xeU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_nib)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_nib)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_nib) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_nib 
            = ((0xdU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_nib)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_nib)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_nib) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_nib 
            = ((0xbU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_nib)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_nib)));
    }
    if ((8U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_nib) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_nib 
            = ((7U & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__dbg_nib)) 
               | (8U & (IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_nib)));
    }
    vlSelf->sim_top__DOT__dut__DOT__core_uo = (((IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_tick) 
                                                << 7U) 
                                               | ((((~ (IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_tick)) 
                                                    & (IData)(vlSelf->sim_top__DOT__dut__DOT__dump_busy)) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->sim_top__DOT__dut__DOT__illegal_d) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->sim_top__DOT__dut__DOT__ovf_d) 
                                                         << 4U) 
                                                        | ((IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_tick)
                                                            ? (IData)(vlSelf->sim_top__DOT__dut__DOT__dbg_nib)
                                                            : (IData)(vlSelf->sim_top__DOT__dut__DOT__dump_nib))))));
    if ((1U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0xfeU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (1U & (IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo)));
    }
    if ((2U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0xfdU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (2U & (IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo)));
    }
    if ((4U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0xfbU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (4U & (IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo)));
    }
    if ((8U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo) 
               ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0xf7U & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (8U & (IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo)));
    }
    if ((0x10U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0xefU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (0x10U & (IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo)));
    }
    if ((0x20U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0xdfU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (0x20U & (IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo)));
    }
    if ((0x40U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0xbfU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (0x40U & (IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo)));
    }
    if ((0x80U & ((IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo) 
                  ^ (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo 
            = ((0x7fU & (IData)(vlSelf->sim_top__DOT__dut__DOT____Vtogcov__core_uo)) 
               | (0x80U & (IData)(vlSelf->sim_top__DOT__dut__DOT__core_uo)));
    }
    vlSelf->core_uo = vlSelf->sim_top__DOT__dut__DOT__core_uo;
    if ((1U & ((IData)(vlSelf->core_uo) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->sim_top__DOT____Vtogcov__core_uo = 
            ((0xfeU & (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)) 
             | (1U & (IData)(vlSelf->core_uo)));
    }
    if ((2U & ((IData)(vlSelf->core_uo) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->sim_top__DOT____Vtogcov__core_uo = 
            ((0xfdU & (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)) 
             | (2U & (IData)(vlSelf->core_uo)));
    }
    if ((4U & ((IData)(vlSelf->core_uo) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->sim_top__DOT____Vtogcov__core_uo = 
            ((0xfbU & (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)) 
             | (4U & (IData)(vlSelf->core_uo)));
    }
    if ((8U & ((IData)(vlSelf->core_uo) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->sim_top__DOT____Vtogcov__core_uo = 
            ((0xf7U & (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)) 
             | (8U & (IData)(vlSelf->core_uo)));
    }
    if ((0x10U & ((IData)(vlSelf->core_uo) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->sim_top__DOT____Vtogcov__core_uo = 
            ((0xefU & (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)) 
             | (0x10U & (IData)(vlSelf->core_uo)));
    }
    if ((0x20U & ((IData)(vlSelf->core_uo) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->sim_top__DOT____Vtogcov__core_uo = 
            ((0xdfU & (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)) 
             | (0x20U & (IData)(vlSelf->core_uo)));
    }
    if ((0x40U & ((IData)(vlSelf->core_uo) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->sim_top__DOT____Vtogcov__core_uo = 
            ((0xbfU & (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)) 
             | (0x40U & (IData)(vlSelf->core_uo)));
    }
    if ((0x80U & ((IData)(vlSelf->core_uo) ^ (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->sim_top__DOT____Vtogcov__core_uo = 
            ((0x7fU & (IData)(vlSelf->sim_top__DOT____Vtogcov__core_uo)) 
             | (0x80U & (IData)(vlSelf->core_uo)));
    }
}
