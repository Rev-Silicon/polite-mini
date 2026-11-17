`timescale 1ns/1ps
`default_nettype none

module tb;
    wire done_buf, done_nobuf;
    wire [31:0] failures_buf, failures_nobuf;
    polite_ctrl_test #(.HAS_OUTBUF(1)) with_buffer(1'b1, done_buf, failures_buf);
    polite_ctrl_test #(.HAS_OUTBUF(0)) without_buffer(done_buf, done_nobuf, failures_nobuf);
    initial begin : wave_control
        int vcd_enabled = 1;
        string vcd_file = "tb.vcd";
        void'($value$plusargs("VCD=%d", vcd_enabled));
        void'($value$plusargs("VCD_FILE=%s", vcd_file));
        if (vcd_enabled != 0) begin
            $display("VCD enabled: %s", vcd_file);
            $dumpfile(vcd_file);
            $dumpvars(0, tb);
        end
        wait (done_buf && done_nobuf);
        $display("================ FINAL TEST REPORT ================");
        $display("Tests run: %0d  Passed: %0d  Failed: %0d",
            with_buffer.tests_run + without_buffer.tests_run,
            with_buffer.tests_passed + without_buffer.tests_passed,
            with_buffer.tests_failed + without_buffer.tests_failed);
        $display("Each test/configuration pair counts as one test.");
        $display("Functional coverage: %0d/%0d bins = %0.2f%%",
            with_buffer.bins_hit + without_buffer.bins_hit,
            with_buffer.bins_total + without_buffer.bins_total,
            100.0 * real'(with_buffer.bins_hit + without_buffer.bins_hit) /
                    real'(with_buffer.bins_total + without_buffer.bins_total));
        $display("Missing required bins (ALL only): %0d",
            with_buffer.coverage_failures + without_buffer.coverage_failures);
        $display("===================================================");
        if ((failures_buf + failures_nobuf) != 0)
            $fatal(1, "polite_ctrl failures: buffered=%0d unbuffered=%0d",
                   failures_buf, failures_nobuf);
        $display("PASS: both configurations matched all checked expectations");
        $finish;
    end
    initial begin
        #10000000;
        $fatal(1, "Testbench watchdog expired");
    end
endmodule

module polite_ctrl_test #(parameter bit HAS_OUTBUF = 1)(
    input wire start,
    output bit done = 0,
    output int unsigned failure_count = 0
);
    logic clk = 0;
    always #7.5 clk = ~clk;
    logic rst_n = 0, en = 1;
    logic [7:0] d = 0, ins = 0;
    logic dump_busy = 0, fz_open = 0, pe_ovf_any = 0;
    wire phase, run_busy, illegal, ovf, illegal_d, ovf_d;
    wire [7:0] inbuf, status;
    wire run_now, acc_en, clr_psum, clr_outbuf;
    wire dump_load, dump_abort, dbg_start;
    wire [3:0] dbg_op;
    wire [1:0] dbg_pe;

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

    bit m_phase = 0, m_run = 0, m_illegal = 0, m_ovf = 0;
    logic [7:0] m_inbuf = 0;
    int unsigned cycles = 0, checks = 0, failures = 0;
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
    string test_name = "ALL";
    int unsigned tests_run = 0, tests_passed = 0, tests_failed = 0;
    int unsigned test_failures_before = 0;
    int unsigned bins_hit = 0, bins_total = 0, coverage_failures = 0;
    string scenario = "initial";
    int seed = 1, seed_state, iterations = 5000;

    task automatic check_bit(input string name, input logic got,
                             input logic expected);
        checks++;
        if (got !== expected) begin
            failures++;
            $display("FAIL cycle=%0d %s %s got=%b expected=%b ins=%02h en=%b dump=%b freeze=%b",
                     cycles, $sformatf("HAS_OUTBUF=%0b %s", HAS_OUTBUF, scenario), name, got, expected, ins, en,
                     dump_busy, fz_open);
        end
    endtask

    task automatic check_byte(input string name, input logic [7:0] got,
                              input logic [7:0] expected);
        checks++;
        if (got !== expected) begin
            failures++;
            $display("FAIL cycle=%0d %s %s got=%02h expected=%02h ins=%02h",
                     cycles, $sformatf("HAS_OUTBUF=%0b %s", HAS_OUTBUF, scenario), name, got, expected, ins);
        end
    endtask

    task automatic check_state;
        check_bit("phase", phase, m_phase);
        check_bit("run_busy", run_busy, m_run);
        check_bit("illegal", illegal, m_illegal);
        check_bit("ovf", ovf, m_ovf);
        check_byte("inbuf", inbuf, m_inbuf);
    endtask

    // Every input is established on the falling edge and remains stable
    // across the rising edge. Combinational controls are checked BEFORE
    // that edge, against start-of-tick state. State is checked AFTER NBA.
    // During holds, state must remain unchanged. The documented continuous
    // status/next-flag equations and acc_en are also checked while disabled.
    task automatic tick(input logic [7:0] instruction = 8'h00,
                        input logic [7:0] data_byte = 8'h00,
                        input bit busy = 0, input bit frozen = 0,
                        input bit overflow_event = 0, input bit enabled = 1);
        bit reject, clear_ok, next_illegal, next_ovf;
        bit exp_run, exp_debug, exp_dump;
        logic [3:0] op, mask;
        logic [7:0] exp_status;
        @(negedge clk);
        en = enabled;
        ins = instruction;
        d = data_byte;
        dump_busy = HAS_OUTBUF && busy;
        fz_open = frozen;
        // PE ovf is always combinational, even when no accumulation occurs.
        // The controller, not the testbench, must qualify it with acc_en.
        pe_ovf_any = overflow_event;
        busy = dump_busy;
        #1;
        cycles++;
        check_state();
        op = instruction[7:4];
        mask = instruction[3:0];
        reject = (op >= 4'hC)
              || ((op == 4'h2) && frozen)
              || ((op == 4'h3) && (busy || !HAS_OUTBUF))
              || ((op == 4'h4) && !HAS_OUTBUF)
              || ((op == 4'h5) && ((mask[3] && m_run) || (mask[2] && (busy || !HAS_OUTBUF))))
              || ((op == 4'h6) && (mask != 0))
              || ((op >= 4'h6) && (op <= 4'hB) && frozen);
        clear_ok = (op == 4'h5) && !reject;
        exp_run = (op == 4'h2) && !reject;
        exp_dump = (op == 4'h3) && !reject;
        exp_debug = (op >= 4'h6) && (op <= 4'hB) && !reject;
        next_illegal = (m_illegal && !(clear_ok && mask[0])) || reject;
        next_ovf = (m_ovf && !(clear_ok && mask[0])) || (m_run && pe_ovf_any);

        // These combinational equations do not depend on clock enable.
        // en only determines whether their values are latched on this edge.
        exp_status = {1'b1, busy, m_illegal,
                      (m_ovf || (m_run && pe_ovf_any)),
                      busy, m_phase, busy, m_run};
        check_byte("continuous status", status, exp_status);
        check_bit("acc_en (including hold)", acc_en, enabled && m_run);
        check_bit("illegal_d (including hold)", illegal_d, next_illegal);
        check_bit("ovf_d (including hold)", ovf_d, next_ovf);
        overflow_cross[enabled][m_run][pe_ovf_any]++;
        status_phase[m_phase]++;
        if (enabled) begin
            opcode_hits[op]++;
            if (op == 4'h5) begin
                clear_hits[mask]++;
                clear_cross[mask][m_run][busy]++;
            end
            if (op >= 6 && op <= 11) debug_cross[op][frozen]++;
            if (reject) rejected_hits[op]++;
            check_bit("run_now", run_now, exp_run);
            check_bit("acc_en", acc_en, m_run);
            check_bit("clr_psum", clr_psum, clear_ok && mask[3]);
            check_bit("clr_outbuf", clr_outbuf, clear_ok && mask[2]);
            check_bit("dump_load", dump_load, exp_dump);
            check_bit("dump_abort", dump_abort, (op == 4'h4) && HAS_OUTBUF);
            check_bit("dbg_start", dbg_start, exp_debug);
            check_bit("illegal_d", illegal_d, next_illegal);
            check_bit("ovf_d", ovf_d, next_ovf);
            // Payload fields are meaningful only when dbg_start is true.
            if (exp_debug) begin
                check_byte("dbg_op", {4'b0, dbg_op}, {4'b0, op});
                check_byte("dbg_pe", {6'b0, dbg_pe}, {6'b0, mask[1:0]});
            end

        end

        @(posedge clk);
        if (enabled) begin
            m_phase = !m_phase;
            m_run = exp_run;
            m_illegal = next_illegal;
            m_ovf = next_ovf;
            if (op == 4'h1) m_inbuf = data_byte;
            else if (clear_ok && mask[1]) m_inbuf = 0;
        end
        #1;
        check_state();
    endtask

    task automatic reset_dut(input bit reset_enabled = 1);
        @(negedge clk);
        rst_n = 0;
        en = reset_enabled;
        reset_hits[reset_enabled]++;
        ins = 0;
        d = 0;
        dump_busy = 0;
        fz_open = 0;
        pe_ovf_any = 0;
        m_phase = 0;
        m_run = 0;
        m_illegal = 0;
        m_ovf = 0;
        m_inbuf = 0;
        #1;
        check_state(); // Asynchronous reset, before another rising edge.
        repeat (2) @(posedge clk);
        @(negedge clk);
        rst_n = 1;
        en = 1;
        // Account for the enabled NOP edge before tick's next falling edge.
        @(posedge clk);
        m_phase = 1;
        #1;
        check_state();
    endtask

    task automatic begin_test(input string name);
        scenario = name;
        test_failures_before = failures;
        tests_run++;
        $display("");
        $display("---------------------------------------------------");
        $display("START OF TEST: %s HAS_OUTBUF=%0b", name, HAS_OUTBUF);
        reset_dut(); // Every named test has an independent starting state.
    endtask

    task automatic end_test(input string name);
        if (failures == test_failures_before) begin
            tests_passed++;
            $display("END OF TEST: %s HAS_OUTBUF=%0b PASS", name, HAS_OUTBUF);
        end else begin
            tests_failed++;
            $display("END OF TEST: %s HAS_OUTBUF=%0b FAIL (%0d failed checks)",
                     name, HAS_OUTBUF, failures - test_failures_before);
        end
        $display("---------------------------------------------------");
        $display("");
    endtask

    task automatic test_load;
        // reset / load / clear input
        begin_test("LOAD");
        tick(8'h10, 8'hA5);
        tick(8'h00, 8'hFF);
        tick(8'h52);
        tick(8'h1F, 8'h3C); // Reserved LOAD argument bits are ignored.

        end_test("LOAD");
    endtask

    task automatic test_run;
        // isolated and consecutive RUN / dump overlap
        begin_test("RUN");
        tick(8'h20);
        tick(8'h00, 0, 0, 0, 1);
        tick();
        repeat (4) tick(8'h20, 8'h81, 1);
        tick(8'h30, 0, 0, 0, 1); // Legal dump while final add completes.
        tick(8'h40, 0, 1);
        tick(8'h40); // Idle abort is legal.

        end_test("RUN");
    endtask

    task automatic test_illegal;
        // every reserved opcode independently
        begin_test("ILLEGAL");
        for (int op = 12; op < 16; op++) begin
            tick(8'h51);
            tick(8'(op << 4));
            tick();
        end

        end_test("ILLEGAL");
    endtask

    task automatic test_clear;
        // CLEAR masks crossed with run/dump busy
        begin_test("CLEAR");
        for (int rb = 0; rb < 2; rb++) begin
            for (int db = 0; db < 2; db++) begin
                for (int mask = 0; mask < 16; mask++) begin
                    tick(8'h51);
                    tick(8'h10, 8'hA5);
                    tick(8'hC0); // Sticky illegal must survive a rejected CLEAR.
                    if (rb != 0) tick(8'h20);
                    tick(8'h50 | 8'(mask), 0, db != 0, 0, rb != 0);
                    tick();
                end
            end
        end

        end_test("CLEAR");
    endtask

    task automatic test_sticky;
        // overflow sticky / clear / newest event wins
        begin_test("STICKY");
        tick(8'h51);
        tick(8'h20);
        tick(8'h00, 0, 0, 0, 1);
        repeat (4) tick();
        tick(8'h51);
        tick(8'hC0);
        tick(8'h20);
        tick(8'h51, 0, 0, 0, 1);
        tick();

        end_test("STICKY");
    endtask

    task automatic test_debug;
        // debug decode / ignored reserved bits / nested reads
        begin_test("DEBUG");
        for (int op = 6; op <= 11; op++) begin
            for (int arg = 0; arg < 16; arg++) begin
                tick(8'h51);
                tick(8'((op << 4) | arg));
                // Mock an already-open freeze, including its final busy tick.
                tick(8'((op << 4) | arg), 0, 1, 1);
                tick(8'h20, 0, 1, 1);
                tick(8'h10, 8'h69, 1, 1); // LOAD remains legal.
                tick(8'h30, 0, 0, 1);     // Legal in freeze only with HAS_OUTBUF=1.
                tick(8'h40, 0, 1, 1);
                tick(8'h52, 0, 0, 1);
                tick(8'h20); // RUN legal once the freeze closes.
                tick();
            end
        end

        end_test("DEBUG");
    endtask

    task automatic test_status;
        // DEBUG_FLAGS busy / phase / sticky combinations
        begin_test("STATUS");
        for (int db = 0; db < 2; db++) begin
            for (int flags = 0; flags < 4; flags++) begin
                for (int parity = 0; parity < 2; parity++) begin
                    tick(8'h51);
                    if (flags[0]) tick(8'hC0);
                    if (flags[1]) begin
                        tick(8'h20);
                        tick(8'h00, 0, 0, 0, 1);
                    end
                    if (parity != 0) tick();
                    tick(8'h60, 0, db != 0);
                    tick(8'h20);
                    tick(8'h60, 0, db != 0, 0, 1);
                end
            end
        end

        end_test("STATUS");
    endtask

    task automatic test_hold;
        // enable holds / pipeline resumes
        begin_test("HOLD");
        tick(8'h10, 8'hD2);
        tick(8'h20);
        for (int op = 0; op < 16; op++)
            tick(8'(op << 4), 8'hFF, 1, 1, 0, 0);
        tick(8'h00, 0, 0, 0, 1); // Pending phase 2 resumes once.
        tick();
        end_test("HOLD");
    endtask

    task automatic test_reset;
        // reset clears populated state while disabled
        begin_test("RESET");
        tick(8'hC0);
        tick(8'h20);
        tick(8'h00, 0, 0, 0, 1);
        tick(8'h10, 8'hEF);
        tick(8'h20);
        tick(8'h00, 0, 0, 0, 1, 0); // Hold populated pipeline and flags.
        reset_dut(0);

        end_test("RESET");
    endtask

    task automatic test_ovf;
        // raw PE overflow crossed with pipeline and enable
        begin_test("OVF");
        for (int enabled = 0; enabled < 2; enabled++) begin
            for (int running = 0; running < 2; running++) begin
                for (int raw_ovf = 0; raw_ovf < 2; raw_ovf++) begin
                    tick();
                    tick(8'h51);
                    if (running != 0) tick(8'h20);
                    tick(8'h00, 0, 0, 0, raw_ovf != 0, enabled != 0);
                    tick();
                end
            end
        end
        // Idle raw overflow must neither set OVF nor survive a flags clear.
        tick(8'h51, 0, 0, 0, 1);
        tick(8'h00, 0, 0, 0, 1);

        end_test("OVF");
    endtask

    task automatic test_random;
        bit busy, frozen, pending_ovf;
        int freeze_left;
        logic [7:0] command, random_data;
        // checked random command stream
        begin_test("RANDOM");
        freeze_left = 0;
        for (int n = 0; n < iterations; n++) begin
            command = 8'($urandom());
            random_data = 8'($urandom());
            busy = ($urandom_range(0, 3) == 0);
            frozen = (freeze_left != 0);
            pending_ovf = ($urandom_range(0, 3) == 0);
            // fz_open is external; this simple enabled-tick model provides
            // coherent 3/11-tick windows. Dump busy is an injected boundary
            // condition, not a model of the outbuf's 24-nibble sequencer.
            tick(command, random_data, busy, frozen, pending_ovf);
            if (freeze_left != 0) freeze_left--;
            else if ((command[7:4] >= 6) && (command[7:4] <= 11)
                     && ((command[7:4] != 6) || (command[3:0] == 0)))
                freeze_left = ((command[7:4] == 8) || (command[7:4] == 10)) ? 11 : 3;
        end
        tick();
        end_test("RANDOM");
    endtask

    initial begin : main
        wait (start);
        void'($value$plusargs("TEST=%s", test_name));
        void'($value$plusargs("SEED=%d", seed));
        void'($value$plusargs("ITERATIONS=%d", iterations));
        if (iterations < 0) $fatal(1, "ITERATIONS must be nonnegative");
        seed_state = seed;
        seed_state = $urandom(seed_state);
        $display("Selected TEST=%s HAS_OUTBUF=%0b seed=%0d iterations=%0d",
                 test_name, HAS_OUTBUF, seed, iterations);
        if (test_name == "ALL" || test_name == "LOAD") test_load();
        if (test_name == "ALL" || test_name == "RUN") test_run();
        if (test_name == "ALL" || test_name == "ILLEGAL") test_illegal();
        if (test_name == "ALL" || test_name == "CLEAR") test_clear();
        if (test_name == "ALL" || test_name == "STICKY") test_sticky();
        if (test_name == "ALL" || test_name == "DEBUG") test_debug();
        if (test_name == "ALL" || test_name == "STATUS") test_status();
        if (test_name == "ALL" || test_name == "HOLD") test_hold();
        if (test_name == "ALL" || test_name == "RESET") test_reset();
        if (test_name == "ALL" || test_name == "OVF") test_ovf();
        if (test_name == "ALL" || test_name == "RANDOM") test_random();
        if (tests_run == 0)
            $fatal(1, "Unknown TEST=%s. Use ALL, LOAD, RUN, ILLEGAL, CLEAR, STICKY, DEBUG, STATUS, HOLD, RESET, OVF, RANDOM", test_name);
        report_coverage();
        $display("HAS_OUTBUF=%0b: tests=%0d passed=%0d failed=%0d checks=%0d failed_checks=%0d",
                 HAS_OUTBUF, tests_run, tests_passed, tests_failed, checks, failures);
        $display("HAS_OUTBUF=%0b functional coverage: %0d/%0d = %0.2f%%",
                 HAS_OUTBUF, bins_hit, bins_total, 100.0 * real'(bins_hit) / real'(bins_total));
        failure_count = failures + coverage_failures;
        // Stop this runner's state from advancing while its peer finishes.
        en = 0;
        done = 1;
    end

    task automatic require_hit(input string label_text, input int unsigned hits);
        $fdisplay(cov_fd, "%s : %0d %s", label_text, hits,
                  hits == 0 ? "MISS" : "HIT");
        bins_total++;
        if (hits != 0) bins_hit++;
        else if (test_name == "ALL") begin
            coverage_failures++;
            $display("COVERAGE MISS HAS_OUTBUF=%0b %s", HAS_OUTBUF, label_text);
        end
    endtask

    task automatic report_coverage;
        cov_fd = $fopen(HAS_OUTBUF ? "coverage_outbuf_1.txt" : "coverage_outbuf_0.txt", "w");
        if (cov_fd == 0) $fatal(1, "Cannot open functional coverage report");
        $fdisplay(cov_fd, "polite_ctrl HAS_OUTBUF=%0b seed=%0d iterations=%0d",
                  HAS_OUTBUF, seed, iterations);
        $fdisplay(cov_fd, "Functional bins across the full suite; not RTL code coverage. Single tests may leave bins uncovered.");
        for (int op = 0; op < 16; op++)
            require_hit($sformatf("opcode %h", 4'(op)), opcode_hits[op]);
        for (int mask = 0; mask < 16; mask++) begin
            require_hit($sformatf("CLEAR mask %h", 4'(mask)), clear_hits[mask]);
            for (int rb = 0; rb < 2; rb++)
                for (int db = 0; db < (HAS_OUTBUF ? 2 : 1); db++)
                    require_hit($sformatf("CLEAR mask=%h run=%0d dump=%0d", 4'(mask), rb, db),
                                clear_cross[mask][rb][db]);
        end
        for (int e = 0; e < 2; e++)
            for (int r = 0; r < 2; r++)
                for (int o = 0; o < 2; o++)
                    require_hit($sformatf("overflow en=%0d run=%0d raw=%0d", e,r,o),
                                overflow_cross[e][r][o]);
        for (int op = 6; op <= 11; op++)
            for (int f = 0; f < 2; f++)
                require_hit($sformatf("debug op=%h freeze=%0d", 4'(op),f), debug_cross[op][f]);
        for (int i = 0; i < 2; i++) begin
            require_hit($sformatf("status phase=%0d",i), status_phase[i]);
            require_hit($sformatf("async reset en=%0d",i), reset_hits[i]);
        end
        for (int op = 0; op < 16; op++)
            $fdisplay(cov_fd, "rejected opcode %h : %0d (informational)", 4'(op), rejected_hits[op]);
        $fdisplay(cov_fd, "TEST=%s tests=%0d passed=%0d failed=%0d", test_name, tests_run, tests_passed, tests_failed);
        $fdisplay(cov_fd, "Functional coverage: %0d/%0d = %0.2f%%", bins_hit, bins_total,
                  100.0 * real'(bins_hit) / real'(bins_total));
        $fdisplay(cov_fd, "Checks=%0d failed_checks=%0d coverage_failures=%0d", checks, failures, coverage_failures);
        $fclose(cov_fd);
    endtask
endmodule

/* verilator coverage_on */
`default_nettype wire
