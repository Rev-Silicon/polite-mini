// Block testbench for polite_ctrl (decode, legality, input buffer, phase,
// run_busy, sticky flags, DEBUG_FLAGS status byte).
//
// Three layers of checking, all on every enabled core tick:
//   1. directed tests with literal expectations taken from docs/SPEC.md,
//   2. an exhaustive sweep of every instruction byte against every
//      (dump_busy, fz_open, pe_ovf_any) input combination and every
//      (run_busy, illegal, overflow) pre-state,
//   3. constrained-random traffic with held-enable edges and async resets.
// Layers 2 and 3 are checked against a behavioural model written after the
// opcode switch in golden/chip.c. The block is verified for the product
// configuration (HAS_OUTBUF=1) and for the HAS_OUTBUF=0 build option.

// The compare helpers take 32-bit arguments so one task serves every signal.
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */

module polite_ctrl_env #(
    parameter bit HAS_OB = 1'b1
) (
    output logic done,
    output integer checks
);

    logic       clk = 1'b0;
    logic       rst_n;
    logic       en;
    logic [7:0] d;
    logic [7:0] ins;
    logic       dump_busy;
    logic       fz_open;
    logic       pe_ovf_any;

    wire        phase, run_busy, illegal, ovf, illegal_d, ovf_d;
    wire        run_now, acc_en, clr_psum, clr_outbuf;
    wire        dump_load, dump_abort, dbg_start;
    wire [7:0]  inbuf, status;
    wire [3:0]  dbg_op;
    wire [1:0]  dbg_pe;

    polite_ctrl #(.HAS_OUTBUF(HAS_OB)) dut (
        .clk        (clk),
        .rst_n      (rst_n),
        .en         (en),
        .d          (d),
        .ins        (ins),
        .dump_busy  (dump_busy),
        .fz_open    (fz_open),
        .pe_ovf_any (pe_ovf_any),
        .phase      (phase),
        .run_busy   (run_busy),
        .inbuf      (inbuf),
        .illegal    (illegal),
        .ovf        (ovf),
        .illegal_d  (illegal_d),
        .ovf_d      (ovf_d),
        .run_now    (run_now),
        .acc_en     (acc_en),
        .clr_psum   (clr_psum),
        .clr_outbuf (clr_outbuf),
        .dump_load  (dump_load),
        .dump_abort (dump_abort),
        .dbg_start  (dbg_start),
        .dbg_op     (dbg_op),
        .dbg_pe     (dbg_pe),
        .status     (status)
    );

    always #5 clk = ~clk;

    // Opcodes and CLEAR mask bits, named after the SPEC.
    localparam logic [3:0] NOP = 4'h0, LOAD = 4'h1, RUN = 4'h2, DLOAD = 4'h3,
                           DABRT = 4'h4, CLEAR = 4'h5, DFLAGS = 4'h6,
                           DBUF = 4'h7, DPSUM = 4'h8, DMUL = 4'h9,
                           DADD = 4'hA, DINPUT = 4'hB;
    localparam logic [3:0] C_FLAGS = 4'h1, C_INBUF = 4'h2, C_OUTBUF = 4'h4,
                           C_PSUM = 4'h8;

    // ------------------------------------------------------------------
    // Reference model
    // ------------------------------------------------------------------
    logic       m_ph, m_rb, m_ill, m_ovf;
    logic [7:0] m_ib;

    logic       e_run_now, e_acc_en, e_clr_psum, e_clr_ob, e_dload, e_dabort;
    logic       e_dstart, e_ill_d, e_ovf_d;
    logic [7:0] e_status;
    logic       n_ph, n_rb, n_ill, n_ovf;
    logic [7:0] n_ib;

    // Coverage bins; every reachable bin must be hit by the end of the run.
    typedef enum int {
        B_RUN_OK, B_RUN_FZ, B_RUN_B2B, B_DLOAD_OK, B_DLOAD_BUSY, B_DLOAD_NOOB,
        B_DABRT_OK, B_DABRT_NOOB, B_CLR_PS, B_CLR_PS_COLL, B_CLR_OB,
        B_CLR_OB_COLL, B_CLR_OB_NOOB, B_CLR_ALL_OK, B_CLR_IB, B_CLR_REJ_FLAGS,
        B_CLR_FLAGS_OVF_RACE, B_BAD_BANK, B_DBG_NOT_BANK, B_DBG_IN_WINDOW,
        B_RSVD, B_PEND_NO_RB, B_LOAD, B_HOLD, B_PHASE1_FLAGS, B_ACC_OVF,
        B_DBG_OP6, B_DBG_OP7, B_DBG_OP8, B_DBG_OP9, B_DBG_OPA, B_DBG_OPB,
        B_N
    } bin_e;
    integer cov [B_N];

    function automatic logic dbg_op_is(input logic [3:0] o);
        dbg_op_is = (o >= DFLAGS) && (o <= DINPUT);
    endfunction

    // Evaluate the combinational outputs and next state for the current
    // inputs; no model state changes until commit_model.
    task automatic eval_model;

        logic [3:0] op, a;
        logic ill, clr_flags, pend, coll;
        begin
            op = ins[7:4];
            a  = ins[3:0];
            ill = 1'b0;
            clr_flags = 1'b0;
            e_run_now = 1'b0;
            e_clr_psum = 1'b0;
            e_clr_ob = 1'b0;
            e_dload = 1'b0;
            e_dabort = 1'b0;
            e_dstart = 1'b0;
            n_ib = m_ib;
            pend = m_rb && pe_ovf_any;
            e_acc_en = m_rb;

            case (op)
                NOP: ;
                LOAD: n_ib = d;
                RUN: if (fz_open) ill = 1'b1; else e_run_now = 1'b1;
                DLOAD: if (!HAS_OB || dump_busy) ill = 1'b1; else e_dload = 1'b1;
                DABRT: if (!HAS_OB) ill = 1'b1; else e_dabort = 1'b1;
                CLEAR: begin
                    coll = (a[3] && m_rb) || (a[2] && (dump_busy || !HAS_OB));
                    if (coll) begin
                        ill = 1'b1;
                    end else begin
                        e_clr_psum = a[3];
                        e_clr_ob   = a[2];
                        if (a[1]) n_ib = 8'h00;
                        clr_flags = a[0];
                    end
                end
                DFLAGS: if (a != 4'h0 || fz_open) ill = 1'b1; else e_dstart = 1'b1;
                DBUF, DPSUM, DMUL, DADD, DINPUT:
                    if (fz_open) ill = 1'b1; else e_dstart = 1'b1;
                default: ill = 1'b1;   // 0xC..0xF reserved
            endcase

            n_ill = ill | (m_ill & ~clr_flags);
            n_ovf = pend | (m_ovf & ~clr_flags);
            e_ill_d = n_ill;
            e_ovf_d = n_ovf;
            e_status = {1'b1, dump_busy, m_ill, m_ovf | pend,
                        dump_busy, m_ph, dump_busy, m_rb};
            n_rb = e_run_now;
            n_ph = ~m_ph;
        end
    endtask

    task automatic sample_coverage;

        logic [3:0] op, a;
        begin
            op = ins[7:4];
            a  = ins[3:0];
            if (!en) begin
                cov[B_HOLD]++;
            end else begin
                if (op == RUN && !fz_open) begin
                    cov[B_RUN_OK]++;
                    if (m_rb) cov[B_RUN_B2B]++;
                end
                if (op == RUN && fz_open) cov[B_RUN_FZ]++;
                if (op == DLOAD && HAS_OB && !dump_busy) cov[B_DLOAD_OK]++;
                if (op == DLOAD && HAS_OB && dump_busy) cov[B_DLOAD_BUSY]++;
                if (op == DLOAD && !HAS_OB) cov[B_DLOAD_NOOB]++;
                if (op == DABRT && HAS_OB) cov[B_DABRT_OK]++;
                if (op == DABRT && !HAS_OB) cov[B_DABRT_NOOB]++;
                if (op == CLEAR && a[3] && !m_rb && !(a[2] && (dump_busy || !HAS_OB)))
                    cov[B_CLR_PS]++;
                if (op == CLEAR && a[3] && m_rb) cov[B_CLR_PS_COLL]++;
                if (op == CLEAR && a[2] && HAS_OB && !dump_busy && !(a[3] && m_rb))
                    cov[B_CLR_OB]++;
                if (op == CLEAR && a[2] && HAS_OB && dump_busy) cov[B_CLR_OB_COLL]++;
                if (op == CLEAR && a[2] && !HAS_OB) cov[B_CLR_OB_NOOB]++;
                if (op == CLEAR && a == 4'hF && !m_rb && !dump_busy && HAS_OB)
                    cov[B_CLR_ALL_OK]++;
                if (op == CLEAR && a[1] && !e_ill_d_clear_coll(a)) cov[B_CLR_IB]++;
                if (op == CLEAR && a[0] && e_ill_d_clear_coll(a) && (m_ill || m_ovf))
                    cov[B_CLR_REJ_FLAGS]++;
                if (op == CLEAR && a[0] && !e_ill_d_clear_coll(a) && m_rb && pe_ovf_any)
                    cov[B_CLR_FLAGS_OVF_RACE]++;
                if (op == DFLAGS && a != 4'h0) cov[B_BAD_BANK]++;
                if (op == DFLAGS && a == 4'h0 && !fz_open) cov[B_DBG_NOT_BANK]++;
                if (dbg_op_is(op) && !(op == DFLAGS && a != 4'h0) && fz_open)
                    cov[B_DBG_IN_WINDOW]++;
                if (op > DINPUT) cov[B_RSVD]++;
                if (!m_rb && pe_ovf_any) cov[B_PEND_NO_RB]++;
                if (op == LOAD) cov[B_LOAD]++;
                if (op == DFLAGS && a == 4'h0 && !fz_open && m_ph && m_rb)
                    cov[B_PHASE1_FLAGS]++;
                if (m_rb && pe_ovf_any) cov[B_ACC_OVF]++;
                if (e_dstart) begin
                    case (op)
                        DFLAGS: cov[B_DBG_OP6]++;
                        DBUF:   cov[B_DBG_OP7]++;
                        DPSUM:  cov[B_DBG_OP8]++;
                        DMUL:   cov[B_DBG_OP9]++;
                        DADD:   cov[B_DBG_OPA]++;
                        default: cov[B_DBG_OPB]++;
                    endcase
                end
            end
        end
    endtask

    function automatic logic e_ill_d_clear_coll(input logic [3:0] a);
        e_ill_d_clear_coll = (a[3] && m_rb) || (a[2] && (dump_busy || !HAS_OB));
    endfunction

    // ------------------------------------------------------------------
    // Checking helpers
    // ------------------------------------------------------------------
    // Loop bounds are variables so Verilator keeps the loops rolled; unrolling
    // the nested directed sweeps multiplies the generated code enormously.
    integer N2 = 2, N4 = 4, N5 = 5, N8 = 8, N12 = 12, N15 = 15, N16 = 16, N256 = 256;
    integer cycle = 0;
    string  phase_label = "";

    // A mismatch only records what failed; one reporter below stops the run.
    // This keeps the many call sites small (each inlined $fatal made the
    // generated C++ very large and slow to build).
    bit           bad = 1'b0;
    string        bad_what;
    logic [31:0]  bad_got, bad_exp;

    string bad_msg;
    always @(posedge bad) begin
        bad_msg = $sformatf("HAS_OUTBUF=%0d [%s] cycle %0d ins=%h d=%h dump_busy=%b fz_open=%b pe_ovf=%b en=%b: %s = %h expected %h",
                            HAS_OB, phase_label, cycle, ins, d, dump_busy, fz_open,
                            pe_ovf_any, en, bad_what, bad_got, bad_exp);
        $fatal(1, "%s", bad_msg);
    end

    task automatic eq(input string what, input logic [31:0] got, input logic [31:0] exp);
        begin
            checks++;
            if (got !== exp) begin
                bad_what = what;
                bad_got = got;
                bad_exp = exp;
                bad = 1'b1;
            end
        end
    endtask

    task automatic check_regs;

        begin
            eq("phase",    {31'b0, phase},    {31'b0, m_ph});
            eq("run_busy", {31'b0, run_busy}, {31'b0, m_rb});
            eq("inbuf",    {24'b0, inbuf},    {24'b0, m_ib});
            eq("illegal",  {31'b0, illegal},  {31'b0, m_ill});
            eq("ovf",      {31'b0, ovf},      {31'b0, m_ovf});
        end
    endtask

    // Outputs are only specified on enabled edges (a hold edge changes no
    // state and its strobes are never used).
    task automatic check_comb;

        begin
            check_regs();
            if (en) begin
                eq("run_now",    {31'b0, run_now},    {31'b0, e_run_now});
                eq("acc_en",     {31'b0, acc_en},     {31'b0, e_acc_en});
                eq("clr_psum",   {31'b0, clr_psum},   {31'b0, e_clr_psum});
                eq("clr_outbuf", {31'b0, clr_outbuf}, {31'b0, e_clr_ob});
                eq("dump_load",  {31'b0, dump_load},  {31'b0, e_dload});
                eq("dump_abort", {31'b0, dump_abort}, {31'b0, e_dabort});
                eq("dbg_start",  {31'b0, dbg_start},  {31'b0, e_dstart});
                eq("illegal_d",  {31'b0, illegal_d},  {31'b0, e_ill_d});
                eq("ovf_d",      {31'b0, ovf_d},      {31'b0, e_ovf_d});
                eq("status",     {24'b0, status},     {24'b0, e_status});
                if (e_dstart) begin
                    eq("dbg_op", {28'b0, dbg_op}, {28'b0, ins[7:4]});
                    eq("dbg_pe", {30'b0, dbg_pe}, {30'b0, ins[1:0]});
                end
            end
        end
    endtask

    // Stimulus: inputs change just after the falling edge; the monitor below
    // samples them at the next rising edge, together with the DUT outputs.
    task automatic drive(input logic [7:0] d_, input logic [7:0] ins_,
                         input logic db, input logic fo, input logic po,
                         input logic en_ = 1'b1);
        begin
            @(negedge clk);
            d = d_;
            ins = ins_;
            dump_busy = HAS_OB ? db : 1'b0;
            fz_open = fo;
            pe_ovf_any = po;
            en = en_;
            #1;
        end
    endtask

    task automatic clock_edge;
        begin
            @(posedge clk);
            #1;
        end
    endtask

    // Monitor: on every rising edge, compare registers and outputs with the
    // model for the inputs applied this cycle, then advance the model.
    always @(posedge clk) begin
        if (rst_n) begin
            eval_model();
            check_comb();
            sample_coverage();
            if (en) begin
                m_ph  = n_ph;
                m_rb  = n_rb;
                m_ib  = n_ib;
                m_ill = n_ill;
                m_ovf = n_ovf;
            end
            cycle++;
        end
    end

    // Asynchronous reset clears the model immediately.
    always @(negedge rst_n) begin
        m_ph = 1'b0; m_rb = 1'b0; m_ib = 8'h00; m_ill = 1'b0; m_ovf = 1'b0;
    end

    // Flattened (no nested task calls) because every call site is inlined.
    task automatic cyc(input logic [7:0] d_, input logic [7:0] ins_,
                       input logic db = 1'b0, input logic fo = 1'b0,
                       input logic po = 1'b0, input logic en_ = 1'b1);
        begin
            @(negedge clk);
            d = d_;
            ins = ins_;
            dump_busy = HAS_OB ? db : 1'b0;
            fz_open = fo;
            pe_ovf_any = po;
            en = en_;
            @(posedge clk);
            #1;
        end
    endtask

    task automatic nop(input integer n = 1);
        begin
            repeat (n) begin
                @(negedge clk);
                d = 8'h00;
                ins = 8'h00;
                dump_busy = 1'b0;
                fz_open = 1'b0;
                pe_ovf_any = 1'b0;
                en = 1'b1;
                @(posedge clk);
                #1;
            end
        end
    endtask

    // Asynchronous reset, held across one clock edge so the testbench resumes
    // on a clean falling edge. Called at any time, including mid-cycle.
    task automatic reset_dut;

        begin
            rst_n = 1'b0;
            #1;
            check_regs();
            @(posedge clk);
            #1;
            check_regs();
            rst_n = 1'b1;
        end
    endtask

    // Literal expectation helpers for the directed tests.
    task automatic expect_flags(input logic ill_exp, input logic ovf_exp,
                                input string label);

        begin
            eq({label, ": illegal"}, {31'b0, illegal}, {31'b0, ill_exp});
            eq({label, ": ovf"},     {31'b0, ovf},     {31'b0, ovf_exp});
        end
    endtask

    task automatic lit(input string what, input logic [31:0] got, input logic [31:0] exp);
        begin
            checks++;
            if (got !== exp) begin
                bad_what = what;
                bad_got = got;
                bad_exp = exp;
                bad = 1'b1;
            end
        end
    endtask

    // Bring (run_busy, illegal, ovf) to the requested values at the start
    // of the NEXT drive(), after `extra` leading NOPs. Leaves inbuf unchanged.
    // Takes 2 + 2*ov + ill + extra core ticks.
    task automatic set_state(input logic rb, input logic ill, input logic ov,
                             input integer extra = 0);

        begin
            nop(extra);
            cyc(8'h00, {CLEAR, C_FLAGS});            // flags clear
            if (ov) begin
                cyc(8'h00, {RUN, 4'h0});
                cyc(8'h00, 8'h00, 1'b0, 1'b0, 1'b1);  // phase 2 with wrap
            end
            if (ill) cyc(8'h00, 8'hC0);
            if (!rb) nop();
            else     cyc(8'h00, {RUN, 4'h0});
        end
    endtask

    // ------------------------------------------------------------------
    // Directed tests (literal expectations from the SPEC)
    // ------------------------------------------------------------------
    task automatic directed_reset_and_status;

        begin
            phase_label = "reset/status";
            reset_dut();
            // SPEC 4: DEBUG_FLAGS after reset reads 0x80 off an output tick,
            // 0x84 on one. phase = 1 means this core tick is an output tick.
            drive(8'h00, {DFLAGS, 4'h0}, 0, 0, 0);
            lit("status after reset, off tick", status, 8'h80);
            lit("dbg_start", dbg_start, 1);
            lit("dbg_op", dbg_op, DFLAGS);
            clock_edge();
            drive(8'h00, {DFLAGS, 4'h0}, 0, 0, 0);
            lit("status after reset, output tick", status, 8'h84);
            clock_edge();
            drive(8'h00, {DFLAGS, 4'h0}, 0, 0, 0);
            lit("status two ticks after reset", status, 8'h80);
            clock_edge();

            // Reset clears everything, asynchronously, without a clock edge.
            cyc(8'hA5, {LOAD, 4'h0});
            cyc(8'h00, {RUN, 4'h0});
            cyc(8'h00, 8'h00, 0, 0, 1);       // phase 2 wraps
            cyc(8'h00, 8'hF0);                // reserved opcode
            lit("inbuf before reset", inbuf, 8'hA5);
            lit("illegal before reset", illegal, 1);
            lit("ovf before reset", ovf, 1);
            cyc(8'h00, {RUN, 4'h0});          // run_busy = 1 and phase = 1 or 0
            lit("run_busy before reset", run_busy, 1);
            @(negedge clk);
            rst_n = 1'b0;
            #1;
            lit("phase in reset", phase, 0);
            lit("run_busy in reset", run_busy, 0);
            lit("inbuf in reset", inbuf, 8'h00);
            lit("illegal in reset", illegal, 0);
            lit("ovf in reset", ovf, 0);
            @(posedge clk);
            #1;
            check_regs();
            rst_n = 1'b1;
            nop(3);
            // Reset in the middle of a stream of RUNs and after every opcode.
            for (int o = 0; o < N16; o++) begin
                cyc(8'hFF, {LOAD, 4'h0});
                cyc(8'h00, {RUN, 4'h0});
                cyc(8'h00, {4'(o), 4'h0});
                reset_dut();
                drive(8'h00, {DFLAGS, 4'h0}, 0, 0, 0);
                lit("status after mid-stream reset", status, 8'h80);
                clock_edge();
            end
        end
    endtask

    task automatic directed_load_clear_inbuf;

        begin
            phase_label = "input buffer";
            reset_dut();
            cyc(8'h5C, {LOAD, 4'h0});
            lit("inbuf after LOAD", inbuf, 8'h5C);
            cyc(8'hFF, 8'h00);
            cyc(8'hFF, {RUN, 4'h0});
            cyc(8'hFF, {DINPUT, 4'h0});
            nop(4);
            lit("inbuf only written by LOAD", inbuf, 8'h5C);
            cyc(8'h81, {LOAD, 4'h0});
            lit("LOAD overwrites", inbuf, 8'h81);
            // LOAD carries no argument bits; they are ignored.
            cyc(8'h3C, {LOAD, 4'hF});
            lit("LOAD ignores args", inbuf, 8'h3C);
            // Every CLEAR mask without bit 1 keeps the buffer, with bit 1 zeroes it.
            for (int m = 0; m < N16; m++) begin
                nop(2);
                cyc(8'hE7, {LOAD, 4'h0});
                cyc(8'h00, {CLEAR, 4'(m)});
                // Without an output buffer a CLEAR carrying bit 2 is refused whole.
                lit($sformatf("inbuf after CLEAR %h", m), inbuf,
                    (m[1] && !(m[2] && !HAS_OB)) ? 8'h00 : 8'hE7);
            end
            // A rejected CLEAR (bit 3 on run busy) must not clear the buffer.
            cyc(8'h6B, {LOAD, 4'h0});
            cyc(8'h00, {RUN, 4'h0});
            cyc(8'h00, {CLEAR, C_PSUM | C_INBUF});
            lit("rejected CLEAR keeps inbuf", inbuf, 8'h6B);
            lit("rejected CLEAR sets illegal", illegal, 1);
            cyc(8'h00, {CLEAR, C_FLAGS});
            // Rejected on dump busy.
            if (HAS_OB) begin
                cyc(8'h00, {CLEAR, C_OUTBUF | C_INBUF}, 1, 0, 0);
                lit("rejected CLEAR (dump) keeps inbuf", inbuf, 8'h6B);
                lit("rejected CLEAR (dump) sets illegal", illegal, 1);
            end
            // LOAD on the same tick as a phase 2 is legal and takes effect.
            cyc(8'h00, {CLEAR, C_FLAGS});
            cyc(8'h00, {RUN, 4'h0});
            cyc(8'h99, {LOAD, 4'h0});
            lit("LOAD during phase 2", inbuf, 8'h99);
            lit("LOAD during phase 2 is legal", illegal, 0);
        end
    endtask

    task automatic directed_run_pipeline;

        begin
            phase_label = "RUN pipeline";
            reset_dut();
            // RUN, RUN, RUN, NOP, NOP: run_now 1 1 1 0 0, acc_en 0 1 1 1 0.
            drive(8'h12, {RUN, 4'h0}, 0, 0, 0);
            lit("run_now #1", run_now, 1);
            lit("acc_en #1", acc_en, 0);
            lit("run_busy #1", run_busy, 0);
            clock_edge();
            drive(8'h34, {RUN, 4'h0}, 0, 0, 0);
            lit("run_now #2", run_now, 1);
            lit("acc_en #2 (phase 2 of RUN 1)", acc_en, 1);
            lit("run_busy #2", run_busy, 1);
            clock_edge();
            drive(8'h56, {RUN, 4'h0}, 0, 0, 0);
            lit("run_now #3", run_now, 1);
            lit("acc_en #3", acc_en, 1);
            clock_edge();
            drive(8'h00, 8'h00, 0, 0, 0);
            lit("run_now #4", run_now, 0);
            lit("acc_en #4 (phase 2 of RUN 3)", acc_en, 1);
            lit("run_busy #4", run_busy, 1);
            clock_edge();
            drive(8'h00, 8'h00, 0, 0, 0);
            lit("acc_en #5", acc_en, 0);
            lit("run_busy #5", run_busy, 0);
            clock_edge();
            lit("back-to-back RUN is legal", illegal, 0);

            // RUN with args set: reserved argument bits are ignored.
            cyc(8'h00, {RUN, 4'hF});
            lit("RUN ignores args: run_busy", run_busy, 1);
            lit("RUN ignores args: illegal", illegal, 0);
            nop(2);

            // RUN inside a freeze window is ignored and illegal, and it must
            // not start a phase 2.
            drive(8'h00, {RUN, 4'h0}, 0, 1, 0);
            lit("RUN in window: run_now", run_now, 0);
            lit("RUN in window: illegal_d", illegal_d, 1);
            clock_edge();
            lit("RUN in window: sticky illegal", illegal, 1);
            lit("RUN in window: no phase 2", run_busy, 0);
            drive(8'h00, 8'h00, 0, 1, 1);
            lit("no add after ignored RUN", acc_en, 0);
            lit("no overflow from ignored RUN", ovf_d, 0);
            clock_edge();
            lit("ovf stays 0", ovf, 0);
            // The RUN executed right before the window opened still completes.
            cyc(8'h00, {CLEAR, C_FLAGS});
            cyc(8'h00, {RUN, 4'h0});
            drive(8'h00, {DBUF, 4'h0}, 0, 0, 1);
            lit("phase 2 on debug tick: acc_en", acc_en, 1);
            lit("phase 2 on debug tick: ovf_d", ovf_d, 1);
            lit("phase 2 on debug tick: status ovf", status[4], 1);
            clock_edge();
            lit("ovf from phase 2 under debug read", ovf, 1);
        end
    endtask

    task automatic directed_illegal_ops;

        begin
            phase_label = "illegal ops";
            reset_dut();
            // 0xC..0xF with every argument: illegal, and nothing else happens.
            for (int o = 12; o < N16; o++) begin
                for (int a = 0; a < N16; a++) begin
                    cyc(8'h00, {CLEAR, C_FLAGS});
                    drive(8'hFF, {4'(o), 4'(a)}, 0, 0, 0);
                    lit("reserved: illegal_d", illegal_d, 1);
                    lit("reserved: run_now", run_now, 0);
                    lit("reserved: clr_psum", clr_psum, 0);
                    lit("reserved: clr_outbuf", clr_outbuf, 0);
                    lit("reserved: dump_load", dump_load, 0);
                    lit("reserved: dump_abort", dump_abort, 0);
                    lit("reserved: dbg_start", dbg_start, 0);
                    clock_edge();
                    lit("reserved: sticky illegal", illegal, 1);
                    lit("reserved: no inbuf change", inbuf, 8'h00);
                end
            end
            // Illegal stays set (sticky) over many legal commands.
            nop(5);
            cyc(8'h11, {LOAD, 4'h0});
            cyc(8'h00, {RUN, 4'h0});
            nop(3);
            lit("illegal is sticky", illegal, 1);
            // CLEAR bit 0 is the only way to drop it.
            cyc(8'h00, {CLEAR, C_PSUM | C_OUTBUF | C_INBUF});
            lit("CLEAR without bit 0 keeps illegal", illegal, 1);
            cyc(8'h00, {CLEAR, C_FLAGS});
            lit("CLEAR bit 0 drops illegal", illegal, 0);
            // Repeated events leave it at 1 (no counting).
            cyc(8'h00, 8'hD0);
            cyc(8'h00, 8'hE0);
            lit("repeated illegal", illegal, 1);
            cyc(8'h00, {CLEAR, C_FLAGS});
            lit("single CLEAR drops repeated illegal", illegal, 0);
        end
    endtask

    task automatic directed_dump_rules;

        begin
            phase_label = "dump rules";
            reset_dut();
            if (HAS_OB) begin
                drive(8'h00, {DLOAD, 4'h0}, 0, 0, 0);
                lit("DUMP_LOAD idle: dump_load", dump_load, 1);
                lit("DUMP_LOAD idle: illegal_d", illegal_d, 0);
                clock_edge();
                // dump_busy is an input here: model the stream as running.
                drive(8'h00, {DLOAD, 4'h0}, 1, 0, 0);
                lit("DUMP_LOAD while busy: dump_load", dump_load, 0);
                lit("DUMP_LOAD while busy: illegal_d", illegal_d, 1);
                clock_edge();
                lit("DUMP_LOAD while busy: sticky", illegal, 1);
                cyc(8'h00, {CLEAR, C_FLAGS});
                // Start-of-tick rule: the final-nibble tick still counts as busy.
                // (dump_busy is high at the start of that tick by definition.)
                drive(8'h00, {DLOAD, 4'h0}, 1, 0, 0);
                lit("DUMP_LOAD on last-nibble tick refused", dump_load, 0);
                clock_edge();
                cyc(8'h00, {CLEAR, C_FLAGS});

                drive(8'h00, {DABRT, 4'h0}, 0, 0, 0);
                lit("DUMP_ABORT idle: dump_abort", dump_abort, 1);
                lit("DUMP_ABORT idle: illegal_d (legal no-op)", illegal_d, 0);
                clock_edge();
                drive(8'h00, {DABRT, 4'h0}, 1, 0, 0);
                lit("DUMP_ABORT busy: dump_abort", dump_abort, 1);
                lit("DUMP_ABORT busy: illegal_d", illegal_d, 0);
                clock_edge();
                // Debug window open does not matter for dump commands.
                drive(8'h00, {DLOAD, 4'h0}, 0, 1, 0);
                lit("DUMP_LOAD legal inside freeze window", dump_load, 1);
                lit("DUMP_LOAD inside window: illegal_d", illegal_d, 0);
                clock_edge();
                drive(8'h00, {DABRT, 4'h0}, 0, 1, 0);
                lit("DUMP_ABORT legal inside freeze window", dump_abort, 1);
                clock_edge();
                // DUMP_LOAD on the tick after a RUN (phase 2 in flight) is legal.
                cyc(8'h00, {RUN, 4'h0});
                drive(8'h00, {DLOAD, 4'h0}, 0, 0, 0);
                lit("DUMP_LOAD during phase 2", dump_load, 1);
                lit("DUMP_LOAD during phase 2: acc_en", acc_en, 1);
                clock_edge();
                // The dump carries no overflow of its own: only the RUN's add counts.
                lit("no overflow from DUMP_LOAD", ovf, 0);
            end else begin
                drive(8'h00, {DLOAD, 4'h0}, 0, 0, 0);
                lit("no outbuf: DUMP_LOAD illegal", illegal_d, 1);
                lit("no outbuf: dump_load strobe", dump_load, 0);
                clock_edge();
                cyc(8'h00, {CLEAR, C_FLAGS});
                drive(8'h00, {DABRT, 4'h0}, 0, 0, 0);
                lit("no outbuf: DUMP_ABORT illegal", illegal_d, 1);
                lit("no outbuf: dump_abort strobe", dump_abort, 0);
                clock_edge();
                cyc(8'h00, {CLEAR, C_FLAGS});
                drive(8'h00, {CLEAR, C_OUTBUF | C_PSUM | C_INBUF | C_FLAGS}, 0, 0, 0);
                lit("no outbuf: CLEAR bit 2 illegal", illegal_d, 1);
                lit("no outbuf: CLEAR whole ignored (psum)", clr_psum, 0);
                lit("no outbuf: CLEAR whole ignored (outbuf)", clr_outbuf, 0);
                clock_edge();
                lit("no outbuf: rejected CLEAR keeps flags", illegal, 1);
            end
        end
    endtask

    task automatic directed_clear_collisions;

        logic coll;
        begin
            phase_label = "CLEAR collisions";
            reset_dut();
            // Every mask, with and without a phase 2 in flight and a dump busy.
            for (int rb = 0; rb < N2; rb++) begin
                for (int db = 0; db < N2; db++) begin
                    for (int m = 0; m < N16; m++) begin
                        nop();
                        cyc(8'hC3, {LOAD, 4'h0});
                        cyc(8'h00, {CLEAR, C_FLAGS});
                        cyc(8'h00, 8'hF0);                 // illegal = 1 to see CLEAR bit 0
                        if (rb) cyc(8'h00, {RUN, 4'h0});
                        else    nop();
                        coll = (m[3] && rb) || (m[2] && (db || !HAS_OB));
                        drive(8'h00, {CLEAR, 4'(m)}, db[0], 0, 0);
                        lit("CLEAR clr_psum",   clr_psum,   !coll && m[3]);
                        lit("CLEAR clr_outbuf", clr_outbuf, !coll && m[2]);
                        lit("CLEAR illegal_d",  illegal_d,  coll ? 1'b1 : (m[0] ? 1'b0 : 1'b1));
                        clock_edge();
                        lit("CLEAR inbuf", inbuf, (!coll && m[1]) ? 8'h00 : 8'hC3);
                        // The whole CLEAR is ignored on a collision: flags too.
                        lit("CLEAR illegal", illegal, coll ? 1'b1 : (m[0] ? 1'b0 : 1'b1));
                    end
                end
            end
            // CLEAR bit 3 is legal on a tick with no phase 2 even inside a RUN
            // stream with gaps.
            cyc(8'h00, {RUN, 4'h0});
            cyc(8'h00, 8'h00);
            drive(8'h00, {CLEAR, C_PSUM}, 0, 0, 0);
            lit("CLEAR psum in a RUN gap", clr_psum, 1);
            lit("CLEAR psum in a RUN gap: illegal_d", illegal_d, illegal);
            clock_edge();
            // Phase 2 of a RUN followed by CLEAR bit 3 on that tick: refused.
            cyc(8'h00, {RUN, 4'h0});
            drive(8'h00, {CLEAR, C_PSUM}, 0, 0, 0);
            lit("CLEAR psum during phase 2 refused", clr_psum, 0);
            lit("CLEAR psum during phase 2 sets illegal", illegal_d, 1);
            lit("acc_en still high (phase 2 completes)", acc_en, 1);
            clock_edge();
            // CLEAR in a freeze window is legal.
            cyc(8'h00, {CLEAR, C_FLAGS});
            drive(8'h00, {CLEAR, 4'hF}, 0, 1, 0);
            if (HAS_OB) lit("CLEAR in window, all strobes", {clr_psum, clr_outbuf}, 2'b11);
            clock_edge();
        end
    endtask

    task automatic directed_overflow_flag;

        begin
            phase_label = "overflow";
            reset_dut();
            // pe_ovf_any only counts on a phase-2 tick.
            cyc(8'h00, 8'h00, 0, 0, 1);
            cyc(8'h00, {RUN, 4'h0}, 0, 0, 1);       // phase 1 tick: ignored
            lit("wrap flag ignored without phase 2", ovf, 0);
            cyc(8'h00, 8'h00, 0, 0, 1);              // phase 2 tick: counts
            lit("phase 2 wrap sets ovf", ovf, 1);
            nop(4);
            lit("ovf is sticky", ovf, 1);
            cyc(8'h00, {CLEAR, C_PSUM | C_OUTBUF | C_INBUF});
            lit("CLEAR without bit 0 keeps ovf", ovf, 1);
            cyc(8'h00, {CLEAR, C_FLAGS});
            lit("CLEAR bit 0 drops ovf", ovf, 0);
            // Overflow raised on the same tick as CLEAR flags survives it,
            // while an older overflow and illegal do not.
            cyc(8'h00, 8'h00, 0, 0, 0);
            cyc(8'h00, {RUN, 4'h0});
            cyc(8'h00, 8'h00, 0, 0, 1);
            cyc(8'h00, 8'hC0);
            lit("setup: ovf", ovf, 1);
            lit("setup: illegal", illegal, 1);
            cyc(8'h00, {RUN, 4'h0});
            drive(8'h00, {CLEAR, C_FLAGS}, 0, 0, 1);
            lit("same-tick CLEAR flags: ovf_d", ovf_d, 1);
            lit("same-tick CLEAR flags: illegal_d", illegal_d, 0);
            lit("same-tick CLEAR flags: acc_en", acc_en, 1);
            clock_edge();
            lit("new overflow survives CLEAR flags", ovf, 1);
            lit("illegal cleared by CLEAR flags", illegal, 0);
            cyc(8'h00, {CLEAR, C_FLAGS});
            lit("next CLEAR flags clears it", ovf, 0);
            // A rejected CLEAR (collides with phase 2) keeps an old overflow.
            cyc(8'h00, {RUN, 4'h0});
            cyc(8'h00, 8'h00, 0, 0, 1);
            nop();
            cyc(8'h00, {RUN, 4'h0});
            drive(8'h00, {CLEAR, C_PSUM | C_FLAGS}, 0, 0, 0);
            lit("rejected CLEAR: ovf_d", ovf_d, 1);
            lit("rejected CLEAR: illegal_d", illegal_d, 1);
            clock_edge();
            lit("rejected CLEAR keeps ovf", ovf, 1);
            lit("rejected CLEAR sets illegal", illegal, 1);
            cyc(8'h00, {CLEAR, C_FLAGS});
            expect_flags(1'b0, 1'b0, "after flags clear");
        end
    endtask

    task automatic directed_status_byte;

        begin
            phase_label = "status byte";
            reset_dut();
            // Bit layout: [7]=1 [6]=dump_busy [5]=illegal [4]=ovf (incl. pending)
            // [3]=dump_busy [2]=phase [1]=dump_busy [0]=run_busy.
            for (int ph = 0; ph < N2; ph++) begin
                for (int db = 0; db < N2; db++) begin
                    for (int rb = 0; rb < N2; rb++) begin
                        for (int il = 0; il < N2; il++) begin
                            for (int ov = 0; ov < N2; ov++) begin
                                for (int pn = 0; pn < N2; pn++) begin
                                    logic [7:0] exp_s;
                                    logic eff_db;
                                    // set_state takes 2 + 2*ov + ill ticks, so the
                                    // phase can be steered with one leading NOP.
                                    set_state(rb[0], il[0], ov[0],
                                              int'(m_ph ^ ph[0] ^ il[0]));
                                    drive(8'h00, {DFLAGS, 4'h0}, db[0], 0, pn[0]);
                                    // dump_busy is tied low when there is no output buffer
                                    eff_db = HAS_OB ? db[0] : 1'b0;
                                    exp_s = {1'b1, eff_db, il[0],
                                             ov[0] | (rb[0] & pn[0]),
                                             eff_db, m_ph, eff_db, rb[0]};
                                    lit("phase matches the sweep", m_ph, ph[0]);
                                    lit("status byte", status, exp_s);
                                    lit("status: illegal_d", illegal_d, il[0]);
                                    clock_edge();
                                end
                            end
                        end
                    end
                end
            end
            // Bank != 0: illegal, no freeze, and the byte is not captured.
            reset_dut();
            for (int a = 1; a < N16; a++) begin
                cyc(8'h00, {CLEAR, C_FLAGS});
                drive(8'h00, {DFLAGS, 4'(a)}, 0, 0, 0);
                lit("bank != 0: no dbg_start", dbg_start, 0);
                lit("bank != 0: illegal_d", illegal_d, 1);
                clock_edge();
                lit("bank != 0: sticky", illegal, 1);
            end
        end
    endtask

    task automatic directed_debug_decode;

        begin
            phase_label = "debug decode";
            reset_dut();
            for (int o = 0; o < N16; o++) begin
                for (int a = 0; a < N16; a++) begin
                    for (int fo = 0; fo < N2; fo++) begin
                        logic want;
                        want = (o >= 6 && o <= 11) && !(o == 6 && a != 0) && !fo;
                        cyc(8'h00, {CLEAR, C_FLAGS});
                        drive(8'h5A, {4'(o), 4'(a)}, 0, fo[0], 0);
                        lit("dbg_start decode", dbg_start, want);
                        if (want) begin
                            lit("dbg_op", dbg_op, o);
                            lit("dbg_pe", dbg_pe, a[1:0]);
                        end
                        if (o >= 6 && o <= 11)
                            lit("debug read legality", illegal_d,
                                (o == 6 && a != 0) || fo);
                        clock_edge();
                    end
                end
            end
        end
    endtask

    task automatic directed_enable_hold;

        begin
            phase_label = "enable hold";
            reset_dut();
            cyc(8'h77, {LOAD, 4'h0});
            cyc(8'h00, {RUN, 4'h0});
            // Hold edges change nothing, whatever is on the inputs, including
            // the output-tick phase and the run_busy that is in flight.
            for (int i = 0; i < N5; i++)
                cyc(8'h12, {4'(i + 10), 4'hF}, 1, 1, 1, 1'b0);
            for (int i = 0; i < N4; i++)
                cyc(8'h12, {LOAD, 4'h0}, 1, 1, 1, 1'b0);
            cyc(8'h00, {CLEAR, 4'hF}, 0, 0, 0, 1'b0);
            lit("hold keeps inbuf", inbuf, 8'h77);
            lit("hold keeps run_busy", run_busy, 1);
            lit("hold keeps illegal", illegal, 0);
            lit("hold keeps ovf", ovf, 0);
            // The phase 2 that was in flight is still there on the next
            // enabled edge.
            drive(8'h00, 8'h00, 0, 0, 1);
            lit("phase 2 survives a hold", acc_en, 1);
            lit("overflow after a hold", ovf_d, 1);
            clock_edge();
            // Odd and even numbers of hold edges leave the phase unchanged.
            reset_dut();
            for (int n = 0; n < N4; n++) begin
                drive(8'h00, {DFLAGS, 4'h0}, 0, 0, 0);
                lit("status phase bit", status[2], n % 2);
                clock_edge();
                cyc(8'h00, 8'h00, 0, 0, 0, 1'b0);
            end
        end
    endtask

    // ------------------------------------------------------------------
    // Exhaustive sweep and random traffic
    // ------------------------------------------------------------------
    task automatic sweep_exhaustive;

        begin
            phase_label = "exhaustive sweep";
            reset_dut();
            for (int rb = 0; rb < N2; rb++)
              for (int il = 0; il < N2; il++)
                for (int ov = 0; ov < N2; ov++)
                  for (int w = 0; w < N8; w++)
                    for (int i = 0; i < N256; i++) begin
                        set_state(rb[0], il[0], ov[0]);
                        drive($urandom(), 8'(i), w[2], w[1], w[0]);
                        clock_edge();
                    end
            // Odd phase for the same inputs.
            for (int w = 0; w < N8; w++)
                for (int i = 0; i < N256; i++) begin
                    nop();
                    drive($urandom(), 8'(i), w[2], w[1], w[0]);
                    clock_edge();
                end
        end
    endtask

    task automatic random_traffic(input integer n);

        logic db, fo;
        logic [7:0] ri;
        logic [3:0] ra;
        integer r;
        begin
            phase_label = "random";
            reset_dut();
            db = 1'b0;
            fo = 1'b0;
            for (int i = 0; i < n; i++) begin
                r = $urandom_range(0, 99);
                ra = 4'($urandom());
                if ($urandom_range(0, 3) == 0) ra = 4'h0;
                if (r < 70) ri = {4'($urandom_range(0, 15)), ra};
                else if (r < 80) ri = {RUN, ra};
                else if (r < 85) ri = {CLEAR, ra};
                else if (r < 90) ri = {DLOAD, ra};
                else if (r < 95) ri = {LOAD, ra};
                else ri = {4'($urandom_range(6, 11)), ra};
                if ($urandom_range(0, 5) == 0) db = ~db;
                if ($urandom_range(0, 4) == 0) fo = ~fo;
                if ($urandom_range(0, 1999) == 0) reset_dut();
                cyc($urandom(), ri, db, fo, $urandom_range(0, 3) == 0,
                    $urandom_range(0, 7) != 0);
            end
        end
    endtask

    task automatic check_coverage;

        begin
            for (int b = 0; b < B_N; b++) begin
                bit need;
                need = 1'b1;
                if (HAS_OB && (b == B_DLOAD_NOOB || b == B_DABRT_NOOB || b == B_CLR_OB_NOOB))
                    need = 1'b0;
                if (!HAS_OB && (b == B_DLOAD_OK || b == B_DLOAD_BUSY || b == B_DABRT_OK ||
                                b == B_CLR_OB || b == B_CLR_OB_COLL || b == B_CLR_ALL_OK))
                    need = 1'b0;
                if (need && cov[b] == 0)
                    $fatal(1, "HAS_OUTBUF=%0d: coverage bin %0d never hit", HAS_OB, b);
            end
        end
    endtask

    initial begin
        done = 1'b0;
        checks = 0;
        for (int b = 0; b < B_N; b++) cov[b] = 0;
        clk = 1'b0;
        rst_n = 1'b0;
        en = 1'b1;
        d = '0;
        ins = '0;
        dump_busy = 1'b0;
        fz_open = 1'b0;
        pe_ovf_any = 1'b0;
        m_ph = 1'b0; m_rb = 1'b0; m_ib = 8'h00; m_ill = 1'b0; m_ovf = 1'b0;

        directed_reset_and_status();
        directed_load_clear_inbuf();
        directed_run_pipeline();
        directed_illegal_ops();
        directed_dump_rules();
        directed_clear_collisions();
        directed_overflow_flag();
        directed_status_byte();
        directed_debug_decode();
        directed_enable_hold();
        sweep_exhaustive();
        random_traffic(20000);
        check_coverage();
        done = 1'b1;
    end

endmodule

module polite_ctrl_tb;
    integer seed;
    logic   done_ob, done_noob;
    integer checks_ob, checks_noob;

    polite_ctrl_env #(.HAS_OB(1'b1)) env_ob   (.done(done_ob),   .checks(checks_ob));
    polite_ctrl_env #(.HAS_OB(1'b0)) env_noob (.done(done_noob), .checks(checks_noob));

    initial begin
        if ($test$plusargs("WAVES")) begin
            $dumpfile("polite_ctrl_tb.vcd");
            $dumpvars(0, polite_ctrl_tb);
        end
        if ($value$plusargs("SEED=%d", seed))
            void'($urandom(seed));
        wait (done_ob && done_noob);
        $display("PASS: polite_ctrl verification completed with %0d checks (HAS_OUTBUF=1: %0d, HAS_OUTBUF=0: %0d)",
                 checks_ob + checks_noob, checks_ob, checks_noob);
        $finish;
    end
endmodule
