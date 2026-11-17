// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_ctrl.h for the primary calling header

#include "Vtb_polite_ctrl__pch.h"
#include "Vtb_polite_ctrl__Syms.h"
#include "Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg.h"

void Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc_ins(Vtb_polite_ctrl__Syms* __restrict vlSymsp, CData/*7:0*/ &ins__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc_ins\n"); );
    // Body
    ins__Vfuncrtn = (((IData)(this->__PVT__op) << 4U) 
                     | (IData)(this->__PVT__arg));
    ++(vlSymsp->__Vcoverage[180]);
}

Vtb_polite_ctrl___024unit__03a__03actrl_txn::Vtb_polite_ctrl___024unit__03a__03actrl_txn(Vtb_polite_ctrl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_ctrl___024unit__03a__03actrl_txn::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    ++(vlSymsp->__Vcoverage[181]);
    this->__PVT__constraint.write_var(this->__PVT__en, 1ULL, 
                                      "en", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__op, 4ULL, 
                                      "op", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__dump_busy, 1ULL, 
                                      "dump_busy", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__fz_open, 1ULL, 
                                      "fz_open", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__pe_ovf_any, 1ULL, 
                                      "pe_ovf_any", 0ULL);
}

void Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc_randomize(Vtb_polite_ctrl__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_ctrl___024unit__03a__03actrl_txn::__VnoInFunc_randomize\n"); );
    // Init
    IData/*31:0*/ __Vfunc___Vbasic_randomize__1__Vfuncout;
    __Vfunc___Vbasic_randomize__1__Vfuncout = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    ++(vlSymsp->__Vcoverage[182]);
    this->__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = this->__PVT__constraint.next(__Vm_rng);
    __Vtemp_1 = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__1__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__1__Vfuncout));
    randomize__Vfuncrtn = __Vtemp_1;
}

void Vtb_polite_ctrl___024unit__03a__03actrl_txn::_ctor_var_reset(Vtb_polite_ctrl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_ctrl___024unit__03a__03actrl_txn::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__en = 0;
    __PVT__d = 0;
    __PVT__op = 0;
    __PVT__arg = 0;
    __PVT__dump_busy = 0;
    __PVT__fz_open = 0;
    __PVT__pe_ovf_any = 0;
    }
