module polite_outbuf_tb;

    logic         clk = 1'b0;
    logic         rst_n;
    logic [95:0]  cap;
    logic         load;
    logic         abort;
    logic         clr;
    logic         phase;
    logic         hold;
    logic         en;
    logic         busy;
    logic [3:0]   nib;

    logic [95:0]  exp_word;
    logic [4:0]   exp_idx;
    logic         exp_busy;
    integer checks = 0;
    integer seed;
    logic [3:0] stream [0:23];

    polite_outbuf dut (
        .clk   (clk),
        .rst_n (rst_n),
        .cap   (cap),
        .load  (load),
        .abort (abort),
        .clr   (clr),
        .phase (phase),
        .hold  (hold),
        .en    (en),
        .busy  (busy),
        .nib   (nib)
    );

    always #5 clk = ~clk;

    function automatic logic [3:0] expected_nibble(input logic [4:0] index);
        expected_nibble = exp_word[index * 4 +: 4];  // PE0 = word[23:0] first
    endfunction

    task automatic check_state(input string label);
        logic [3:0] expected_nib;
        begin
            expected_nib = exp_busy ? expected_nibble(exp_idx) : 4'h0;
            checks++;
            assert (busy === exp_busy)
                else $fatal(1, "%s: busy=%b expected=%b", label, busy, exp_busy);
            assert (nib === expected_nib)
                else $fatal(1, "%s: nib=%h expected=%h", label, nib, expected_nib);
            for (int k = 0; k < 4; k++)
                assert (dut.word[k] === exp_word[24*k +: 24])
                    else $fatal(1, "%s: word[%0d]=%h expected=%h", label, k,
                                dut.word[k], exp_word[24*k +: 24]);
        end
    endtask

    task automatic step(
        input logic [95:0] next_cap,
        input logic next_load,
        input logic next_abort,
        input logic next_clr,
        input logic next_phase,
        input logic next_hold,
        input logic next_en,
        input string label
    );
        begin
            @(negedge clk);
            cap = next_cap;
            load = next_load;
            abort = next_abort;
            clr = next_clr;
            phase = next_phase;
            hold = next_hold;
            en = next_en;

            @(posedge clk);
            #1;
            if (next_en) begin
                if (next_load) begin
                    exp_word = next_cap;
                    exp_idx = 5'd0;
                    exp_busy = 1'b1;
                end else begin
                    // clear, stream step and abort are independent in the RTL
                    if (next_clr)
                        exp_word = '0;
                    if (exp_busy && next_phase && !next_hold) begin
                        exp_idx = exp_idx + 1'b1;
                        if (exp_idx == 5'd24)
                            exp_busy = 1'b0;
                    end
                    if (next_abort)
                        exp_busy = 1'b0;
                end
            end
            check_state(label);
        end
    endtask

    task automatic reset_dut;
        begin
            rst_n = 1'b0;
            cap = '0;
            load = 1'b0;
            abort = 1'b0;
            clr = 1'b0;
            phase = 1'b0;
            hold = 1'b0;
            en = 1'b1;
            exp_word = '0;
            exp_idx = '0;
            exp_busy = 1'b0;
            #1;
            check_state("asynchronous reset");
            repeat (2) @(posedge clk);
            #1;
            check_state("reset state");
            rst_n = 1'b1;
        end
    endtask

    // Host-side view of the spec: nibble n of the dump is
    // sum[n/6][4*(n%6) +: 4], PE order 0..3, low nibble first. Built from the
    // snapshot only, independent of the DUT-style index arithmetic above.
    task automatic expect_stream(input logic [95:0] snap);
        for (int n = 0; n < 24; n++)
            stream[n] = snap[24*(n/6) + 4*(n%6) +: 4];
    endtask

    // Drive one dump at the real output-tick cadence (phase toggling every
    // core tick), optionally pausing the stream with hold on some ticks, and
    // check every output nibble and the busy duration.
    task automatic run_stream(input logic [95:0] snap, input bit with_holds,
                              input logic load_phase, input string label);
        int got;
        int ticks;
        logic ph;
        begin
            expect_stream(snap);
            step(snap, 1'b1, 1'b0, 1'b0, load_phase, 1'b0, 1'b1, label);
            got = 0;
            ticks = 0;
            ph = ~load_phase;
            while (busy) begin
                logic hold_now;
                hold_now = with_holds && ph && ($urandom_range(0, 2) == 0);
                if (busy && ph && !hold_now) begin
                    assert (nib === stream[got])
                        else $fatal(1, "%s: nibble %0d = %h expected %h", label,
                                    got, nib, stream[got]);
                    got++;
                end
                step('0, 1'b0, 1'b0, 1'b0, ph, hold_now, 1'b1, label);
                ph = ~ph;
                ticks++;
                if (ticks > 200) $fatal(1, "%s: stream did not terminate", label);
            end
            assert (got === 24)
                else $fatal(1, "%s: %0d nibbles streamed, expected 24", label, got);
            if (!with_holds)
                // 48 core ticks of dump busy including the DUMP_LOAD tick, 49 when
                // that tick is itself an output tick (SPEC 5.2).
                assert (ticks === 47 + int'(load_phase))
                    else $fatal(1, "%s: %0d ticks after load, expected %0d", label,
                                ticks, 47 + int'(load_phase));
        end
    endtask

    initial begin
        if ($test$plusargs("WAVES")) begin
            $dumpfile("polite_outbuf_tb.vcd");
            $dumpvars(0, polite_outbuf_tb);
        end
        if ($value$plusargs("SEED=%d", seed))
            void'($urandom(seed));

        reset_dut();

        // Load all four words (24 hex digits = 96 bits; every PE nonzero)
        // and verify low-first nibble ordering.
        step(96'hFEDCBA_987654_3210AB_0F1E2D, 1'b1, 1'b0, 1'b0,
             1'b0, 1'b0, 1'b1, "snapshot load");
        for (int i = 0; i < 24; i++) begin
            step('0, 1'b0, 1'b0, 1'b0, 1'b1, 1'b0, 1'b1,
                 "dump nibble sequence");
        end
        step('0, 1'b0, 1'b0, 1'b0, 1'b1, 1'b0, 1'b1,
             "dump completion");

        // Streams at the real cadence: busy for exactly 48 core ticks, and
        // the nibble order matches the spec's host reconstruction.
        run_stream(96'hFEDCBA_987654_3210AB_0F1E2D, 1'b0, 1'b0, "spec order stream");
        run_stream(96'h000001_100000_000010_800000, 1'b0, 1'b0, "sparse stream");
        run_stream('1, 1'b0, 1'b0, "all ones stream");
        run_stream('0, 1'b0, 1'b0, "all zero stream");

        // A hold preserves both the current nibble and busy state.
        step(96'h123456_789ABC_DEF012_345678, 1'b1, 1'b0, 1'b0,
             1'b0, 1'b0, 1'b1, "second snapshot");
        step('0, 1'b0, 1'b0, 1'b0, 1'b1, 1'b1, 1'b1,
             "held dump");
        step('0, 1'b0, 1'b0, 1'b0, 1'b1, 1'b0, 1'b1,
             "resume after hold");

        // Disabled edges hold all state, including the snapshot and index,
        // and ignore load / abort / clear requests.
        step(96'h0, 1'b0, 1'b0, 1'b0, 1'b1, 1'b0, 1'b0,
             "enable hold");
        step('1, 1'b1, 1'b1, 1'b1, 1'b1, 1'b0, 1'b0,
             "enable hold ignores load/abort/clear");
        step('0, 1'b0, 1'b0, 1'b0, 1'b1, 1'b0, 1'b1,
             "resume after enable hold");

        // Abort stops the stream immediately and a new load restarts at
        // nibble 0 of PE0.
        step('0, 1'b0, 1'b1, 1'b0, 1'b0, 1'b0, 1'b1,
             "dump abort");
        step('0, 1'b0, 1'b1, 1'b0, 1'b0, 1'b0, 1'b1,
             "abort while idle is a no-op");
        run_stream(96'h0A0B0C_0D0E0F_010203_040506, 1'b0, 1'b0, "restart after abort");

        // Abort mid-stream, then reload.
        step(96'hCAFE01_CAFE02_CAFE03_CAFE04, 1'b1, 1'b0, 1'b0,
             1'b0, 1'b0, 1'b1, "load before abort");
        repeat (7) step('0, 1'b0, 1'b0, 1'b0, 1'b1, 1'b0, 1'b1, "advance");
        step('0, 1'b0, 1'b1, 1'b0, 1'b0, 1'b0, 1'b1, "abort mid-stream");
        run_stream(96'h111111_222222_333333_444444, 1'b0, 1'b0, "reload after abort");

        // Clear zeros the stored snapshot while idle (words checked in
        // check_state), and idle output is zero.
        step('0, 1'b0, 1'b0, 1'b1, 1'b0, 1'b0, 1'b1,
             "clear output buffer");

        // Load has priority over stream advancement, clear and abort.
        step(96'hABCDEF_012345_6789AB_CDEF01, 1'b1, 1'b1, 1'b1,
             1'b1, 1'b0, 1'b1, "load command priority");

        // A phase-low edge does not advance the stream.
        step('0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b1,
             "non-output tick");

        // Streams interrupted by debug-style holds still deliver all 24
        // nibbles, in order, with the held one delivered after the pause.
        for (int n = 0; n < 50; n++)
            run_stream({$urandom(), $urandom(), $urandom()}, 1'b1, 1'($urandom_range(0, 1)), "stream with holds");

        // Reset in the middle of a dump clears busy, idx and the words.
        step(96'hDEADBE_EFDEAD_BEEFDE_ADBEEF, 1'b1, 1'b0, 1'b0,
             1'b0, 1'b0, 1'b1, "load before reset");
        repeat (5) step('0, 1'b0, 1'b0, 1'b0, 1'b1, 1'b0, 1'b1, "advance before reset");
        reset_dut();
        run_stream(96'h13579B_DF0246_8ACE13_579BDF, 1'b0, 1'b0, "stream after reset");
        run_stream(96'h24681A_CE0357_9BDF12_468ACE, 1'b0, 1'b1, "stream loaded on output tick");

        // Constrained-random: only inputs the controller can produce (no
        // LOAD or CLEAR while a dump is busy), with random phase/hold/en.
        for (int n = 0; n < 200000; n++) begin
            logic [95:0] rcap;
            logic rload, rabort, rclr;
            rcap = {$urandom(), $urandom(), $urandom()};
            rload  = !exp_busy && ($urandom_range(0, 15) == 0);
            rclr   = !exp_busy && !rload && ($urandom_range(0, 7) == 0);
            rabort = ($urandom_range(0, 63) == 0);
            step(rcap, rload, rabort, rclr, 1'($urandom_range(0, 1)),
                 $urandom_range(0, 3) == 0, $urandom_range(0, 7) != 0,
                 "constrained random");
        end

        $display("PASS: polite_outbuf verification completed with %0d checks", checks);
        $finish;
    end

endmodule
