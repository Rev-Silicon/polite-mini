// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_polite_dbg.h for the primary calling header

#ifndef VERILATED_VTB_POLITE_DBG___024ROOT_H_
#define VERILATED_VTB_POLITE_DBG___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_polite_dbg___024unit;
class Vtb_polite_dbg___024unit__03a__03adbg_read_txn;
class Vtb_polite_dbg___024unit__03a__03adbg_read_txn__Vclpkg;
class Vtb_polite_dbg___024unit__03a__03adbg_txn;
class Vtb_polite_dbg___024unit__03a__03adbg_txn__Vclpkg;


class Vtb_polite_dbg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_polite_dbg___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_polite_dbg___024unit* __PVT____024unit;
    Vtb_polite_dbg___024unit__03a__03adbg_txn__Vclpkg* __024unit__03a__03adbg_txn__Vclpkg;
    Vtb_polite_dbg___024unit__03a__03adbg_read_txn__Vclpkg* __024unit__03a__03adbg_read_txn__Vclpkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_polite_dbg__DOT__clk;
        CData/*0:0*/ tb_polite_dbg__DOT__rst_n;
        CData/*0:0*/ tb_polite_dbg__DOT__en;
        CData/*0:0*/ tb_polite_dbg__DOT__phase;
        CData/*0:0*/ tb_polite_dbg__DOT__start;
        CData/*3:0*/ tb_polite_dbg__DOT__op;
        CData/*1:0*/ tb_polite_dbg__DOT__pe;
        CData/*0:0*/ tb_polite_dbg__DOT__run_busy;
        CData/*7:0*/ tb_polite_dbg__DOT__status;
        CData/*7:0*/ tb_polite_dbg__DOT__inbuf;
        CData/*7:0*/ tb_polite_dbg__DOT__d;
        CData/*0:0*/ tb_polite_dbg__DOT__ofz;
        CData/*0:0*/ tb_polite_dbg__DOT__dbg_tick;
        CData/*3:0*/ tb_polite_dbg__DOT__m_left;
        CData/*2:0*/ tb_polite_dbg__DOT__m_k;
        CData/*0:0*/ tb_polite_dbg__DOT__s_en;
        CData/*0:0*/ tb_polite_dbg__DOT__s_start;
        CData/*0:0*/ tb_polite_dbg__DOT__s_tick;
        CData/*3:0*/ tb_polite_dbg__DOT__s_len;
        CData/*0:0*/ tb_polite_dbg__DOT__sb_active;
        CData/*0:0*/ tb_polite_dbg__DOT__prev_open;
        CData/*0:0*/ tb_polite_dbg__DOT____Vtogcov__clk;
        CData/*0:0*/ tb_polite_dbg__DOT____Vtogcov__rst_n;
        CData/*0:0*/ tb_polite_dbg__DOT____Vtogcov__en;
        CData/*0:0*/ tb_polite_dbg__DOT____Vtogcov__phase;
        CData/*0:0*/ tb_polite_dbg__DOT____Vtogcov__start;
        CData/*3:0*/ tb_polite_dbg__DOT____Vtogcov__op;
        CData/*1:0*/ tb_polite_dbg__DOT____Vtogcov__pe;
        CData/*0:0*/ tb_polite_dbg__DOT____Vtogcov__run_busy;
        CData/*7:0*/ tb_polite_dbg__DOT____Vtogcov__status;
        CData/*7:0*/ tb_polite_dbg__DOT____Vtogcov__inbuf;
        CData/*7:0*/ tb_polite_dbg__DOT____Vtogcov__d;
        CData/*0:0*/ tb_polite_dbg__DOT____Vtogcov__open;
        CData/*0:0*/ tb_polite_dbg__DOT____Vtogcov__ofz;
        CData/*0:0*/ tb_polite_dbg__DOT____Vtogcov__dbg_tick;
        CData/*3:0*/ tb_polite_dbg__DOT____Vtogcov__dbg_nib;
        CData/*3:0*/ tb_polite_dbg__DOT____Vtogcov__m_left;
        CData/*2:0*/ tb_polite_dbg__DOT____Vtogcov__m_k;
        CData/*0:0*/ tb_polite_dbg__DOT____Vtogcov__s_en;
        CData/*0:0*/ tb_polite_dbg__DOT____Vtogcov__s_start;
        CData/*0:0*/ tb_polite_dbg__DOT____Vtogcov__s_tick;
        CData/*3:0*/ tb_polite_dbg__DOT____Vtogcov__s_len;
        CData/*0:0*/ tb_polite_dbg__DOT____Vtogcov__sb_active;
        CData/*0:0*/ tb_polite_dbg__DOT____Vtogcov__prev_open;
        CData/*3:0*/ tb_polite_dbg__DOT____Vlvbound_h66fb07c1__0;
        CData/*3:0*/ tb_polite_dbg__DOT__dut__DOT__fz_left;
        CData/*2:0*/ tb_polite_dbg__DOT__dut__DOT__fz_k;
        CData/*7:0*/ tb_polite_dbg__DOT__dut__DOT__mu;
        CData/*0:0*/ tb_polite_dbg__DOT__dut__DOT__wide;
        CData/*3:0*/ tb_polite_dbg__DOT__dut__DOT__left_e;
        CData/*2:0*/ tb_polite_dbg__DOT__dut__DOT__k_e;
        CData/*2:0*/ tb_polite_dbg__DOT__dut__DOT__fk_raw;
        CData/*2:0*/ tb_polite_dbg__DOT__dut__DOT__fk;
        CData/*3:0*/ tb_polite_dbg__DOT__dut__DOT__vn;
        CData/*3:0*/ tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_left;
        CData/*2:0*/ tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_k;
        CData/*7:0*/ tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu;
        CData/*0:0*/ tb_polite_dbg__DOT__dut__DOT____Vtogcov__wide;
        CData/*3:0*/ tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e;
        CData/*2:0*/ tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e;
        CData/*2:0*/ tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw;
        CData/*2:0*/ tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk;
        CData/*0:0*/ tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_0_0;
        CData/*0:0*/ tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_1_0;
    };
    struct {
        CData/*0:0*/ tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_2_0;
        CData/*0:0*/ tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_4_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_dbg__DOT__rst_n;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_dbg__DOT__start;
        CData/*3:0*/ __Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_left;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_0_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_1_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_2_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_dbg__DOT__dbg_tick;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_dbg__DOT__phase;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_4_0;
        CData/*2:0*/ __Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_k;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_dbg__DOT__en;
        CData/*3:0*/ __Vsampled_TOP__tb_polite_dbg__DOT__op;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_polite_dbg__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_polite_dbg__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        VlWide<3>/*95:0*/ tb_polite_dbg__DOT__psum_all;
        IData/*31:0*/ tb_polite_dbg__DOT__mul_all;
        VlWide<3>/*95:0*/ tb_polite_dbg__DOT__sum_all;
        IData/*23:0*/ tb_polite_dbg__DOT__m_val;
        IData/*23:0*/ tb_polite_dbg__DOT__s_val;
        IData/*31:0*/ tb_polite_dbg__DOT__err_count;
        IData/*31:0*/ tb_polite_dbg__DOT__chk_count;
        IData/*23:0*/ tb_polite_dbg__DOT__sb_exp;
        IData/*23:0*/ tb_polite_dbg__DOT__sb_got;
        IData/*31:0*/ tb_polite_dbg__DOT__sb_need;
        IData/*31:0*/ tb_polite_dbg__DOT__sb_cnt;
        IData/*31:0*/ tb_polite_dbg__DOT__n_reads;
        IData/*31:0*/ tb_polite_dbg__DOT__cov_hold_in_freeze;
        IData/*31:0*/ tb_polite_dbg__DOT__cov_b2b_min;
        VlWide<3>/*95:0*/ tb_polite_dbg__DOT____Vtogcov__psum_all;
        IData/*31:0*/ tb_polite_dbg__DOT____Vtogcov__mul_all;
        VlWide<3>/*95:0*/ tb_polite_dbg__DOT____Vtogcov__sum_all;
        IData/*23:0*/ tb_polite_dbg__DOT____Vtogcov__m_val;
        IData/*23:0*/ tb_polite_dbg__DOT____Vtogcov__s_val;
        IData/*23:0*/ tb_polite_dbg__DOT____Vtogcov__sb_exp;
        IData/*23:0*/ tb_polite_dbg__DOT____Vtogcov__sb_got;
        IData/*31:0*/ tb_polite_dbg__DOT__unnamedblk11__DOT__n_rand;
        IData/*31:0*/ tb_polite_dbg__DOT____Vlvbound_hf74c54a3__0;
        IData/*23:0*/ tb_polite_dbg__DOT__dut__DOT__fz_val;
        IData/*23:0*/ tb_polite_dbg__DOT__dut__DOT__ps;
        IData/*23:0*/ tb_polite_dbg__DOT__dut__DOT__sm;
        IData/*23:0*/ tb_polite_dbg__DOT__dut__DOT__v;
        IData/*23:0*/ tb_polite_dbg__DOT__dut__DOT__val_e;
        IData/*23:0*/ tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val;
        IData/*23:0*/ tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps;
        IData/*23:0*/ tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm;
        IData/*23:0*/ tb_polite_dbg__DOT__dut__DOT____Vtogcov__v;
        IData/*23:0*/ tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e;
        IData/*23:0*/ tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_3_0;
        IData/*23:0*/ __Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_3_0;
        IData/*23:0*/ __Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_val;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 2>, 6> tb_polite_dbg__DOT__cov_op_phase;
        VlUnpacked<IData/*31:0*/, 2> tb_polite_dbg__DOT__cov_add_rb;
        VlUnpacked<IData/*31:0*/, 4> tb_polite_dbg__DOT__cov_pe;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    std::string tb_polite_dbg__DOT__unnamedblk11__DOT__dumpfile;
    std::string tb_polite_dbg__DOT__unnamedblk11__DOT__test_name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd5d9f447__0;
    VlTriggerScheduler __VtrigSched_hd5d9f406__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_polite_dbg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_polite_dbg___024root(Vtb_polite_dbg__Syms* symsp, const char* v__name);
    ~Vtb_polite_dbg___024root();
    VL_UNCOPYABLE(Vtb_polite_dbg___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
