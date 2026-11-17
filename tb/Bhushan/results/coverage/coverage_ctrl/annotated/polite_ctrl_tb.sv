//      // verilator_coverage annotation
        `timescale 1ns/1ps
        `include "../design/polite_ctrl.sv"
        
 002001 class ctrl_txn;
            rand bit       en;
            rand bit [7:0] d;
            rand bit [3:0] op;
            rand bit [3:0] arg;
            rand bit       dump_busy;
            rand bit       fz_open;
            rand bit       pe_ovf_any;
        
            // Mostly enabled, mostly legal opcodes, busy/ovf inputs set now and then
            constraint c_en   { en         dist {1'b1 := 9, 1'b0 := 1}; }
            constraint c_op   { op         dist {[4'h0:4'h5] :/ 70, [4'h6:4'hB] :/ 20, [4'hC:4'hF] :/ 10}; }
            constraint c_dump { dump_busy  dist {1'b0 := 3, 1'b1 := 1}; }
            constraint c_fz   { fz_open    dist {1'b0 := 3, 1'b1 := 1}; }
            constraint c_ovf  { pe_ovf_any dist {1'b0 := 4, 1'b1 := 1}; }
        
%000000     function bit [7:0] ins();
%000000         return {op, arg};
            endfunction
        endclass
        /* verilator lint_on DECLFILENAME */
        
        module tb_polite_ctrl;
        
            timeunit 1ns; timeprecision 1ps;
        
            localparam bit  HAS_OUTBUF = 1'b1;
            localparam int  NUM_RANDOM = 2000;
        
            localparam logic [3:0] OP_NOP   = 4'h0, OP_LOAD  = 4'h1, OP_RUN   = 4'h2,
                                   OP_DLOAD = 4'h3, OP_DABRT = 4'h4, OP_CLEAR = 4'h5,
                                   OP_DFLAG = 4'h6, OP_DINP  = 4'hB;
        
            // ---------------------------------------------------------------- DUT I/O
 004134     logic       clk;
%000003     logic       rst_n;
 000953     logic       en;
 001038     logic [7:0] d;
 001048     logic [7:0] ins;
 001004     logic       dump_busy;
 001006     logic       fz_open;
 000986     logic       pe_ovf_any;
        
 000899     logic       phase;
 000070     logic       run_busy;
 000086     logic [7:0] inbuf;
 000032     logic       illegal;
 000014     logic       ovf;
 000088     logic       illegal_d;
 000044     logic       ovf_d;
 000072     logic       run_now;
 000104     logic       acc_en;
 000020     logic       clr_psum;
 000010     logic       clr_outbuf;
 000030     logic       dump_load;
 000134     logic       dump_abort;
 000250     logic       dbg_start;
 000940     logic [3:0] dbg_op;
 001048     logic [1:0] dbg_pe;
~001004     logic [7:0] status;
        
            polite_ctrl #(.HAS_OUTBUF(HAS_OUTBUF)) dut (
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
        
            // ------------------------------------------------------ waveform helpers
            // test_step labels each scenario of the hold test in the waveform;
            // cmd_strobes groups every command output that must be 0 on a hold edge.
%000001     int         test_step = 0;
 000250     logic [6:0] cmd_strobes;
            assign cmd_strobes = {run_now, acc_en, clr_psum, clr_outbuf,
                                  dump_load, dump_abort, dbg_start};
        
            // ------------------------------------------------------------------ clock
            // 66 MHz core clock: period 15.152 ns
%000001     initial clk = 1'b0;
 004134     always #7.576 clk = ~clk;
        
            // -------------------------------------------------------- reference model
            typedef struct packed {
                logic       illegal_d;
                logic       ovf_d;
                logic       run_now;
                logic       acc_en;
                logic       clr_psum;
                logic       clr_outbuf;
                logic       dump_load;
                logic       dump_abort;
                logic       dbg_start;
                logic [3:0] dbg_op;
                logic [1:0] dbg_pe;
                logic [7:0] status;
                logic [7:0] inbuf_d;
            } ctrl_exp_t;
        
            // Model state (mirrors the DUT registers)
 000899     logic       m_phase;
 000070     logic       m_run_busy;
 000086     logic [7:0] m_inbuf;
 000032     logic       m_illegal;
 000014     logic       m_ovf;
        
