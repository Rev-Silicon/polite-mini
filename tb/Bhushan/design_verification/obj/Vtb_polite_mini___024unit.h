// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_polite_mini.h for the primary calling header

#ifndef VERILATED_VTB_POLITE_MINI___024UNIT_H_
#define VERILATED_VTB_POLITE_MINI___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtb_polite_mini__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_polite_mini___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_polite_mini__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_polite_mini___024unit(Vtb_polite_mini__Syms* symsp, const char* v__name);
    ~Vtb_polite_mini___024unit();
    VL_UNCOPYABLE(Vtb_polite_mini___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
