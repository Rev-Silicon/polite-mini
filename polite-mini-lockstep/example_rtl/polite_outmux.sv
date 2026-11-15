`default_nettype none
// EXAMPLE implementation derived from chip.c; not the user's original RTL.
module polite_outmux (
    input wire dbg_tick, dump_busy, illegal, ovf,
    input wire [3:0] dbg_nib, dump_nib,
    output wire [7:0] core_uo
);
    assign core_uo = {dbg_tick, dump_busy && !dbg_tick, illegal, ovf,
                     dbg_tick ? dbg_nib : dump_nib};
endmodule
`default_nettype wire
