
`timescale 1ns/1ps
/* verilator coverage_off */
module tb_polite_outbuf;
    import polite_outbuf_tb_pkg::*;
    import polite_output_tb_pkg::*;
    import polite_outbuf_sb_pkg::*;
    import polite_outmux_sb_pkg::*;
    localparam bit INTEGRATED=0;
    localparam realtime HALF_PERIOD=1000.0/(2.0*66.0);
    // Async reset is also sampled by this coverage monitor.
    /* verilator lint_off SYNCASYNCNET */
    logic clk,rst_n,en,phase,hold,load,abort,clr;
    /* verilator lint_on SYNCASYNCNET */
    logic [95:0] cap;
    wire busy;
    wire [3:0] nib;
    logic [3:0] dbg_nib;
    logic illegal,ovf;
    wire dbg_tick=hold && phase;
    wire [7:0] core_uo;
    wire [95:0] actual_snapshot={u_outbuf.word[3],u_outbuf.word[2],u_outbuf.word[1],u_outbuf.word[0]};

    polite_outbuf u_outbuf(.*);
    generate
        if(INTEGRATED) begin : g_mux
            polite_outmux u_outmux(.dbg_tick(dbg_tick),.dbg_nib(dbg_nib),
                .dump_busy(busy),.dump_nib(nib),.illegal(illegal),.ovf(ovf),.core_uo(core_uo));
        end else begin : g_no_mux
            assign core_uo=0;
        end
    endgenerate

    polite_outbuf_cov cov;
    polite_output_cov path_cov;
    polite_outbuf_txn txn;
    command_t command;
    string selected;
    int unsigned seed,num;
    bit sampling_active;
    int unsigned checking,inject;
    string active_scenario;
    polite_outbuf_scoreboard sb;
    polite_outmux_scoreboard mux_sb;

    function automatic bit stimulus_busy();
        return checking!=0 ? sb.expected_busy() : busy;
    endfunction
    function automatic int stimulus_position();
        return checking!=0 ? sb.next_position() : int'(u_outbuf.idx);
    endfunction
    task automatic check_outputs(string point);
        if(checking!=0) begin
            sb.check(busy,nib,actual_snapshot,{point,":",active_scenario},
                     inject!=0 && !INTEGRATED);
            if(INTEGRATED)
                mux_sb.check(dbg_tick,dbg_nib,sb.expected_busy(),sb.expected_nib(),
                             illegal,ovf,core_uo,{point,":",active_scenario},1,
                             inject!=0 && sb.expected_busy());
        end
    endtask
    initial begin clk=0; forever #(HALF_PERIOD) clk=~clk; end
    always @(posedge clk or negedge rst_n)
        if(!rst_n) phase<=0;
        else if(en) phase<=~phase;

    // Check start-of-tick ports before NBA, then advance only the independent
    // model and compare settled state. Coverage still samples actual DUT state.
    always @(posedge clk) begin
        if(sampling_active) begin
            if(rst_n) begin
                check_outputs("pre_edge");
                cov.sample_pre(en,phase,hold,busy,command,int'(u_outbuf.idx),nib);
                if(INTEGRATED && en) path_cov.sample(dbg_tick,busy,illegal,ovf,core_uo);
                if(checking!=0) sb.tick(en,phase,hold,command,cap,nib);
            end else if(checking!=0) sb.reset();
            #1;
            check_outputs("post_edge");
            cov.sample_post(busy,nib);
        end
    end

    task automatic cycle(bit enabled,bit frozen,command_t cmd,bit [95:0] data,
                         bit [3:0] debug_data=4'ha,bit [1:0] flag_data=0);
        @(negedge clk);
        en=enabled;hold=frozen;command=cmd;cap=data;
        load=(cmd==LOAD);abort=(cmd==ABORT);clr=(cmd==CLEAR);
        dbg_nib=debug_data;illegal=flag_data[1];ovf=flag_data[0];
        #1;check_outputs("between_edges");
        @(posedge clk);#2;
    endtask

    task automatic reset_dut(bit enabled=1);
        @(negedge clk);
        cov.reset_event(busy,enabled);
        en=enabled;load=0;abort=0;clr=0;command=IDLE;hold=0;
        rst_n=0;if(checking!=0) sb.reset();#1;
        check_outputs("async_reset");
        cov.sample_post(busy,nib);
        @(negedge clk);rst_n=1;
    endtask

    task automatic align_phase(bit desired);
        int guard;
        guard=0;
        while(phase!=desired && guard<4) begin
            cycle(1,0,IDLE,cap);
            guard++;
        end
        if(guard==4) $fatal(1,"STIMULUS_TIMEOUT phase alignment");
    endtask

    task automatic begin_dump(bit start_phase=0,bit frozen=0,bit [95:0] data=96'hfedcba_765432_abcdef_123456);
        if(stimulus_busy()) cycle(1,0,ABORT,cap);
        align_phase(start_phase);
        cycle(1,frozen,LOAD,data);
    endtask

    task automatic drain();
        int guard;
        guard=0;
        while(stimulus_busy() && guard<128) begin
            cycle(1,0,IDLE,~cap);
            guard++;
        end
        if(guard==128) $fatal(1,"STIMULUS_TIMEOUT bounded dump drain");
    endtask

    task automatic seek(int index);
        int guard;
        guard=0;
        while(stimulus_busy() && stimulus_position()!=index && guard<128) begin
            cycle(1,0,IDLE,cap);
            guard++;
        end
        if(guard==128) $fatal(1,"STIMULUS_TIMEOUT bounded position seek");
    endtask

    task automatic control_sweep();
        for(int b=0;b<2;b++) for(int p=0;p<2;p++)
        for(int e=0;e<2;e++) for(int h=0;h<2;h++) begin
            if(stimulus_busy()) cycle(1,0,ABORT,cap);
            if(b==1) begin_dump();
            align_phase(p[0]);
            cycle(e[0],h[0],IDLE,cap);
        end
        if(stimulus_busy()) cycle(1,0,ABORT,cap);
    endtask

    task automatic run_case(int id);
        active_scenario=scenario_name(id);
        $display("STIMULUS %s",active_scenario);
        case(id)
            0: begin reset_dut(0);reset_dut(1);cycle(1,0,IDLE,0);end
            1: begin
                for(int p=0;p<2;p++) begin begin_dump(p[0]);drain();end
            end
            2: begin begin_dump();drain();end
            3: begin begin_dump();repeat(60) cycle(1,0,IDLE,~cap);end
            4: begin
                for(int value=0;value<16;value++) begin
                    begin_dump(0,0,{24{4'(value)}});
                    drain();
                end
            end
            5: begin
                control_sweep();
                begin_dump();
                for(int p=0;p<2;p++) begin
                    align_phase(p[0]);
                    repeat(4) cycle(0,0,IDLE,~cap);
                    cycle(1,0,IDLE,cap);
                end
                drain();
            end
            6: begin
                begin_dump();
                seek(5);repeat(6) cycle(1,1,IDLE,~cap);
                seek(12);repeat(4) cycle(0,1,IDLE,~cap);
                drain();
            end
            7: begin
                for(int p=0;p<2;p++) begin
                    begin_dump(p[0],1);
                    repeat(6) cycle(1,1,IDLE,~cap);
                    drain();
                end
            end
            8: begin
                for(int b=0;b<2;b++) for(int h=0;h<2;h++) for(int p=0;p<2;p++) begin
                    if(stimulus_busy()) cycle(1,0,ABORT,cap);
                    if(b==1) begin_dump();
                    align_phase(p[0]);
                    cycle(1,h[0],ABORT,cap);
                end
            end
            9: begin
                if(stimulus_busy()) cycle(1,0,ABORT,cap);
                for(int p=0;p<2;p++) for(int h=0;h<2;h++) begin
                    align_phase(p[0]);cycle(1,h[0],CLEAR,~cap);
                end
            end
            10: begin
                for(int e=0;e<2;e++) begin
                    begin_dump();seek(8);reset_dut(e[0]);
                    begin_dump();drain();
                end
            end
            11: begin begin_dump();seek(23);repeat(8) cycle(1,1,IDLE,~cap);drain();end
            12: begin begin_dump();seek(23);cycle(1,1,ABORT,cap);end
            13: begin repeat(4) begin begin_dump();drain();end end
            14: begin
                for(int i=0;i<int'(num);i++) begin
                    txn.busy_at_start=stimulus_busy();
                    if(txn.randomize()==0) $fatal(1,"STIMULUS_ERROR randomization failed");
                    cycle(txn.en,txn.hold,txn.command,txn.cap,
                          txn.cap[3:0],txn.cap[5:4]);
                end
                drain();
            end
            15: begin
                begin_dump();seek(4);
                repeat(4) cycle(1,1,IDLE,~cap,dbg_nib+4'd1,2'b01);
                path_cov.debug_lengths[0]=1;drain();
            end
            16: begin
                begin_dump();seek(10);
                repeat(12) cycle(1,1,IDLE,~cap,dbg_nib+4'd1,2'b10);
                path_cov.debug_lengths[1]=1;drain();
            end
            17: begin
                for(int b=0;b<2;b++) for(int d=0;d<2;d++) for(int f=0;f<4;f++) begin
                    if(stimulus_busy()) cycle(1,0,ABORT,cap);
                    if(b==1) begin_dump();
                    repeat(4) cycle(1,d[0],IDLE,cap,4'(f),2'(f));
                end
                drain();
            end
            18: begin
                begin_dump();seek(23);repeat(12) cycle(1,1,IDLE,~cap,dbg_nib+4'd1);
                drain();
            end
            19: begin
                if(stimulus_busy()) cycle(1,0,ABORT,cap);
                repeat(4) cycle(1,1,IDLE,cap);
                repeat(2) cycle(1,0,IDLE,cap);
                begin_dump();repeat(4) cycle(1,1,IDLE,cap);
                repeat(2) cycle(1,0,IDLE,cap);
                cycle(1,1,ABORT,cap);
                repeat(2) cycle(1,0,IDLE,cap);
            end
            default: $fatal(1,"STIMULUS_ERROR unknown scenario");
        endcase
        cov.complete(id);
    endtask

    initial begin : stimulus
        int chosen,total;
        rst_n=0;en=0;hold=0;load=0;abort=0;clr=0;cap=0;
        command=IDLE;dbg_nib=0;illegal=0;ovf=0;
        sampling_active=0;seed=1;num=10000;selected="all";
        cov=new();path_cov=new();txn=new();sb=new();mux_sb=new();
        checking=1;inject=0;active_scenario="startup";
        if($value$plusargs("SEED=%d",seed)) begin end
        if($value$plusargs("NUM=%d",num)) begin end
        if($value$plusargs("TEST=%s",selected)) begin end
        if(num==0 || num>1000000) $fatal(1,"STIMULUS_ERROR NUM must be 1..1000000");
        if($value$plusargs("CHECK=%d",checking)) begin end
        if($value$plusargs("INJECT=%d",inject)) begin end
        if(checking>1 || inject>1 || (checking==0 && inject!=0))
            $fatal(1,"STIMULUS_ERROR CHECK/INJECT must be 0 or 1; injection needs checking");
        txn.srandom(seed);
        if($test$plusargs("WAVE")) begin
            $dumpfile("wave.fst");$dumpvars(0,tb_polite_outbuf);
        end
        $display("CONFIG checking=%0d integrated=%b seed=%0d num=%0d test=%s inject=%0d",checking,INTEGRATED,seed,num,selected,inject);
        total=INTEGRATED ? 20 : 15;
        chosen=-1;
        for(int i=0;i<total;i++) if(selected==scenario_name(i)) chosen=i;
        if(selected!="all" && chosen<0) $fatal(1,"STIMULUS_ERROR unknown TEST=%s",selected);
        reset_dut();
        sampling_active=1;
        if(selected=="all") for(int id=0;id<total;id++) run_case(id);
        else run_case(chosen);
        @(negedge clk);en=0;load=0;abort=0;clr=0;command=IDLE;#2;
        sampling_active=0;
        cov.report(INTEGRATED);
        if(INTEGRATED) path_cov.report();
        if(checking!=0) begin
            if(inject!=0 && !(INTEGRATED ? mux_sb.injected : sb.injected))
                $fatal(1,"INJECTION_NOT_REACHED");
            sb.report();
            if(INTEGRATED) mux_sb.report(1);
            $display("TEST PASS: all enabled checks completed without mismatches.");
        end else $display("STIMULUS COMPLETED: coverage only; no DUT correctness checks were performed.");
        $finish;
    end
    initial begin
        #20000000;
        $fatal(1,"STIMULUS_TIMEOUT global watchdog");
    end
endmodule
/* verilator coverage_on */
