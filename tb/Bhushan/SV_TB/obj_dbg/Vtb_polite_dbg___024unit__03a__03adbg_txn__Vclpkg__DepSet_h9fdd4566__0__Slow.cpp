// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_dbg.h for the primary calling header

#include "Vtb_polite_dbg__pch.h"
#include "Vtb_polite_dbg__Syms.h"
#include "Vtb_polite_dbg___024unit__03a__03adbg_txn__Vclpkg.h"

VL_ATTR_COLD void Vtb_polite_dbg___024unit__03a__03adbg_txn__Vclpkg___configure_coverage(Vtb_polite_dbg___024unit__03a__03adbg_txn__Vclpkg* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_polite_dbg___024unit__03a__03adbg_txn__Vclpkg___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[650]), first, "polite_dbg_tb.sv", 5, 1, "", "v_line/dbg_txn", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[651]), first, "polite_dbg_tb.sv", 5, 1, "", "v_line/dbg_txn", "block", "5");
}
