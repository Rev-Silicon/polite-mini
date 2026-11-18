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
 024032     input  wire        clk,
%000009     input  wire        rst_n,
 001490     input  wire        en,
 011192     input  wire        phase,
 005012     input  wire        hold,       // debug freeze window active this tick
 006046     input  wire        load,       // legal DUMP_LOAD
 006302     input  wire        abort,      // DUMP_ABORT
 000722     input  wire        clr,        // CLEAR bit 2 accepted
 006729     input  wire [95:0] cap,        // {pe3, pe2, pe1, pe0} values to capture
 006046     output reg         busy,
 003600     output wire [3:0]  nib
        );
 001733     reg [23:0] word [0:3];
 002465     reg [4:0]  idx;                // 0..23
        
            // Which PE and which nibble inside its 24-bit word.
 011464     wire [1:0] pe_sel = (idx >= 5'd18) ? 2'd3 :
 011028                         (idx >= 5'd12) ? 2'd2 :
 010574                         (idx >= 5'd6)  ? 2'd1 : 2'd0;
~002465     wire [4:0] sub    = idx - {2'b00, pe_sel, 1'b0} - {1'b0, pe_sel, 2'b00}; // idx - 6*pe
 001743     wire [23:0] w     = word[pe_sel];
 002551     reg  [3:0]  wn;
 012021     always @(*) begin
 012021         case (sub[2:0])
 008575             3'd0:    wn = w[3:0];
 002078             3'd1:    wn = w[7:4];
 000341             3'd2:    wn = w[11:8];
 000296             3'd3:    wn = w[15:12];
 000308             3'd4:    wn = w[19:16];
 000423             default: wn = w[23:20];
                endcase
            end
        
 006315     assign nib = busy ? wn : 4'h0;
        
            // A legal DUMP_LOAD implies !busy, so step and load never coincide.
 004490     wire step = busy && phase && !hold;
        
            integer k;
 012020     always @(posedge clk or negedge rst_n) begin
 012010         if (!rst_n) begin
 000010             busy <= 1'b0;
 000010             idx  <= 5'd0;
 000040             for (k = 0; k < 4; k = k + 1)
 000040                 word[k] <= 24'd0;
 011191         end else if (en) begin
 008168             if (load) begin
 012092                 for (k = 0; k < 4; k = k + 1)
 012092                     word[k] <= cap[24*k +: 24];
 003023                 idx  <= 5'd0;
 003023                 busy <= 1'b1;
 008168             end else begin
 007779                 if (clr)
 001556                     for (k = 0; k < 4; k = k + 1)
 001556                         word[k] <= 24'd0;
 006472                 if (step)
 001696                     idx <= idx + 5'd1;
 004738                 if ((step && idx == 5'd23) || abort)
 003430                     busy <= 1'b0;
                    end
                end
            end
        
            wire _unused = &{1'b0, sub[4:3]};
        endmodule
        `default_nettype wire
        
