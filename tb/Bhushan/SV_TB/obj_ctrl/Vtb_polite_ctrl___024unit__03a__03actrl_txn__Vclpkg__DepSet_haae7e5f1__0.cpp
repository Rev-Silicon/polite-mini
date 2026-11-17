// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_ctrl.h for the primary calling header

#include "Vtb_polite_ctrl__pch.h"
#include "Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg.h"

void Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc_c_en_setup_constraint(Vtb_polite_ctrl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc_c_en_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard(std::string{"(bvor (bvand #b1 (__Vbv (= en #b1))) (bvand #b1 (__Vbv (= en #b0))))"});
}

void Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc___Vsetup_constraints(Vtb_polite_ctrl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_c_en_setup_constraint(vlSymsp);
    this->__VnoInFunc_c_op_setup_constraint(vlSymsp);
    this->__VnoInFunc_c_dump_setup_constraint(vlSymsp);
    this->__VnoInFunc_c_fz_setup_constraint(vlSymsp);
    this->__VnoInFunc_c_ovf_setup_constraint(vlSymsp);
}

void Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc_c_op_setup_constraint(Vtb_polite_ctrl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc_c_op_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard(std::string{"(bvor (bvor (bvand #b1 (bvand (__Vbv (bvuge op #x0)) (__Vbv (bvule op #x5)))) (bvand #b1 (bvand (__Vbv (bvuge op #x6)) (__Vbv (bvule op #xb))))) (bvand #b1 (bvand (__Vbv (bvuge op #xc)) (__Vbv (bvule op #xf)))))"});
}

void Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc_c_dump_setup_constraint(Vtb_polite_ctrl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc_c_dump_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard(std::string{"(bvor (bvand #b1 (__Vbv (= dump_busy #b0))) (bvand #b1 (__Vbv (= dump_busy #b1))))"});
}

void Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc_c_fz_setup_constraint(Vtb_polite_ctrl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc_c_fz_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard(std::string{"(bvor (bvand #b1 (__Vbv (= fz_open #b0))) (bvand #b1 (__Vbv (= fz_open #b1))))"});
}

void Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc_c_ovf_setup_constraint(Vtb_polite_ctrl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc_c_ovf_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard(std::string{"(bvor (bvand #b1 (__Vbv (= pe_ovf_any #b0))) (bvand #b1 (__Vbv (= pe_ovf_any #b1))))"});
}

void Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc___Vbasic_randomize(Vtb_polite_ctrl__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
    this->__PVT__d = (0xffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__arg = (0xfU & VL_RANDOM_RNG_I(__Vm_rng));
}

Vtb_polite_ctrl___024unit__03a__03actrl_txn::~Vtb_polite_ctrl___024unit__03a__03actrl_txn() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_ctrl___024unit__03a__03actrl_txn::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb_polite_ctrl___024unit__03a__03actrl_txn>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_ctrl___024unit__03a__03actrl_txn::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_polite_ctrl___024unit__03a__03actrl_txn::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_ctrl___024unit__03a__03actrl_txn::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_polite_ctrl___024unit__03a__03actrl_txn::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_ctrl___024unit__03a__03actrl_txn::to_string_middle\n"); );
    // Body
    std::string out;
    out += "en:" + VL_TO_STRING(__PVT__en);
    out += ", d:" + VL_TO_STRING(__PVT__d);
    out += ", op:" + VL_TO_STRING(__PVT__op);
    out += ", arg:" + VL_TO_STRING(__PVT__arg);
    out += ", dump_busy:" + VL_TO_STRING(__PVT__dump_busy);
    out += ", fz_open:" + VL_TO_STRING(__PVT__fz_open);
    out += ", pe_ovf_any:" + VL_TO_STRING(__PVT__pe_ovf_any);
    return out;
}
