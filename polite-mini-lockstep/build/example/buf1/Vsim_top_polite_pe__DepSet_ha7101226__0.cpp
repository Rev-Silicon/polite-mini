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
    ++(vlSymsp->__Vcoverage[933]);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        ++(vlSymsp->__Vcoverage[932]);
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q) {
            ++(vlSymsp->__Vcoverage[930]);
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now)))) {
                ++(vlSymsp->__Vcoverage[926]);
            }
            if (vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now) {
                ++(vlSymsp->__Vcoverage[925]);
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
                ++(vlSymsp->__Vcoverage[929]);
                vlSelf->psum = vlSelf->sum;
            } else if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                vlSelf->psum = 0U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_busy)))) {
                if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                    ++(vlSymsp->__Vcoverage[927]);
                }
                if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum)))) {
                    ++(vlSymsp->__Vcoverage[928]);
                }
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q)))) {
            ++(vlSymsp->__Vcoverage[931]);
        }
    } else {
        vlSelf->mul = 0U;
        vlSelf->psum = 0U;
    }
    if ((1U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[891]);
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
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->sum));
    }
    if ((2U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->sum));
    }
    if ((4U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->sum));
    }
    if ((8U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->sum));
    }
    if ((0x10U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->sum));
    }
    if ((0x20U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->sum));
    }
    if ((0x40U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->sum));
    }
    if ((0x80U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->sum));
    }
    if ((0x100U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->sum));
    }
    if ((0x200U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->sum));
    }
    if ((0x400U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->sum));
    }
    if ((0x800U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->sum));
    }
    if ((0x1000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->sum));
    }
    if ((0x2000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->sum));
    }
    if ((0x4000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->sum));
    }
    if ((0x8000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->sum));
    }
    if ((0x10000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->sum));
    }
    if ((0x20000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->sum));
    }
    if ((0x40000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->sum));
    }
    if ((0x80000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->sum));
    }
    if ((0x100000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->sum));
    }
    if ((0x200000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->sum));
    }
    if ((0x400000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->sum));
    }
    if ((0x800000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[915]);
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
        ++(vlSymsp->__Vcoverage[924]);
        vlSelf->__Vtogcov__ovf = vlSelf->ovf;
    }
}

VL_INLINE_OPT void Vsim_top_polite_pe___nba_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__0(Vsim_top_polite_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___nba_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[933]);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        ++(vlSymsp->__Vcoverage[932]);
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q) {
            ++(vlSymsp->__Vcoverage[930]);
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now)))) {
                ++(vlSymsp->__Vcoverage[926]);
            }
            if (vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now) {
                ++(vlSymsp->__Vcoverage[925]);
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
                ++(vlSymsp->__Vcoverage[929]);
                vlSelf->psum = vlSelf->sum;
            } else if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                vlSelf->psum = 0U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_busy)))) {
                if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                    ++(vlSymsp->__Vcoverage[927]);
                }
                if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum)))) {
                    ++(vlSymsp->__Vcoverage[928]);
                }
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q)))) {
            ++(vlSymsp->__Vcoverage[931]);
        }
    } else {
        vlSelf->mul = 0U;
        vlSelf->psum = 0U;
    }
    if ((1U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[891]);
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
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->sum));
    }
    if ((2U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->sum));
    }
    if ((4U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->sum));
    }
    if ((8U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->sum));
    }
    if ((0x10U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->sum));
    }
    if ((0x20U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->sum));
    }
    if ((0x40U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->sum));
    }
    if ((0x80U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->sum));
    }
    if ((0x100U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->sum));
    }
    if ((0x200U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->sum));
    }
    if ((0x400U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->sum));
    }
    if ((0x800U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->sum));
    }
    if ((0x1000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->sum));
    }
    if ((0x2000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->sum));
    }
    if ((0x4000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->sum));
    }
    if ((0x8000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->sum));
    }
    if ((0x10000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->sum));
    }
    if ((0x20000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->sum));
    }
    if ((0x40000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->sum));
    }
    if ((0x80000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->sum));
    }
    if ((0x100000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->sum));
    }
    if ((0x200000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->sum));
    }
    if ((0x400000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->sum));
    }
    if ((0x800000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[915]);
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
        ++(vlSymsp->__Vcoverage[924]);
        vlSelf->__Vtogcov__ovf = vlSelf->ovf;
    }
}

