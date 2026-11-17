//      // verilator_coverage annotation
        `default_nettype none
        // POLITE Mini output mux: one core tick's 8-bit output (C return value).
        //   [7]   debug-nibble marker
        //   [6]   dump-nibble marker (dump busy at start), forced 0 on a debug nibble
        //   [5]   illegal (after this tick)
        //   [4]   overflow (after this tick)
        //   [3:0] debug nibble, dump nibble, or 0 when idle
        module polite_outmux (
 002050     input  wire       dbg_tick,
+002050  point: comment=dbg_tick hier=polite_outmux_tb.dut
 004095     input  wire [3:0] dbg_nib,
+004095  point: comment=dbg_nib[0] hier=polite_outmux_tb.dut
+002048  point: comment=dbg_nib[1] hier=polite_outmux_tb.dut
+001023  point: comment=dbg_nib[2] hier=polite_outmux_tb.dut
+000512  point: comment=dbg_nib[3] hier=polite_outmux_tb.dut
 000128     input  wire       dump_busy,
+000128  point: comment=dump_busy hier=polite_outmux_tb.dut
 000256     input  wire [3:0] dump_nib,
+000256  point: comment=dump_nib[0] hier=polite_outmux_tb.dut
+000127  point: comment=dump_nib[1] hier=polite_outmux_tb.dut
+000064  point: comment=dump_nib[2] hier=polite_outmux_tb.dut
+000031  point: comment=dump_nib[3] hier=polite_outmux_tb.dut
 000009     input  wire       illegal,
+000009  point: comment=illegal hier=polite_outmux_tb.dut
 000017     input  wire       ovf,
+000017  point: comment=ovf hier=polite_outmux_tb.dut
 002050     output wire [7:0] core_uo
+002050  point: comment=core_uo[0] hier=polite_outmux_tb.dut
+001025  point: comment=core_uo[1] hier=polite_outmux_tb.dut
+001026  point: comment=core_uo[2] hier=polite_outmux_tb.dut
+001025  point: comment=core_uo[3] hier=polite_outmux_tb.dut
+000017  point: comment=core_uo[4] hier=polite_outmux_tb.dut
+000009  point: comment=core_uo[5] hier=polite_outmux_tb.dut
+001026  point: comment=core_uo[6] hier=polite_outmux_tb.dut
+002050  point: comment=core_uo[7] hier=polite_outmux_tb.dut
        );
            assign core_uo = {dbg_tick,
                              dbg_tick ? 1'b0 : dump_busy,
                              illegal,
                              ovf,
                              dbg_tick ? dbg_nib : dump_nib};
        endmodule
        `default_nettype wire
        
