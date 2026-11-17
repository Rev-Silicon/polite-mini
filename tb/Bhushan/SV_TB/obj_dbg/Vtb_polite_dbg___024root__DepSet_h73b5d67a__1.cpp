// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_dbg.h for the primary calling header

#include "Vtb_polite_dbg__pch.h"
#include "Vtb_polite_dbg__Syms.h"
#include "Vtb_polite_dbg___024root.h"

VL_INLINE_OPT void Vtb_polite_dbg___024root___nba_comb__TOP__1(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___nba_comb__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_polite_dbg__DOT__ofz = ((IData)(vlSelfRef.tb_polite_dbg__DOT__start) 
                                         | (0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)));
    if (vlSelfRef.tb_polite_dbg__DOT__start) {
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e = 0U;
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e 
            = ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__wide)
                ? 0xcU : 4U);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
            = vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v;
    } else {
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e 
            = vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k;
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e 
            = vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left;
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
            = vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__ofz) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__ofz))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__ofz 
            = vlSelfRef.tb_polite_dbg__DOT__ofz;
    }
    vlSelfRef.tb_polite_dbg__DOT__dbg_tick = ((IData)(vlSelfRef.tb_polite_dbg__DOT__ofz) 
                                              & (IData)(vlSelfRef.tb_polite_dbg__DOT__phase));
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e)))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e 
            = ((6U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e)))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e 
            = ((5U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e)))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e 
            = ((3U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e)));
    }
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw 
        = (7U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__phase)
                  ? (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e)
                  : ((0U == (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e))
                      ? 0U : ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e) 
                              - (IData)(1U)))));
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e 
            = ((7U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e)));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__dbg_tick) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_tick))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_tick 
            = vlSelfRef.tb_polite_dbg__DOT__dbg_tick;
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw)))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw 
            = ((6U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw)))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw 
            = ((5U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw)))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw 
            = ((3U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw)));
    }
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk = ((5U 
                                                   < (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw))
                                                   ? 5U
                                                   : (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw));
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk)))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk 
            = ((6U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk)))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk 
            = ((5U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk)))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk 
            = ((3U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk)));
    }
    if ((4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk))) {
        if ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk))) {
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn 
                = (0xfU & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                           >> 0x14U));
            ++(vlSymsp->__Vcoverage[642]);
        } else if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk))) {
            ++(vlSymsp->__Vcoverage[642]);
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn 
                = (0xfU & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                           >> 0x14U));
        } else {
            ++(vlSymsp->__Vcoverage[641]);
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn 
                = (0xfU & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                           >> 0x10U));
        }
    } else if ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk))) {
        if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk))) {
            ++(vlSymsp->__Vcoverage[640]);
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn 
                = (0xfU & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                           >> 0xcU));
        } else {
            ++(vlSymsp->__Vcoverage[639]);
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn 
                = (0xfU & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                           >> 8U));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn 
            = (0xfU & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                       >> 4U));
    } else {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn 
            = (0xfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e);
    }
    ++(vlSymsp->__Vcoverage[643]);
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib 
            = ((7U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn)));
    }
}
