// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_polite_dbg.h for the primary calling header

#ifndef VERILATED_VTB_POLITE_DBG___024UNIT__03A__03ADBG_READ_TXN__VCLPKG_H_
#define VERILATED_VTB_POLITE_DBG___024UNIT__03A__03ADBG_READ_TXN__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_polite_dbg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_polite_dbg___024unit__03a__03adbg_read_txn__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_polite_dbg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_polite_dbg___024unit__03a__03adbg_read_txn__Vclpkg(Vtb_polite_dbg__Syms* symsp, const char* v__name);
    ~Vtb_polite_dbg___024unit__03a__03adbg_read_txn__Vclpkg();
    VL_UNCOPYABLE(Vtb_polite_dbg___024unit__03a__03adbg_read_txn__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


class Vtb_polite_dbg__Syms;

class Vtb_polite_dbg___024unit__03a__03adbg_read_txn : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ __PVT__op;
    CData/*1:0*/ __PVT__pe;
    CData/*0:0*/ __PVT__run_busy;
    IData/*31:0*/ __PVT__gap;
    IData/*31:0*/ __PVT__n_hold;
    IData/*31:0*/ __PVT__hold_at;
    VlRandomizer __PVT__constraint;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc___Vbasic_randomize(Vtb_polite_dbg__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_polite_dbg__Syms* __restrict vlSymsp);
    void __VnoInFunc_c_bounds_setup_constraint(Vtb_polite_dbg__Syms* __restrict vlSymsp);
    void __VnoInFunc_c_gap_setup_constraint(Vtb_polite_dbg__Syms* __restrict vlSymsp);
    void __VnoInFunc_c_hold_setup_constraint(Vtb_polite_dbg__Syms* __restrict vlSymsp);
    void __VnoInFunc_c_op_setup_constraint(Vtb_polite_dbg__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(Vtb_polite_dbg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_polite_dbg__Syms* __restrict vlSymsp);
  public:
    Vtb_polite_dbg___024unit__03a__03adbg_read_txn(Vtb_polite_dbg__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_polite_dbg___024unit__03a__03adbg_read_txn();
};

std::string VL_TO_STRING(const VlClassRef<Vtb_polite_dbg___024unit__03a__03adbg_read_txn>& obj);

#endif  // guard
