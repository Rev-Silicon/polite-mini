# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_polite_ctrl.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb_polite_ctrl \
	Vtb_polite_ctrl___024root__DepSet_h0c6ca7f4__0 \
	Vtb_polite_ctrl___024root__DepSet_h0c6ca7f4__1 \
	Vtb_polite_ctrl___024root__DepSet_h0c6ca7f4__2 \
	Vtb_polite_ctrl___024root__DepSet_hc541ab1a__0 \
	Vtb_polite_ctrl___024root__DepSet_h0b98f4c8__0 \
	Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg__DepSet_hed3db4ab__0 \
	Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg__DepSet_haae7e5f1__0 \
	Vtb_polite_ctrl__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_polite_ctrl___024root__Slow \
	Vtb_polite_ctrl___024root__DepSet_h0c6ca7f4__0__Slow \
	Vtb_polite_ctrl___024root__DepSet_h0b98f4c8__0__Slow \
	Vtb_polite_ctrl___024unit__Slow \
	Vtb_polite_ctrl___024unit__DepSet_he3c5969f__0__Slow \
	Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg__Slow \
	Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg__DepSet_hed3db4ab__0__Slow \
	Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg__DepSet_haae7e5f1__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_polite_ctrl__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_polite_ctrl__Syms \
	Vtb_polite_ctrl__Trace__0__Slow \
	Vtb_polite_ctrl__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_cov \
	verilated_vcd_c \
	verilated_timing \
	verilated_random \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
