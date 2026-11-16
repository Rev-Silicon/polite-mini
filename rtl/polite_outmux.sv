`default_nettype none
// POLITE Mini output mux: one core tick's 8-bit output (C return value).
//   [7]   debug-nibble marker
//   [6]   dump-nibble marker (dump busy at start), forced 0 on a debug nibble
//   [5]   illegal (after this tick)
//   [4]   overflow (after this tick)
//   [3:0] debug nibble, dump nibble, or 0 when idle
module polite_outmux (
    input  wire       dbg_tick,
    input  wire [3:0] dbg_nib,
    input  wire       dump_busy,
    input  wire [3:0] dump_nib,
    input  wire       illegal,
    input  wire       ovf,
    output wire [7:0] core_uo
);
    assign core_uo = {dbg_tick,
                      dbg_tick ? 1'b0 : dump_busy,
                      illegal,
                      ovf,
                      dbg_tick ? dbg_nib : dump_nib};
endmodule
`default_nettype wire
