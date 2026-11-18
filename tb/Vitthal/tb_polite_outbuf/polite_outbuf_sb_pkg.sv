
`timescale 1ns/1ps
/* verilator coverage_off */
/* verilator lint_off DECLFILENAME */
package polite_outbuf_sb_pkg;
    import polite_outbuf_tb_pkg::*;
    // An ordered queue of interface transactions, not the RTL's idx/PE decoder.
    class polite_outbuf_scoreboard;
        logic [3:0] pending[$];
        logic [95:0] snapshot,received;
        int unsigned received_count;
        int unsigned checkpoints=0,storage_checks=0,frames=0,nibbles=0;
        int unsigned loads=0,aborts=0,resets=0;
        bit injected=0;
        function new(); reset(); endfunction
        function void reset();
            pending.delete();snapshot=0;received=0;received_count=0;resets++;
        endfunction
        function bit expected_busy(); return pending.size()!=0; endfunction
        function logic [3:0] expected_nib();
            if(pending.size()==0) return 0;
            return pending[0];
        endfunction
        function int next_position();
            if(pending.size()==0) return 0;
            return 24-pending.size();
        endfunction
        function void check(logic actual_busy,logic [3:0] actual_nib,
                            logic [95:0] actual_snapshot,string context_text,
                            bit inject=0);
            logic [3:0] comparison;
            comparison=expected_nib();
            if(inject && !injected && expected_busy()) begin
                comparison[0]=~comparison[0];injected=1;
                $display("INJECT_ERROR domain=outbuf context=%s",context_text);
            end
            checkpoints++;
            if(actual_busy !== expected_busy() || actual_nib !== comparison)
                $fatal(1,"OUTBUF_MISMATCH t=%0t context=%s busy=%b expected_busy=%b nib=%h expected_nib=%h position=%0d injected=%b",
                    $time,context_text,actual_busy,expected_busy(),actual_nib,comparison,next_position(),injected);
            storage_checks++;
            // Private memory is observed only as actual data for the idle-clear
            // property. No DUT memory/index is used to generate an expectation.
            if(actual_snapshot !== snapshot)
                $fatal(1,"OUTBUF_STORAGE_MISMATCH t=%0t context=%s stored=%h expected=%h",
                    $time,context_text,actual_snapshot,snapshot);
        endfunction
        function void tick(bit enabled,bit phase,bit hold,command_t command,
                           logic [95:0] cap,logic [3:0] actual_nib);
            logic [3:0] discarded;
            if(!enabled) return;
            if(command==LOAD) begin
                if(expected_busy()) $fatal(1,"STIMULUS_ERROR load while model busy");
                snapshot=cap;received=0;received_count=0;pending.delete();loads++;
                for(int pe=0;pe<4;pe++) for(int nibble=0;nibble<6;nibble++)
                    pending.push_back(cap[24*pe+4*nibble +: 4]);
                return;
            end
            if(command==CLEAR) begin
                if(expected_busy()) $fatal(1,"STIMULUS_ERROR clear while model busy");
                snapshot=0;
            end
            if(expected_busy() && phase && !hold) begin
                received[4*received_count +: 4]=actual_nib;
                received_count++;nibbles++;
                discarded=pending.pop_front();
                if(actual_nib !== discarded)
                    $fatal(1,"STREAM_MISMATCH t=%0t nib=%h expected=%h",$time,actual_nib,discarded);
                if(received_count==24) begin
                    if(received !== snapshot)
                        $fatal(1,"FRAME_MISMATCH t=%0t got=%h expected=%h",$time,received,snapshot);
                    frames++;
                end
            end
            if(command==ABORT) begin pending.delete();aborts++;end
        endfunction
        function void report();
            if(checkpoints==0) $fatal(1,"NO_CHECKS_PERFORMED outbuf");
            $display("SCOREBOARD PASS outbuf checkpoints=%0d storage_checks=%0d completed_frames=%0d checked_nibbles=%0d loads=%0d aborts=%0d resets=%0d",
                checkpoints,storage_checks,frames,nibbles,loads,aborts,resets);
        endfunction
    endclass
endpackage
/* verilator lint_on DECLFILENAME */
/* verilator coverage_on */
