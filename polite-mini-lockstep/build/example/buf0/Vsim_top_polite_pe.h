// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim_top.h for the primary calling header

#ifndef VERILATED_VSIM_TOP_POLITE_PE_H_
#define VERILATED_VSIM_TOP_POLITE_PE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vsim_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_top_polite_pe final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(en,0,0);
    VL_IN8(run_now,0,0);
    VL_IN8(acc_en,0,0);
    VL_IN8(clr,0,0);
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_OUT8(mul,7,0);
    VL_OUT8(ovf,0,0);
    CData/*7:0*/ __Vtogcov__mul;
    CData/*0:0*/ __Vtogcov__ovf;
    VL_OUT(psum,23,0);
    VL_OUT(sum,23,0);
    IData/*23:0*/ __Vtogcov__psum;
    IData/*23:0*/ __Vtogcov__sum;

    // INTERNAL VARIABLES
    Vsim_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_top_polite_pe(Vsim_top__Syms* symsp, const char* v__name);
    ~Vsim_top_polite_pe();
    VL_UNCOPYABLE(Vsim_top_polite_pe);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