~001048     ctrl_exp_t  exp_now;
%000001     int         err_count = 0;
%000001     int         chk_count = 0;
        
 002059     function automatic ctrl_exp_t model_comb();
                ctrl_exp_t  e;
 002059         logic [3:0] op_v   = ins[7:4];
 002059         logic [3:0] arg_v  = ins[3:0];
 002059         logic       no_ob  = !HAS_OUTBUF;
                logic       is_dbg, bad_bank, dbg_req, clr_coll, clr_ok, clr_flg;
                logic       ill_set, acc_ovf;
        
 002059         is_dbg   = (op_v >= OP_DFLAG) && (op_v <= OP_DINP);
 002059         bad_bank = (op_v == OP_DFLAG) && (arg_v != 4'h0);
 002059         dbg_req  = is_dbg && !bad_bank;
 002059         clr_coll = (arg_v[3] && m_run_busy) || (arg_v[2] && (dump_busy || no_ob));
 002059         clr_ok   = (op_v == OP_CLEAR) && !clr_coll;
 002059         clr_flg  = clr_ok && arg_v[0];
 002059         acc_ovf  = m_run_busy && pe_ovf_any;
        
 002059         ill_set  = ((op_v == OP_RUN)   && fz_open)
 002059                  | ((op_v == OP_DLOAD) && (dump_busy || no_ob))
 002059                  | ((op_v == OP_DABRT) && no_ob)
 002059                  | ((op_v == OP_CLEAR) && clr_coll)
 002059                  | bad_bank
 002059                  | (dbg_req && fz_open)
 002059                  | (op_v > OP_DINP);
        
                // SPEC section 2: a hold edge executes no command and changes no
                // state, so every command output is gated with en.
 002059         e.run_now    = en && (op_v == OP_RUN) && !fz_open;
 002059         e.acc_en     = en && m_run_busy;
 002059         e.clr_psum   = en && clr_ok && arg_v[3];
 002059         e.clr_outbuf = en && clr_ok && arg_v[2];
 002059         e.dump_load  = en && (op_v == OP_DLOAD) && !dump_busy && !no_ob;
 002059         e.dump_abort = en && (op_v == OP_DABRT) && !no_ob;
 002059         e.dbg_start  = en && dbg_req && !fz_open;
 002059         e.dbg_op     = op_v;
 002059         e.dbg_pe     = arg_v[1:0];
 002059         e.illegal_d  = ill_set | (m_illegal & ~clr_flg);
 002059         e.ovf_d      = acc_ovf | (m_ovf & ~clr_flg);
 002059         e.status     = {1'b1, dump_busy, m_illegal, m_ovf | acc_ovf,
 002059                         dump_busy, m_phase, dump_busy, m_run_busy};
 002059         e.inbuf_d    = (op_v == OP_LOAD)          ? d     :
 002059                        (clr_ok && arg_v[1])       ? 8'h00 : m_inbuf;
 002059         return e;
            endfunction
        
%000002     task automatic model_reset();
%000002         m_phase    = 1'b0;
%000002         m_run_busy = 1'b0;
%000002         m_inbuf    = 8'h00;
%000002         m_illegal  = 1'b0;
%000002         m_ovf      = 1'b0;
            endtask
        
 002059     task automatic model_clock();
 001160         if (en) begin
 000899             m_phase    = ~m_phase;
 000899             m_run_busy = exp_now.run_now;
 000899             m_inbuf    = exp_now.inbuf_d;
 000899             m_illegal  = exp_now.illegal_d;
 000899             m_ovf      = exp_now.ovf_d;
                end
            endtask
        
            // -------------------------------------------------------------- checkers
            `define CHECK(sig, expv) \
                begin \
                    chk_count++; \
                    if ((sig) !== (expv)) begin \
                        err_count++; \
                        $error("[%0t] %s mismatch: got %0h exp %0h (ins=%02h d=%02h)", \
                               $time, `"sig`", sig, expv, ins, d); \
                    end \
                end
        
 002059     task automatic check_comb();
 002059         exp_now = model_comb();
 002059         `CHECK(illegal_d,  exp_now.illegal_d)
 002059         `CHECK(ovf_d,      exp_now.ovf_d)
 002059         `CHECK(run_now,    exp_now.run_now)
 002059         `CHECK(acc_en,     exp_now.acc_en)
 002059         `CHECK(clr_psum,   exp_now.clr_psum)
 002059         `CHECK(clr_outbuf, exp_now.clr_outbuf)
 002059         `CHECK(dump_load,  exp_now.dump_load)
 002059         `CHECK(dump_abort, exp_now.dump_abort)
 002059         `CHECK(dbg_start,  exp_now.dbg_start)
 002059         `CHECK(dbg_op,     exp_now.dbg_op)
 002059         `CHECK(dbg_pe,     exp_now.dbg_pe)
 002059         `CHECK(status,     exp_now.status)
            endtask
        
            // Explicit hold-edge check with a readable message
 002059     task automatic check_hold_quiet();
