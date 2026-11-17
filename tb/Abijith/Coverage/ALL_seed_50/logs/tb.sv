//      // verilator_coverage annotation
        `timescale 1ns/1ps
        `default_nettype none
        
        module tb;
 000001     wire done_buf, done_nobuf;
%000000     wire [31:0] failures_buf, failures_nobuf;
            polite_ctrl_test #(.HAS_OUTBUF(1)) with_buffer(1'b1, done_buf, failures_buf);
            polite_ctrl_test #(.HAS_OUTBUF(0)) without_buffer(done_buf, done_nobuf, failures_nobuf);
 000001     initial begin : wave_control
 000001         int vcd_enabled = 1;
 000001         string vcd_file = "tb.vcd";
 000001         void'($value$plusargs("VCD=%d", vcd_enabled));
 000001         void'($value$plusargs("VCD_FILE=%s", vcd_file));
~000001         if (vcd_enabled != 0) begin
 000001             $display("VCD enabled: %s", vcd_file);
 000001             $dumpfile(vcd_file);
 000001             $dumpvars(0, tb);
                end
 000001         wait (done_buf && done_nobuf);
 000001         $display("================ FINAL TEST REPORT ================");
 000001         $display("Tests run: %0d  Passed: %0d  Failed: %0d",
 000001             with_buffer.tests_run + without_buffer.tests_run,
 000001             with_buffer.tests_passed + without_buffer.tests_passed,
 000001             with_buffer.tests_failed + without_buffer.tests_failed);
 000001         $display("Each test/configuration pair counts as one test.");
 000001         $display("Functional coverage: %0d/%0d bins = %0.2f%%",
 000001             with_buffer.bins_hit + without_buffer.bins_hit,
 000001             with_buffer.bins_total + without_buffer.bins_total,
 000001             100.0 * real'(with_buffer.bins_hit + without_buffer.bins_hit) /
 000001                     real'(with_buffer.bins_total + without_buffer.bins_total));
 000001         $display("Missing required bins (ALL only): %0d",
 000001             with_buffer.coverage_failures + without_buffer.coverage_failures);
 000001         $display("===================================================");
 000001         if ((failures_buf + failures_nobuf) != 0)
                    $fatal(1, "polite_ctrl failures: buffered=%0d unbuffered=%0d",
                           failures_buf, failures_nobuf);
 000001         $display("PASS: both configurations matched all checked expectations");
 000001         $finish;
            end
            initial begin
                #10000000;
                $fatal(1, "Testbench watchdog expired");
            end
        endmodule
        
        module polite_ctrl_test #(parameter bit HAS_OUTBUF = 1)(
 000001     input wire start,
 000001     output bit done = 0,
~000001     output int unsigned failure_count = 0
        );
 026189     logic clk = 0;
 026189     always #7.5 clk = ~clk;
 000023     logic rst_n = 0, en = 1;
 003396     logic [7:0] d = 0, ins = 0;
~002418     logic dump_busy = 0, fz_open = 0, pe_ovf_any = 0;
 006512     wire phase, run_busy, illegal, ovf, illegal_d, ovf_d;
