
`timescale 1ns/1ps
/* verilator coverage_off */
/* verilator lint_off DECLFILENAME */
package polite_outmux_sb_pkg;
    class polite_outmux_scoreboard;
        int unsigned checks=0;
        bit injected=0;
        // Literal bit meanings from the interface, expressed independently of
        // the DUT concatenation. Idle data comes from its dump_nib input.
        function automatic logic [7:0] predict(bit debug_tick,logic [3:0] debug_nib,
                                               bit dump_busy,logic [3:0] dump_nib,
                                               bit illegal,bit ovf);
            logic [7:0] value;
            value=0;
            if(debug_tick) begin value[7]=1;value[3:0]=debug_nib;end
            else begin value[6]=dump_busy;value[3:0]=dump_nib;end
            value[5]=illegal;value[4]=ovf;
            return value;
        endfunction
        function void check(bit debug_tick,logic [3:0] debug_nib,
                            bit dump_busy,logic [3:0] dump_nib,
                            bit illegal,bit ovf,logic [7:0] actual,
                            string context_text,bit integrated=0,bit inject=0);
            logic [7:0] expected;
            expected=predict(debug_tick,debug_nib,dump_busy,dump_nib,illegal,ovf);
            if(inject && !injected) begin
                expected[0]=~expected[0];injected=1;
                $display("INJECT_ERROR domain=%s context=%s",integrated ? "output_path" : "outmux",context_text);
            end
            checks++;
            if(actual !== expected) begin
                if(integrated)
                    $fatal(1,"OUTPUT_PATH_MISMATCH t=%0t context=%s uo=%h expected=%h injected=%b",
                        $time,context_text,actual,expected,injected);
                else
                    $fatal(1,"OUTMUX_MISMATCH t=%0t context=%s uo=%h expected=%h injected=%b",
                        $time,context_text,actual,expected,injected);
            end
        endfunction
        function void report(bit integrated=0);
            if(checks==0) $fatal(1,"NO_CHECKS_PERFORMED outmux");
            $display("SCOREBOARD PASS %s checks=%0d",integrated ? "output_path" : "outmux",checks);
        endfunction
    endclass
endpackage
/* verilator lint_on DECLFILENAME */
/* verilator coverage_on */
