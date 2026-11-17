// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_polite_dbg__pch.h"
#include "Vtb_polite_dbg.h"
#include "Vtb_polite_dbg___024root.h"
#include "Vtb_polite_dbg___024unit.h"
#include "Vtb_polite_dbg___024unit__03a__03adbg_txn__Vclpkg.h"
#include "Vtb_polite_dbg___024unit__03a__03adbg_read_txn__Vclpkg.h"

// FUNCTIONS
Vtb_polite_dbg__Syms::~Vtb_polite_dbg__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_polite_dbg__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_polite_dbg__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_polite_dbg__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_polite_dbg__Syms::Vtb_polite_dbg__Syms(VerilatedContext* contextp, const char* namep, Vtb_polite_dbg* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit__03a__03adbg_read_txn__Vclpkg{this, Verilated::catName(namep, "$unit::dbg_read_txn__Vclpkg")}
    , TOP____024unit__03a__03adbg_txn__Vclpkg{this, Verilated::catName(namep, "$unit::dbg_txn__Vclpkg")}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(52);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03adbg_read_txn__Vclpkg = &TOP____024unit__03a__03adbg_read_txn__Vclpkg;
    TOP.__024unit__03a__03adbg_txn__Vclpkg = &TOP____024unit__03a__03adbg_txn__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03adbg_read_txn__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03adbg_txn__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_polite_dbg.configure(this, name(), "tb_polite_dbg", "tb_polite_dbg", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_dbg__check_comb.configure(this, name(), "tb_polite_dbg.check_comb", "check_comb", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_dbg__check_regs.configure(this, name(), "tb_polite_dbg.check_regs", "check_regs", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_dbg__dut__u_sva.configure(this, name(), "tb_polite_dbg.dut.u_sva", "u_sva", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_dbg__dut__u_sva__a_nib_count.configure(this, name(), "tb_polite_dbg.dut.u_sva.a_nib_count", "a_nib_count", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_dbg__dut__u_sva__a_no_restart.configure(this, name(), "tb_polite_dbg.dut.u_sva.a_no_restart", "a_no_restart", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_dbg__dut__u_sva__a_ranges.configure(this, name(), "tb_polite_dbg.dut.u_sva.a_ranges", "a_ranges", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_dbg__dut__u_sva__a_tick_phase.configure(this, name(), "tb_polite_dbg.dut.u_sva.a_tick_phase", "a_tick_phase", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_dbg__dut__u_sva__a_val_frozen.configure(this, name(), "tb_polite_dbg.dut.u_sva.a_val_frozen", "a_val_frozen", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_dbg__dut__u_sva__a_win_narrow.configure(this, name(), "tb_polite_dbg.dut.u_sva.a_win_narrow", "a_win_narrow", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_dbg__dut__u_sva__a_win_wide.configure(this, name(), "tb_polite_dbg.dut.u_sva.a_win_wide", "a_win_wide", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_dbg__model_clock.configure(this, name(), "tb_polite_dbg.model_clock", "model_clock", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_dbg__random_noise__unnamedblk7.configure(this, name(), "tb_polite_dbg.random_noise.unnamedblk7", "unnamedblk7", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_dbg__random_reads__unnamedblk5.configure(this, name(), "tb_polite_dbg.random_reads.unnamedblk5", "unnamedblk5", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_dbg__unnamedblk11.configure(this, name(), "tb_polite_dbg.unnamedblk11", "unnamedblk11", "<null>", -9, VerilatedScope::SCOPE_OTHER);
}
