// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_ctrl.h for the primary calling header

#include "Vtb_polite_ctrl__pch.h"
#include "Vtb_polite_ctrl__Syms.h"
#include "Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg.h"

VL_ATTR_COLD void Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg___configure_coverage(Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "polite_ctrl_tb.sv", 20, 24, "", "v_line/ctrl_txn", "block", "20-21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "polite_ctrl_tb.sv", 4, 1, "", "v_line/ctrl_txn", "block", "4");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "polite_ctrl_tb.sv", 4, 1, "", "v_line/ctrl_txn", "block", "4");
}
