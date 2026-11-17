// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_POLITE_MINI__SYMS_H_
#define VERILATED_VTB_POLITE_MINI__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_polite_mini.h"

// INCLUDE MODULE CLASSES
#include "Vtb_polite_mini___024root.h"
#include "Vtb_polite_mini___024unit.h"
#include "Vtb_polite_mini_polite_pe.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_polite_mini__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_polite_mini* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_polite_mini___024root      TOP;
    Vtb_polite_mini_polite_pe      TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe;
    Vtb_polite_mini_polite_pe      TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe;
    Vtb_polite_mini_polite_pe      TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe;
    Vtb_polite_mini_polite_pe      TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe;

    // COVERAGE
    uint32_t __Vcoverage[1411];

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_polite_mini;
    VerilatedScope __Vscope_tb_polite_mini__driver_reset;
    VerilatedScope __Vscope_tb_polite_mini__dut__u_top_sva;
    VerilatedScope __Vscope_tb_polite_mini__dut__u_top_sva__assert_dump_idx_range;
    VerilatedScope __Vscope_tb_polite_mini__dut__u_top_sva__assert_dump_pause;
    VerilatedScope __Vscope_tb_polite_mini__dut__u_top_sva__assert_ena_lag;
    VerilatedScope __Vscope_tb_polite_mini__dut__u_top_sva__assert_hold_datapath;
    VerilatedScope __Vscope_tb_polite_mini__dut__u_top_sva__assert_hold_pads;
    VerilatedScope __Vscope_tb_polite_mini__dut__u_top_sva__assert_idle_nibble;
    VerilatedScope __Vscope_tb_polite_mini__dut__u_top_sva__assert_load_not_busy;
    VerilatedScope __Vscope_tb_polite_mini__dut__u_top_sva__assert_markers_exclusive;
    VerilatedScope __Vscope_tb_polite_mini__dut__u_top_sva__assert_mul_sticky;
    VerilatedScope __Vscope_tb_polite_mini__dut__u_top_sva__assert_no_clr_during_acc;
    VerilatedScope __Vscope_tb_polite_mini__dut__u_top_sva__assert_no_freeze_restart;
    VerilatedScope __Vscope_tb_polite_mini__dut__u_top_sva__assert_out_rate;
    VerilatedScope __Vscope_tb_polite_mini__dut__u_top_sva__assert_psum_update;
    VerilatedScope __Vscope_tb_polite_mini__dut__u_top_sva__assert_reset_outputs;
    VerilatedScope __Vscope_tb_polite_mini__polite_clear_test__unnamedblk21;
    VerilatedScope __Vscope_tb_polite_mini__polite_debug_during_dump_test;
    VerilatedScope __Vscope_tb_polite_mini__polite_debug_pipeline_test__unnamedblk24;
    VerilatedScope __Vscope_tb_polite_mini__polite_debug_reads_test__unnamedblk22;
    VerilatedScope __Vscope_tb_polite_mini__polite_debug_reads_test__unnamedblk22__unnamedblk23;
    VerilatedScope __Vscope_tb_polite_mini__polite_dump_abort_test;
    VerilatedScope __Vscope_tb_polite_mini__polite_ena_hold_test__unnamedblk17;
    VerilatedScope __Vscope_tb_polite_mini__polite_freeze_window_test__unnamedblk28;
    VerilatedScope __Vscope_tb_polite_mini__polite_illegal_ops_test;
    VerilatedScope __Vscope_tb_polite_mini__polite_mac_pipeline_test__unnamedblk19;
    VerilatedScope __Vscope_tb_polite_mini__polite_pad_latency_test__unnamedblk15__unnamedblk16;
    VerilatedScope __Vscope_tb_polite_mini__polite_reset_test;
    VerilatedScope __Vscope_tb_polite_mini__polite_smoke_test;
    VerilatedScope __Vscope_tb_polite_mini__run_phase;
    VerilatedScope __Vscope_tb_polite_mini__sb_check_dump;
    VerilatedScope __Vscope_tb_polite_mini__sb_check_dump__unnamedblk14;
    VerilatedScope __Vscope_tb_polite_mini__sb_check_flags;
    VerilatedScope __Vscope_tb_polite_mini__sb_compare_pins;
    VerilatedScope __Vscope_tb_polite_mini__seq_debug_read;
    VerilatedScope __Vscope_tb_polite_mini__seq_debug_read__unnamedblk12;

    // CONSTRUCTORS
    Vtb_polite_mini__Syms(VerilatedContext* contextp, const char* namep, Vtb_polite_mini* modelp);
    ~Vtb_polite_mini__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
