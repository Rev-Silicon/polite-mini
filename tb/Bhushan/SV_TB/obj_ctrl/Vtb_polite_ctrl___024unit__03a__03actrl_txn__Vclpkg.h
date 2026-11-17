// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_polite_ctrl.h for the primary calling header

#ifndef VERILATED_VTB_POLITE_CTRL___024UNIT__03A__03ACTRL_TXN__VCLPKG_H_
#define VERILATED_VTB_POLITE_CTRL___024UNIT__03A__03ACTRL_TXN__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_polite_ctrl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_polite_ctrl__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg(Vtb_polite_ctrl__Syms* symsp, const char* v__name);
    ~Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg();
    VL_UNCOPYABLE(Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


class Vtb_polite_ctrl__Syms;

class Vtb_polite_ctrl___024unit__03a__03actrl_txn : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__en;
    CData/*7:0*/ __PVT__d;
    CData/*3:0*/ __PVT__op;
    CData/*3:0*/ __PVT__arg;
    CData/*0:0*/ __PVT__dump_busy;
    CData/*0:0*/ __PVT__fz_open;
    CData/*0:0*/ __PVT__pe_ovf_any;
    VlRandomizer __PVT__constraint;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc___Vbasic_randomize(Vtb_polite_ctrl__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_polite_ctrl__Syms* __restrict vlSymsp);
    void __VnoInFunc_c_dump_setup_constraint(Vtb_polite_ctrl__Syms* __restrict vlSymsp);
    void __VnoInFunc_c_en_setup_constraint(Vtb_polite_ctrl__Syms* __restrict vlSymsp);
    void __VnoInFunc_c_fz_setup_constraint(Vtb_polite_ctrl__Syms* __restrict vlSymsp);
    void __VnoInFunc_c_op_setup_constraint(Vtb_polite_ctrl__Syms* __restrict vlSymsp);
    void __VnoInFunc_c_ovf_setup_constraint(Vtb_polite_ctrl__Syms* __restrict vlSymsp);
    void __VnoInFunc_ins(Vtb_polite_ctrl__Syms* __restrict vlSymsp, CData/*7:0*/ &ins__Vfuncrtn);
    void __VnoInFunc_randomize(Vtb_polite_ctrl__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_polite_ctrl__Syms* __restrict vlSymsp);
  public:
    Vtb_polite_ctrl___024unit__03a__03actrl_txn(Vtb_polite_ctrl__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_polite_ctrl___024unit__03a__03actrl_txn();
};

std::string VL_TO_STRING(const VlClassRef<Vtb_polite_ctrl___024unit__03a__03actrl_txn>& obj);

#endif  // guard
