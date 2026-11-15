// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsim_top__pch.h"
#include "Vsim_top.h"
#include "Vsim_top___024root.h"
#include "Vsim_top_polite_pe.h"

// FUNCTIONS
Vsim_top__Syms::~Vsim_top__Syms()
{
}

Vsim_top__Syms::Vsim_top__Syms(VerilatedContext* contextp, const char* namep, Vsim_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe{this, Verilated::catName(namep, "sim_top.dut.g_pe[0].u_pe")}
    , TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe{this, Verilated::catName(namep, "sim_top.dut.g_pe[1].u_pe")}
    , TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe{this, Verilated::catName(namep, "sim_top.dut.g_pe[2].u_pe")}
    , TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe{this, Verilated::catName(namep, "sim_top.dut.g_pe[3].u_pe")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe = &TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe;
    TOP.__PVT__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe = &TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe;
    TOP.__PVT__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe = &TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe;
    TOP.__PVT__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe = &TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__Vconfigure(true);
    TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__Vconfigure(false);
    TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__Vconfigure(false);
    TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.__Vconfigure(false);
}
