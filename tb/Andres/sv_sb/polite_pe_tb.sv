module polite_pe_tb;

    logic clk = 1'b0;
    logic rst_n;
    logic en;
    logic run_now;
    logic acc_en;
    logic clr;
    logic signed [3:0] a;
    logic signed [3:0] b;

    logic signed [23:0] psum;
    logic signed [7:0]  mul;
    logic signed [23:0] sum;
    logic               ovf;

    logic signed [23:0] exp_psum;
    logic signed [7:0]  exp_mul;
    logic signed [3:0]  random_a;
    logic signed [3:0]  random_b;
    logic               random_run;
    logic               random_acc;
    logic               random_clr;
    logic               random_en;
    integer             random_value;
    integer checks = 0;
    integer seed;

    polite_pe dut (
        .clk     (clk),
        .rst_n   (rst_n),
        .a       (a),
        .b       (b),
        .run_now (run_now),
        .acc_en  (acc_en),
        .clr     (clr),
        .en      (en),
        .psum    (psum),
        .mul     (mul),
        .sum     (sum),
        .ovf     (ovf)
    );

    always #5 clk = ~clk;

    function automatic logic signed [7:0] product_of(
        input logic signed [3:0] aa,
        input logic signed [3:0] bb
    );
        product_of = aa * bb;
    endfunction

    task automatic check_state(input string label);
        longint signed wide_sum;
        logic signed [23:0] expected_sum;
        logic expected_ovf;
        begin
            wide_sum = {{40{exp_psum[23]}}, exp_psum};
            wide_sum = wide_sum + {{56{exp_mul[7]}}, exp_mul};
            expected_sum = wide_sum[23:0];
            expected_ovf = (wide_sum > 8_388_607) || (wide_sum < -8_388_608);

            checks++;
            assert (psum === exp_psum)
                else $fatal(1, "%s: psum=%h expected=%h", label, psum, exp_psum);
            assert (mul === exp_mul)
                else $fatal(1, "%s: mul=%h expected=%h", label, mul, exp_mul);
            assert (sum === expected_sum)
                else $fatal(1, "%s: sum=%h expected=%h", label, sum, expected_sum);
            assert (ovf === expected_ovf)
                else $fatal(1, "%s: ovf=%b expected=%b", label, ovf, expected_ovf);
        end
    endtask

    task automatic step(
        input logic signed [3:0] next_a,
        input logic signed [3:0] next_b,
        input logic next_run_now,
        input logic next_acc_en,
        input logic next_clr,
        input logic next_en,
        input string label
    );
        logic signed [23:0] old_psum;
        logic signed [7:0] old_mul;
        longint signed wide_sum;
        begin
            @(negedge clk);
            a       = next_a;
            b       = next_b;
            run_now = next_run_now;
            acc_en  = next_acc_en;
            clr     = next_clr;
            en      = next_en;

            old_psum = exp_psum;
            old_mul  = exp_mul;
            @(posedge clk);
            #1;

            if (next_en) begin
                if (next_run_now)
                    exp_mul = product_of(next_a, next_b);

                // The PE adder has priority over clear if both are asserted.
                if (next_acc_en) begin
                    wide_sum = {{40{old_psum[23]}}, old_psum};
                    wide_sum = wide_sum + {{56{old_mul[7]}}, old_mul};
                    exp_psum = wide_sum[23:0];
                end else if (next_clr) begin
                    exp_psum = '0;
                end
            end

            check_state(label);
        end
    endtask

    task automatic reset_dut;
        begin
            rst_n = 1'b0;
            en = 1'b1;
            run_now = 1'b0;
            acc_en = 1'b0;
            clr = 1'b0;
            a = '0;
            b = '0;
            exp_psum = '0;
            exp_mul = '0;
            #1;
            check_state("asynchronous reset");
            repeat (2) @(posedge clk);
            #1;
            check_state("synchronous reset hold");
            rst_n = 1'b1;
        end
    endtask

    initial begin
        if ($test$plusargs("WAVES")) begin
            $dumpfile("polite_pe_tb.vcd");
            $dumpvars(0, polite_pe_tb);
        end

        if ($value$plusargs("SEED=%d", seed))
            void'($urandom(seed));

        reset_dut();

        // A disabled PE holds every register, including the product register.
        step(4'sd3, -4'sd2, 1'b1, 1'b0, 1'b0, 1'b0, "enable hold");
        step(4'sd3, -4'sd2, 1'b0, 1'b0, 1'b0, 1'b1, "resume after hold");

        // Exercise every signed int4 multiplication and its deferred add.
        for (int ia = -8; ia < 8; ia++) begin
            for (int ib = -8; ib < 8; ib++) begin
                step(ia[3:0], ib[3:0], 1'b1, 1'b0, 1'b0, 1'b1, "exhaustive product latch");
                step(ia[3:0], ib[3:0], 1'b0, 1'b1, 1'b0, 1'b1, "exhaustive accumulate");
            end
        end

        // Back-to-back RUNs must accumulate the previous product while
        // replacing the product register with the current one.
        step(4'sd2, 4'sd3, 1'b1, 1'b0, 1'b0, 1'b1, "pipeline run 1");
        step(-4'sd4, 4'sd5, 1'b1, 1'b1, 1'b0, 1'b1, "pipeline overlap");
        step(4'sd0, 4'sd0, 1'b0, 1'b1, 1'b0, 1'b1, "pipeline final accumulate");

        // Clear affects only psum; mul remains the last product. Add wins
        // over clear if both controls are asserted on the same edge.
        step(4'sd6, -4'sd7, 1'b1, 1'b0, 1'b0, 1'b1, "clear setup product");
        step(4'sd0, 4'sd0, 1'b0, 1'b1, 1'b1, 1'b1, "add precedence over clear");
        step(4'sd0, 4'sd0, 1'b0, 1'b0, 1'b1, 1'b1, "clear partial sum");

        // (-8)*(-8) = 64 and 64 * 131072 = 2**23, so the 131072nd add is the
        // first to wrap the signed 24-bit accumulator. check_state compares
        // sum/ovf with an independent wide-integer model on every step.
        step(-4'sd8, -4'sd8, 1'b1, 1'b0, 1'b0, 1'b1, "positive overflow product");
        for (int n = 0; n < 131071; n++)
            step(-4'sd8, -4'sd8, 1'b1, 1'b1, 1'b0, 1'b1, "positive overflow ramp");
        // psum = 64*131071 = 8388544, mul = 64: the pending add wraps.
        if (!ovf) $fatal(1, "positive overflow: ovf not raised at 2**23");
        step(4'sd0, 4'sd0, 1'b0, 1'b1, 1'b0, 1'b1, "positive overflow commit");
        if (psum !== 24'sh800000)
            $fatal(1, "positive wrap: psum=%h expected 800000", psum);

        // Exact positive boundary: 64*131070 + 56 + 7 = 8388607 must not flag.
        step(4'sd0, 4'sd0, 1'b0, 1'b0, 1'b1, 1'b1, "boundary clear");
        step(-4'sd8, -4'sd8, 1'b1, 1'b0, 1'b0, 1'b1, "boundary product");
        for (int n = 0; n < 131070; n++)
            step(-4'sd8, -4'sd8, 1'b1, 1'b1, 1'b0, 1'b1, "boundary ramp");
        step(-4'sd8, -4'sd7, 1'b1, 1'b1, 1'b0, 1'b1, "boundary +56");
        step(4'sd1, 4'sd7, 1'b1, 1'b1, 1'b0, 1'b1, "boundary +7");
        // psum = 8388600, mul = 7: sum = 2**23-1 fits.
        if (ovf || sum !== 24'sh7FFFFF)
            $fatal(1, "max boundary: sum=%h ovf=%b", sum, ovf);
        step(4'sd0, 4'sd0, 1'b0, 1'b1, 1'b0, 1'b1, "boundary commit");
        // psum = 2**23-1 and mul = 7 still held: the next add wraps.
        if (psum !== 24'sh7FFFFF || !ovf)
            $fatal(1, "max boundary: psum=%h ovf=%b", psum, ovf);
        step(4'sd0, 4'sd0, 1'b0, 1'b1, 1'b0, 1'b1, "wrap past max");
        if (psum !== 24'sh800006)
            $fatal(1, "wrap past max: psum=%h", psum);

        // Negative side: -56*149795 = -8388520, then -32 and -1 reach
        // -2**23 exactly without wrapping, and one more -1 wraps.
        step(4'sd0, 4'sd0, 1'b0, 1'b0, 1'b1, 1'b1, "negative clear");
        step(-4'sd8, 4'sd7, 1'b1, 1'b0, 1'b0, 1'b1, "negative product");
        for (int n = 0; n < 149795; n++)
            step(-4'sd8, 4'sd7, 1'b1, 1'b1, 1'b0, 1'b1, "negative ramp");
        step(-4'sd8, 4'sd4, 1'b1, 1'b1, 1'b0, 1'b1, "negative -32");
        // psum = -8388576, mul = -32: sum = -2**23 fits.
        if (ovf || sum !== 24'sh800000)
            $fatal(1, "min boundary: sum=%h ovf=%b", sum, ovf);
        step(-4'sd1, 4'sd1, 1'b1, 1'b1, 1'b0, 1'b1, "negative -1 pending");
        if (psum !== 24'sh800000 || !ovf)
            $fatal(1, "min boundary: psum=%h ovf=%b", psum, ovf);
        step(4'sd0, 4'sd0, 1'b0, 1'b1, 1'b0, 1'b1, "wrap past min");
        if (psum !== 24'sh7FFFFF)
            $fatal(1, "wrap past min: psum=%h", psum);

        // Hold must also ignore accumulate and clear on a non-zero psum/mul.
        step(4'sd5, 4'sd5, 1'b1, 1'b1, 1'b1, 1'b0, "hold ignores run/acc/clr");
        step(4'sd0, 4'sd0, 1'b0, 1'b0, 1'b1, 1'b0, "hold ignores clr");

        // Randomized controls with psum parked at +/- the wrap boundary so
        // both wrap directions are exercised under arbitrary overlap.
        step(4'sd0, 4'sd0, 1'b0, 1'b0, 1'b1, 1'b1, "random-phase clear");
        step(-4'sd8, -4'sd8, 1'b1, 1'b0, 1'b0, 1'b1, "random-phase product");
        for (int n = 0; n < 131071; n++)
            step(-4'sd8, -4'sd8, 1'b1, 1'b1, 1'b0, 1'b1, "random-phase ramp");
        for (int n = 0; n < 20000; n++) begin
            random_value = $urandom();
            random_a = random_value[3:0];
            random_b = random_value[7:4];
            random_run = random_value[8];
            random_acc = random_value[9] | random_value[10];
            random_clr = (random_value[24:16] == 9'd0);
            random_en  = random_value[14] | random_value[15];
            step(random_a, random_b, random_run, random_acc, random_clr,
                 random_en, "boundary randomized");
        end

        // Reset also verifies that both registered state and combinational
        // outputs return to zero after an overflowed computation.
        reset_dut();

        // Randomized controls cover arbitrary overlap, holds, and signed data.
        for (int n = 0; n < 2000; n++) begin
            random_value = $urandom();
            random_a = random_value[3:0];
            random_value = $urandom();
            random_b = random_value[3:0];
            random_value = $urandom_range(0, 1);
            random_run = random_value[0];
            random_value = $urandom_range(0, 1);
            random_acc = random_value[0];
            random_value = $urandom_range(0, 1);
            random_clr = random_value[0];
            random_value = $urandom_range(0, 1);
            random_en = random_value[0];
            step(random_a, random_b, random_run, random_acc, random_clr,
                 random_en, "randomized control/data");
        end

        $display("PASS: polite_pe verification completed with %0d checks", checks);
        $finish;
    end

endmodule