~006512     wire [7:0] inbuf, status;
~000494     wire run_now, acc_en, clr_psum, clr_outbuf;
~001284     wire dump_load, dump_abort, dbg_start;
 003396     wire [3:0] dbg_op;
 002908     wire [1:0] dbg_pe;
        
            polite_ctrl #(.HAS_OUTBUF(HAS_OUTBUF)) dut (
                .clk(clk), .rst_n(rst_n), .en(en), .d(d), .ins(ins),
                .dump_busy(dump_busy), .fz_open(fz_open), .pe_ovf_any(pe_ovf_any),
                .phase(phase), .run_busy(run_busy), .inbuf(inbuf),
                .illegal(illegal), .ovf(ovf), .illegal_d(illegal_d), .ovf_d(ovf_d),
                .run_now(run_now), .acc_en(acc_en), .clr_psum(clr_psum),
                .clr_outbuf(clr_outbuf), .dump_load(dump_load),
                .dump_abort(dump_abort), .dbg_start(dbg_start),
                .dbg_op(dbg_op), .dbg_pe(dbg_pe), .status(status)
            );
        
 006512     bit m_phase = 0, m_run = 0, m_illegal = 0, m_ovf = 0;
 000458     logic [7:0] m_inbuf = 0;
 000001     int unsigned cycles = 0, checks = 0, failures = 0;
            int unsigned opcode_hits [0:15];
            int unsigned clear_hits [0:15];
            // Portable functional coverage: counters require no SVA/covergroup flags.
            // Count only sampled checked ticks; expected rejection is a coverage event,
            // not evidence of correctness unless the reference checks also pass.
            int unsigned clear_cross[0:15][0:1][0:1];
            int unsigned overflow_cross[0:1][0:1][0:1]; // en, run_busy, raw PE overflow
            int unsigned status_phase[0:1];
            int unsigned debug_cross[6:11][0:1]; // opcode, freeze-open
            int unsigned rejected_hits[0:15];
            int unsigned reset_hits[0:1]; // enable during asynchronous reset
            int cov_fd;
 000001     string test_name = "ALL";
 000001     int unsigned tests_run = 0, tests_passed = 0, tests_failed = 0;
 000001     int unsigned test_failures_before = 0;
 000001     int unsigned bins_hit = 0, bins_total = 0, coverage_failures = 0;
 000001     string scenario = "initial";
 000001     int seed = 1, seed_state, iterations = 5000;
        
 130127     task automatic check_bit(input string name, input logic got,
                                     input logic expected);
 130127         checks++;
~130127         if (got !== expected) begin
%000000             failures++;
%000000             $display("FAIL cycle=%0d %s %s got=%b expected=%b ins=%02h en=%b dump=%b freeze=%b",
%000000                      cycles, $sformatf("HAS_OUTBUF=%0b %s", HAS_OUTBUF, scenario), name, got, expected, ins, en,
%000000                      dump_busy, fz_open);
                end
            endtask
        
 020841     task automatic check_byte(input string name, input logic [7:0] got,
                                      input logic [7:0] expected);
 020841         checks++;
