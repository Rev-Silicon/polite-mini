// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_polite_ctrl.h for the primary calling header

#ifndef VERILATED_VTB_POLITE_CTRL___024ROOT_H_
#define VERILATED_VTB_POLITE_CTRL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_polite_ctrl___024unit;
class Vtb_polite_ctrl___024unit__03a__03actrl_txn;
class Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg;


class Vtb_polite_ctrl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_polite_ctrl___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_polite_ctrl___024unit* __PVT____024unit;
    Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg* __024unit__03a__03actrl_txn__Vclpkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_polite_ctrl__DOT__clk;
        CData/*0:0*/ tb_polite_ctrl__DOT__rst_n;
        CData/*0:0*/ tb_polite_ctrl__DOT__en;
        CData/*7:0*/ tb_polite_ctrl__DOT__d;
        CData/*7:0*/ tb_polite_ctrl__DOT__ins;
        CData/*0:0*/ tb_polite_ctrl__DOT__dump_busy;
        CData/*0:0*/ tb_polite_ctrl__DOT__fz_open;
        CData/*0:0*/ tb_polite_ctrl__DOT__pe_ovf_any;
        CData/*0:0*/ tb_polite_ctrl__DOT__phase;
        CData/*0:0*/ tb_polite_ctrl__DOT__run_busy;
        CData/*7:0*/ tb_polite_ctrl__DOT__inbuf;
        CData/*0:0*/ tb_polite_ctrl__DOT__illegal;
        CData/*0:0*/ tb_polite_ctrl__DOT__ovf;
        CData/*0:0*/ tb_polite_ctrl__DOT__illegal_d;
        CData/*0:0*/ tb_polite_ctrl__DOT__ovf_d;
        CData/*0:0*/ tb_polite_ctrl__DOT__run_now;
        CData/*0:0*/ tb_polite_ctrl__DOT__acc_en;
        CData/*0:0*/ tb_polite_ctrl__DOT__clr_psum;
        CData/*0:0*/ tb_polite_ctrl__DOT__clr_outbuf;
        CData/*0:0*/ tb_polite_ctrl__DOT__dump_load;
        CData/*0:0*/ tb_polite_ctrl__DOT__dump_abort;
        CData/*0:0*/ tb_polite_ctrl__DOT__dbg_start;
        CData/*3:0*/ tb_polite_ctrl__DOT__dbg_op;
        CData/*1:0*/ tb_polite_ctrl__DOT__dbg_pe;
        CData/*7:0*/ tb_polite_ctrl__DOT__status;
        CData/*6:0*/ tb_polite_ctrl__DOT__cmd_strobes;
        CData/*0:0*/ tb_polite_ctrl__DOT__m_phase;
        CData/*0:0*/ tb_polite_ctrl__DOT__m_run_busy;
        CData/*7:0*/ tb_polite_ctrl__DOT__m_inbuf;
        CData/*0:0*/ tb_polite_ctrl__DOT__m_illegal;
        CData/*0:0*/ tb_polite_ctrl__DOT__m_ovf;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__clk;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__rst_n;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__en;
        CData/*7:0*/ tb_polite_ctrl__DOT____Vtogcov__d;
        CData/*7:0*/ tb_polite_ctrl__DOT____Vtogcov__ins;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__dump_busy;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__fz_open;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__pe_ovf_any;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__phase;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__run_busy;
        CData/*7:0*/ tb_polite_ctrl__DOT____Vtogcov__inbuf;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__illegal;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__ovf;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__illegal_d;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__ovf_d;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__run_now;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__acc_en;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__clr_psum;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__clr_outbuf;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__dump_load;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__dump_abort;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__dbg_start;
        CData/*7:0*/ tb_polite_ctrl__DOT____Vtogcov__status;
        CData/*6:0*/ tb_polite_ctrl__DOT____Vtogcov__cmd_strobes;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__m_phase;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__m_run_busy;
        CData/*7:0*/ tb_polite_ctrl__DOT____Vtogcov__m_inbuf;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__m_illegal;
        CData/*0:0*/ tb_polite_ctrl__DOT____Vtogcov__m_ovf;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__is_dbg;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__bad_bank;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__dbg_req;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__clr_coll;
    };
    struct {
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__clr_ok;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__clr_flg;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__ill_set;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__acc_ovf;
        CData/*7:0*/ tb_polite_ctrl__DOT__dut__DOT__inbuf_d;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_load;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_run;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_dload;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_clear;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_rsvd;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_dbg;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__bad_bank;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__dbg_req;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__no_ob;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_dabrt;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__clr_coll;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__clr_ok;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__clr_flg;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__ill_set;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__acc_ovf;
        CData/*7:0*/ tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_0_0;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_2_0;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_3_0;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_4_0;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_5_0;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_6_0;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_7_0;
        CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_8_0;
        CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v;
        CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__73__arg_v;
        CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__73__no_ob;
        CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__73__bad_bank;
        CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__73__dbg_req;
        CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_coll;
        CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_ok;
        CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_flg;
        CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v;
        CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__263__arg_v;
        CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__263__no_ob;
        CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__263__dbg_req;
        CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_ok;
        CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_flg;
        CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__263__ill_set;
        CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__263__acc_ovf;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__rst_n;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__en;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__run_now;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__acc_en;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__clr_psum;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__clr_outbuf;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__dump_load;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__dump_abort;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__dbg_start;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_0_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__phase;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__run_busy;
        CData/*7:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__inbuf;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__illegal;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__ovf;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_2_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_3_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_4_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_5_0;
    };
    struct {
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__fz_open;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__dump_busy;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_6_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_7_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_8_0;
        CData/*7:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__status;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__clr_flg;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__pe_ovf_any;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_polite_ctrl__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_polite_ctrl__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_1_0;
        SData/*11:0*/ __Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_1_0;
        IData/*31:0*/ tb_polite_ctrl__DOT__test_step;
        IData/*30:0*/ tb_polite_ctrl__DOT__exp_now;
        IData/*31:0*/ tb_polite_ctrl__DOT__err_count;
        IData/*31:0*/ tb_polite_ctrl__DOT__chk_count;
        IData/*30:0*/ tb_polite_ctrl__DOT____Vtogcov__exp_now;
        IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__73__e;
        IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__263__e;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 9> __Vm_traceActivity;
    };
    std::string tb_polite_ctrl__DOT__unnamedblk2__DOT__dumpfile;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8f84950f__0;
    VlTriggerScheduler __VtrigSched_h8f848dce__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_polite_ctrl__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_polite_ctrl___024root(Vtb_polite_ctrl__Syms* symsp, const char* v__name);
    ~Vtb_polite_ctrl___024root();
    VL_UNCOPYABLE(Vtb_polite_ctrl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
