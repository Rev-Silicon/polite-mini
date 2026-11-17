// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_POLITE_DBG__SYMS_H_
#define VERILATED_VTB_POLITE_DBG__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_polite_dbg.h"

// INCLUDE MODULE CLASSES
#include "Vtb_polite_dbg___024root.h"
#include "Vtb_polite_dbg___024unit.h"
#include "Vtb_polite_dbg___024unit__03a__03adbg_txn__Vclpkg.h"
#include "Vtb_polite_dbg___024unit__03a__03adbg_read_txn__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_polite_dbg__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_polite_dbg* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_polite_dbg___024root       TOP;
    Vtb_polite_dbg___024unit__03a__03adbg_read_txn__Vclpkg TOP____024unit__03a__03adbg_read_txn__Vclpkg;
    Vtb_polite_dbg___024unit__03a__03adbg_txn__Vclpkg TOP____024unit__03a__03adbg_txn__Vclpkg;
    Vtb_polite_dbg___024unit       TOP____024unit;

    // COVERAGE
    uint32_t __Vcoverage[654];

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_polite_dbg;
    VerilatedScope __Vscope_tb_polite_dbg__check_comb;
    VerilatedScope __Vscope_tb_polite_dbg__check_regs;
    VerilatedScope __Vscope_tb_polite_dbg__dut__u_sva;
    VerilatedScope __Vscope_tb_polite_dbg__dut__u_sva__a_nib_count;
    VerilatedScope __Vscope_tb_polite_dbg__dut__u_sva__a_no_restart;
    VerilatedScope __Vscope_tb_polite_dbg__dut__u_sva__a_ranges;
    VerilatedScope __Vscope_tb_polite_dbg__dut__u_sva__a_tick_phase;
    VerilatedScope __Vscope_tb_polite_dbg__dut__u_sva__a_val_frozen;
    VerilatedScope __Vscope_tb_polite_dbg__dut__u_sva__a_win_narrow;
    VerilatedScope __Vscope_tb_polite_dbg__dut__u_sva__a_win_wide;
    VerilatedScope __Vscope_tb_polite_dbg__model_clock;
    VerilatedScope __Vscope_tb_polite_dbg__random_noise__unnamedblk7;
    VerilatedScope __Vscope_tb_polite_dbg__random_reads__unnamedblk5;
    VerilatedScope __Vscope_tb_polite_dbg__unnamedblk11;

    // CONSTRUCTORS
    Vtb_polite_dbg__Syms(VerilatedContext* contextp, const char* namep, Vtb_polite_dbg* modelp);
    ~Vtb_polite_dbg__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
