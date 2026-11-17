//      // verilator_coverage annotation
        module polite_outmux_tb;
        
 002050     logic       dbg_tick;
+002050  point: comment=dbg_tick hier=polite_outmux_tb
 004095     logic [3:0] dbg_nib;
+004095  point: comment=dbg_nib[0] hier=polite_outmux_tb
+002048  point: comment=dbg_nib[1] hier=polite_outmux_tb
+001023  point: comment=dbg_nib[2] hier=polite_outmux_tb
+000512  point: comment=dbg_nib[3] hier=polite_outmux_tb
 000128     logic       dump_busy;
+000128  point: comment=dump_busy hier=polite_outmux_tb
 000256     logic [3:0] dump_nib;
+000256  point: comment=dump_nib[0] hier=polite_outmux_tb
+000127  point: comment=dump_nib[1] hier=polite_outmux_tb
+000064  point: comment=dump_nib[2] hier=polite_outmux_tb
+000031  point: comment=dump_nib[3] hier=polite_outmux_tb
 000009     logic       illegal;
+000009  point: comment=illegal hier=polite_outmux_tb
 000017     logic       ovf;
+000017  point: comment=ovf hier=polite_outmux_tb
 002050     logic [7:0] core_uo;
+002050  point: comment=core_uo[0] hier=polite_outmux_tb
+001025  point: comment=core_uo[1] hier=polite_outmux_tb
+001026  point: comment=core_uo[2] hier=polite_outmux_tb
+001025  point: comment=core_uo[3] hier=polite_outmux_tb
+000017  point: comment=core_uo[4] hier=polite_outmux_tb
+000009  point: comment=core_uo[5] hier=polite_outmux_tb
+001026  point: comment=core_uo[6] hier=polite_outmux_tb
+002050  point: comment=core_uo[7] hier=polite_outmux_tb
            integer checks = 0;
        
            polite_outmux dut (
                .dbg_tick  (dbg_tick),
                .dbg_nib   (dbg_nib),
                .dump_busy (dump_busy),
                .dump_nib  (dump_nib),
                .illegal   (illegal),
                .ovf       (ovf),
                .core_uo   (core_uo)
            );
        
            task automatic check(
                input logic expected_dbg_tick,
                input logic [3:0] expected_nib,
                input logic expected_dump_busy,
                input logic expected_illegal,
                input logic expected_ovf,
                input string label
            );
                logic [7:0] expected;
                begin
                    expected = {
                        expected_dbg_tick,
                        expected_dbg_tick ? 1'b0 : expected_dump_busy,
                        expected_illegal,
                        expected_ovf,
                        expected_nib
                    };
                    #1;
                    checks++;
                    assert (core_uo === expected)
                        else $fatal(1, "%s: core_uo=%h expected=%h", label, core_uo, expected);
                end
            endtask
        
            initial begin
                dbg_tick = 1'b0;
                dbg_nib = 4'h0;
                dump_busy = 1'b0;
                dump_nib = 4'h0;
                illegal = 1'b0;
                ovf = 1'b0;
                check(1'b0, 4'h0, 1'b0, 1'b0, 1'b0, "idle");
        
                for (int flags = 0; flags < 16; flags++) begin
                    illegal = flags[1];
                    ovf = flags[0];
                    for (int dump = 0; dump < 16; dump++) begin
                        dump_busy = dump[1];
                        dump_nib = dump[3:0];
                        for (int debug = 0; debug < 16; debug++) begin
                            dbg_tick = debug[1];
                            dbg_nib = debug[3:0];
                            check(dbg_tick, dbg_tick ? dbg_nib : dump_nib,
                                  dump_busy, illegal, ovf, "exhaustive mux inputs");
                        end
                    end
                end
        
                // Literal expectations written from SPEC section 2 (not from the RTL
                // formula): [7] debug marker, [6] dump marker (0 on a debug nibble),
                // [5] illegal, [4] overflow, [3:0] nibble.
                dbg_tick = 1'b0; dump_busy = 1'b1; illegal = 1'b0; ovf = 1'b0;
                dump_nib = 4'hA; dbg_nib = 4'h5;
                #1; assert (core_uo === 8'h4A) else $fatal(1, "dump nibble: %h", core_uo);
                dbg_tick = 1'b1;
                #1; assert (core_uo === 8'h85) else $fatal(1, "debug nibble: %h", core_uo);
                illegal = 1'b1; ovf = 1'b1;
                #1; assert (core_uo === 8'hB5) else $fatal(1, "debug nibble + flags: %h", core_uo);
                dbg_tick = 1'b0; dump_busy = 1'b0;
                #1; assert (core_uo === 8'h3A) else $fatal(1, "idle marker + flags: %h", core_uo);
                checks += 4;
        
                $display("PASS: polite_outmux verification completed with %0d checks", checks);
                $finish;
            end
        
        endmodule
        
