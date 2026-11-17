// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_polite_mini__pch.h"
#include "Vtb_polite_mini.h"
#include "Vtb_polite_mini___024root.h"
#include "Vtb_polite_mini___024unit.h"
#include "Vtb_polite_mini_polite_pe.h"

// FUNCTIONS
Vtb_polite_mini__Syms::~Vtb_polite_mini__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_polite_mini__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_polite_mini__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_polite_mini__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_polite_mini__Syms::Vtb_polite_mini__Syms(VerilatedContext* contextp, const char* namep, Vtb_polite_mini* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe{this, Verilated::catName(namep, "tb_polite_mini.dut.g_pe[0].u_pe")}
    , TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe{this, Verilated::catName(namep, "tb_polite_mini.dut.g_pe[1].u_pe")}
    , TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe{this, Verilated::catName(namep, "tb_polite_mini.dut.g_pe[2].u_pe")}
    , TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe{this, Verilated::catName(namep, "tb_polite_mini.dut.g_pe[3].u_pe")}
{
        // Check resources
        Verilated::stackCheck(288);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe = &TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe;
    TOP.__PVT__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe = &TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe;
    TOP.__PVT__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe = &TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe;
    TOP.__PVT__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe = &TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__Vconfigure(true);
    TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__Vconfigure(false);
    TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__Vconfigure(false);
    TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.__Vconfigure(false);
    // Setup scopes
    __Vscope_tb_polite_mini.configure(this, name(), "tb_polite_mini", "tb_polite_mini", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__driver_reset.configure(this, name(), "tb_polite_mini.driver_reset", "driver_reset", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__dut__u_top_sva.configure(this, name(), "tb_polite_mini.dut.u_top_sva", "u_top_sva", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__dut__u_top_sva__assert_dump_idx_range.configure(this, name(), "tb_polite_mini.dut.u_top_sva.assert_dump_idx_range", "assert_dump_idx_range", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__dut__u_top_sva__assert_dump_pause.configure(this, name(), "tb_polite_mini.dut.u_top_sva.assert_dump_pause", "assert_dump_pause", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__dut__u_top_sva__assert_ena_lag.configure(this, name(), "tb_polite_mini.dut.u_top_sva.assert_ena_lag", "assert_ena_lag", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__dut__u_top_sva__assert_hold_datapath.configure(this, name(), "tb_polite_mini.dut.u_top_sva.assert_hold_datapath", "assert_hold_datapath", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__dut__u_top_sva__assert_hold_pads.configure(this, name(), "tb_polite_mini.dut.u_top_sva.assert_hold_pads", "assert_hold_pads", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__dut__u_top_sva__assert_idle_nibble.configure(this, name(), "tb_polite_mini.dut.u_top_sva.assert_idle_nibble", "assert_idle_nibble", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__dut__u_top_sva__assert_load_not_busy.configure(this, name(), "tb_polite_mini.dut.u_top_sva.assert_load_not_busy", "assert_load_not_busy", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__dut__u_top_sva__assert_markers_exclusive.configure(this, name(), "tb_polite_mini.dut.u_top_sva.assert_markers_exclusive", "assert_markers_exclusive", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__dut__u_top_sva__assert_mul_sticky.configure(this, name(), "tb_polite_mini.dut.u_top_sva.assert_mul_sticky", "assert_mul_sticky", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__dut__u_top_sva__assert_no_clr_during_acc.configure(this, name(), "tb_polite_mini.dut.u_top_sva.assert_no_clr_during_acc", "assert_no_clr_during_acc", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__dut__u_top_sva__assert_no_freeze_restart.configure(this, name(), "tb_polite_mini.dut.u_top_sva.assert_no_freeze_restart", "assert_no_freeze_restart", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__dut__u_top_sva__assert_out_rate.configure(this, name(), "tb_polite_mini.dut.u_top_sva.assert_out_rate", "assert_out_rate", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__dut__u_top_sva__assert_psum_update.configure(this, name(), "tb_polite_mini.dut.u_top_sva.assert_psum_update", "assert_psum_update", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__dut__u_top_sva__assert_reset_outputs.configure(this, name(), "tb_polite_mini.dut.u_top_sva.assert_reset_outputs", "assert_reset_outputs", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__polite_clear_test__unnamedblk21.configure(this, name(), "tb_polite_mini.polite_clear_test.unnamedblk21", "unnamedblk21", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__polite_debug_during_dump_test.configure(this, name(), "tb_polite_mini.polite_debug_during_dump_test", "polite_debug_during_dump_test", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__polite_debug_pipeline_test__unnamedblk24.configure(this, name(), "tb_polite_mini.polite_debug_pipeline_test.unnamedblk24", "unnamedblk24", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__polite_debug_reads_test__unnamedblk22.configure(this, name(), "tb_polite_mini.polite_debug_reads_test.unnamedblk22", "unnamedblk22", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__polite_debug_reads_test__unnamedblk22__unnamedblk23.configure(this, name(), "tb_polite_mini.polite_debug_reads_test.unnamedblk22.unnamedblk23", "unnamedblk23", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__polite_dump_abort_test.configure(this, name(), "tb_polite_mini.polite_dump_abort_test", "polite_dump_abort_test", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__polite_ena_hold_test__unnamedblk17.configure(this, name(), "tb_polite_mini.polite_ena_hold_test.unnamedblk17", "unnamedblk17", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__polite_freeze_window_test__unnamedblk28.configure(this, name(), "tb_polite_mini.polite_freeze_window_test.unnamedblk28", "unnamedblk28", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__polite_illegal_ops_test.configure(this, name(), "tb_polite_mini.polite_illegal_ops_test", "polite_illegal_ops_test", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__polite_mac_pipeline_test__unnamedblk19.configure(this, name(), "tb_polite_mini.polite_mac_pipeline_test.unnamedblk19", "unnamedblk19", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__polite_pad_latency_test__unnamedblk15__unnamedblk16.configure(this, name(), "tb_polite_mini.polite_pad_latency_test.unnamedblk15.unnamedblk16", "unnamedblk16", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__polite_reset_test.configure(this, name(), "tb_polite_mini.polite_reset_test", "polite_reset_test", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__polite_smoke_test.configure(this, name(), "tb_polite_mini.polite_smoke_test", "polite_smoke_test", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__run_phase.configure(this, name(), "tb_polite_mini.run_phase", "run_phase", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__sb_check_dump.configure(this, name(), "tb_polite_mini.sb_check_dump", "sb_check_dump", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__sb_check_dump__unnamedblk14.configure(this, name(), "tb_polite_mini.sb_check_dump.unnamedblk14", "unnamedblk14", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__sb_check_flags.configure(this, name(), "tb_polite_mini.sb_check_flags", "sb_check_flags", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__sb_compare_pins.configure(this, name(), "tb_polite_mini.sb_compare_pins", "sb_compare_pins", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__seq_debug_read.configure(this, name(), "tb_polite_mini.seq_debug_read", "seq_debug_read", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_mini__seq_debug_read__unnamedblk12.configure(this, name(), "tb_polite_mini.seq_debug_read.unnamedblk12", "unnamedblk12", "<null>", -9, VerilatedScope::SCOPE_OTHER);
}
