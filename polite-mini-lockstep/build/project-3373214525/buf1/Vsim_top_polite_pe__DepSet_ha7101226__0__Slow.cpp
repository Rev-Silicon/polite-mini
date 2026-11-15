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
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->__Vtogcov__psum = ((0x7fffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800000U & vlSelf->psum));
    }
    vlSelf->__PVT__prod = (0xffU & VL_MULS_III(8, (
                                                   (0xf0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__inbuf) 
                                                                      >> 7U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__inbuf) 
                                                         >> 4U))), 
                                               ((0xf0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__in_d_q) 
                                                                   >> 7U)))) 
                                                    << 4U)) 
                                                | (0xfU 
                                                   & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__in_d_q) 
                                                      >> 4U)))));
    vlSelf->__PVT__full = (0x1ffffffU & (((0x1000000U 
                                           & (vlSelf->psum 
                                              << 1U)) 
                                          | vlSelf->psum) 
                                         + ((0x1ffff00U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->mul) 
                                                               >> 7U)))) 
                                                << 8U)) 
                                            | (IData)(vlSelf->mul))));
    if ((1U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->__Vtogcov__prod = ((0xfeU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (1U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->__Vtogcov__prod = ((0xfdU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (2U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->__Vtogcov__prod = ((0xfbU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (4U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->__Vtogcov__prod = ((0xf7U & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (8U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->__Vtogcov__prod = ((0xefU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x10U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->__Vtogcov__prod = ((0xdfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x20U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->__Vtogcov__prod = ((0xbfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x40U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->__Vtogcov__prod = ((0x7fU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x80U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x1000000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__full))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->__Vtogcov__full = ((0xffffffU & vlSelf->__Vtogcov__full) 
                                   | (0x1000000U & vlSelf->__PVT__full));
    }
    if ((1U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->__PVT__full));
    }
    if ((2U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->__PVT__full));
    }
    if ((4U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->__PVT__full));
    }
    if ((8U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->__PVT__full));
    }
    if ((0x10U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->__PVT__full));
    }
    if ((0x20U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->__PVT__full));
    }
    if ((0x40U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->__PVT__full));
    }
    if ((0x80U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->__PVT__full));
    }
    if ((0x100U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->__PVT__full));
    }
    if ((0x200U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->__PVT__full));
    }
    if ((0x400U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->__PVT__full));
    }
    if ((0x800U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->__PVT__full));
    }
    if ((0x1000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->__PVT__full));
    }
    if ((0x2000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->__PVT__full));
    }
    if ((0x4000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->__PVT__full));
    }
    if ((0x8000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->__PVT__full));
    }
    if ((0x10000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->__PVT__full));
    }
    if ((0x20000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->__PVT__full));
    }
    if ((0x40000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->__PVT__full));
    }
    if ((0x80000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->__PVT__full));
    }
    if ((0x100000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->__PVT__full));
    }
    if ((0x200000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->__PVT__full));
    }
    if ((0x400000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->__PVT__full));
    }
    if ((0x800000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->__Vtogcov__sum = ((0x7fffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800000U & vlSelf->__PVT__full));
    }
    vlSelf->ovf = (1U & VL_REDXOR_32((0x1800000U & vlSelf->__PVT__full)));
    if (((IData)(vlSelf->ovf) ^ (IData)(vlSelf->__Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->__Vtogcov__ovf = vlSelf->ovf;
    }
}

VL_ATTR_COLD void Vsim_top_polite_pe___stl_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__0(Vsim_top_polite_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___stl_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->__Vtogcov__psum = ((0x7fffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800000U & vlSelf->psum));
    }
    vlSelf->__PVT__prod = (0xffU & VL_MULS_III(8, (
                                                   (0xf0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__inbuf) 
                                                                      >> 7U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__inbuf) 
                                                         >> 4U))), 
                                               ((0xf0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__in_d_q) 
                                                                   >> 3U)))) 
                                                    << 4U)) 
                                                | (0xfU 
                                                   & (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__in_d_q)))));
    vlSelf->__PVT__full = (0x1ffffffU & (((0x1000000U 
                                           & (vlSelf->psum 
                                              << 1U)) 
                                          | vlSelf->psum) 
                                         + ((0x1ffff00U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->mul) 
                                                               >> 7U)))) 
                                                << 8U)) 
                                            | (IData)(vlSelf->mul))));
    if ((1U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->__Vtogcov__prod = ((0xfeU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (1U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->__Vtogcov__prod = ((0xfdU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (2U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->__Vtogcov__prod = ((0xfbU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (4U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->__Vtogcov__prod = ((0xf7U & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (8U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->__Vtogcov__prod = ((0xefU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x10U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->__Vtogcov__prod = ((0xdfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x20U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->__Vtogcov__prod = ((0xbfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x40U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->__Vtogcov__prod = ((0x7fU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x80U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x1000000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__full))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->__Vtogcov__full = ((0xffffffU & vlSelf->__Vtogcov__full) 
                                   | (0x1000000U & vlSelf->__PVT__full));
    }
    if ((1U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->__PVT__full));
    }
    if ((2U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->__PVT__full));
    }
    if ((4U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->__PVT__full));
    }
    if ((8U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->__PVT__full));
    }
    if ((0x10U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->__PVT__full));
    }
    if ((0x20U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->__PVT__full));
    }
    if ((0x40U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->__PVT__full));
    }
    if ((0x80U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->__PVT__full));
    }
    if ((0x100U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->__PVT__full));
    }
    if ((0x200U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->__PVT__full));
    }
    if ((0x400U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->__PVT__full));
    }
    if ((0x800U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->__PVT__full));
    }
    if ((0x1000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->__PVT__full));
    }
    if ((0x2000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->__PVT__full));
    }
    if ((0x4000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->__PVT__full));
    }
    if ((0x8000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->__PVT__full));
    }
    if ((0x10000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->__PVT__full));
    }
    if ((0x20000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->__PVT__full));
    }
    if ((0x40000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->__PVT__full));
    }
    if ((0x80000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->__PVT__full));
    }
    if ((0x100000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->__PVT__full));
    }
    if ((0x200000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->__PVT__full));
    }
    if ((0x400000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->__PVT__full));
    }
    if ((0x800000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->__Vtogcov__sum = ((0x7fffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800000U & vlSelf->__PVT__full));
    }
    vlSelf->ovf = (1U & VL_REDXOR_32((0x1800000U & vlSelf->__PVT__full)));
    if (((IData)(vlSelf->ovf) ^ (IData)(vlSelf->__Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->__Vtogcov__ovf = vlSelf->ovf;
    }
}

VL_ATTR_COLD void Vsim_top_polite_pe___stl_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0(Vsim_top_polite_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___stl_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->__Vtogcov__psum = ((0x7fffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800000U & vlSelf->psum));
    }
    vlSelf->__PVT__prod = (0xffU & VL_MULS_III(8, (
                                                   (0xf0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__inbuf) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__inbuf))), 
                                               ((0xf0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__in_d_q) 
                                                                   >> 7U)))) 
                                                    << 4U)) 
                                                | (0xfU 
                                                   & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__in_d_q) 
                                                      >> 4U)))));
    vlSelf->__PVT__full = (0x1ffffffU & (((0x1000000U 
                                           & (vlSelf->psum 
                                              << 1U)) 
                                          | vlSelf->psum) 
                                         + ((0x1ffff00U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->mul) 
                                                               >> 7U)))) 
                                                << 8U)) 
                                            | (IData)(vlSelf->mul))));
    if ((1U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->__Vtogcov__prod = ((0xfeU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (1U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->__Vtogcov__prod = ((0xfdU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (2U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->__Vtogcov__prod = ((0xfbU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (4U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->__Vtogcov__prod = ((0xf7U & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (8U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->__Vtogcov__prod = ((0xefU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x10U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->__Vtogcov__prod = ((0xdfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x20U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->__Vtogcov__prod = ((0xbfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x40U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->__Vtogcov__prod = ((0x7fU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x80U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x1000000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__full))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->__Vtogcov__full = ((0xffffffU & vlSelf->__Vtogcov__full) 
                                   | (0x1000000U & vlSelf->__PVT__full));
    }
    if ((1U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->__PVT__full));
    }
    if ((2U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->__PVT__full));
    }
    if ((4U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->__PVT__full));
    }
    if ((8U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->__PVT__full));
    }
    if ((0x10U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->__PVT__full));
    }
    if ((0x20U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->__PVT__full));
    }
    if ((0x40U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->__PVT__full));
    }
    if ((0x80U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->__PVT__full));
    }
    if ((0x100U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->__PVT__full));
    }
    if ((0x200U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->__PVT__full));
    }
    if ((0x400U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->__PVT__full));
    }
    if ((0x800U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->__PVT__full));
    }
    if ((0x1000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->__PVT__full));
    }
    if ((0x2000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->__PVT__full));
    }
    if ((0x4000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->__PVT__full));
    }
    if ((0x8000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->__PVT__full));
    }
    if ((0x10000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->__PVT__full));
    }
    if ((0x20000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->__PVT__full));
    }
    if ((0x40000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->__PVT__full));
    }
    if ((0x80000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->__PVT__full));
    }
    if ((0x100000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->__PVT__full));
    }
    if ((0x200000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->__PVT__full));
    }
    if ((0x400000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->__PVT__full));
    }
    if ((0x800000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->__Vtogcov__sum = ((0x7fffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800000U & vlSelf->__PVT__full));
    }
    vlSelf->ovf = (1U & VL_REDXOR_32((0x1800000U & vlSelf->__PVT__full)));
    if (((IData)(vlSelf->ovf) ^ (IData)(vlSelf->__Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->__Vtogcov__ovf = vlSelf->ovf;
    }
}

VL_ATTR_COLD void Vsim_top_polite_pe___stl_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__0(Vsim_top_polite_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___stl_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->__Vtogcov__psum = ((0x7fffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800000U & vlSelf->psum));
    }
    vlSelf->__PVT__prod = (0xffU & VL_MULS_III(8, (
                                                   (0xf0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__inbuf) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__inbuf))), 
                                               ((0xf0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__in_d_q) 
                                                                   >> 3U)))) 
                                                    << 4U)) 
                                                | (0xfU 
                                                   & (IData)(vlSymsp->TOP.sim_top__DOT__dut__DOT__in_d_q)))));
    vlSelf->__PVT__full = (0x1ffffffU & (((0x1000000U 
                                           & (vlSelf->psum 
                                              << 1U)) 
                                          | vlSelf->psum) 
                                         + ((0x1ffff00U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->mul) 
                                                               >> 7U)))) 
                                                << 8U)) 
                                            | (IData)(vlSelf->mul))));
    if ((1U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->__Vtogcov__prod = ((0xfeU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (1U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->__Vtogcov__prod = ((0xfdU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (2U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->__Vtogcov__prod = ((0xfbU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (4U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->__Vtogcov__prod = ((0xf7U & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (8U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->__Vtogcov__prod = ((0xefU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x10U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->__Vtogcov__prod = ((0xdfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x20U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->__Vtogcov__prod = ((0xbfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x40U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->__Vtogcov__prod = ((0x7fU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x80U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x1000000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__full))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->__Vtogcov__full = ((0xffffffU & vlSelf->__Vtogcov__full) 
                                   | (0x1000000U & vlSelf->__PVT__full));
    }
    if ((1U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->__PVT__full));
    }
    if ((2U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->__PVT__full));
    }
    if ((4U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->__PVT__full));
    }
    if ((8U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->__PVT__full));
    }
    if ((0x10U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->__PVT__full));
    }
    if ((0x20U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->__PVT__full));
    }
    if ((0x40U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->__PVT__full));
    }
    if ((0x80U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->__PVT__full));
    }
    if ((0x100U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->__PVT__full));
    }
    if ((0x200U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->__PVT__full));
    }
    if ((0x400U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->__PVT__full));
    }
    if ((0x800U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->__PVT__full));
    }
    if ((0x1000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->__PVT__full));
    }
    if ((0x2000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->__PVT__full));
    }
    if ((0x4000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->__PVT__full));
    }
    if ((0x8000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->__PVT__full));
    }
    if ((0x10000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->__PVT__full));
    }
    if ((0x20000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->__PVT__full));
    }
    if ((0x40000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->__PVT__full));
    }
    if ((0x80000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->__PVT__full));
    }
    if ((0x100000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->__PVT__full));
    }
    if ((0x200000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->__PVT__full));
    }
    if ((0x400000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->__PVT__full));
    }
    if ((0x800000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->__Vtogcov__sum = ((0x7fffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800000U & vlSelf->__PVT__full));
    }
    vlSelf->ovf = (1U & VL_REDXOR_32((0x1800000U & vlSelf->__PVT__full)));
    if (((IData)(vlSelf->ovf) ^ (IData)(vlSelf->__Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->__Vtogcov__ovf = vlSelf->ovf;
    }
}

VL_ATTR_COLD void Vsim_top_polite_pe___configure_coverage(Vsim_top_polite_pe* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 14, 31, "", "v_toggle/polite_pe", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 15, 31, "", "v_toggle/polite_pe", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 16, 31, "", "v_toggle/polite_pe", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 17, 31, "", "v_toggle/polite_pe", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 17, 31, "", "v_toggle/polite_pe", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 17, 31, "", "v_toggle/polite_pe", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 17, 31, "", "v_toggle/polite_pe", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 18, 31, "", "v_toggle/polite_pe", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 18, 31, "", "v_toggle/polite_pe", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 18, 31, "", "v_toggle/polite_pe", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 18, 31, "", "v_toggle/polite_pe", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 19, 31, "", "v_toggle/polite_pe", "run_now", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 20, 31, "", "v_toggle/polite_pe", "acc_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 21, 31, "", "v_toggle/polite_pe", "clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[987]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[988]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[989]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[990]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[991]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[992]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[993]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[994]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[995]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[996]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[997]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[998]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[999]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1000]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1001]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1002]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1003]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1004]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1005]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1006]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1007]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1008]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1009]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1010]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1011]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1012]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1013]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1014]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1015]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1016]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1017]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1018]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1019]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1020]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1021]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1022]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1023]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1024]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1025]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1026]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1027]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1028]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1029]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1030]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1031]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1032]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1033]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1034]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1035]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1036]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1037]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1038]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1039]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1040]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1041]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1042]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1043]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 25, 31, "", "v_toggle/polite_pe", "ovf", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1044]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1045]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1046]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1047]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1048]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1049]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1050]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1051]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1019]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1020]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1021]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1022]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1023]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1024]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1025]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1026]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1027]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1028]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1029]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1030]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1031]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1032]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1033]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1034]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1035]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1036]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1037]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1038]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1039]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1040]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1041]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1042]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1052]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1053]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 40, 18, "", "v_branch/polite_pe", "if", "40-41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1054]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 40, 19, "", "v_branch/polite_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1055]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 38, 13, "", "v_line/polite_pe", "elsif", "38-39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1056]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 42, 13, "", "v_branch/polite_pe", "if", "42-43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1057]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 42, 14, "", "v_branch/polite_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1058]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 37, 18, "", "v_branch/polite_pe", "if", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1059]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 37, 19, "", "v_branch/polite_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1060]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 34, 9, "", "v_line/polite_pe", "elsif", "34-36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1061]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 33, 5, "", "v_line/polite_pe", "block", "33");
}