~001160         if (en) return;
 002059         chk_count++;
 001160         if (cmd_strobes !== 7'b0) begin
                    err_count++;
                    $error("[%0t] step %0d: command output asserted on a hold edge (ins=%02h): run_now=%b acc_en=%b clr_psum=%b clr_outbuf=%b dump_load=%b dump_abort=%b dbg_start=%b",
                           $time, test_step, ins, run_now, acc_en, clr_psum, clr_outbuf,
                           dump_load, dump_abort, dbg_start);
                end
            endtask
        
 002062     task automatic check_regs();
 002062         `CHECK(phase,    m_phase)
 002062         `CHECK(run_busy, m_run_busy)
 002062         `CHECK(inbuf,    m_inbuf)
 002062         `CHECK(illegal,  m_illegal)
 002062         `CHECK(ovf,      m_ovf)
            endtask
        
            // ------------------------------------------------------------- stimulus
            // Drive one core tick on the falling edge, check, then clock it in.
 002059     task automatic tick(input logic       en_v,
                                input logic [3:0] op_v,
                                input logic [3:0] arg_v,
%000003                         input logic [7:0] d_v       = 8'h00,
%000004                         input logic       dump_v    = 1'b0,
%000004                         input logic       fz_v      = 1'b0,
%000004                         input logic       pe_ovf_v  = 1'b0);
 002059         @(negedge clk);
 002059         check_regs();
 002059         en         = en_v;
 002059         ins        = {op_v, arg_v};
 002059         d          = d_v;
 002059         dump_busy  = dump_v;
 002059         fz_open    = fz_v;
 002059         pe_ovf_any = pe_ovf_v;
 002059         #1 check_comb();
 002059         check_hold_quiet();
 002059         @(posedge clk);
 002059         model_clock();
            endtask
        
%000002     task automatic apply_reset();
%000002         rst_n      = 1'b0;
%000002         en         = 1'b0;
%000002         d          = 8'h00;
%000002         ins        = 8'h00;
%000002         dump_busy  = 1'b0;
%000002         fz_open    = 1'b0;
%000002         pe_ovf_any = 1'b0;
%000002         model_reset();
%000006         repeat (3) @(posedge clk);
%000002         @(negedge clk);
%000002         rst_n = 1'b1;
%000002         check_regs();
            endtask
        
%000001     task automatic directed_tests();
%000001         $display("[%0t] Directed tests", $time);
%000001         tick(1'b1, OP_LOAD,  4'h0, 8'hA5);            // LOAD -> inbuf = A5
%000001         tick(1'b1, OP_NOP,   4'h0);
%000001         tick(1'b1, OP_RUN,   4'h0);                   // RUN  -> run_busy next tick
%000001         tick(1'b1, OP_NOP,   4'h0, 8'h00, 1'b0, 1'b0, 1'b1); // acc with overflow
%000001         tick(1'b1, OP_CLEAR, 4'h3);                   // clear inbuf + flags
%000001         tick(1'b1, OP_RUN,   4'h0, 8'h00, 1'b0, 1'b1);       // RUN while frozen -> illegal
%000001         tick(1'b1, OP_DLOAD, 4'h0, 8'h00, 1'b1);             // DUMP_LOAD while busy -> illegal
%000001         tick(1'b1, OP_DFLAG, 4'h1);                   // bad FLAGS bank -> illegal
%000001         tick(1'b1, 4'hF,     4'h0);                   // reserved opcode -> illegal
%000001         tick(1'b0, OP_LOAD,  4'h0, 8'h3C);            // en low: state holds
%000001         tick(1'b1, OP_CLEAR, 4'h1);                   // clear flags
            endtask
        
            // Hold-gating test (SPEC section 2, Enable): with en low, every command
            // output must be 0 even though ins and run_busy stay frozen, and the
            // command must execute exactly once on the first enabled edge after.
            // Arguments: tick(en, op, arg, d, dump_busy, fz_open, pe_ovf_any)
%000001     task automatic hold_gating_test();
%000001         $display("[%0t] Hold-gating test", $time);
        
                // 1. RUN in flight, then hold with RUN still on ins:
                //    no run_now, no repeated acc_en (phase 2 must not add again)
%000001         test_step = 1;
%000001         tick(1'b1, OP_LOAD, 4'h0, 8'h77);
%000001         tick(1'b1, OP_RUN,  4'h0, 8'h11);           // phase 1
%000004         repeat (4) tick(1'b0, OP_RUN, 4'h0, 8'h11); // hold: run_busy frozen at 1
%000001         tick(1'b1, OP_NOP,  4'h0);                  // phase 2 happens exactly once
%000001         tick(1'b1, OP_NOP,  4'h0);                  // acc_en back to 0
        
                // 2. CLEAR of every bit on hold edges: nothing cleared until enabled
%000001         test_step = 2;
%000003         repeat (3) tick(1'b0, OP_CLEAR, 4'hF);
%000001         tick(1'b1, OP_CLEAR, 4'hF);
%000001         tick(1'b1, OP_NOP,   4'h0);
        
                // 3. DUMP_LOAD on hold edges: no capture / restart
%000001         test_step = 3;
%000003         repeat (3) tick(1'b0, OP_DLOAD, 4'h0);
%000001         tick(1'b1, OP_DLOAD, 4'h0);
%000001         tick(1'b1, OP_NOP,   4'h0, 8'h00, 1'b1);
        
                // 4. DUMP_ABORT on hold edges while a dump is busy
%000001         test_step = 4;
%000003         repeat (3) tick(1'b0, OP_DABRT, 4'h0, 8'h00, 1'b1);
%000001         tick(1'b1, OP_DABRT, 4'h0, 8'h00, 1'b1);
%000001         tick(1'b1, OP_NOP,   4'h0);
        
                // 5. Freezing debug reads on hold edges: no capture / restart
%000001         test_step = 5;
%000003         repeat (3) tick(1'b0, OP_DFLAG, 4'h0);      // DEBUG_FLAGS bank 0
%000001         tick(1'b1, OP_DFLAG, 4'h0);
%000001         tick(1'b1, OP_NOP,   4'h0);
%000003         repeat (3) tick(1'b0, 4'h8, 4'h2);          // DEBUG_PARTIAL_SUM PE2
%000001         tick(1'b1, 4'h8, 4'h2);
%000001         tick(1'b1, OP_NOP,   4'h0);
        
                // 6. Hold in the middle of a back-to-back RUN stream
%000001         test_step = 6;
%000001         tick(1'b1, OP_RUN, 4'h0, 8'h21);
%000002         repeat (2) tick(1'b0, OP_RUN, 4'h0, 8'h21);
%000001         tick(1'b1, OP_RUN, 4'h0, 8'h43);
%000001         tick(1'b1, OP_NOP, 4'h0);
%000001         tick(1'b1, OP_NOP, 4'h0);
        
                // 7. Overflow reported while a phase 2 is frozen by hold:
                //    acc_en and the ovf register must not change until enabled
%000001         test_step = 7;
%000001         tick(1'b1, OP_CLEAR, 4'h1);
%000001         tick(1'b1, OP_RUN,   4'h0, 8'h77);
%000003         repeat (3) tick(1'b0, OP_NOP, 4'h0, 8'h00, 1'b0, 1'b0, 1'b1);
%000001         tick(1'b1, OP_NOP, 4'h0, 8'h00, 1'b0, 1'b0, 1'b1);
%000001         tick(1'b1, OP_NOP, 4'h0);
        
%000001         test_step = 0;
            endtask
        
%000001     task automatic random_tests(input int n);
%000001         ctrl_txn txn = new();
%000001         $display("[%0t] Random tests: %0d ticks", $time, n);
~002000         for (int i = 0; i < n; i++) begin
 002000             if (!txn.randomize()) $fatal(1, "randomize() failed");
 002000             tick(txn.en, txn.op, txn.arg, txn.d,
 002000                  txn.dump_busy, txn.fz_open, txn.pe_ovf_any);
                end
            endtask
        
            // ------------------------------------------------------------------ main
%000001     initial begin
                string dumpfile;
%000001         if (!$value$plusargs("dumpfile=%s", dumpfile))
%000000             dumpfile = "../logs_waveforms/tb_polite_ctrl.vcd";
%000001         $dumpfile(dumpfile);
%000001         $dumpvars(0, tb_polite_ctrl);
        
                // Only the hold-gating test runs, so the waveform contains just it.
                // To run the full regression again, uncomment the block below.
%000001         apply_reset();
%000001         hold_gating_test();
%000001         directed_tests();
%000001         random_tests(NUM_RANDOM);
%000001         tick(1'b1, OP_LOAD, 4'h0, 8'hFF);   // async reset mid-activity
%000001         apply_reset();
%000001         tick(1'b1, OP_NOP, 4'h0);
%000001         @(negedge clk);
%000001         check_regs();
        
%000001         $display("------------------------------------------------");
%000001         $display(" polite_ctrl_tb (hold gating): %0d checks, %0d errors -> %s",
%000001                  chk_count, err_count, (err_count == 0) ? "PASS" : "FAIL");
%000001         $display("------------------------------------------------");
%000001         $finish;
            end
        
        endmodule
        
        // ============================================================================
        // SystemVerilog assertions for polite_ctrl (moved from sva/polite_sva.sv, unchanged)
        // ============================================================================
~004134 module polite_ctrl_sva (input logic clk, rst_n, en, fz_open, dump_busy, pe_ovf_any,
 000899                         input logic phase, run_busy, illegal, ovf, run_now, acc_en,
 000250                         input logic clr_psum, clr_outbuf, dump_load, dump_abort, dbg_start,
~001004                         input logic [7:0] inbuf, status, input logic clr_flg);
        
            // Hold edge: no command fires, no register moves
            a_hold_quiet: assert property (@(posedge clk) disable iff (!rst_n) !en |-> !(run_now || acc_en || clr_psum || clr_outbuf ||
                                                     dump_load || dump_abort || dbg_start));
            a_hold_regs:  assert property (@(posedge clk) disable iff (!rst_n) !en |=> $stable({phase, run_busy, inbuf, illegal, ovf}));
            // Pipeline and phase
            a_phase:      assert property (@(posedge clk) disable iff (!rst_n) en |=> phase != $past(phase));
            a_run_busy:   assert property (@(posedge clk) disable iff (!rst_n) en |=> run_busy == $past(run_now));
            // Legality
            a_no_run_fz:  assert property (@(posedge clk) disable iff (!rst_n) fz_open   |-> !run_now && !dbg_start);
            a_no_dload:   assert property (@(posedge clk) disable iff (!rst_n) dump_busy |-> !dump_load && !clr_outbuf);
            a_no_clr_ps:  assert property (@(posedge clk) disable iff (!rst_n) run_busy  |-> !clr_psum);
            a_one_cmd:    assert property (@(posedge clk) disable iff (!rst_n) $onehot0({run_now, dump_load, dump_abort, dbg_start,
                                                     clr_psum | clr_outbuf}));
            // Sticky flags
            a_ill_sticky: assert property (@(posedge clk) disable iff (!rst_n) illegal && !clr_flg |=> illegal);
            a_ovf_sticky: assert property (@(posedge clk) disable iff (!rst_n) ovf && !clr_flg |=> ovf);
            a_ovf_new:    assert property (@(posedge clk) disable iff (!rst_n) en && acc_en && pe_ovf_any |=> ovf);
            a_status7:    assert property (@(posedge clk) disable iff (!rst_n) status[7]);
        endmodule
        
        bind polite_ctrl polite_ctrl_sva u_sva (.*);
        
