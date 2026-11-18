
`timescale 1ns/1ps
/* verilator coverage_off */
// Packages intentionally contain classes whose names differ from the filename.
/* verilator lint_off DECLFILENAME */
package polite_outbuf_tb_pkg;
    typedef enum bit [1:0] {IDLE, LOAD, ABORT, CLEAR} command_t;

    // Controller-legal commands only. The DUT's observed busy state constrains
    // stimulus; it is not an expected-value model.
    // Solver-backed members and the generated seed are read/written by class methods.
    /* verilator lint_off UNUSEDSIGNAL */
    /* verilator lint_off UNDRIVEN */
    class polite_outbuf_txn;
        rand bit en, hold;
        rand bit [95:0] cap;
        rand command_t command;
        rand int unsigned enable_roll, hold_roll, command_roll;
        bit busy_at_start;
        constraint legal {
            enable_roll inside {[0:99]};
            hold_roll inside {[0:99]};
            command_roll inside {[0:99]};
            en == (enable_roll < 85);
            hold == (hold_roll < 25);
            if (!en) command == IDLE;
            else if (busy_at_start) {
                if (command_roll < 3) command == ABORT;
                else command == IDLE;
            } else {
                if (command_roll < 20) command == LOAD;
                else if (command_roll < 30) command == CLEAR;
                else if (command_roll < 35) command == ABORT;
                else command == IDLE;
            }
        }
    endclass
    /* verilator lint_on UNUSEDSIGNAL */
    /* verilator lint_on UNDRIVEN */

    function automatic void show_bins(input string label_text,
                                       input bit [4095:0] hits, input int total);
        int count;
        count=0;
        for (int i=0;i<total;i++) if (hits[i]) count++;
        $display("COVERPOINT %s: %0d/%0d bins (%0.2f%%)",
                 label_text,count,total,100.0*real'(count)/real'(total));
        for (int i=0;i<total;i++) if (!hits[i])
            $display("UNCOVERED %s[%0d]",label_text,i);
    endfunction

    function automatic string scenario_name(input int id);
        case (id)
            0: return "reset_idle";
            1: return "load_phases";
            2: return "stream_order";
            3: return "capture_change";
            4: return "nibble_values";
            5: return "enable_pause";
            6: return "hold_pause";
            7: return "load_held";
            8: return "abort";
            9: return "clear_idle";
            10: return "reset_active";
            11: return "terminal_hold";
            12: return "terminal_abort";
            13: return "back_to_back";
            14: return "random";
            15: return "debug_8bit";
            16: return "debug_24bit";
            17: return "debug_flags";
            18: return "terminal_debug";
            19: return "handoff";
            default: return "unknown";
        endcase
    endfunction

    class polite_outbuf_cov;
        bit [19:0] scenarios='0;
        bit [23:0] positions='0;
        bit [15:0] nibble_values='0;
        bit [383:0] position_value='0;
        bit [15:0] controls='0;
        bit [3:0] load_phase_hold='0;
        bit [7:0] abort_context='0;
        bit [3:0] clear_phase_hold='0;
        bit [3:0] reset_context='0;
        bit [2:0] terminal_events='0;
        bit [1:0] observed_busy='0;
        int samples=0, output_samples=0, abnormal_index_samples=0;
        int idle_nonzero_samples=0, observed_busy_falls=0;
        bit previous_busy=0;

        function void sample_pre(bit en,bit phase,bit hold,bit busy,
                                 command_t command,int idx,bit [3:0] nib);
            samples++;
            controls[int'(en)*8+int'(phase)*4+int'(hold)*2+int'(busy)]=1;
            if (en && command==LOAD)
                load_phase_hold[int'(phase)*2+int'(hold)]=1;
            if (en && command==ABORT)
                abort_context[int'(busy)*4+int'(hold)*2+int'(phase)]=1;
            if (en && command==CLEAR)
                clear_phase_hold[int'(phase)*2+int'(hold)]=1;
            if (en && busy && phase && !hold) begin
                output_samples++;
                nibble_values[nib]=1;
                if (idx>=0 && idx<24) begin
                    positions[idx]=1;
                    position_value[idx*16+int'(nib)]=1;
                end else abnormal_index_samples++;
            end
            if (en && busy && idx==23) begin
                if (hold) terminal_events[0]=1;
                if (command==ABORT) terminal_events[1]=1;
                if (phase && !hold && command==IDLE) terminal_events[2]=1;
            end
        endfunction

        function void sample_post(bit busy,bit [3:0] nib);
            observed_busy[busy]=1;
            if (!busy && nib!=0) idle_nonzero_samples++;
            if (previous_busy && !busy) observed_busy_falls++;
            previous_busy=busy;
        endfunction

        function void reset_event(bit busy,bit en);
            reset_context[int'(busy)*2+int'(en)]=1;
        endfunction

        function void complete(int id);
            if(id<0 || id>=20) $fatal(1,"STIMULUS_ERROR invalid scenario id");
            scenarios[id]=1;
            $display("SCENARIO COMPLETED %s (stimulus completion only)",scenario_name(id));
        endfunction

        function void report(bit integrated);
            int total;
            total=integrated ? 20 : 15;
            $display("COVERAGE BEGIN outbuf");
            show_bins("scenarios",4096'(scenarios),total);
            for(int i=0;i<total;i++) if(!scenarios[i])
                $display("UNCOVERED_SCENARIO %s",scenario_name(i));
            show_bins("stream_position",4096'(positions),24);
            show_bins("stream_nibble_value",4096'(nibble_values),16);
            show_bins("position_x_value",4096'(position_value),384);
            show_bins("en_phase_hold_busy",4096'(controls),16);
            show_bins("load_phase_x_hold",4096'(load_phase_hold),4);
            show_bins("abort_busy_hold_phase",4096'(abort_context),8);
            show_bins("clear_phase_x_hold",4096'(clear_phase_hold),4);
            show_bins("reset_busy_x_enable",4096'(reset_context),4);
            show_bins("terminal_hold_abort_outputtick",4096'(terminal_events),3);
            show_bins("observed_busy",4096'(observed_busy),2);
            $display("OBSERVED samples=%0d output_ticks=%0d busy_falls=%0d abnormal_index=%0d idle_nonzero=%0d",
                samples,output_samples,observed_busy_falls,abnormal_index_samples,idle_nonzero_samples);
            $display("COVERAGE END outbuf");
        endfunction
    endclass
endpackage
/* verilator lint_on DECLFILENAME */
/* verilator coverage_on */