VL_INLINE_OPT void Vsim_top_polite_pe___nba_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0(Vsim_top_polite_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___nba_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[933]);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        ++(vlSymsp->__Vcoverage[932]);
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q) {
            ++(vlSymsp->__Vcoverage[930]);
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now)))) {
                ++(vlSymsp->__Vcoverage[926]);
            }
            if (vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now) {
                ++(vlSymsp->__Vcoverage[925]);
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
                ++(vlSymsp->__Vcoverage[929]);
                vlSelf->psum = vlSelf->sum;
            } else if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                vlSelf->psum = 0U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_busy)))) {
                if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                    ++(vlSymsp->__Vcoverage[927]);
                }
                if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum)))) {
                    ++(vlSymsp->__Vcoverage[928]);
                }
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q)))) {
            ++(vlSymsp->__Vcoverage[931]);
        }
    } else {
        vlSelf->mul = 0U;
        vlSelf->psum = 0U;
    }
    if ((1U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[891]);
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
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->sum));
    }
    if ((2U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->sum));
    }
    if ((4U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->sum));
    }
    if ((8U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->sum));
    }
    if ((0x10U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->sum));
    }
    if ((0x20U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->sum));
    }
    if ((0x40U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->sum));
    }
    if ((0x80U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->sum));
    }
    if ((0x100U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->sum));
    }
    if ((0x200U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->sum));
    }
    if ((0x400U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->sum));
    }
    if ((0x800U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->sum));
    }
    if ((0x1000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->sum));
    }
    if ((0x2000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->sum));
    }
    if ((0x4000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->sum));
    }
    if ((0x8000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->sum));
    }
    if ((0x10000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->sum));
    }
    if ((0x20000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->sum));
    }
    if ((0x40000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->sum));
    }
    if ((0x80000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->sum));
    }
    if ((0x100000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->sum));
    }
    if ((0x200000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->sum));
    }
    if ((0x400000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->sum));
    }
    if ((0x800000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[915]);
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
        ++(vlSymsp->__Vcoverage[924]);
        vlSelf->__Vtogcov__ovf = vlSelf->ovf;
    }
}

VL_INLINE_OPT void Vsim_top_polite_pe___nba_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__0(Vsim_top_polite_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___nba_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[933]);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        ++(vlSymsp->__Vcoverage[932]);
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q) {
            ++(vlSymsp->__Vcoverage[930]);
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now)))) {
                ++(vlSymsp->__Vcoverage[926]);
            }
            if (vlSymsp->TOP.sim_top__DOT__dut__DOT__run_now) {
                ++(vlSymsp->__Vcoverage[925]);
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
                ++(vlSymsp->__Vcoverage[929]);
                vlSelf->psum = vlSelf->sum;
            } else if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                vlSelf->psum = 0U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__run_busy)))) {
                if (vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum) {
                    ++(vlSymsp->__Vcoverage[927]);
                }
                if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__clr_psum)))) {
                    ++(vlSymsp->__Vcoverage[928]);
                }
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__ena_q)))) {
            ++(vlSymsp->__Vcoverage[931]);
        }
    } else {
        vlSelf->mul = 0U;
        vlSelf->psum = 0U;
    }
    if ((1U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[891]);
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
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->sum));
    }
    if ((2U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->sum));
    }
    if ((4U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->sum));
    }
    if ((8U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->sum));
    }
    if ((0x10U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->sum));
    }
    if ((0x20U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->sum));
    }
    if ((0x40U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->sum));
    }
    if ((0x80U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->sum));
    }
    if ((0x100U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->sum));
    }
    if ((0x200U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->sum));
    }
    if ((0x400U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->sum));
    }
    if ((0x800U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->sum));
    }
    if ((0x1000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->sum));
    }
    if ((0x2000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->sum));
    }
    if ((0x4000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->sum));
    }
    if ((0x8000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->sum));
    }
    if ((0x10000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->sum));
    }
    if ((0x20000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->sum));
    }
    if ((0x40000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->sum));
    }
    if ((0x80000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->sum));
    }
    if ((0x100000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->sum));
    }
    if ((0x200000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->sum));
    }
    if ((0x400000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->sum));
    }
    if ((0x800000U & (vlSelf->sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[915]);
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
        ++(vlSymsp->__Vcoverage[924]);
        vlSelf->__Vtogcov__ovf = vlSelf->ovf;
    }
}
