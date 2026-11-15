// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "Vsim_top__pch.h"
#include "Vsim_top__Syms.h"
#include "Vsim_top_polite_pe.h"

void Vsim_top_polite_pe___ctor_var_reset(Vsim_top_polite_pe* vlSelf);

Vsim_top_polite_pe::Vsim_top_polite_pe(Vsim_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_top_polite_pe___ctor_var_reset(this);
}

void Vsim_top_polite_pe___configure_coverage(Vsim_top_polite_pe* vlSelf, bool first);

void Vsim_top_polite_pe::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vsim_top_polite_pe___configure_coverage(this, first);
}

Vsim_top_polite_pe::~Vsim_top_polite_pe() {
}

// Coverage
void Vsim_top_polite_pe::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
