// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_dbg.h for the primary calling header

#include "Vtb_polite_dbg__pch.h"
#include "Vtb_polite_dbg___024unit__03a__03adbg_txn__Vclpkg.h"

void Vtb_polite_dbg___024unit__03a__03adbg_txn::__VnoInFunc_c_en_setup_constraint(Vtb_polite_dbg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_txn::__VnoInFunc_c_en_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard(std::string{"(bvor (bvand #b1 (__Vbv (= en #b1))) (bvand #b1 (__Vbv (= en #b0))))"});
}

void Vtb_polite_dbg___024unit__03a__03adbg_txn::__VnoInFunc___Vsetup_constraints(Vtb_polite_dbg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_txn::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_c_en_setup_constraint(vlSymsp);
    this->__VnoInFunc_c_req_setup_constraint(vlSymsp);
    this->__VnoInFunc_c_op_setup_constraint(vlSymsp);
}

void Vtb_polite_dbg___024unit__03a__03adbg_txn::__VnoInFunc_c_req_setup_constraint(Vtb_polite_dbg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_txn::__VnoInFunc_c_req_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard(std::string{"(bvor (bvand #b1 (__Vbv (= req #b1))) (bvand #b1 (__Vbv (= req #b0))))"});
}

void Vtb_polite_dbg___024unit__03a__03adbg_txn::__VnoInFunc_c_op_setup_constraint(Vtb_polite_dbg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_txn::__VnoInFunc_c_op_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard(std::string{"(bvand (__Vbv (bvuge op #x6)) (__Vbv (bvule op #xb)))"});
}

void Vtb_polite_dbg___024unit__03a__03adbg_txn::__VnoInFunc___Vbasic_randomize(Vtb_polite_dbg__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_txn::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
    this->__PVT__pe = (3U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__run_busy = (1U & VL_RANDOM_RNG_I(__Vm_rng));
}

Vtb_polite_dbg___024unit__03a__03adbg_txn::~Vtb_polite_dbg___024unit__03a__03adbg_txn() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_txn::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb_polite_dbg___024unit__03a__03adbg_txn>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_txn::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_polite_dbg___024unit__03a__03adbg_txn::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_txn::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_polite_dbg___024unit__03a__03adbg_txn::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_dbg___024unit__03a__03adbg_txn::to_string_middle\n"); );
    // Body
    std::string out;
    out += "en:" + VL_TO_STRING(__PVT__en);
    out += ", req:" + VL_TO_STRING(__PVT__req);
    out += ", op:" + VL_TO_STRING(__PVT__op);
    out += ", pe:" + VL_TO_STRING(__PVT__pe);
    out += ", run_busy:" + VL_TO_STRING(__PVT__run_busy);
    return out;
}
