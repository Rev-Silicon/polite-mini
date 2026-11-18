//      // verilator_coverage annotation
        `default_nettype none
        // POLITE Mini output buffer and dump sequencer.
        //
        // DUMP_LOAD copies four 24-bit values (cap) in one edge and starts a
        // 24-nibble stream: PE order 0..3 = (2,2)(2,1)(1,2)(1,1), low nibble first.
        // The nibble index advances once per output tick (phase = 1), and never
        // while the debug unit owns the pins (hold = ofz). Mirrors dump_idx /
        // dump_busy in golden/chip.c.
        //
        // nib is the nibble at the index at the START of the tick (dnib), or 0 when
        // no dump is busy.
        module polite_outbuf (
 070206     input  wire        clk,
 000027     input  wire        rst_n,
 004506     input  wire        en,
 032606     input  wire        phase,
 014815     input  wire        hold,       // debug freeze window active this tick
 018226     input  wire        load,       // legal DUMP_LOAD
 018996     input  wire        abort,      // DUMP_ABORT
 002018     input  wire        clr,        // CLEAR bit 2 accepted
 019605     input  wire [95:0] cap,        // {pe3, pe2, pe1, pe0} values to capture
 018226     output reg         busy,
 010558     output wire [3:0]  nib
        );
 005128     reg [23:0] word [0:3];
 006982     reg [4:0]  idx;                // 0..23
        
            // Which PE and which nibble inside its 24-bit word.
 033755     wire [1:0] pe_sel = (idx >= 5'd18) ? 2'd3 :
 032591                         (idx >= 5'd12) ? 2'd2 :
 031409                         (idx >= 5'd6)  ? 2'd1 : 2'd0;
~006982     wire [4:0] sub    = idx - {2'b00, pe_sel, 1'b0} - {1'b0, pe_sel, 2'b00}; // idx - 6*pe
 005193     wire [23:0] w     = word[pe_sel];
 007411     reg  [3:0]  wn;
 035118     always @(*) begin
 035118         case (sub[2:0])
 025714             3'd0:    wn = w[3:0];
 005921             3'd1:    wn = w[7:4];
 000914             3'd2:    wn = w[11:8];
 000780             3'd3:    wn = w[15:12];
 000780             3'd4:    wn = w[19:16];
 001009             default: wn = w[23:20];
                endcase
            end
        
 018292     assign nib = busy ? wn : 4'h0;
        
            // A legal DUMP_LOAD implies !busy, so step and load never coincide.
 012778     wire step = busy && phase && !hold;
        
            integer k;
 035115     always @(posedge clk or negedge rst_n) begin
 035085         if (!rst_n) begin
 000030             busy <= 1'b0;
 000030             idx  <= 5'd0;
 000120             for (k = 0; k < 4; k = k + 1)
 000120                 word[k] <= 24'd0;
 032603         end else if (en) begin
 023490             if (load) begin
 036452                 for (k = 0; k < 4; k = k + 1)
 036452                     word[k] <= cap[24*k +: 24];
 009113                 idx  <= 5'd0;
 009113                 busy <= 1'b1;
 023490             end else begin
 022413                 if (clr)
 004308                     for (k = 0; k < 4; k = k + 1)
 004308                         word[k] <= 24'd0;
 018758                 if (step)
 004732                     idx <= idx + 5'd1;
 013156                 if ((step && idx == 5'd23) || abort)
 010334                     busy <= 1'b0;
                    end
                end
            end
        
            wire _unused = &{1'b0, sub[4:3]};
        endmodule
        `default_nettype wire
        
