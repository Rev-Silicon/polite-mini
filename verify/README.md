shared/: tests valid for both configs (LOAD, RUN, illegal, CLEAR, DBG_FLAGS, DBG_PSUM) checked against golden/chip.c.
cfg_a/: DUMP_LOAD/DUMP_ABORT, dump∥RUN, CLEAR outbuf collision.  cfg_b/: DUMP_* illegal, RUN forbidden during debug read.
Planned: cocotb + iverilog/verilator, golden model via ctypes (build with -DCHIP_NO_MAIN -shared).
