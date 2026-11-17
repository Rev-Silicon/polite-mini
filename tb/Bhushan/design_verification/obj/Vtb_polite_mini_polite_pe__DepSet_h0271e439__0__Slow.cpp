// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_mini.h for the primary calling header

#include "Vtb_polite_mini__pch.h"
#include "Vtb_polite_mini__Syms.h"
#include "Vtb_polite_mini_polite_pe.h"

VL_ATTR_COLD void Vtb_polite_mini_polite_pe___stl_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0(Vtb_polite_mini_polite_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_mini_polite_pe___stl_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.tb_polite_mini__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__rst_n) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelfRef.__Vtogcov__rst_n = vlSymsp->TOP.tb_polite_mini__DOT__rst_n;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q;
    }
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
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now) 
         ^ (IData)(vlSelfRef.__Vtogcov__run_now))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelfRef.__Vtogcov__run_now = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__acc_en))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelfRef.__Vtogcov__acc_en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en;
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

VL_ATTR_COLD void Vtb_polite_mini_polite_pe___stl_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__0(Vtb_polite_mini_polite_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_mini_polite_pe___stl_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.tb_polite_mini__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__rst_n) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelfRef.__Vtogcov__rst_n = vlSymsp->TOP.tb_polite_mini__DOT__rst_n;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q;
    }
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
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now) 
         ^ (IData)(vlSelfRef.__Vtogcov__run_now))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelfRef.__Vtogcov__run_now = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__acc_en))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelfRef.__Vtogcov__acc_en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en;
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

VL_ATTR_COLD void Vtb_polite_mini_polite_pe___stl_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0(Vtb_polite_mini_polite_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_mini_polite_pe___stl_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.tb_polite_mini__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__rst_n) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelfRef.__Vtogcov__rst_n = vlSymsp->TOP.tb_polite_mini__DOT__rst_n;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q;
    }
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
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now) 
         ^ (IData)(vlSelfRef.__Vtogcov__run_now))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelfRef.__Vtogcov__run_now = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__acc_en))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelfRef.__Vtogcov__acc_en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en;
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

VL_ATTR_COLD void Vtb_polite_mini_polite_pe___stl_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__0(Vtb_polite_mini_polite_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_mini_polite_pe___stl_sequent__TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.tb_polite_mini__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__rst_n) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelfRef.__Vtogcov__rst_n = vlSymsp->TOP.tb_polite_mini__DOT__rst_n;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__ena_q;
    }
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
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now) 
         ^ (IData)(vlSelfRef.__Vtogcov__run_now))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelfRef.__Vtogcov__run_now = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__run_now;
    }
    if (((IData)(vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__acc_en))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelfRef.__Vtogcov__acc_en = vlSymsp->TOP.tb_polite_mini__DOT__dut__DOT__acc_en;
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

VL_ATTR_COLD void Vtb_polite_mini_polite_pe___configure_coverage(Vtb_polite_mini_polite_pe* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_mini_polite_pe___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1322]), first, "../design/polite_pe.sv", 14, 31, "", "v_toggle/polite_pe", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1323]), first, "../design/polite_pe.sv", 15, 31, "", "v_toggle/polite_pe", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1324]), first, "../design/polite_pe.sv", 16, 31, "", "v_toggle/polite_pe", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1325]), first, "../design/polite_pe.sv", 17, 31, "", "v_toggle/polite_pe", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1326]), first, "../design/polite_pe.sv", 17, 31, "", "v_toggle/polite_pe", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1327]), first, "../design/polite_pe.sv", 17, 31, "", "v_toggle/polite_pe", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1328]), first, "../design/polite_pe.sv", 17, 31, "", "v_toggle/polite_pe", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1329]), first, "../design/polite_pe.sv", 18, 31, "", "v_toggle/polite_pe", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1330]), first, "../design/polite_pe.sv", 18, 31, "", "v_toggle/polite_pe", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1331]), first, "../design/polite_pe.sv", 18, 31, "", "v_toggle/polite_pe", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1332]), first, "../design/polite_pe.sv", 18, 31, "", "v_toggle/polite_pe", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1333]), first, "../design/polite_pe.sv", 19, 31, "", "v_toggle/polite_pe", "run_now", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1334]), first, "../design/polite_pe.sv", 20, 31, "", "v_toggle/polite_pe", "acc_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1335]), first, "../design/polite_pe.sv", 21, 31, "", "v_toggle/polite_pe", "clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1336]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1337]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1338]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1339]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1340]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1341]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1342]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1343]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1344]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1345]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1346]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1347]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1348]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1349]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1350]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1351]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1352]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1353]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1354]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1355]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1356]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1357]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1358]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1359]), first, "../design/polite_pe.sv", 22, 31, "", "v_toggle/polite_pe", "psum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1360]), first, "../design/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1361]), first, "../design/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1362]), first, "../design/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1363]), first, "../design/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1364]), first, "../design/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1365]), first, "../design/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1366]), first, "../design/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1367]), first, "../design/polite_pe.sv", 23, 31, "", "v_toggle/polite_pe", "mul[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1368]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1369]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1370]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1371]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1372]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1373]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1374]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1375]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1376]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1377]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1378]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1379]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1380]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1381]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1382]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1383]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1384]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1385]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1386]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1387]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1388]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1389]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1390]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1391]), first, "../design/polite_pe.sv", 24, 31, "", "v_toggle/polite_pe", "sum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1392]), first, "../design/polite_pe.sv", 25, 31, "", "v_toggle/polite_pe", "ovf", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1393]), first, "../design/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1394]), first, "../design/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1395]), first, "../design/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1396]), first, "../design/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1397]), first, "../design/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1398]), first, "../design/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1399]), first, "../design/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1400]), first, "../design/polite_pe.sv", 27, 24, "", "v_toggle/polite_pe", "prod[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1368]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1369]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1370]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1371]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1372]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1373]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1374]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1375]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1376]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1377]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1378]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1379]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1380]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1381]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1382]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1383]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1384]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1385]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1386]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1387]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1388]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1389]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1390]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1391]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1401]), first, "../design/polite_pe.sv", 28, 24, "", "v_toggle/polite_pe", "full[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1402]), first, "../design/polite_pe.sv", 40, 18, "", "v_branch/polite_pe", "if", "40-41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1403]), first, "../design/polite_pe.sv", 40, 19, "", "v_branch/polite_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1404]), first, "../design/polite_pe.sv", 38, 13, "", "v_line/polite_pe", "elsif", "38-39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1405]), first, "../design/polite_pe.sv", 42, 13, "", "v_branch/polite_pe", "if", "42-43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1406]), first, "../design/polite_pe.sv", 42, 14, "", "v_branch/polite_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1407]), first, "../design/polite_pe.sv", 37, 18, "", "v_branch/polite_pe", "if", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1408]), first, "../design/polite_pe.sv", 37, 19, "", "v_branch/polite_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1409]), first, "../design/polite_pe.sv", 34, 9, "", "v_line/polite_pe", "elsif", "34-36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1410]), first, "../design/polite_pe.sv", 33, 5, "", "v_line/polite_pe", "block", "33");
}
