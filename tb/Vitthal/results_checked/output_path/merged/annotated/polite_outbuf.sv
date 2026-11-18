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
 072094     input  wire        clk,
 000027     input  wire        rst_n,
 004506     input  wire        en,
 033550     input  wire        phase,
 014884     input  wire        hold,       // debug freeze window active this tick
 018298     input  wire        load,       // legal DUMP_LOAD
 019044     input  wire        abort,      // DUMP_ABORT
 002018     input  wire        clr,        // CLEAR bit 2 accepted
 020043     input  wire [95:0] cap,        // {pe3, pe2, pe1, pe0} values to capture
 018298     output reg         busy,
 010852     output wire [3:0]  nib
        );
 005129     reg [23:0] word [0:3];
 007339     reg [4:0]  idx;                // 0..23
        
            // Which PE and which nibble inside its 24-bit word.
 034393     wire [1:0] pe_sel = (idx >= 5'd18) ? 2'd3 :
 033085                         (idx >= 5'd12) ? 2'd2 :
 031723                         (idx >= 5'd6)  ? 2'd1 : 2'd0;
~007339     wire [4:0] sub    = idx - {2'b00, pe_sel, 1'b0} - {1'b0, pe_sel, 2'b00}; // idx - 6*pe
 005219     wire [23:0] w     = word[pe_sel];
 007745     reg  [3:0]  wn;
 036062     always @(*) begin
 036062         case (sub[2:0])
 025884             3'd0:    wn = w[3:0];
 006065             3'd1:    wn = w[7:4];
 001034             3'd2:    wn = w[11:8];
 000888             3'd3:    wn = w[15:12];
 000924             3'd4:    wn = w[19:16];
 001267             default: wn = w[23:20];
                endcase
            end
        
 019078     assign nib = busy ? wn : 4'h0;
        
            // A legal DUMP_LOAD implies !busy, so step and load never coincide.
 013486     wire step = busy && phase && !hold;
        
            integer k;
 036059     always @(posedge clk or negedge rst_n) begin
 036029         if (!rst_n) begin
 000030             busy <= 1'b0;
 000030             idx  <= 5'd0;
 000120             for (k = 0; k < 4; k = k + 1)
 000120                 word[k] <= 24'd0;
 033547         end else if (en) begin
 024398             if (load) begin
 036596                 for (k = 0; k < 4; k = k + 1)
 036596                     word[k] <= cap[24*k +: 24];
 009149                 idx  <= 5'd0;
 009149                 busy <= 1'b1;
 024398             end else begin
 023321                 if (clr)
 004308                     for (k = 0; k < 4; k = k + 1)
 004308                         word[k] <= 24'd0;
 019330                 if (step)
 005068                     idx <= idx + 5'd1;
 014028                 if ((step && idx == 5'd23) || abort)
 010370                     busy <= 1'b0;
                    end
                end
            end
        
            wire _unused = &{1'b0, sub[4:3]};
        endmodule
        `default_nettype wire
        
