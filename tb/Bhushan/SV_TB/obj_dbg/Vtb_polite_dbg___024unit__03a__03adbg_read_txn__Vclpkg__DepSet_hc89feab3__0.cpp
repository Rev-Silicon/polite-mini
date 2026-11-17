// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_dbg.h for the primary calling header

#include "Vtb_polite_dbg__pch.h"
#include "Vtb_polite_dbg___024unit__03a__03adbg_read_txn__Vclpkg.h"

void Vtb_polite_dbg___024unit__03a__03adbg_read_txn::__VnoInFunc_c_op_setup_constraint(Vtb_polite_dbg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_read_txn::__VnoInFunc_c_op_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard(std::string{"(bvand (__Vbv (bvuge op #x6)) (__Vbv (bvule op #xb)))"});
}

void Vtb_polite_dbg___024unit__03a__03adbg_read_txn::__VnoInFunc___Vsetup_constraints(Vtb_polite_dbg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_read_txn::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_c_op_setup_constraint(vlSymsp);
    this->__VnoInFunc_c_bounds_setup_constraint(vlSymsp);
    this->__VnoInFunc_c_gap_setup_constraint(vlSymsp);
    this->__VnoInFunc_c_hold_setup_constraint(vlSymsp);
}

void Vtb_polite_dbg___024unit__03a__03adbg_read_txn::__VnoInFunc_c_bounds_setup_constraint(Vtb_polite_dbg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_read_txn::__VnoInFunc_c_bounds_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard(std::string{"(bvand (__Vbv (bvuge gap #x00000002)) (__Vbv (bvule gap #x00000028)))"});
    this->__PVT__constraint.hard(std::string{"(bvand (__Vbv (bvuge n_hold #x00000000)) (__Vbv (bvule n_hold #x00000004)))"});
}

void Vtb_polite_dbg___024unit__03a__03adbg_read_txn::__VnoInFunc_c_gap_setup_constraint(Vtb_polite_dbg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_read_txn::__VnoInFunc_c_gap_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard(std::string{"(__Vbv (=> (__Vbool (bvor (__Vbv (= op #x8)) (__Vbv (= op #xa)))) (__Vbool (bvor (bvor (bvor (bvand #b1 (__Vbv (= gap #x0000000a))) (bvand #b1 (__Vbv (= gap #x0000000b)))) (bvand #b1 (bvand (__Vbv (bvuge gap #x0000000c)) (__Vbv (bvule gap #x00000010))))) (bvand #b1 (bvand (__Vbv (bvuge gap #x00000011)) (__Vbv (bvule gap #x00000028))))))))"});
    this->__PVT__constraint.hard(std::string{"(__Vbv (=> (__Vbool (__Vbv (not (__Vbool (bvor (__Vbv (= op #x8)) (__Vbv (= op #xa))))))) (__Vbool (bvor (bvor (bvor (bvand #b1 (__Vbv (= gap #x00000002))) (bvand #b1 (__Vbv (= gap #x00000003)))) (bvand #b1 (bvand (__Vbv (bvuge gap #x00000004)) (__Vbv (bvule gap #x00000008))))) (bvand #b1 (bvand (__Vbv (bvuge gap #x00000009)) (__Vbv (bvule gap #x0000001e))))))))"});
}

void Vtb_polite_dbg___024unit__03a__03adbg_read_txn::__VnoInFunc_c_hold_setup_constraint(Vtb_polite_dbg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_read_txn::__VnoInFunc_c_hold_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard(std::string{"(bvor (bvand #b1 (__Vbv (= n_hold #x00000000))) (bvand #b1 (bvand (__Vbv (bvuge n_hold #x00000001)) (__Vbv (bvule n_hold #x00000004)))))"});
    this->__PVT__constraint.hard(std::string{"(__Vbv (bvult hold_at gap))"});
}

void Vtb_polite_dbg___024unit__03a__03adbg_read_txn::__VnoInFunc___Vbasic_randomize(Vtb_polite_dbg__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_read_txn::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
    this->__PVT__pe = (3U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__run_busy = (1U & VL_RANDOM_RNG_I(__Vm_rng));
}

Vtb_polite_dbg___024unit__03a__03adbg_read_txn::~Vtb_polite_dbg___024unit__03a__03adbg_read_txn() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_read_txn::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb_polite_dbg___024unit__03a__03adbg_read_txn>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_read_txn::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_polite_dbg___024unit__03a__03adbg_read_txn::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_read_txn::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_polite_dbg___024unit__03a__03adbg_read_txn::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_read_txn::to_string_middle\n"); );
    // Body
    std::string out;
    out += "op:" + VL_TO_STRING(__PVT__op);
    out += ", pe:" + VL_TO_STRING(__PVT__pe);
    out += ", run_busy:" + VL_TO_STRING(__PVT__run_busy);
    out += ", gap:" + VL_TO_STRING(__PVT__gap);
    out += ", n_hold:" + VL_TO_STRING(__PVT__n_hold);
    out += ", hold_at:" + VL_TO_STRING(__PVT__hold_at);
    return out;
}
