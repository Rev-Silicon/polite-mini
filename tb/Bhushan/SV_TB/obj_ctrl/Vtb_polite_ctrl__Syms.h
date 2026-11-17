// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_POLITE_CTRL__SYMS_H_
#define VERILATED_VTB_POLITE_CTRL__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_polite_ctrl.h"

// INCLUDE MODULE CLASSES
#include "Vtb_polite_ctrl___024root.h"
#include "Vtb_polite_ctrl___024unit.h"
#include "Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_polite_ctrl__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_polite_ctrl* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_polite_ctrl___024root      TOP;
    Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg TOP____024unit__03a__03actrl_txn__Vclpkg;
    Vtb_polite_ctrl___024unit      TOP____024unit;

    // COVERAGE
    uint32_t __Vcoverage[183];

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_polite_ctrl;
    VerilatedScope __Vscope_tb_polite_ctrl__check_comb;
    VerilatedScope __Vscope_tb_polite_ctrl__check_hold_quiet;
    VerilatedScope __Vscope_tb_polite_ctrl__check_regs;
    VerilatedScope __Vscope_tb_polite_ctrl__dut__u_sva;
    VerilatedScope __Vscope_tb_polite_ctrl__dut__u_sva__a_hold_quiet;
    VerilatedScope __Vscope_tb_polite_ctrl__dut__u_sva__a_hold_regs;
    VerilatedScope __Vscope_tb_polite_ctrl__dut__u_sva__a_ill_sticky;
    VerilatedScope __Vscope_tb_polite_ctrl__dut__u_sva__a_no_clr_ps;
    VerilatedScope __Vscope_tb_polite_ctrl__dut__u_sva__a_no_dload;
    VerilatedScope __Vscope_tb_polite_ctrl__dut__u_sva__a_no_run_fz;
    VerilatedScope __Vscope_tb_polite_ctrl__dut__u_sva__a_one_cmd;
    VerilatedScope __Vscope_tb_polite_ctrl__dut__u_sva__a_ovf_new;
    VerilatedScope __Vscope_tb_polite_ctrl__dut__u_sva__a_ovf_sticky;
    VerilatedScope __Vscope_tb_polite_ctrl__dut__u_sva__a_phase;
    VerilatedScope __Vscope_tb_polite_ctrl__dut__u_sva__a_run_busy;
    VerilatedScope __Vscope_tb_polite_ctrl__dut__u_sva__a_status7;
    VerilatedScope __Vscope_tb_polite_ctrl__random_tests__unnamedblk1;

    // CONSTRUCTORS
    Vtb_polite_ctrl__Syms(VerilatedContext* contextp, const char* namep, Vtb_polite_ctrl* modelp);
    ~Vtb_polite_ctrl__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
