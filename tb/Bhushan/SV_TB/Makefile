# =============================================================================
# POLITE Mini -- Verilator flow (run from SV_TB)
#
#   make                 lint every module, then run ctrl and dbg
#   make lint            lint every design file, one by one, then a summary
#   make ctrl            ctrl testbench + code coverage (needs `make lint` first)
#   make dbg             dbg testbench + code coverage  (needs `make lint` first)
#   make ctrl STRICT=1   also refuse to run if the lint log has warnings
#   make dbg SEED=7      change the random seed
#   make dbg TEST=directed | TEST=random NUM=20000
#   make waves_ctrl / make waves_dbg
#   make clean           delete only the generated results; keeps results/,
#                        results/lint/, results/coverage/ and your own files/folders
#
# Output:
#   ../results/lint/lint_<module>.log
#   ../results/coverage/coverage_<module>/
#       tb_polite_<module>.log    testbench log
#       tb_polite_<module>.vcd    waveform
#       html/index.html           code coverage report
#       coverage_summary.log      code coverage summary
#       annotated/                RTL with hit counts (%000000 = never hit)
# =============================================================================
SHELL      := /bin/bash
DESIGN_DIR := ../design
RESULTS    := ../results
LINT_DIR   := $(RESULTS)/lint
COV_ROOT   := $(RESULTS)/coverage

SEED ?= 1
TEST ?= all
NUM  ?=

.PHONY: all lint lint_summary \
        lint_polite_ctrl lint_polite_dbg lint_polite_outbuf lint_polite_outmux \
        lint_polite_pe lint_top \
        ctrl dbg waves_ctrl waves_dbg cov_report clean

all: lint ctrl dbg

# =============================================================================
# 1. LINT -- every design file, every warning (-Wall -Wpedantic)
#    -Wno-fatal only lets Verilator finish and print everything; nothing is
#    hidden. Add waivers with: make lint WAIVE="-Wno-SYMRSVDWORD"
# =============================================================================
WAIVE      ?=
LINT_FLAGS := --lint-only -Wall -Wpedantic -Wno-fatal $(WAIVE)

lint: lint_polite_ctrl lint_polite_dbg lint_polite_outbuf lint_polite_outmux \
      lint_polite_pe lint_top
	@$(MAKE) --no-print-directory lint_summary

# Module 1
lint_polite_ctrl:
	@mkdir -p $(LINT_DIR)
	@echo "=== lint polite_ctrl"
	-verilator $(LINT_FLAGS) --top-module polite_ctrl $(DESIGN_DIR)/polite_ctrl.sv \
	    2>&1 | tee $(LINT_DIR)/lint_polite_ctrl.log

# Module 2
lint_polite_dbg:
	@mkdir -p $(LINT_DIR)
	@echo "=== lint polite_dbg"
	-verilator $(LINT_FLAGS) --top-module polite_dbg $(DESIGN_DIR)/polite_dbg.sv \
	    2>&1 | tee $(LINT_DIR)/lint_polite_dbg.log

# Module 3
lint_polite_outbuf:
	@mkdir -p $(LINT_DIR)
	@echo "=== lint polite_outbuf"
	-verilator $(LINT_FLAGS) --top-module polite_outbuf $(DESIGN_DIR)/polite_outbuf.sv \
	    2>&1 | tee $(LINT_DIR)/lint_polite_outbuf.log

# Module 4
lint_polite_outmux:
	@mkdir -p $(LINT_DIR)
	@echo "=== lint polite_outmux"
	-verilator $(LINT_FLAGS) --top-module polite_outmux $(DESIGN_DIR)/polite_outmux.sv \
	    2>&1 | tee $(LINT_DIR)/lint_polite_outmux.log

# Module 5
lint_polite_pe:
	@mkdir -p $(LINT_DIR)
	@echo "=== lint polite_pe"
	-verilator $(LINT_FLAGS) --top-module polite_pe $(DESIGN_DIR)/polite_pe.sv \
	    2>&1 | tee $(LINT_DIR)/lint_polite_pe.log

