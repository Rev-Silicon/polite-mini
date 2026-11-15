// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIM_TOP__SYMS_H_
#define VERILATED_VSIM_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsim_top.h"

// INCLUDE MODULE CLASSES
#include "Vsim_top___024root.h"
#include "Vsim_top_polite_pe.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsim_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsim_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsim_top___024root             TOP;
    Vsim_top_polite_pe             TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe;
    Vsim_top_polite_pe             TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe;
    Vsim_top_polite_pe             TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe;
    Vsim_top_polite_pe             TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe;

    // COVERAGE
    uint32_t __Vcoverage[1062];

    // CONSTRUCTORS
    Vsim_top__Syms(VerilatedContext* contextp, const char* namep, Vsim_top* modelp);
    ~Vsim_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
