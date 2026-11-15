// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsim_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsim_top::Vsim_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsim_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , ena{vlSymsp->TOP.ena}
    , ui_in{vlSymsp->TOP.ui_in}
    , uio_in{vlSymsp->TOP.uio_in}
    , uo_out{vlSymsp->TOP.uo_out}
    , uio_out{vlSymsp->TOP.uio_out}
    , uio_oe{vlSymsp->TOP.uio_oe}
    , ena_q{vlSymsp->TOP.ena_q}
    , phase{vlSymsp->TOP.phase}
    , otick_q{vlSymsp->TOP.otick_q}
    , run_busy{vlSymsp->TOP.run_busy}
    , illegal{vlSymsp->TOP.illegal}
    , ovf{vlSymsp->TOP.ovf}
    , dump_busy{vlSymsp->TOP.dump_busy}
    , fz_open{vlSymsp->TOP.fz_open}
    , in_i_q{vlSymsp->TOP.in_i_q}
    , in_d_q{vlSymsp->TOP.in_d_q}
    , uo_q{vlSymsp->TOP.uo_q}
    , core_uo{vlSymsp->TOP.core_uo}
    , inbuf{vlSymsp->TOP.inbuf}
    , psum{vlSymsp->TOP.psum}
    , product{vlSymsp->TOP.product}
    , __PVT__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe{vlSymsp->TOP.__PVT__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe}
    , __PVT__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe{vlSymsp->TOP.__PVT__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe}
    , __PVT__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe{vlSymsp->TOP.__PVT__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe}
    , __PVT__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe{vlSymsp->TOP.__PVT__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsim_top::Vsim_top(const char* _vcname__)
    : Vsim_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsim_top::~Vsim_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsim_top___024root___eval_debug_assertions(Vsim_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsim_top___024root___eval_static(Vsim_top___024root* vlSelf);
void Vsim_top___024root___eval_initial(Vsim_top___024root* vlSelf);
void Vsim_top___024root___eval_settle(Vsim_top___024root* vlSelf);
void Vsim_top___024root___eval(Vsim_top___024root* vlSelf);

void Vsim_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsim_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsim_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsim_top___024root___eval_static(&(vlSymsp->TOP));
        Vsim_top___024root___eval_initial(&(vlSymsp->TOP));
        Vsim_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsim_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsim_top::eventsPending() { return false; }

uint64_t Vsim_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsim_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsim_top___024root___eval_final(Vsim_top___024root* vlSelf);

VL_ATTR_COLD void Vsim_top::final() {
    Vsim_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsim_top::hierName() const { return vlSymsp->name(); }
const char* Vsim_top::modelName() const { return "Vsim_top"; }
unsigned Vsim_top::threads() const { return 1; }
void Vsim_top::prepareClone() const { contextp()->prepareClone(); }
void Vsim_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsim_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsim_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsim_top___024root__trace_init_top(Vsim_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsim_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim_top___024root*>(voidSelf);
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsim_top___024root__trace_decl_types(tracep);
    Vsim_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsim_top___024root__trace_register(Vsim_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsim_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsim_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsim_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