# Top level: all modules together (also checks the connections between them)
lint_top:
	@mkdir -p $(LINT_DIR)
	@echo "=== lint tt_um_polite_mini"
	-verilator $(LINT_FLAGS) --top-module tt_um_polite_mini \
	    $(DESIGN_DIR)/tt_um_polite_mini.sv $(DESIGN_DIR)/polite_ctrl.sv $(DESIGN_DIR)/polite_dbg.sv \
	    $(DESIGN_DIR)/polite_outbuf.sv $(DESIGN_DIR)/polite_outmux.sv $(DESIGN_DIR)/polite_pe.sv \
	    2>&1 | tee $(LINT_DIR)/lint_tt_um_polite_mini.log

lint_summary:
	@echo "=== lint summary (count per warning type, all modules)"
	@cat $(LINT_DIR)/*.log | grep -oE "%(Warning|Error)-[A-Z_]+" | sort | uniq -c | sort -rn
	@grep -qE "%(Warning|Error)" $(LINT_DIR)/*.log || echo "clean: no warnings or errors"

# -----------------------------------------------------------------------------
# Lint gate: a testbench may only be built/run after `make lint` has been run.
#   make ctrl / make dbg stop with an error if:
#     - the module's lint log does not exist      (lint not run, or after clean)
#     - the RTL file is newer than its lint log    (RTL changed since last lint)
#     - the lint log contains %Error               (STRICT=1: also %Warning)
# -----------------------------------------------------------------------------
STRICT    ?= 0
GATE_PAT  := $(if $(filter 1,$(STRICT)),%(Error|Warning),%Error)

.PHONY: check_lint_ctrl check_lint_dbg

check_lint_ctrl:
	@$(call lint_gate,polite_ctrl)

check_lint_dbg:
	@$(call lint_gate,polite_dbg)

define lint_gate
log=$(LINT_DIR)/lint_$(1).log; rtl=$(DESIGN_DIR)/$(1).sv; \
if [ ! -f $$log ]; then \
  echo "ERROR: lint has not been run for $(1). Run 'make lint' first."; exit 1; \
elif [ $$rtl -nt $$log ]; then \
  echo "ERROR: $$rtl changed after the last lint. Run 'make lint' again."; exit 1; \
elif grep -qE "$(GATE_PAT)" $$log; then \
  echo "ERROR: lint of $(1) failed. Fix $$log first."; exit 1; \
else echo "=== lint gate $(1): passed"; fi
endef

# =============================================================================
# 2. TESTBENCHES -- one target per module, each with code coverage
#    (assertions are inside each testbench file)
# =============================================================================
TB_VFLAGS := --binary --timing --assert --coverage \
             --trace --trace-structs --trace-params \
             -Wno-fatal -Wno-lint -Wno-style -j 0

# ---- Module 1: polite_ctrl --------------------------------------------------
CTRL_DIR := $(COV_ROOT)/coverage_ctrl

obj_ctrl/Vtb_polite_ctrl: polite_ctrl_tb.sv $(DESIGN_DIR)/polite_ctrl.sv Makefile | check_lint_ctrl
	verilator $(TB_VFLAGS) --top-module tb_polite_ctrl -Mdir obj_ctrl polite_ctrl_tb.sv

ctrl: obj_ctrl/Vtb_polite_ctrl
	@mkdir -p $(CTRL_DIR)
	set -o pipefail; ./obj_ctrl/Vtb_polite_ctrl +verilator+seed+$(SEED) +verilator+error+limit+1000 \
	    +verilator+coverage+file+$(CTRL_DIR)/ctrl.dat \
	    +dumpfile=$(CTRL_DIR)/tb_polite_ctrl.vcd 2>&1 | tee $(CTRL_DIR)/tb_polite_ctrl.log
	@$(MAKE) --no-print-directory cov_report NAME=ctrl DIR=$(CTRL_DIR)

waves_ctrl:
	gtkwave $(CTRL_DIR)/tb_polite_ctrl.vcd &

# ---- Module 2: polite_dbg ---------------------------------------------------
DBG_DIR := $(COV_ROOT)/coverage_dbg

obj_dbg/Vtb_polite_dbg: polite_dbg_tb.sv $(DESIGN_DIR)/polite_dbg.sv Makefile | check_lint_dbg
	verilator $(TB_VFLAGS) --top-module tb_polite_dbg -Mdir obj_dbg polite_dbg_tb.sv

dbg: obj_dbg/Vtb_polite_dbg
	@mkdir -p $(DBG_DIR)
	set -o pipefail; ./obj_dbg/Vtb_polite_dbg +verilator+seed+$(SEED) +verilator+error+limit+1000 \
	    +TEST=$(TEST) $(if $(NUM),+NUM=$(NUM)) \
	    +verilator+coverage+file+$(DBG_DIR)/dbg.dat \
	    +dumpfile=$(DBG_DIR)/tb_polite_dbg.vcd 2>&1 | tee $(DBG_DIR)/tb_polite_dbg.log
	@$(MAKE) --no-print-directory cov_report NAME=dbg DIR=$(DBG_DIR)

waves_dbg:
	gtkwave $(DBG_DIR)/tb_polite_dbg.vcd &

# ---- Module 3: polite_outbuf -- add when polite_outbuf_tb.sv exists ---------
# ---- Module 4: polite_outmux -- add when polite_outmux_tb.sv exists ---------
# ---- Module 5: polite_pe     -- add when polite_pe_tb.sv exists -------------
# ---- Top: tt_um_polite_mini  -- add when the top-level testbench exists -----
# Copy the ctrl block above and change: obj_<m>, tb_polite_<m>, <m>_tb.sv,
# $(DESIGN_DIR)/<file>, and <M>_DIR := $(COV_ROOT)/coverage_<m>.

# =============================================================================
# Code coverage report for one run (called by ctrl / dbg after the test)
#   NAME = ctrl | dbg,  DIR = its coverage_<name> folder
# =============================================================================
cov_report:
	@echo "=== code coverage $(NAME)"
	verilator_coverage --write-info $(DIR)/$(NAME).info $(DIR)/$(NAME).dat
	lcov --quiet --extract $(DIR)/$(NAME).info '*design*' -o $(DIR)/$(NAME)_rtl.info
	genhtml --quiet $(DIR)/$(NAME)_rtl.info -o $(DIR)/html
	@rm -rf $(DIR)/annotated
	verilator_coverage --annotate $(DIR)/annotated $(DIR)/$(NAME).dat
	@lcov --summary $(DIR)/$(NAME)_rtl.info 2>&1 | tee $(DIR)/coverage_summary.log
	@echo "HTML report: $(DIR)/html/index.html"

# =============================================================================
# Clean: deletes ONLY what the Makefile generates.
#   kept:    results/, results/lint/, results/coverage/ (the folders themselves)
#            any file or folder you add yourself in results/, results/lint/
#            or results/coverage/
#   deleted: build folders, the default lint logs, the default coverage_<m>/
#            folders. When you add a module, add its lint log to LINT_LOGS and
#            its coverage folder to COV_DIRS.
# =============================================================================
LINT_LOGS := $(addprefix $(LINT_DIR)/,lint_polite_ctrl.log lint_polite_dbg.log \
             lint_polite_outbuf.log lint_polite_outmux.log lint_polite_pe.log \
             lint_tt_um_polite_mini.log)
COV_DIRS  := $(CTRL_DIR) $(DBG_DIR)

clean:
	rm -rf obj_ctrl obj_dbg
	rm -f  $(LINT_LOGS)
	rm -rf $(COV_DIRS)
	rm -f  *:Zone.Identifier
