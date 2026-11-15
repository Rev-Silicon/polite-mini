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
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[845]);
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
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->__Vtogcov__prod = ((0xfeU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (1U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->__Vtogcov__prod = ((0xfdU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (2U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->__Vtogcov__prod = ((0xfbU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (4U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->__Vtogcov__prod = ((0xf7U & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (8U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->__Vtogcov__prod = ((0xefU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x10U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->__Vtogcov__prod = ((0xdfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x20U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->__Vtogcov__prod = ((0xbfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x40U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->__Vtogcov__prod = ((0x7fU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x80U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x1000000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__full))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->__Vtogcov__full = ((0xffffffU & vlSelf->__Vtogcov__full) 
                                   | (0x1000000U & vlSelf->__PVT__full));
    }
    if ((1U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->__PVT__full));
    }
    if ((2U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->__PVT__full));
    }
    if ((4U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->__PVT__full));
    }
    if ((8U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->__PVT__full));
    }
    if ((0x10U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->__PVT__full));
    }
    if ((0x20U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->__PVT__full));
    }
    if ((0x40U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->__PVT__full));
    }
    if ((0x80U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->__PVT__full));
    }
    if ((0x100U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->__PVT__full));
    }
    if ((0x200U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->__PVT__full));
    }
    if ((0x400U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->__PVT__full));
    }
    if ((0x800U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->__PVT__full));
    }
    if ((0x1000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->__PVT__full));
    }
    if ((0x2000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->__PVT__full));
    }
    if ((0x4000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->__PVT__full));
    }
    if ((0x8000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->__PVT__full));
    }
    if ((0x10000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->__PVT__full));
    }
    if ((0x20000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->__PVT__full));
    }
    if ((0x40000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->__PVT__full));
    }
    if ((0x80000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->__PVT__full));
    }
    if ((0x100000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->__PVT__full));
    }
    if ((0x200000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->__PVT__full));
    }
    if ((0x400000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->__PVT__full));
    }
    if ((0x800000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->__Vtogcov__sum = ((0x7fffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800000U & vlSelf->__PVT__full));
    }
    vlSelf->ovf = (1U & VL_REDXOR_32((0x1800000U & vlSelf->__PVT__full)));
    if (((IData)(vlSelf->ovf) ^ (IData)(vlSelf->__Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->__Vtogcov__ovf = vlSelf->ovf;
    }
}

VL_ATTR_COLD void Vsim_top_polite_pe___stl_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__0(Vsim_top_polite_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___stl_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[845]);
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
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->__Vtogcov__prod = ((0xfeU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (1U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->__Vtogcov__prod = ((0xfdU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (2U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->__Vtogcov__prod = ((0xfbU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (4U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->__Vtogcov__prod = ((0xf7U & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (8U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->__Vtogcov__prod = ((0xefU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x10U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->__Vtogcov__prod = ((0xdfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x20U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->__Vtogcov__prod = ((0xbfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x40U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->__Vtogcov__prod = ((0x7fU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x80U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x1000000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__full))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->__Vtogcov__full = ((0xffffffU & vlSelf->__Vtogcov__full) 
                                   | (0x1000000U & vlSelf->__PVT__full));
    }
    if ((1U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->__PVT__full));
    }
    if ((2U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->__PVT__full));
    }
    if ((4U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->__PVT__full));
    }
    if ((8U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->__PVT__full));
    }
    if ((0x10U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->__PVT__full));
    }
    if ((0x20U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->__PVT__full));
    }
    if ((0x40U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->__PVT__full));
    }
    if ((0x80U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->__PVT__full));
    }
    if ((0x100U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->__PVT__full));
    }
    if ((0x200U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->__PVT__full));
    }
    if ((0x400U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->__PVT__full));
    }
    if ((0x800U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->__PVT__full));
    }
    if ((0x1000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->__PVT__full));
    }
    if ((0x2000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->__PVT__full));
    }
    if ((0x4000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->__PVT__full));
    }
    if ((0x8000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->__PVT__full));
    }
    if ((0x10000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->__PVT__full));
    }
    if ((0x20000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->__PVT__full));
    }
    if ((0x40000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->__PVT__full));
    }
    if ((0x80000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->__PVT__full));
    }
    if ((0x100000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->__PVT__full));
    }
    if ((0x200000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->__PVT__full));
    }
    if ((0x400000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->__PVT__full));
    }
    if ((0x800000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->__Vtogcov__sum = ((0x7fffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800000U & vlSelf->__PVT__full));
    }
    vlSelf->ovf = (1U & VL_REDXOR_32((0x1800000U & vlSelf->__PVT__full)));
    if (((IData)(vlSelf->ovf) ^ (IData)(vlSelf->__Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->__Vtogcov__ovf = vlSelf->ovf;
    }
}

VL_ATTR_COLD void Vsim_top_polite_pe___stl_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0(Vsim_top_polite_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___stl_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[845]);
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
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->__Vtogcov__prod = ((0xfeU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (1U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->__Vtogcov__prod = ((0xfdU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (2U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->__Vtogcov__prod = ((0xfbU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (4U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->__Vtogcov__prod = ((0xf7U & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (8U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->__Vtogcov__prod = ((0xefU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x10U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->__Vtogcov__prod = ((0xdfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x20U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->__Vtogcov__prod = ((0xbfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x40U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->__Vtogcov__prod = ((0x7fU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x80U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x1000000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__full))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->__Vtogcov__full = ((0xffffffU & vlSelf->__Vtogcov__full) 
                                   | (0x1000000U & vlSelf->__PVT__full));
    }
    if ((1U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->__PVT__full));
    }
    if ((2U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->__PVT__full));
    }
    if ((4U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->__PVT__full));
    }
    if ((8U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->__PVT__full));
    }
    if ((0x10U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->__PVT__full));
    }
    if ((0x20U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->__PVT__full));
    }
    if ((0x40U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->__PVT__full));
    }
    if ((0x80U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->__PVT__full));
    }
    if ((0x100U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->__PVT__full));
    }
    if ((0x200U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->__PVT__full));
    }
    if ((0x400U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->__PVT__full));
    }
    if ((0x800U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->__PVT__full));
    }
    if ((0x1000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->__PVT__full));
    }
    if ((0x2000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->__PVT__full));
    }
    if ((0x4000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->__PVT__full));
    }
    if ((0x8000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->__PVT__full));
    }
    if ((0x10000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->__PVT__full));
    }
    if ((0x20000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->__PVT__full));
    }
    if ((0x40000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->__PVT__full));
    }
    if ((0x80000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->__PVT__full));
    }
    if ((0x100000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->__PVT__full));
    }
    if ((0x200000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->__PVT__full));
    }
    if ((0x400000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->__PVT__full));
    }
    if ((0x800000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->__Vtogcov__sum = ((0x7fffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800000U & vlSelf->__PVT__full));
    }
    vlSelf->ovf = (1U & VL_REDXOR_32((0x1800000U & vlSelf->__PVT__full)));
    if (((IData)(vlSelf->ovf) ^ (IData)(vlSelf->__Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->__Vtogcov__ovf = vlSelf->ovf;
    }
}

VL_ATTR_COLD void Vsim_top_polite_pe___stl_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__0(Vsim_top_polite_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___stl_sequent__TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->__Vtogcov__mul = ((0xfeU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (1U & (IData)(vlSelf->mul)));
    }
    if ((2U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->__Vtogcov__mul = ((0xfdU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (2U & (IData)(vlSelf->mul)));
    }
    if ((4U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->__Vtogcov__mul = ((0xfbU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (4U & (IData)(vlSelf->mul)));
    }
    if ((8U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->__Vtogcov__mul = ((0xf7U & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (8U & (IData)(vlSelf->mul)));
    }
    if ((0x10U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->__Vtogcov__mul = ((0xefU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x10U & (IData)(vlSelf->mul)));
    }
    if ((0x20U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->__Vtogcov__mul = ((0xdfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x20U & (IData)(vlSelf->mul)));
    }
    if ((0x40U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->__Vtogcov__mul = ((0xbfU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x40U & (IData)(vlSelf->mul)));
    }
    if ((0x80U & ((IData)(vlSelf->mul) ^ (IData)(vlSelf->__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->__Vtogcov__mul = ((0x7fU & (IData)(vlSelf->__Vtogcov__mul)) 
                                  | (0x80U & (IData)(vlSelf->mul)));
    }
    if ((1U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->__Vtogcov__psum = ((0xfffffeU & vlSelf->__Vtogcov__psum) 
                                   | (1U & vlSelf->psum));
    }
    if ((2U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->__Vtogcov__psum = ((0xfffffdU & vlSelf->__Vtogcov__psum) 
                                   | (2U & vlSelf->psum));
    }
    if ((4U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->__Vtogcov__psum = ((0xfffffbU & vlSelf->__Vtogcov__psum) 
                                   | (4U & vlSelf->psum));
    }
    if ((8U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->__Vtogcov__psum = ((0xfffff7U & vlSelf->__Vtogcov__psum) 
                                   | (8U & vlSelf->psum));
    }
    if ((0x10U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->__Vtogcov__psum = ((0xffffefU & vlSelf->__Vtogcov__psum) 
                                   | (0x10U & vlSelf->psum));
    }
    if ((0x20U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->__Vtogcov__psum = ((0xffffdfU & vlSelf->__Vtogcov__psum) 
                                   | (0x20U & vlSelf->psum));
    }
    if ((0x40U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->__Vtogcov__psum = ((0xffffbfU & vlSelf->__Vtogcov__psum) 
                                   | (0x40U & vlSelf->psum));
    }
    if ((0x80U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->__Vtogcov__psum = ((0xffff7fU & vlSelf->__Vtogcov__psum) 
                                   | (0x80U & vlSelf->psum));
    }
    if ((0x100U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->__Vtogcov__psum = ((0xfffeffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100U & vlSelf->psum));
    }
    if ((0x200U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->__Vtogcov__psum = ((0xfffdffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200U & vlSelf->psum));
    }
    if ((0x400U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->__Vtogcov__psum = ((0xfffbffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400U & vlSelf->psum));
    }
    if ((0x800U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->__Vtogcov__psum = ((0xfff7ffU & vlSelf->__Vtogcov__psum) 
                                   | (0x800U & vlSelf->psum));
    }
    if ((0x1000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->__Vtogcov__psum = ((0xffefffU & vlSelf->__Vtogcov__psum) 
                                   | (0x1000U & vlSelf->psum));
    }
    if ((0x2000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->__Vtogcov__psum = ((0xffdfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x2000U & vlSelf->psum));
    }
    if ((0x4000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->__Vtogcov__psum = ((0xffbfffU & vlSelf->__Vtogcov__psum) 
                                   | (0x4000U & vlSelf->psum));
    }
    if ((0x8000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->__Vtogcov__psum = ((0xff7fffU & vlSelf->__Vtogcov__psum) 
                                   | (0x8000U & vlSelf->psum));
    }
    if ((0x10000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->__Vtogcov__psum = ((0xfeffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x10000U & vlSelf->psum));
    }
    if ((0x20000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->__Vtogcov__psum = ((0xfdffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x20000U & vlSelf->psum));
    }
    if ((0x40000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->__Vtogcov__psum = ((0xfbffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x40000U & vlSelf->psum));
    }
    if ((0x80000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->__Vtogcov__psum = ((0xf7ffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x80000U & vlSelf->psum));
    }
    if ((0x100000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->__Vtogcov__psum = ((0xefffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x100000U & vlSelf->psum));
    }
    if ((0x200000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->__Vtogcov__psum = ((0xdfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x200000U & vlSelf->psum));
    }
    if ((0x400000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->__Vtogcov__psum = ((0xbfffffU & vlSelf->__Vtogcov__psum) 
                                   | (0x400000U & vlSelf->psum));
    }
    if ((0x800000U & (vlSelf->psum ^ vlSelf->__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[845]);
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
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->__Vtogcov__prod = ((0xfeU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (1U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->__Vtogcov__prod = ((0xfdU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (2U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->__Vtogcov__prod = ((0xfbU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (4U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->__Vtogcov__prod = ((0xf7U & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (8U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->__Vtogcov__prod = ((0xefU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x10U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->__Vtogcov__prod = ((0xdfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x20U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->__Vtogcov__prod = ((0xbfU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x40U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__prod) ^ (IData)(vlSelf->__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->__Vtogcov__prod = ((0x7fU & (IData)(vlSelf->__Vtogcov__prod)) 
                                   | (0x80U & (IData)(vlSelf->__PVT__prod)));
    }
    if ((0x1000000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__full))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->__Vtogcov__full = ((0xffffffU & vlSelf->__Vtogcov__full) 
                                   | (0x1000000U & vlSelf->__PVT__full));
    }
    if ((1U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->__Vtogcov__sum = ((0xfffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->__PVT__full));
    }
    if ((2U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->__Vtogcov__sum = ((0xfffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->__PVT__full));
    }
    if ((4U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->__Vtogcov__sum = ((0xfffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->__PVT__full));
    }
    if ((8U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->__Vtogcov__sum = ((0xfffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->__PVT__full));
    }
    if ((0x10U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->__Vtogcov__sum = ((0xffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->__PVT__full));
    }
    if ((0x20U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->__Vtogcov__sum = ((0xffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->__PVT__full));
    }
    if ((0x40U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->__Vtogcov__sum = ((0xffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->__PVT__full));
    }
    if ((0x80U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->__Vtogcov__sum = ((0xffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->__PVT__full));
    }
    if ((0x100U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->__Vtogcov__sum = ((0xfffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->__PVT__full));
    }
    if ((0x200U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->__Vtogcov__sum = ((0xfffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->__PVT__full));
    }
    if ((0x400U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->__Vtogcov__sum = ((0xfffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->__PVT__full));
    }
    if ((0x800U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->__Vtogcov__sum = ((0xfff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->__PVT__full));
    }
    if ((0x1000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->__Vtogcov__sum = ((0xffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->__PVT__full));
    }
    if ((0x2000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->__Vtogcov__sum = ((0xffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->__PVT__full));
    }
    if ((0x4000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->__Vtogcov__sum = ((0xffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->__PVT__full));
    }
    if ((0x8000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->__Vtogcov__sum = ((0xff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->__PVT__full));
    }
    if ((0x10000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->__Vtogcov__sum = ((0xfeffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->__PVT__full));
    }
    if ((0x20000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->__Vtogcov__sum = ((0xfdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->__PVT__full));
    }
    if ((0x40000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->__Vtogcov__sum = ((0xfbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->__PVT__full));
    }
    if ((0x80000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->__Vtogcov__sum = ((0xf7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->__PVT__full));
    }
    if ((0x100000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->__Vtogcov__sum = ((0xefffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->__PVT__full));
    }
    if ((0x200000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->__Vtogcov__sum = ((0xdfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->__PVT__full));
    }
    if ((0x400000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->__Vtogcov__sum = ((0xbfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->__PVT__full));
    }
    if ((0x800000U & (vlSelf->__PVT__full ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->__Vtogcov__sum = ((0x7fffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800000U & vlSelf->__PVT__full));
    }
    vlSelf->ovf = (1U & VL_REDXOR_32((0x1800000U & vlSelf->__PVT__full)));
    if (((IData)(vlSelf->ovf) ^ (IData)(vlSelf->__Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[878]);
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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 16, 31, "", "v_toggle/polite_pe", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 17, 31, "", "v_toggle/polite_pe", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 17, 31, "", "v_toggle/polite_pe", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 17, 31, "", "v_toggle/polite_pe", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 17, 31, "", "v_toggle/polite_pe", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 18, 31, "", "v_toggle/polite_pe", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 18, 31, "", "v_toggle/polite_pe", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 18, 31, "", "v_toggle/polite_pe", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 18, 31, "", "v_toggle/polite_pe", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 19, 31, "", "v_toggle/polite_pe", "run_now", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 20, 31, "", "v_toggle/polite_pe", "acc_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 21, 31, "", "v_toggle/polite_pe", "clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[822]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[823]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[824]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[825]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[826]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[827]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[828]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[829]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[830]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[831]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[832]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[833]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[834]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[835]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[836]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[837]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[838]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[839]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[840]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[841]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[842]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[843]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[844]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[845]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[846]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[847]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[848]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[849]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[850]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[851]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[852]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[853]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[854]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[855]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[856]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[857]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[858]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[859]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[860]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[861]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[862]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[863]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[864]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[865]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[866]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[867]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[868]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[869]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[871]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[872]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[873]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[874]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[875]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[876]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[877]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[878]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 25, 31, "", "v_toggle/polite_pe", "ovf", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[879]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[880]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[881]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[882]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[883]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[884]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[885]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[886]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[854]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[855]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[856]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[857]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[858]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[859]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[860]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[861]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[862]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[863]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[864]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[865]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[866]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[867]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[868]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[869]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[871]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[872]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[873]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[874]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[875]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[876]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[877]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[887]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[888]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 40, 18, "", "v_branch/polite_pe", "if", "40-41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[889]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 40, 19, "", "v_branch/polite_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[890]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 38, 13, "", "v_line/polite_pe", "elsif", "38-39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[891]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 42, 13, "", "v_branch/polite_pe", "if", "42-43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[892]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 42, 14, "", "v_branch/polite_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[893]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 37, 18, "", "v_branch/polite_pe", "if", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[894]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 37, 19, "", "v_branch/polite_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[895]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 34, 9, "", "v_line/polite_pe", "elsif", "34-36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[896]), first, "/mnt/c/Users/jkohh/Downloads/polite-mini/polite_pe.sv", 33, 5, "", "v_line/polite_pe", "block", "33");
}
