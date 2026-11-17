// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_mini.h for the primary calling header

#include "Vtb_polite_mini__pch.h"
#include "Vtb_polite_mini__Syms.h"
#include "Vtb_polite_mini_polite_pe.h"

VL_INLINE_OPT void Vtb_polite_mini_polite_pe___act_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0(Vtb_polite_mini_polite_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_mini_polite_pe___act_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.tb_polite_mini__DOT__clk;
    }
}

VL_INLINE_OPT void Vtb_polite_mini_polite_pe___act_comb__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0(Vtb_polite_mini_polite_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_mini_polite_pe___act_comb__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__rst_n) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelfRef.__Vtogcov__rst_n = vlSymsp->TOP.tb_polite_mini__DOT__rst_n;
    }
}

VL_INLINE_OPT void Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0(Vtb_polite_mini_polite_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
                >> 4U) ^ (IData)(vlSelfRef.__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelfRef.__Vtogcov__a = ((0xeU & (IData)(vlSelfRef.__Vtogcov__a)) 
                                  | (1U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
                                           >> 4U)));
    }
    if ((1U & (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
                >> 5U) ^ ((IData)(vlSelfRef.__Vtogcov__a) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelfRef.__Vtogcov__a = ((0xdU & (IData)(vlSelfRef.__Vtogcov__a)) 
                                  | (2U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
                                           >> 4U)));
    }
    if ((1U & (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
                >> 6U) ^ ((IData)(vlSelfRef.__Vtogcov__a) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelfRef.__Vtogcov__a = ((0xbU & (IData)(vlSelfRef.__Vtogcov__a)) 
                                  | (4U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
                                           >> 4U)));
    }
    if ((1U & (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
                >> 7U) ^ ((IData)(vlSelfRef.__Vtogcov__a) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelfRef.__Vtogcov__a = ((7U & (IData)(vlSelfRef.__Vtogcov__a)) 
                                  | (8U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
                                           >> 4U)));
    }
    if (vlSymsp->TOP.tb_polite_mini__DOT__rst_n) {
        if (vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q) {
            if (vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en) {
                ++(vlSymsp->__Vcoverage[1404]);
                vlSelfRef.psum = (0xffffffU & vlSelfRef.__PVT__full);
            } else if (vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__clr_psum) {
                ++(vlSymsp->__Vcoverage[1402]);
                vlSelfRef.psum = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1403]);
            }
            if (vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now) {
                ++(vlSymsp->__Vcoverage[1405]);
                vlSelfRef.mul = vlSelfRef.__PVT__prod;
            } else {
                ++(vlSymsp->__Vcoverage[1406]);
            }
            ++(vlSymsp->__Vcoverage[1407]);
        } else {
            ++(vlSymsp->__Vcoverage[1408]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelfRef.psum = 0U;
        vlSelfRef.mul = 0U;
    }
    ++(vlSymsp->__Vcoverage[1410]);
    if ((1U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelfRef.__Vtogcov__mul = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (1U & (IData)(vlSelfRef.mul)));
    }
    if ((2U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelfRef.__Vtogcov__mul = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (2U & (IData)(vlSelfRef.mul)));
    }
    if ((4U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelfRef.__Vtogcov__mul = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (4U & (IData)(vlSelfRef.mul)));
    }
    if ((8U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelfRef.__Vtogcov__mul = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (8U & (IData)(vlSelfRef.mul)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelfRef.__Vtogcov__mul = ((0xefU & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (0x10U & (IData)(vlSelfRef.mul)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelfRef.__Vtogcov__mul = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (0x20U & (IData)(vlSelfRef.mul)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelfRef.__Vtogcov__mul = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (0x40U & (IData)(vlSelfRef.mul)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelfRef.__Vtogcov__mul = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (0x80U & (IData)(vlSelfRef.mul)));
    }
    if ((1U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelfRef.__Vtogcov__psum = ((0xfffffeU & vlSelfRef.__Vtogcov__psum) 
                                     | (1U & vlSelfRef.psum));
    }
    if ((2U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelfRef.__Vtogcov__psum = ((0xfffffdU & vlSelfRef.__Vtogcov__psum) 
                                     | (2U & vlSelfRef.psum));
    }
    if ((4U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelfRef.__Vtogcov__psum = ((0xfffffbU & vlSelfRef.__Vtogcov__psum) 
                                     | (4U & vlSelfRef.psum));
    }
    if ((8U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelfRef.__Vtogcov__psum = ((0xfffff7U & vlSelfRef.__Vtogcov__psum) 
                                     | (8U & vlSelfRef.psum));
    }
    if ((0x10U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelfRef.__Vtogcov__psum = ((0xffffefU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x10U & vlSelfRef.psum));
    }
    if ((0x20U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelfRef.__Vtogcov__psum = ((0xffffdfU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x20U & vlSelfRef.psum));
    }
    if ((0x40U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelfRef.__Vtogcov__psum = ((0xffffbfU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x40U & vlSelfRef.psum));
    }
    if ((0x80U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelfRef.__Vtogcov__psum = ((0xffff7fU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x80U & vlSelfRef.psum));
    }
    if ((0x100U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelfRef.__Vtogcov__psum = ((0xfffeffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x100U & vlSelfRef.psum));
    }
    if ((0x200U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelfRef.__Vtogcov__psum = ((0xfffdffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x200U & vlSelfRef.psum));
    }
    if ((0x400U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelfRef.__Vtogcov__psum = ((0xfffbffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x400U & vlSelfRef.psum));
    }
    if ((0x800U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelfRef.__Vtogcov__psum = ((0xfff7ffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x800U & vlSelfRef.psum));
    }
    if ((0x1000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelfRef.__Vtogcov__psum = ((0xffefffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x1000U & vlSelfRef.psum));
    }
    if ((0x2000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelfRef.__Vtogcov__psum = ((0xffdfffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x2000U & vlSelfRef.psum));
    }
    if ((0x4000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelfRef.__Vtogcov__psum = ((0xffbfffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x4000U & vlSelfRef.psum));
    }
    if ((0x8000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelfRef.__Vtogcov__psum = ((0xff7fffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x8000U & vlSelfRef.psum));
    }
    if ((0x10000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelfRef.__Vtogcov__psum = ((0xfeffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x10000U & vlSelfRef.psum));
    }
    if ((0x20000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelfRef.__Vtogcov__psum = ((0xfdffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x20000U & vlSelfRef.psum));
    }
    if ((0x40000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelfRef.__Vtogcov__psum = ((0xfbffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x40000U & vlSelfRef.psum));
    }
    if ((0x80000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelfRef.__Vtogcov__psum = ((0xf7ffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x80000U & vlSelfRef.psum));
    }
    if ((0x100000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelfRef.__Vtogcov__psum = ((0xefffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x100000U & vlSelfRef.psum));
    }
    if ((0x200000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelfRef.__Vtogcov__psum = ((0xdfffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x200000U & vlSelfRef.psum));
    }
    if ((0x400000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelfRef.__Vtogcov__psum = ((0xbfffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x400000U & vlSelfRef.psum));
    }
    if ((0x800000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelfRef.__Vtogcov__psum = ((0x7fffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x800000U & vlSelfRef.psum));
    }
    vlSelfRef.__PVT__full = (0x1ffffffU & (((0x1000000U 
                                             & (vlSelfRef.psum 
                                                << 1U)) 
                                            | vlSelfRef.psum) 
                                           + ((0x1ffff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.mul) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                              | (IData)(vlSelfRef.mul))));
    if ((0x1000000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__full))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelfRef.__Vtogcov__full = ((0xffffffU & vlSelfRef.__Vtogcov__full) 
                                     | (0x1000000U 
                                        & vlSelfRef.__PVT__full));
    }
    if ((1U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelfRef.__Vtogcov__sum = ((0xfffffeU & vlSelfRef.__Vtogcov__sum) 
                                    | (1U & vlSelfRef.__PVT__full));
    }
    if ((2U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelfRef.__Vtogcov__sum = ((0xfffffdU & vlSelfRef.__Vtogcov__sum) 
                                    | (2U & vlSelfRef.__PVT__full));
    }
    if ((4U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelfRef.__Vtogcov__sum = ((0xfffffbU & vlSelfRef.__Vtogcov__sum) 
                                    | (4U & vlSelfRef.__PVT__full));
    }
    if ((8U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.__Vtogcov__sum = ((0xfffff7U & vlSelfRef.__Vtogcov__sum) 
                                    | (8U & vlSelfRef.__PVT__full));
    }
    if ((0x10U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelfRef.__Vtogcov__sum = ((0xffffefU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x10U & vlSelfRef.__PVT__full));
    }
    if ((0x20U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelfRef.__Vtogcov__sum = ((0xffffdfU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x20U & vlSelfRef.__PVT__full));
    }
    if ((0x40U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelfRef.__Vtogcov__sum = ((0xffffbfU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x40U & vlSelfRef.__PVT__full));
    }
    if ((0x80U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelfRef.__Vtogcov__sum = ((0xffff7fU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x80U & vlSelfRef.__PVT__full));
    }
    if ((0x100U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelfRef.__Vtogcov__sum = ((0xfffeffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x100U & vlSelfRef.__PVT__full));
    }
    if ((0x200U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__sum = ((0xfffdffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x200U & vlSelfRef.__PVT__full));
    }
    if ((0x400U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelfRef.__Vtogcov__sum = ((0xfffbffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x400U & vlSelfRef.__PVT__full));
    }
    if ((0x800U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelfRef.__Vtogcov__sum = ((0xfff7ffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x800U & vlSelfRef.__PVT__full));
    }
    if ((0x1000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.__Vtogcov__sum = ((0xffefffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x1000U & vlSelfRef.__PVT__full));
    }
    if ((0x2000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.__Vtogcov__sum = ((0xffdfffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x2000U & vlSelfRef.__PVT__full));
    }
    if ((0x4000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelfRef.__Vtogcov__sum = ((0xffbfffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x4000U & vlSelfRef.__PVT__full));
    }
    if ((0x8000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelfRef.__Vtogcov__sum = ((0xff7fffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x8000U & vlSelfRef.__PVT__full));
    }
    if ((0x10000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelfRef.__Vtogcov__sum = ((0xfeffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x10000U & vlSelfRef.__PVT__full));
    }
    if ((0x20000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelfRef.__Vtogcov__sum = ((0xfdffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x20000U & vlSelfRef.__PVT__full));
    }
    if ((0x40000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelfRef.__Vtogcov__sum = ((0xfbffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x40000U & vlSelfRef.__PVT__full));
    }
    if ((0x80000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelfRef.__Vtogcov__sum = ((0xf7ffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x80000U & vlSelfRef.__PVT__full));
    }
    if ((0x100000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelfRef.__Vtogcov__sum = ((0xefffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x100000U & vlSelfRef.__PVT__full));
    }
    if ((0x200000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelfRef.__Vtogcov__sum = ((0xdfffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x200000U & vlSelfRef.__PVT__full));
    }
    if ((0x400000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelfRef.__Vtogcov__sum = ((0xbfffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x400000U & vlSelfRef.__PVT__full));
    }
    if ((0x800000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.__Vtogcov__sum = ((0x7fffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x800000U & vlSelfRef.__PVT__full));
    }
    vlSelfRef.ovf = (1U & VL_REDXOR_32((0x1800000U 
                                        & vlSelfRef.__PVT__full)));
    if (((IData)(vlSelfRef.ovf) ^ (IData)(vlSelfRef.__Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.__Vtogcov__ovf = vlSelfRef.ovf;
    }
}

VL_INLINE_OPT void Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__1(Vtb_polite_mini_polite_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                >> 4U) ^ (IData)(vlSelfRef.__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelfRef.__Vtogcov__b = ((0xeU & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (1U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                           >> 4U)));
    }
    if ((1U & (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                >> 5U) ^ ((IData)(vlSelfRef.__Vtogcov__b) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelfRef.__Vtogcov__b = ((0xdU & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (2U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                           >> 4U)));
    }
    if ((1U & (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                >> 6U) ^ ((IData)(vlSelfRef.__Vtogcov__b) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelfRef.__Vtogcov__b = ((0xbU & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (4U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                           >> 4U)));
    }
    if ((1U & (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                >> 7U) ^ ((IData)(vlSelfRef.__Vtogcov__b) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelfRef.__Vtogcov__b = ((7U & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (8U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                           >> 4U)));
    }
    vlSelfRef.__PVT__prod = (0xffU & VL_MULS_III(8, 
                                                 ((0xf0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
                                                                     >> 7U)))) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
                                                        >> 4U))), 
                                                 ((0xf0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                                                     >> 7U)))) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                                        >> 4U)))));
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__acc_en))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelfRef.__Vtogcov__acc_en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now) 
         ^ (IData)(vlSelfRef.__Vtogcov__run_now))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelfRef.__Vtogcov__run_now = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__clr_psum) 
         ^ (IData)(vlSelfRef.__Vtogcov__clr))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelfRef.__Vtogcov__clr = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__clr_psum;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.__Vtogcov__prod = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (1U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.__Vtogcov__prod = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (2U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.__Vtogcov__prod = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (4U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.__Vtogcov__prod = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (8U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.__Vtogcov__prod = ((0xefU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x10U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x20U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.__Vtogcov__prod = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x20U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x40U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.__Vtogcov__prod = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x40U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x80U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.__Vtogcov__prod = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x80U & (IData)(vlSelfRef.__PVT__prod)));
    }
}

VL_INLINE_OPT void Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__1(Vtb_polite_mini_polite_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelfRef.__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelfRef.__Vtogcov__b = ((0xeU & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (1U & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelfRef.__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelfRef.__Vtogcov__b = ((0xdU & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (2U & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelfRef.__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelfRef.__Vtogcov__b = ((0xbU & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (4U & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelfRef.__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelfRef.__Vtogcov__b = ((7U & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (8U & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    vlSelfRef.__PVT__prod = (0xffU & VL_MULS_III(8, 
                                                 ((0xf0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
                                                                     >> 7U)))) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
                                                        >> 4U))), 
                                                 ((0xf0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                                                     >> 3U)))) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q)))));
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__acc_en))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelfRef.__Vtogcov__acc_en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now) 
         ^ (IData)(vlSelfRef.__Vtogcov__run_now))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelfRef.__Vtogcov__run_now = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__clr_psum) 
         ^ (IData)(vlSelfRef.__Vtogcov__clr))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelfRef.__Vtogcov__clr = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__clr_psum;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.__Vtogcov__prod = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (1U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.__Vtogcov__prod = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (2U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.__Vtogcov__prod = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (4U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.__Vtogcov__prod = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (8U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.__Vtogcov__prod = ((0xefU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x10U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x20U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.__Vtogcov__prod = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x20U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x40U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.__Vtogcov__prod = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x40U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x80U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.__Vtogcov__prod = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x80U & (IData)(vlSelfRef.__PVT__prod)));
    }
}

VL_INLINE_OPT void Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0(Vtb_polite_mini_polite_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
               ^ (IData)(vlSelfRef.__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelfRef.__Vtogcov__a = ((0xeU & (IData)(vlSelfRef.__Vtogcov__a)) 
                                  | (1U & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
               ^ (IData)(vlSelfRef.__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelfRef.__Vtogcov__a = ((0xdU & (IData)(vlSelfRef.__Vtogcov__a)) 
                                  | (2U & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
               ^ (IData)(vlSelfRef.__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelfRef.__Vtogcov__a = ((0xbU & (IData)(vlSelfRef.__Vtogcov__a)) 
                                  | (4U & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
               ^ (IData)(vlSelfRef.__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelfRef.__Vtogcov__a = ((7U & (IData)(vlSelfRef.__Vtogcov__a)) 
                                  | (8U & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf)));
    }
    if (vlSymsp->TOP.tb_polite_mini__DOT__rst_n) {
        if (vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q) {
            if (vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en) {
                ++(vlSymsp->__Vcoverage[1404]);
                vlSelfRef.psum = (0xffffffU & vlSelfRef.__PVT__full);
            } else if (vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__clr_psum) {
                ++(vlSymsp->__Vcoverage[1402]);
                vlSelfRef.psum = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1403]);
            }
            if (vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now) {
                ++(vlSymsp->__Vcoverage[1405]);
                vlSelfRef.mul = vlSelfRef.__PVT__prod;
            } else {
                ++(vlSymsp->__Vcoverage[1406]);
            }
            ++(vlSymsp->__Vcoverage[1407]);
        } else {
            ++(vlSymsp->__Vcoverage[1408]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelfRef.psum = 0U;
        vlSelfRef.mul = 0U;
    }
    ++(vlSymsp->__Vcoverage[1410]);
    if ((1U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelfRef.__Vtogcov__mul = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (1U & (IData)(vlSelfRef.mul)));
    }
    if ((2U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelfRef.__Vtogcov__mul = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (2U & (IData)(vlSelfRef.mul)));
    }
    if ((4U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelfRef.__Vtogcov__mul = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (4U & (IData)(vlSelfRef.mul)));
    }
    if ((8U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelfRef.__Vtogcov__mul = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (8U & (IData)(vlSelfRef.mul)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelfRef.__Vtogcov__mul = ((0xefU & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (0x10U & (IData)(vlSelfRef.mul)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelfRef.__Vtogcov__mul = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (0x20U & (IData)(vlSelfRef.mul)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelfRef.__Vtogcov__mul = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (0x40U & (IData)(vlSelfRef.mul)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mul) ^ (IData)(vlSelfRef.__Vtogcov__mul)))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelfRef.__Vtogcov__mul = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__mul)) 
                                    | (0x80U & (IData)(vlSelfRef.mul)));
    }
    if ((1U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelfRef.__Vtogcov__psum = ((0xfffffeU & vlSelfRef.__Vtogcov__psum) 
                                     | (1U & vlSelfRef.psum));
    }
    if ((2U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelfRef.__Vtogcov__psum = ((0xfffffdU & vlSelfRef.__Vtogcov__psum) 
                                     | (2U & vlSelfRef.psum));
    }
    if ((4U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelfRef.__Vtogcov__psum = ((0xfffffbU & vlSelfRef.__Vtogcov__psum) 
                                     | (4U & vlSelfRef.psum));
    }
    if ((8U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelfRef.__Vtogcov__psum = ((0xfffff7U & vlSelfRef.__Vtogcov__psum) 
                                     | (8U & vlSelfRef.psum));
    }
    if ((0x10U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelfRef.__Vtogcov__psum = ((0xffffefU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x10U & vlSelfRef.psum));
    }
    if ((0x20U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelfRef.__Vtogcov__psum = ((0xffffdfU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x20U & vlSelfRef.psum));
    }
    if ((0x40U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelfRef.__Vtogcov__psum = ((0xffffbfU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x40U & vlSelfRef.psum));
    }
    if ((0x80U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelfRef.__Vtogcov__psum = ((0xffff7fU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x80U & vlSelfRef.psum));
    }
    if ((0x100U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelfRef.__Vtogcov__psum = ((0xfffeffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x100U & vlSelfRef.psum));
    }
    if ((0x200U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelfRef.__Vtogcov__psum = ((0xfffdffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x200U & vlSelfRef.psum));
    }
    if ((0x400U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelfRef.__Vtogcov__psum = ((0xfffbffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x400U & vlSelfRef.psum));
    }
    if ((0x800U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelfRef.__Vtogcov__psum = ((0xfff7ffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x800U & vlSelfRef.psum));
    }
    if ((0x1000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelfRef.__Vtogcov__psum = ((0xffefffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x1000U & vlSelfRef.psum));
    }
    if ((0x2000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelfRef.__Vtogcov__psum = ((0xffdfffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x2000U & vlSelfRef.psum));
    }
    if ((0x4000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelfRef.__Vtogcov__psum = ((0xffbfffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x4000U & vlSelfRef.psum));
    }
    if ((0x8000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelfRef.__Vtogcov__psum = ((0xff7fffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x8000U & vlSelfRef.psum));
    }
    if ((0x10000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelfRef.__Vtogcov__psum = ((0xfeffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x10000U & vlSelfRef.psum));
    }
    if ((0x20000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelfRef.__Vtogcov__psum = ((0xfdffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x20000U & vlSelfRef.psum));
    }
    if ((0x40000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelfRef.__Vtogcov__psum = ((0xfbffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x40000U & vlSelfRef.psum));
    }
    if ((0x80000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelfRef.__Vtogcov__psum = ((0xf7ffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x80000U & vlSelfRef.psum));
    }
    if ((0x100000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelfRef.__Vtogcov__psum = ((0xefffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x100000U & vlSelfRef.psum));
    }
    if ((0x200000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelfRef.__Vtogcov__psum = ((0xdfffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x200000U & vlSelfRef.psum));
    }
    if ((0x400000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelfRef.__Vtogcov__psum = ((0xbfffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x400000U & vlSelfRef.psum));
    }
    if ((0x800000U & (vlSelfRef.psum ^ vlSelfRef.__Vtogcov__psum))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelfRef.__Vtogcov__psum = ((0x7fffffU & vlSelfRef.__Vtogcov__psum) 
                                     | (0x800000U & vlSelfRef.psum));
    }
    vlSelfRef.__PVT__full = (0x1ffffffU & (((0x1000000U 
                                             & (vlSelfRef.psum 
                                                << 1U)) 
                                            | vlSelfRef.psum) 
                                           + ((0x1ffff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.mul) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                              | (IData)(vlSelfRef.mul))));
    if ((0x1000000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__full))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelfRef.__Vtogcov__full = ((0xffffffU & vlSelfRef.__Vtogcov__full) 
                                     | (0x1000000U 
                                        & vlSelfRef.__PVT__full));
    }
    if ((1U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelfRef.__Vtogcov__sum = ((0xfffffeU & vlSelfRef.__Vtogcov__sum) 
                                    | (1U & vlSelfRef.__PVT__full));
    }
    if ((2U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelfRef.__Vtogcov__sum = ((0xfffffdU & vlSelfRef.__Vtogcov__sum) 
                                    | (2U & vlSelfRef.__PVT__full));
    }
    if ((4U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelfRef.__Vtogcov__sum = ((0xfffffbU & vlSelfRef.__Vtogcov__sum) 
                                    | (4U & vlSelfRef.__PVT__full));
    }
    if ((8U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.__Vtogcov__sum = ((0xfffff7U & vlSelfRef.__Vtogcov__sum) 
                                    | (8U & vlSelfRef.__PVT__full));
    }
    if ((0x10U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelfRef.__Vtogcov__sum = ((0xffffefU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x10U & vlSelfRef.__PVT__full));
    }
    if ((0x20U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelfRef.__Vtogcov__sum = ((0xffffdfU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x20U & vlSelfRef.__PVT__full));
    }
    if ((0x40U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelfRef.__Vtogcov__sum = ((0xffffbfU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x40U & vlSelfRef.__PVT__full));
    }
    if ((0x80U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelfRef.__Vtogcov__sum = ((0xffff7fU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x80U & vlSelfRef.__PVT__full));
    }
    if ((0x100U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelfRef.__Vtogcov__sum = ((0xfffeffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x100U & vlSelfRef.__PVT__full));
    }
    if ((0x200U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__sum = ((0xfffdffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x200U & vlSelfRef.__PVT__full));
    }
    if ((0x400U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelfRef.__Vtogcov__sum = ((0xfffbffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x400U & vlSelfRef.__PVT__full));
    }
    if ((0x800U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelfRef.__Vtogcov__sum = ((0xfff7ffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x800U & vlSelfRef.__PVT__full));
    }
    if ((0x1000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.__Vtogcov__sum = ((0xffefffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x1000U & vlSelfRef.__PVT__full));
    }
    if ((0x2000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.__Vtogcov__sum = ((0xffdfffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x2000U & vlSelfRef.__PVT__full));
    }
    if ((0x4000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelfRef.__Vtogcov__sum = ((0xffbfffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x4000U & vlSelfRef.__PVT__full));
    }
    if ((0x8000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelfRef.__Vtogcov__sum = ((0xff7fffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x8000U & vlSelfRef.__PVT__full));
    }
    if ((0x10000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelfRef.__Vtogcov__sum = ((0xfeffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x10000U & vlSelfRef.__PVT__full));
    }
    if ((0x20000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelfRef.__Vtogcov__sum = ((0xfdffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x20000U & vlSelfRef.__PVT__full));
    }
    if ((0x40000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelfRef.__Vtogcov__sum = ((0xfbffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x40000U & vlSelfRef.__PVT__full));
    }
    if ((0x80000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelfRef.__Vtogcov__sum = ((0xf7ffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x80000U & vlSelfRef.__PVT__full));
    }
    if ((0x100000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelfRef.__Vtogcov__sum = ((0xefffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x100000U & vlSelfRef.__PVT__full));
    }
    if ((0x200000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelfRef.__Vtogcov__sum = ((0xdfffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x200000U & vlSelfRef.__PVT__full));
    }
    if ((0x400000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelfRef.__Vtogcov__sum = ((0xbfffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x400000U & vlSelfRef.__PVT__full));
    }
    if ((0x800000U & (vlSelfRef.__PVT__full ^ vlSelfRef.__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.__Vtogcov__sum = ((0x7fffffU & vlSelfRef.__Vtogcov__sum) 
                                    | (0x800000U & vlSelfRef.__PVT__full));
    }
    vlSelfRef.ovf = (1U & VL_REDXOR_32((0x1800000U 
                                        & vlSelfRef.__PVT__full)));
    if (((IData)(vlSelfRef.ovf) ^ (IData)(vlSelfRef.__Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.__Vtogcov__ovf = vlSelfRef.ovf;
    }
}

VL_INLINE_OPT void Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__1(Vtb_polite_mini_polite_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                >> 4U) ^ (IData)(vlSelfRef.__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelfRef.__Vtogcov__b = ((0xeU & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (1U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                           >> 4U)));
    }
    if ((1U & (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                >> 5U) ^ ((IData)(vlSelfRef.__Vtogcov__b) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelfRef.__Vtogcov__b = ((0xdU & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (2U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                           >> 4U)));
    }
    if ((1U & (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                >> 6U) ^ ((IData)(vlSelfRef.__Vtogcov__b) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelfRef.__Vtogcov__b = ((0xbU & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (4U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                           >> 4U)));
    }
    if ((1U & (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                >> 7U) ^ ((IData)(vlSelfRef.__Vtogcov__b) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelfRef.__Vtogcov__b = ((7U & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (8U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                           >> 4U)));
    }
    vlSelfRef.__PVT__prod = (0xffU & VL_MULS_III(8, 
                                                 ((0xf0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
                                                                     >> 3U)))) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf))), 
                                                 ((0xf0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                                                     >> 7U)))) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                                        >> 4U)))));
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__acc_en))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelfRef.__Vtogcov__acc_en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now) 
         ^ (IData)(vlSelfRef.__Vtogcov__run_now))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelfRef.__Vtogcov__run_now = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__clr_psum) 
         ^ (IData)(vlSelfRef.__Vtogcov__clr))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelfRef.__Vtogcov__clr = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__clr_psum;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.__Vtogcov__prod = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (1U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.__Vtogcov__prod = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (2U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.__Vtogcov__prod = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (4U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.__Vtogcov__prod = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (8U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.__Vtogcov__prod = ((0xefU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x10U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x20U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.__Vtogcov__prod = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x20U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x40U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.__Vtogcov__prod = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x40U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x80U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.__Vtogcov__prod = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x80U & (IData)(vlSelfRef.__PVT__prod)));
    }
}

VL_INLINE_OPT void Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__1(Vtb_polite_mini_polite_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_mini_polite_pe___nba_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelfRef.__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelfRef.__Vtogcov__b = ((0xeU & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (1U & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelfRef.__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelfRef.__Vtogcov__b = ((0xdU & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (2U & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelfRef.__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelfRef.__Vtogcov__b = ((0xbU & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (4U & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
               ^ (IData)(vlSelfRef.__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelfRef.__Vtogcov__b = ((7U & (IData)(vlSelfRef.__Vtogcov__b)) 
                                  | (8U & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q)));
    }
    vlSelfRef.__PVT__prod = (0xffU & VL_MULS_III(8, 
                                                 ((0xf0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf) 
                                                                     >> 3U)))) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__inbuf))), 
                                                 ((0xf0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                                                     >> 3U)))) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & (IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__in_d_q)))));
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__acc_en))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelfRef.__Vtogcov__acc_en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now) 
         ^ (IData)(vlSelfRef.__Vtogcov__run_now))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelfRef.__Vtogcov__run_now = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__clr_psum) 
         ^ (IData)(vlSelfRef.__Vtogcov__clr))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelfRef.__Vtogcov__clr = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__clr_psum;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.__Vtogcov__prod = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (1U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.__Vtogcov__prod = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (2U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.__Vtogcov__prod = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (4U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.__Vtogcov__prod = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (8U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.__Vtogcov__prod = ((0xefU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x10U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x20U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.__Vtogcov__prod = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x20U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x40U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.__Vtogcov__prod = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x40U & (IData)(vlSelfRef.__PVT__prod)));
    }
    if ((0x80U & ((IData)(vlSelfRef.__PVT__prod) ^ (IData)(vlSelfRef.__Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.__Vtogcov__prod = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__prod)) 
                                     | (0x80U & (IData)(vlSelfRef.__PVT__prod)));
    }
}
