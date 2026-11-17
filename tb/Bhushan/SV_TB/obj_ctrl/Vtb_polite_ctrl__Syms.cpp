// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_polite_ctrl__pch.h"
#include "Vtb_polite_ctrl.h"
#include "Vtb_polite_ctrl___024root.h"
#include "Vtb_polite_ctrl___024unit.h"
#include "Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg.h"

// FUNCTIONS
Vtb_polite_ctrl__Syms::~Vtb_polite_ctrl__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_polite_ctrl__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_polite_ctrl__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_polite_ctrl__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_polite_ctrl__Syms::Vtb_polite_ctrl__Syms(VerilatedContext* contextp, const char* namep, Vtb_polite_ctrl* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit__03a__03actrl_txn__Vclpkg{this, Verilated::catName(namep, "$unit::ctrl_txn__Vclpkg")}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(41);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03actrl_txn__Vclpkg = &TOP____024unit__03a__03actrl_txn__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03actrl_txn__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_polite_ctrl.configure(this, name(), "tb_polite_ctrl", "tb_polite_ctrl", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__check_comb.configure(this, name(), "tb_polite_ctrl.check_comb", "check_comb", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__check_hold_quiet.configure(this, name(), "tb_polite_ctrl.check_hold_quiet", "check_hold_quiet", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__check_regs.configure(this, name(), "tb_polite_ctrl.check_regs", "check_regs", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__dut__u_sva.configure(this, name(), "tb_polite_ctrl.dut.u_sva", "u_sva", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__dut__u_sva__a_hold_quiet.configure(this, name(), "tb_polite_ctrl.dut.u_sva.a_hold_quiet", "a_hold_quiet", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__dut__u_sva__a_hold_regs.configure(this, name(), "tb_polite_ctrl.dut.u_sva.a_hold_regs", "a_hold_regs", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__dut__u_sva__a_ill_sticky.configure(this, name(), "tb_polite_ctrl.dut.u_sva.a_ill_sticky", "a_ill_sticky", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__dut__u_sva__a_no_clr_ps.configure(this, name(), "tb_polite_ctrl.dut.u_sva.a_no_clr_ps", "a_no_clr_ps", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__dut__u_sva__a_no_dload.configure(this, name(), "tb_polite_ctrl.dut.u_sva.a_no_dload", "a_no_dload", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__dut__u_sva__a_no_run_fz.configure(this, name(), "tb_polite_ctrl.dut.u_sva.a_no_run_fz", "a_no_run_fz", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__dut__u_sva__a_one_cmd.configure(this, name(), "tb_polite_ctrl.dut.u_sva.a_one_cmd", "a_one_cmd", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__dut__u_sva__a_ovf_new.configure(this, name(), "tb_polite_ctrl.dut.u_sva.a_ovf_new", "a_ovf_new", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__dut__u_sva__a_ovf_sticky.configure(this, name(), "tb_polite_ctrl.dut.u_sva.a_ovf_sticky", "a_ovf_sticky", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__dut__u_sva__a_phase.configure(this, name(), "tb_polite_ctrl.dut.u_sva.a_phase", "a_phase", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__dut__u_sva__a_run_busy.configure(this, name(), "tb_polite_ctrl.dut.u_sva.a_run_busy", "a_run_busy", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__dut__u_sva__a_status7.configure(this, name(), "tb_polite_ctrl.dut.u_sva.a_status7", "a_status7", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_polite_ctrl__random_tests__unnamedblk1.configure(this, name(), "tb_polite_ctrl.random_tests.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
}
