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

VL_ATTR_COLD void Vsim_top_polite_pe___configure_coverage(Vsim_top_polite_pe* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 4, 16, "", "v_toggle/polite_pe", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 4, 21, "", "v_toggle/polite_pe", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 4, 28, "", "v_toggle/polite_pe", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 4, 32, "", "v_toggle/polite_pe", "run_now", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 4, 41, "", "v_toggle/polite_pe", "acc_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 4, 49, "", "v_toggle/polite_pe", "clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 29, "", "v_toggle/polite_pe", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 29, "", "v_toggle/polite_pe", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 29, "", "v_toggle/polite_pe", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 29, "", "v_toggle/polite_pe", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 32, "", "v_toggle/polite_pe", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 32, "", "v_toggle/polite_pe", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 32, "", "v_toggle/polite_pe", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 5, 32, "", "v_toggle/polite_pe", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[747]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[748]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[749]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[750]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[751]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[752]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[753]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[754]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[755]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[756]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[757]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[758]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[759]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[760]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[761]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[762]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[763]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[764]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[765]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[766]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[767]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[768]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[769]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[770]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 6, 32, "", "v_toggle/polite_pe", "psum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[771]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[772]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[773]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[774]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[775]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[776]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[777]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[778]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[779]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[780]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[781]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[782]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[783]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[784]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[786]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[787]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[788]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[789]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[790]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[791]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[792]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[793]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[794]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 7, 31, "", "v_toggle/polite_pe", "sum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[795]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[796]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[797]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[798]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[799]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[800]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[801]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[802]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 8, 31, "", "v_toggle/polite_pe", "mul[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[803]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 9, 17, "", "v_toggle/polite_pe", "ovf", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[804]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 18, 13, "", "v_branch/polite_pe", "if", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[805]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 18, 14, "", "v_branch/polite_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[806]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 20, 18, "", "v_branch/polite_pe", "if", "20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[807]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 20, 19, "", "v_branch/polite_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[808]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 19, 13, "", "v_line/polite_pe", "elsif", "19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[809]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 17, 18, "", "v_branch/polite_pe", "if", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[810]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 17, 19, "", "v_branch/polite_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[811]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 14, 9, "", "v_line/polite_pe", "elsif", "14-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[812]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite-mini-lockstep/example_rtl/polite_pe.sv", 13, 5, "", "v_line/polite_pe", "block", "13");
}
