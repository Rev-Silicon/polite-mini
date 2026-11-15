// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "Vsim_top__pch.h"
#include "Vsim_top__Syms.h"
#include "Vsim_top_polite_pe.h"

VL_ATTR_COLD void Vsim_top_polite_pe___stl_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0(Vsim_top_polite_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___stl_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0\n"); );
    // Body
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

VL_ATTR_COLD void Vsim_top_polite_pe___configure_coverage(Vsim_top_polite_pe* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 4, 16, "", "v_toggle/polite_pe", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 4, 21, "", "v_toggle/polite_pe", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 4, 28, "", "v_toggle/polite_pe", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 4, 32, "", "v_toggle/polite_pe", "run_now", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 4, 41, "", "v_toggle/polite_pe", "acc_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 4, 49, "", "v_toggle/polite_pe", "clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 29, "", "v_toggle/polite_pe", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 29, "", "v_toggle/polite_pe", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 29, "", "v_toggle/polite_pe", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 29, "", "v_toggle/polite_pe", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 32, "", "v_toggle/polite_pe", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 32, "", "v_toggle/polite_pe", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 32, "", "v_toggle/polite_pe", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 32, "", "v_toggle/polite_pe", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[868]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[869]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[871]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[872]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[873]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[874]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[875]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[876]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[877]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[878]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[879]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[880]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[881]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[882]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[883]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[884]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[885]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[886]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[887]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[888]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[889]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[890]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[891]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[892]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[893]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[894]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[895]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[896]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[897]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[898]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[899]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[900]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[901]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[902]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[903]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[904]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[905]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[906]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[907]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[908]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[909]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[910]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[911]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[912]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[913]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[914]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[915]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[916]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[917]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[918]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[919]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[920]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[921]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[922]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[923]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[924]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 9, 17, "", "v_toggle/polite_pe", "ovf", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[925]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 18, 13, "", "v_branch/polite_pe", "if", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[926]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 18, 14, "", "v_branch/polite_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[927]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 20, 18, "", "v_branch/polite_pe", "if", "20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[928]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 20, 19, "", "v_branch/polite_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[929]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 19, 13, "", "v_line/polite_pe", "elsif", "19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[930]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 17, 18, "", "v_branch/polite_pe", "if", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[931]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 17, 19, "", "v_branch/polite_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[932]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 14, 9, "", "v_line/polite_pe", "elsif", "14-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[933]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 13, 5, "", "v_line/polite_pe", "block", "13");
}