~020841         if (got !== expected) begin
%000000             failures++;
%000000             $display("FAIL cycle=%0d %s %s got=%02h expected=%02h ins=%02h",
%000000                      cycles, $sformatf("HAS_OUTBUF=%0b %s", HAS_OUTBUF, scenario), name, got, expected, ins);
                end
            endtask
        
 013046     task automatic check_state;
 013046         check_bit("phase", phase, m_phase);
 013046         check_bit("run_busy", run_busy, m_run);
 013046         check_bit("illegal", illegal, m_illegal);
 013046         check_bit("ovf", ovf, m_ovf);
 013046         check_byte("inbuf", inbuf, m_inbuf);
            endtask
        
            // Every input is established on the falling edge and remains stable
            // across the rising edge. Combinational controls are checked BEFORE
            // that edge, against start-of-tick state. State is checked AFTER NBA.
            // During holds, state must remain unchanged. The documented continuous
            // status/next-flag equations and acc_en are also checked while disabled.
 006511     task automatic tick(input logic [7:0] instruction = 8'h00,
 000096                         input logic [7:0] data_byte = 8'h00,
 000096                         input bit busy = 0, input bit frozen = 0,
 005000                         input bit overflow_event = 0, input bit enabled = 1);
                bit reject, clear_ok, next_illegal, next_ovf;
                bit exp_run, exp_debug, exp_dump;
                logic [3:0] op, mask;
                logic [7:0] exp_status;
 006511         @(negedge clk);
 006511         en = enabled;
 006511         ins = instruction;
 006511         d = data_byte;
 006511         dump_busy = HAS_OUTBUF && busy;
 006511         fz_open = frozen;
                // PE ovf is always combinational, even when no accumulation occurs.
                // The controller, not the testbench, must qualify it with acc_en.
 006511         pe_ovf_any = overflow_event;
 006511         busy = dump_busy;
 006511         #1;
 006511         cycles++;
 006511         check_state();
 006511         op = instruction[7:4];
 006511         mask = instruction[3:0];
 006511         reject = (op >= 4'hC)
 006511               || ((op == 4'h2) && frozen)
 006511               || ((op == 4'h3) && (busy || !HAS_OUTBUF))
 006511               || ((op == 4'h4) && !HAS_OUTBUF)
 006511               || ((op == 4'h5) && ((mask[3] && m_run) || (mask[2] && (busy || !HAS_OUTBUF))))
 006511               || ((op == 4'h6) && (mask != 0))
 006511               || ((op >= 4'h6) && (op <= 4'hB) && frozen);
 006511         clear_ok = (op == 4'h5) && !reject;
 006511         exp_run = (op == 4'h2) && !reject;
 006511         exp_dump = (op == 4'h3) && !reject;
 006511         exp_debug = (op >= 4'h6) && (op <= 4'hB) && !reject;
 006511         next_illegal = (m_illegal && !(clear_ok && mask[0])) || reject;
 006511         next_ovf = (m_ovf && !(clear_ok && mask[0])) || (m_run && pe_ovf_any);
        
                // These combinational equations do not depend on clock enable.
                // en only determines whether their values are latched on this edge.
 006511         exp_status = {1'b1, busy, m_illegal,
 006511                       (m_ovf || (m_run && pe_ovf_any)),
 006511                       busy, m_phase, busy, m_run};
 006511         check_byte("continuous status", status, exp_status);
 006511         check_bit("acc_en (including hold)", acc_en, enabled && m_run);
 006511         check_bit("illegal_d (including hold)", illegal_d, next_illegal);
 006511         check_bit("ovf_d (including hold)", ovf_d, next_ovf);
 006511         overflow_cross[enabled][m_run][pe_ovf_any]++;
 006511         status_phase[m_phase]++;
 006490         if (enabled) begin
 006490             opcode_hits[op]++;
 005804             if (op == 4'h5) begin
 000686                 clear_hits[mask]++;
 000686                 clear_cross[mask][m_run][busy]++;
                    end
 004418             if (op >= 6 && op <= 11) debug_cross[op][frozen]++;
 004087             if (reject) rejected_hits[op]++;
 006490             check_bit("run_now", run_now, exp_run);
 006490             check_bit("acc_en", acc_en, m_run);
 006490             check_bit("clr_psum", clr_psum, clear_ok && mask[3]);
 006490             check_bit("clr_outbuf", clr_outbuf, clear_ok && mask[2]);
 006490             check_bit("dump_load", dump_load, exp_dump);
 006490             check_bit("dump_abort", dump_abort, (op == 4'h4) && HAS_OUTBUF);
 006490             check_bit("dbg_start", dbg_start, exp_debug);
 006490             check_bit("illegal_d", illegal_d, next_illegal);
 006490             check_bit("ovf_d", ovf_d, next_ovf);
                    // Payload fields are meaningful only when dbg_start is true.
 005848             if (exp_debug) begin
 000642                 check_byte("dbg_op", {4'b0, dbg_op}, {4'b0, op});
 000642                 check_byte("dbg_pe", {6'b0, dbg_pe}, {6'b0, mask[1:0]});
                    end
        
                end
        
 006511         @(posedge clk);
 006490         if (enabled) begin
 006490             m_phase = !m_phase;
 006490             m_run = exp_run;
 006490             m_illegal = next_illegal;
 006490             m_ovf = next_ovf;
 000506             if (op == 4'h1) m_inbuf = data_byte;
 005791             else if (clear_ok && mask[1]) m_inbuf = 0;
                end
 006511         #1;
 006511         check_state();
            endtask
        
 000012     task automatic reset_dut(input bit reset_enabled = 1);
 000012         @(negedge clk);
 000012         rst_n = 0;
 000012         en = reset_enabled;
 000012         reset_hits[reset_enabled]++;
 000012         ins = 0;
 000012         d = 0;
 000012         dump_busy = 0;
 000012         fz_open = 0;
 000012         pe_ovf_any = 0;
 000012         m_phase = 0;
 000012         m_run = 0;
 000012         m_illegal = 0;
 000012         m_ovf = 0;
 000012         m_inbuf = 0;
 000012         #1;
 000012         check_state(); // Asynchronous reset, before another rising edge.
 000024         repeat (2) @(posedge clk);
 000012         @(negedge clk);
 000012         rst_n = 1;
 000012         en = 1;
                // Account for the enabled NOP edge before tick's next falling edge.
 000012         @(posedge clk);
 000012         m_phase = 1;
 000012         #1;
 000012         check_state();
            endtask
        
 000011     task automatic begin_test(input string name);
 000011         scenario = name;
 000011         test_failures_before = failures;
 000011         tests_run++;
 000011         $display("");
 000011         $display("---------------------------------------------------");
 000011         $display("START OF TEST: %s HAS_OUTBUF=%0b", name, HAS_OUTBUF);
 000011         reset_dut(); // Every named test has an independent starting state.
            endtask
        
 000011     task automatic end_test(input string name);
~000011         if (failures == test_failures_before) begin
 000011             tests_passed++;
 000011             $display("END OF TEST: %s HAS_OUTBUF=%0b PASS", name, HAS_OUTBUF);
%000000         end else begin
%000000             tests_failed++;
%000000             $display("END OF TEST: %s HAS_OUTBUF=%0b FAIL (%0d failed checks)",
%000000                      name, HAS_OUTBUF, failures - test_failures_before);
                end
 000011         $display("---------------------------------------------------");
 000011         $display("");
            endtask
        
 000001     task automatic test_load;
                // reset / load / clear input
 000001         begin_test("LOAD");
 000001         tick(8'h10, 8'hA5);
 000001         tick(8'h00, 8'hFF);
 000001         tick(8'h52);
 000001         tick(8'h1F, 8'h3C); // Reserved LOAD argument bits are ignored.
        
 000001         end_test("LOAD");
            endtask
        
 000001     task automatic test_run;
                // isolated and consecutive RUN / dump overlap
 000001         begin_test("RUN");
 000001         tick(8'h20);
 000001         tick(8'h00, 0, 0, 0, 1);
 000001         tick();
 000004         repeat (4) tick(8'h20, 8'h81, 1);
 000001         tick(8'h30, 0, 0, 0, 1); // Legal dump while final add completes.
 000001         tick(8'h40, 0, 1);
 000001         tick(8'h40); // Idle abort is legal.
        
 000001         end_test("RUN");
            endtask
        
 000001     task automatic test_illegal;
                // every reserved opcode independently
 000001         begin_test("ILLEGAL");
 000004         for (int op = 12; op < 16; op++) begin
 000004             tick(8'h51);
 000004             tick(8'(op << 4));
 000004             tick();
                end
        
 000001         end_test("ILLEGAL");
            endtask
        
 000001     task automatic test_clear;
                // CLEAR masks crossed with run/dump busy
 000001         begin_test("CLEAR");
 000002         for (int rb = 0; rb < 2; rb++) begin
 000004             for (int db = 0; db < 2; db++) begin
 000064                 for (int mask = 0; mask < 16; mask++) begin
 000064                     tick(8'h51);
 000064                     tick(8'h10, 8'hA5);
 000064                     tick(8'hC0); // Sticky illegal must survive a rejected CLEAR.
 000032                     if (rb != 0) tick(8'h20);
 000064                     tick(8'h50 | 8'(mask), 0, db != 0, 0, rb != 0);
 000064                     tick();
                        end
                    end
                end
        
 000001         end_test("CLEAR");
            endtask
        
 000001     task automatic test_sticky;
                // overflow sticky / clear / newest event wins
 000001         begin_test("STICKY");
 000001         tick(8'h51);
 000001         tick(8'h20);
 000001         tick(8'h00, 0, 0, 0, 1);
 000004         repeat (4) tick();
 000001         tick(8'h51);
 000001         tick(8'hC0);
 000001         tick(8'h20);
 000001         tick(8'h51, 0, 0, 0, 1);
 000001         tick();
        
 000001         end_test("STICKY");
            endtask
        
 000001     task automatic test_debug;
                // debug decode / ignored reserved bits / nested reads
 000001         begin_test("DEBUG");
 000006         for (int op = 6; op <= 11; op++) begin
 000096             for (int arg = 0; arg < 16; arg++) begin
 000096                 tick(8'h51);
 000096                 tick(8'((op << 4) | arg));
                        // Mock an already-open freeze, including its final busy tick.
 000096                 tick(8'((op << 4) | arg), 0, 1, 1);
 000096                 tick(8'h20, 0, 1, 1);
 000096                 tick(8'h10, 8'h69, 1, 1); // LOAD remains legal.
 000096                 tick(8'h30, 0, 0, 1);     // Legal in freeze only with HAS_OUTBUF=1.
 000096                 tick(8'h40, 0, 1, 1);
 000096                 tick(8'h52, 0, 0, 1);
 000096                 tick(8'h20); // RUN legal once the freeze closes.
 000096                 tick();
                    end
                end
        
 000001         end_test("DEBUG");
            endtask
        
 000001     task automatic test_status;
                // DEBUG_FLAGS busy / phase / sticky combinations
 000001         begin_test("STATUS");
 000002         for (int db = 0; db < 2; db++) begin
 000008             for (int flags = 0; flags < 4; flags++) begin
 000016                 for (int parity = 0; parity < 2; parity++) begin
 000016                     tick(8'h51);
 000008                     if (flags[0]) tick(8'hC0);
 000008                     if (flags[1]) begin
 000008                         tick(8'h20);
 000008                         tick(8'h00, 0, 0, 0, 1);
                            end
 000008                     if (parity != 0) tick();
 000016                     tick(8'h60, 0, db != 0);
 000016                     tick(8'h20);
 000016                     tick(8'h60, 0, db != 0, 0, 1);
                        end
                    end
                end
        
 000001         end_test("STATUS");
            endtask
        
 000001     task automatic test_hold;
                // enable holds / pipeline resumes
 000001         begin_test("HOLD");
 000001         tick(8'h10, 8'hD2);
 000001         tick(8'h20);
 000016         for (int op = 0; op < 16; op++)
 000016             tick(8'(op << 4), 8'hFF, 1, 1, 0, 0);
 000001         tick(8'h00, 0, 0, 0, 1); // Pending phase 2 resumes once.
 000001         tick();
 000001         end_test("HOLD");
            endtask
        
 000001     task automatic test_reset;
                // reset clears populated state while disabled
 000001         begin_test("RESET");
 000001         tick(8'hC0);
 000001         tick(8'h20);
 000001         tick(8'h00, 0, 0, 0, 1);
 000001         tick(8'h10, 8'hEF);
 000001         tick(8'h20);
 000001         tick(8'h00, 0, 0, 0, 1, 0); // Hold populated pipeline and flags.
 000001         reset_dut(0);
        
 000001         end_test("RESET");
            endtask
        
 000001     task automatic test_ovf;
                // raw PE overflow crossed with pipeline and enable
 000001         begin_test("OVF");
 000002         for (int enabled = 0; enabled < 2; enabled++) begin
 000004             for (int running = 0; running < 2; running++) begin
 000008                 for (int raw_ovf = 0; raw_ovf < 2; raw_ovf++) begin
 000008                     tick();
 000008                     tick(8'h51);
 000004                     if (running != 0) tick(8'h20);
 000008                     tick(8'h00, 0, 0, 0, raw_ovf != 0, enabled != 0);
 000008                     tick();
                        end
                    end
                end
                // Idle raw overflow must neither set OVF nor survive a flags clear.
 000001         tick(8'h51, 0, 0, 0, 1);
 000001         tick(8'h00, 0, 0, 0, 1);
        
 000001         end_test("OVF");
            endtask
        
 000001     task automatic test_random;
                bit busy, frozen, pending_ovf;
                int freeze_left;
                logic [7:0] command, random_data;
                // checked random command stream
 000001         begin_test("RANDOM");
 000001         freeze_left = 0;
 005000         for (int n = 0; n < iterations; n++) begin
 005000             command = 8'($urandom());
 005000             random_data = 8'($urandom());
 005000             busy = ($urandom_range(0, 3) == 0);
 005000             frozen = (freeze_left != 0);
 005000             pending_ovf = ($urandom_range(0, 3) == 0);
                    // fz_open is external; this simple enabled-tick model provides
                    // coherent 3/11-tick windows. Dump busy is an injected boundary
                    // condition, not a model of the outbuf's 24-nibble sequencer.
 005000             tick(command, random_data, busy, frozen, pending_ovf);
 003339             if (freeze_left != 0) freeze_left--;
 001132             else if ((command[7:4] >= 6) && (command[7:4] <= 11)
                             && ((command[7:4] != 6) || (command[3:0] == 0)))
 000529                 freeze_left = ((command[7:4] == 8) || (command[7:4] == 10)) ? 11 : 3;
                end
 000001         tick();
 000001         end_test("RANDOM");
            endtask
        
 000001     initial begin : main
 000001         wait (start);
 000001         void'($value$plusargs("TEST=%s", test_name));
 000001         void'($value$plusargs("SEED=%d", seed));
 000001         void'($value$plusargs("ITERATIONS=%d", iterations));
 000001         if (iterations < 0) $fatal(1, "ITERATIONS must be nonnegative");
 000001         seed_state = seed;
 000001         seed_state = $urandom(seed_state);
 000001         $display("Selected TEST=%s HAS_OUTBUF=%0b seed=%0d iterations=%0d",
 000001                  test_name, HAS_OUTBUF, seed, iterations);
~000001         if (test_name == "ALL" || test_name == "LOAD") test_load();
~000001         if (test_name == "ALL" || test_name == "RUN") test_run();
~000001         if (test_name == "ALL" || test_name == "ILLEGAL") test_illegal();
~000001         if (test_name == "ALL" || test_name == "CLEAR") test_clear();
~000001         if (test_name == "ALL" || test_name == "STICKY") test_sticky();
~000001         if (test_name == "ALL" || test_name == "DEBUG") test_debug();
~000001         if (test_name == "ALL" || test_name == "STATUS") test_status();
~000001         if (test_name == "ALL" || test_name == "HOLD") test_hold();
~000001         if (test_name == "ALL" || test_name == "RESET") test_reset();
~000001         if (test_name == "ALL" || test_name == "OVF") test_ovf();
~000001         if (test_name == "ALL" || test_name == "RANDOM") test_random();
 000001         if (tests_run == 0)
                    $fatal(1, "Unknown TEST=%s. Use ALL, LOAD, RUN, ILLEGAL, CLEAR, STICKY, DEBUG, STATUS, HOLD, RESET, OVF, RANDOM", test_name);
 000001         report_coverage();
 000001         $display("HAS_OUTBUF=%0b: tests=%0d passed=%0d failed=%0d checks=%0d failed_checks=%0d",
 000001                  HAS_OUTBUF, tests_run, tests_passed, tests_failed, checks, failures);
 000001         $display("HAS_OUTBUF=%0b functional coverage: %0d/%0d = %0.2f%%",
 000001                  HAS_OUTBUF, bins_hit, bins_total, 100.0 * real'(bins_hit) / real'(bins_total));
 000001         failure_count = failures + coverage_failures;
                // Stop this runner's state from advancing while its peer finishes.
 000001         en = 0;
 000001         done = 1;
            end
        
 000120     task automatic require_hit(input string label_text, input int unsigned hits);
 000120         $fdisplay(cov_fd, "%s : %0d %s", label_text, hits,
 000120                   hits == 0 ? "MISS" : "HIT");
 000120         bins_total++;
 000120         if (hits != 0) bins_hit++;
%000000         else if (test_name == "ALL") begin
%000000             coverage_failures++;
%000000             $display("COVERAGE MISS HAS_OUTBUF=%0b %s", HAS_OUTBUF, label_text);
                end
            endtask
        
 000001     task automatic report_coverage;
 000001         cov_fd = $fopen(HAS_OUTBUF ? "coverage_outbuf_1.txt" : "coverage_outbuf_0.txt", "w");
 000001         if (cov_fd == 0) $fatal(1, "Cannot open functional coverage report");
 000001         $fdisplay(cov_fd, "polite_ctrl HAS_OUTBUF=%0b seed=%0d iterations=%0d",
 000001                   HAS_OUTBUF, seed, iterations);
 000001         $fdisplay(cov_fd, "Functional bins across the full suite; not RTL code coverage. Single tests may leave bins uncovered.");
 000016         for (int op = 0; op < 16; op++)
 000016             require_hit($sformatf("opcode %h", 4'(op)), opcode_hits[op]);
 000016         for (int mask = 0; mask < 16; mask++) begin
 000016             require_hit($sformatf("CLEAR mask %h", 4'(mask)), clear_hits[mask]);
 000032             for (int rb = 0; rb < 2; rb++)
 000064                 for (int db = 0; db < (HAS_OUTBUF ? 2 : 1); db++)
 000064                     require_hit($sformatf("CLEAR mask=%h run=%0d dump=%0d", 4'(mask), rb, db),
 000064                                 clear_cross[mask][rb][db]);
                end
 000002         for (int e = 0; e < 2; e++)
 000004             for (int r = 0; r < 2; r++)
 000008                 for (int o = 0; o < 2; o++)
 000008                     require_hit($sformatf("overflow en=%0d run=%0d raw=%0d", e,r,o),
 000008                                 overflow_cross[e][r][o]);
 000006         for (int op = 6; op <= 11; op++)
 000012             for (int f = 0; f < 2; f++)
 000012                 require_hit($sformatf("debug op=%h freeze=%0d", 4'(op),f), debug_cross[op][f]);
 000002         for (int i = 0; i < 2; i++) begin
 000002             require_hit($sformatf("status phase=%0d",i), status_phase[i]);
 000002             require_hit($sformatf("async reset en=%0d",i), reset_hits[i]);
                end
 000016         for (int op = 0; op < 16; op++)
 000016             $fdisplay(cov_fd, "rejected opcode %h : %0d (informational)", 4'(op), rejected_hits[op]);
 000001         $fdisplay(cov_fd, "TEST=%s tests=%0d passed=%0d failed=%0d", test_name, tests_run, tests_passed, tests_failed);
 000001         $fdisplay(cov_fd, "Functional coverage: %0d/%0d = %0.2f%%", bins_hit, bins_total,
 000001                   100.0 * real'(bins_hit) / real'(bins_total));
 000001         $fdisplay(cov_fd, "Checks=%0d failed_checks=%0d coverage_failures=%0d", checks, failures, coverage_failures);
 000001         $fclose(cov_fd);
            endtask
        endmodule
        
        /* verilator coverage_on */
        `default_nettype wire
        
