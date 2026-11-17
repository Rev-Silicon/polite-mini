# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_polite_dbg.mk for the caller.

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
	Vtb_polite_dbg \
	Vtb_polite_dbg___024root__DepSet_h73b5d67a__0 \
	Vtb_polite_dbg___024root__DepSet_h73b5d67a__1 \
	Vtb_polite_dbg___024root__DepSet_hc8ea9ef5__0 \
	Vtb_polite_dbg___024root__DepSet_hbece5060__0 \
	Vtb_polite_dbg___024unit__03a__03adbg_txn__Vclpkg__DepSet_h9fdd4566__0 \
	Vtb_polite_dbg___024unit__03a__03adbg_txn__Vclpkg__DepSet_h1265c174__0 \
	Vtb_polite_dbg___024unit__03a__03adbg_read_txn__Vclpkg__DepSet_h49832ca7__0 \
	Vtb_polite_dbg___024unit__03a__03adbg_read_txn__Vclpkg__DepSet_hc89feab3__0 \
	Vtb_polite_dbg__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_polite_dbg___024root__Slow \
	Vtb_polite_dbg___024root__DepSet_h73b5d67a__0__Slow \
	Vtb_polite_dbg___024root__DepSet_hbece5060__0__Slow \
	Vtb_polite_dbg___024unit__Slow \
	Vtb_polite_dbg___024unit__DepSet_h09634f53__0__Slow \
	Vtb_polite_dbg___024unit__03a__03adbg_txn__Vclpkg__Slow \
	Vtb_polite_dbg___024unit__03a__03adbg_txn__Vclpkg__DepSet_h9fdd4566__0__Slow \
	Vtb_polite_dbg___024unit__03a__03adbg_txn__Vclpkg__DepSet_h1265c174__0__Slow \
	Vtb_polite_dbg___024unit__03a__03adbg_read_txn__Vclpkg__Slow \
	Vtb_polite_dbg___024unit__03a__03adbg_read_txn__Vclpkg__DepSet_h49832ca7__0__Slow \
	Vtb_polite_dbg___024unit__03a__03adbg_read_txn__Vclpkg__DepSet_hc89feab3__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_polite_dbg__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_polite_dbg__Syms \
	Vtb_polite_dbg__Trace__0__Slow \
	Vtb_polite_dbg__TraceDecls__0__Slow \

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
