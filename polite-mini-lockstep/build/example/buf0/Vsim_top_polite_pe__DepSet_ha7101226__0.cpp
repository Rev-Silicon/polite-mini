// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "Vsim_top__pch.h"
#include "Vsim_top__Syms.h"
#include "Vsim_top_polite_pe.h"

VL_INLINE_OPT void Vsim_top_polite_pe___nba_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0(Vsim_top_polite_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___nba_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[812]);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        ++(vlSymsp->__Vcoverage[811]);
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q) {
            ++(vlSymsp->__Vcoverage[809]);
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now)))) {
                ++(vlSymsp->__Vcoverage[805]);
            }
            if (vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now) {
                ++(vlSymsp->__Vcoverage[804]);
                vlSelf->mul = (0xffU & VL_MULS_III(8, 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(8,4, 
                                                                    (0xfU 
                                                                     & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__inbuf) 
                                                                        >> 4U)))), 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(8,4, 
                                                                    (0xfU 
                                                                     & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__in_d_q) 
                                                                        >> 4U))))));
            }
            if (vlSymsp->TOP.sim_top__DOT__dut__DOT__run_busy) {
                ++(vlSymsp->__Vcoverage[808]);
                vlSelf->psum = vlSelf->sum;
            } else if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                vlSelf->psum = 0U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_busy)))) {
                if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                    ++(vlSymsp->__Vcoverage[806]);
                }
                if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum)))) {
                    ++(vlSymsp->__Vcoverage[807]);
                }
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q)))) {
            ++(vlSymsp->__Vcoverage[810]);
        }
    } else {
        vlSelf->mul = 0U;
        vlSelf->psum = 0U;
    }
    if ((1U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->__Vtogcov__psum = ((0x7fffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800000U & vlSelf->psum));
    }
    vlSelf->sum = (0xffffffU & (vlSelf->psum + ((0xffff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->mul) 
                                                                   >> 7U)))) 
                                                    << 8U)) 
                                                | (IData)(vlSelf->mul))));
    if ((1U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->sum));
    }
    if ((2U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->sum));
    }
    if ((4U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->sum));
    }
    if ((8U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->sum));
    }
    if ((0x10U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->sum));
    }
    if ((0x20U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->sum));
    }
    if ((0x40U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->sum));
    }
    if ((0x80U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->sum));
    }
    if ((0x100U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->sum));
    }
    if ((0x200U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->sum));
    }
    if ((0x400U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->sum));
    }
    if ((0x800U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->sum));
    }
    if ((0x1000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->sum));
    }
    if ((0x2000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->sum));
    }
    if ((0x4000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->sum));
    }
    if ((0x8000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->sum));
    }
    if ((0x10000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->sum));
    }
    if ((0x20000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->sum));
    }
    if ((0x40000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->sum));
    }
    if ((0x80000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->sum));
    }
    if ((0x100000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->sum));
    }
    if ((0x200000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->sum));
    }
    if ((0x400000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->sum));
    }
    if ((0x800000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->__Vtogcov__sum = ((0x7fffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800000U & vlSelf->sum));
    }
    vlSelf->ovf = (((1U & (vlSelf->psum >> 0x17U)) 
                    == (1U & ((IData)(vlSelf->mul) 
                              >> 7U))) & ((1U & (vlSelf->sum 
                                                 >> 0x17U)) 
                                          != (1U & 
                                              (vlSelf->psum 
                                               >> 0x17U))));
    if (((IData)(vlSelf->ovf) ^ (IData)(vlSelf->__Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->__Vtogcov__ovf = vlSelf->ovf;
    }
}

VL_INLINE_OPT void Vsim_top_polite_pe___nba_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__0(Vsim_top_polite_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___nba_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[812]);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        ++(vlSymsp->__Vcoverage[811]);
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q) {
            ++(vlSymsp->__Vcoverage[809]);
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now)))) {
                ++(vlSymsp->__Vcoverage[805]);
            }
            if (vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now) {
                ++(vlSymsp->__Vcoverage[804]);
                vlSelf->mul = (0xffU & VL_MULS_III(8, 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(8,4, 
                                                                    (0xfU 
                                                                     & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__inbuf) 
                                                                        >> 4U)))), 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(8,4, 
                                                                    (0xfU 
                                                                     & (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__in_d_q))))));
            }
            if (vlSymsp->TOP.sim_top__DOT__dut__DOT__run_busy) {
                ++(vlSymsp->__Vcoverage[808]);
                vlSelf->psum = vlSelf->sum;
            } else if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                vlSelf->psum = 0U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_busy)))) {
                if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                    ++(vlSymsp->__Vcoverage[806]);
                }
                if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum)))) {
                    ++(vlSymsp->__Vcoverage[807]);
                }
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q)))) {
            ++(vlSymsp->__Vcoverage[810]);
        }
    } else {
        vlSelf->mul = 0U;
        vlSelf->psum = 0U;
    }
    if ((1U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->__Vtogcov__psum = ((0x7fffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800000U & vlSelf->psum));
    }
    vlSelf->sum = (0xffffffU & (vlSelf->psum + ((0xffff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->mul) 
                                                                   >> 7U)))) 
                                                    << 8U)) 
                                                | (IData)(vlSelf->mul))));
    if ((1U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->sum));
    }
    if ((2U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->sum));
    }
    if ((4U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->sum));
    }
    if ((8U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->sum));
    }
    if ((0x10U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->sum));
    }
    if ((0x20U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->sum));
    }
    if ((0x40U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->sum));
    }
    if ((0x80U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->sum));
    }
    if ((0x100U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->sum));
    }
    if ((0x200U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->sum));
    }
    if ((0x400U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->sum));
    }
    if ((0x800U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->sum));
    }
    if ((0x1000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->sum));
    }
    if ((0x2000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->sum));
    }
    if ((0x4000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->sum));
    }
    if ((0x8000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->sum));
    }
    if ((0x10000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->sum));
    }
    if ((0x20000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->sum));
    }
    if ((0x40000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->sum));
    }
    if ((0x80000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->sum));
    }
    if ((0x100000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->sum));
    }
    if ((0x200000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->sum));
    }
    if ((0x400000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->sum));
    }
    if ((0x800000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->__Vtogcov__sum = ((0x7fffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800000U & vlSelf->sum));
    }
    vlSelf->ovf = (((1U & (vlSelf->psum >> 0x17U)) 
                    == (1U & ((IData)(vlSelf->mul) 
                              >> 7U))) & ((1U & (vlSelf->sum 
                                                 >> 0x17U)) 
                                          != (1U & 
                                              (vlSelf->psum 
                                               >> 0x17U))));
    if (((IData)(vlSelf->ovf) ^ (IData)(vlSelf->__Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->__Vtogcov__ovf = vlSelf->ovf;
    }
}

VL_INLINE_OPT void Vsim_top_polite_pe___nba_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0(Vsim_top_polite_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___nba_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[812]);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        ++(vlSymsp->__Vcoverage[811]);
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q) {
            ++(vlSymsp->__Vcoverage[809]);
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now)))) {
                ++(vlSymsp->__Vcoverage[805]);
            }
            if (vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now) {
                ++(vlSymsp->__Vcoverage[804]);
                vlSelf->mul = (0xffU & VL_MULS_III(8, 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(8,4, 
                                                                    (0xfU 
                                                                     & (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__inbuf)))), 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(8,4, 
                                                                    (0xfU 
                                                                     & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__in_d_q) 
                                                                        >> 4U))))));
            }
            if (vlSymsp->TOP.sim_top__DOT__dut__DOT__run_busy) {
                ++(vlSymsp->__Vcoverage[808]);
                vlSelf->psum = vlSelf->sum;
            } else if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                vlSelf->psum = 0U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_busy)))) {
                if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                    ++(vlSymsp->__Vcoverage[806]);
                }
                if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum)))) {
                    ++(vlSymsp->__Vcoverage[807]);
                }
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q)))) {
            ++(vlSymsp->__Vcoverage[810]);
        }
    } else {
        vlSelf->mul = 0U;
        vlSelf->psum = 0U;
    }
    if ((1U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->__Vtogcov__psum = ((0x7fffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800000U & vlSelf->psum));
    }
    vlSelf->sum = (0xffffffU & (vlSelf->psum + ((0xffff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->mul) 
                                                                   >> 7U)))) 
                                                    << 8U)) 
                                                | (IData)(vlSelf->mul))));
    if ((1U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->sum));
    }
    if ((2U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->sum));
    }
    if ((4U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->sum));
    }
    if ((8U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->sum));
    }
    if ((0x10U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->sum));
    }
    if ((0x20U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->sum));
    }
    if ((0x40U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->sum));
    }
    if ((0x80U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->sum));
    }
    if ((0x100U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->sum));
    }
    if ((0x200U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->sum));
    }
    if ((0x400U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->sum));
    }
    if ((0x800U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->sum));
    }
    if ((0x1000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->sum));
    }
    if ((0x2000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->sum));
    }
    if ((0x4000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->sum));
    }
    if ((0x8000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->sum));
    }
    if ((0x10000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->sum));
    }
    if ((0x20000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->sum));
    }
    if ((0x40000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->sum));
    }
    if ((0x80000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->sum));
    }
    if ((0x100000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->sum));
    }
    if ((0x200000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->sum));
    }
    if ((0x400000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->sum));
    }
    if ((0x800000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->__Vtogcov__sum = ((0x7fffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800000U & vlSelf->sum));
    }
    vlSelf->ovf = (((1U & (vlSelf->psum >> 0x17U)) 
                    == (1U & ((IData)(vlSelf->mul) 
                              >> 7U))) & ((1U & (vlSelf->sum 
                                                 >> 0x17U)) 
                                          != (1U & 
                                              (vlSelf->psum 
                                               >> 0x17U))));
    if (((IData)(vlSelf->ovf) ^ (IData)(vlSelf->__Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->__Vtogcov__ovf = vlSelf->ovf;
    }
}

VL_INLINE_OPT void Vsim_top_polite_pe___nba_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__0(Vsim_top_polite_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___nba_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[812]);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        ++(vlSymsp->__Vcoverage[811]);
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q) {
            ++(vlSymsp->__Vcoverage[809]);
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now)))) {
                ++(vlSymsp->__Vcoverage[805]);
            }
            if (vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now) {
                ++(vlSymsp->__Vcoverage[804]);
                vlSelf->mul = (0xffU & VL_MULS_III(8, 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(8,4, 
                                                                    (0xfU 
                                                                     & (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__inbuf)))), 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(8,4, 
                                                                    (0xfU 
                                                                     & (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__in_d_q))))));
            }
            if (vlSymsp->TOP.sim_top__DOT__dut__DOT__run_busy) {
                ++(vlSymsp->__Vcoverage[808]);
                vlSelf->psum = vlSelf->sum;
            } else if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                vlSelf->psum = 0U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_busy)))) {
                if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                    ++(vlSymsp->__Vcoverage[806]);
                }
                if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum)))) {
                    ++(vlSymsp->__Vcoverage[807]);
                }
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q)))) {
            ++(vlSymsp->__Vcoverage[810]);
        }
    } else {
        vlSelf->mul = 0U;
        vlSelf->psum = 0U;
    }
    if ((1U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->__Vtogcov__psum = ((0x7fffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800000U & vlSelf->psum));
    }
    vlSelf->sum = (0xffffffU & (vlSelf->psum + ((0xffff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->mul) 
                                                                   >> 7U)))) 
                                                    << 8U)) 
                                                | (IData)(vlSelf->mul))));
    if ((1U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->sum));
    }
    if ((2U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->sum));
    }
    if ((4U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->sum));
    }
    if ((8U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->sum));
    }
    if ((0x10U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->sum));
    }
    if ((0x20U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->sum));
    }
    if ((0x40U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->sum));
    }
    if ((0x80U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->sum));
    }
    if ((0x100U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->sum));
    }
    if ((0x200U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->sum));
    }
    if ((0x400U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->sum));
    }
    if ((0x800U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->sum));
    }
    if ((0x1000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->sum));
    }
    if ((0x2000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->sum));
    }
    if ((0x4000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->sum));
    }
    if ((0x8000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->sum));
    }
    if ((0x10000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->sum));
    }
    if ((0x20000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->sum));
    }
    if ((0x40000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->sum));
    }
    if ((0x80000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->sum));
    }
    if ((0x100000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->sum));
    }
    if ((0x200000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->sum));
    }
    if ((0x400000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->sum));
    }
    if ((0x800000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->__Vtogcov__sum = ((0x7fffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800000U & vlSelf->sum));
    }
    vlSelf->ovf = (((1U & (vlSelf->psum >> 0x17U)) 
                    == (1U & ((IData)(vlSelf->mul) 
                              >> 7U))) & ((1U & (vlSelf->sum 
                                                 >> 0x17U)) 
                                          != (1U & 
                                              (vlSelf->psum 
                                               >> 0x17U))));
    if (((IData)(vlSelf->ovf) ^ (IData)(vlSelf->__Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->__Vtogcov__ovf = vlSelf->ovf;
    }
}
