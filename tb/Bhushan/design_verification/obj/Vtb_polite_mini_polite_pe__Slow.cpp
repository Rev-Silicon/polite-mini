// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_mini.h for the primary calling header

#include "Vtb_polite_mini__pch.h"
#include "Vtb_polite_mini__Syms.h"
#include "Vtb_polite_mini_polite_pe.h"

void Vtb_polite_mini_polite_pe___ctor_var_reset(Vtb_polite_mini_polite_pe* vlSelf);

Vtb_polite_mini_polite_pe::Vtb_polite_mini_polite_pe(Vtb_polite_mini__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_polite_mini_polite_pe___ctor_var_reset(this);
}

void Vtb_polite_mini_polite_pe___configure_coverage(Vtb_polite_mini_polite_pe* vlSelf, bool first);

void Vtb_polite_mini_polite_pe::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vtb_polite_mini_polite_pe___configure_coverage(this, first);
}

Vtb_polite_mini_polite_pe::~Vtb_polite_mini_polite_pe() {
}

// Coverage
void Vtb_polite_mini_polite_pe::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    std::string fullhier = std::string{VerilatedModule::name()} + hierp;
    if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",fullhier,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
