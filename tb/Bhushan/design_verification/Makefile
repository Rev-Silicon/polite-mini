# =============================================================================
# POLITE Mini top-level verification (tt_um_polite_mini) -- Verilator
# Run from polite_mini/dv.
#
#   make run TEST=polite_dump SEED=1     one test (waveform + coverage)
#   make run TEST=polite_dump SAVE=1     one test, then keep it in saved/
#   make all                             every test once (seed SEED), summary
#   make regress                         every test x SEEDS, summary, coverage
#   make regress TESTS="polite_dump polite_clear" SEEDS="1 2 3"
#   make regress JOBS=4                  same, 4 simulations in parallel
#   make save TEST=polite_dump SEED=1 [NAME=label]   keep an existing run
#   make cov                             merge coverage of all runs -> HTML
#   make waves TEST=polite_dump SEED=1   open a run's waveform
#   make list                            list the tests
#   make clean                           remove build + every run in results/top
#                                        EXCEPT results/top/saved/
#   make clean-saved                     remove results/top/saved/ as well
#
# Output: ../results/top/<test>_s<seed>/{run.log, wave.vcd, cov.dat}
#         ../results/top/all_summary.txt        (make all)
#         ../results/top/regress_summary.txt    (make regress)
#         ../results/top/coverage/html/index.html
#         ../results/top/saved/<name>/          (kept by make clean)
# =============================================================================
SHELL   := /bin/bash
DESIGN  := ../design
RESULTS := ../results/top
SAVED   := $(RESULTS)/saved

# Safety: never let this Makefile touch the unit-level results
ifeq ($(strip $(RESULTS)),)
  $(error RESULTS is empty)
endif
ifneq ($(filter %/results %/results/ %/lint %/lint/ %/coverage %/coverage/ %/SV_TB %/SV_TB/,$(RESULTS)),)
  $(error RESULTS=$(RESULTS) points at unit-level results; use ../results/top)
endif

RTL := $(DESIGN)/polite_ctrl.sv $(DESIGN)/polite_dbg.sv $(DESIGN)/polite_outbuf.sv \
       $(DESIGN)/polite_outmux.sv $(DESIGN)/polite_pe.sv $(DESIGN)/tt_um_polite_mini.sv
TB  := tb/tb_polite_mini.sv tb/polite_top_sva.sv

TEST  ?= polite_smoke
SEED  ?= 1
NUM   ?= 20000
WAVES ?= 1
SAVE  ?= 0
NAME  ?= $(TEST)_s$(SEED)
JOBS  ?= 1

# All tests named in verification_plan/polite_mini_testplan.hjson
TESTS ?= polite_smoke polite_reset polite_pad_latency polite_ena_hold \
         polite_mac_pipeline polite_overflow polite_dump polite_dump_abort \
         polite_clear polite_debug_reads polite_debug_pipeline polite_freeze_window \
         polite_debug_during_dump polite_illegal_ops polite_matmul polite_random
SEEDS ?= 1 7 42

VFLAGS := --binary --timing --assert --coverage --trace --trace-structs \
          -Wno-fatal -Wno-lint -Wno-style -j 0 --top-module tb_polite_mini

RUN_DIR = $(RESULTS)/$(TEST)_s$(SEED)

.PHONY: help list build run save all regress _sweep _one cov waves clean clean-saved

help:
	@sed -n '2,24p' Makefile | sed 's/^# \{0,1\}//'

list:
	@for t in $(TESTS); do echo $$t; done

build: obj/Vtb_polite_mini

obj/Vtb_polite_mini: $(RTL) $(TB) Makefile
	verilator $(VFLAGS) -Mdir obj $(RTL) $(TB)

# ---- 1. one test ------------------------------------------------------------
run: build
	@mkdir -p $(RUN_DIR)
	set -o pipefail; ./obj/Vtb_polite_mini +TEST=$(TEST) +NUM=$(NUM) \
	    +verilator+seed+$(SEED) +verilator+error+limit+1000 \
	    +verilator+coverage+file+$(RUN_DIR)/cov.dat \
	    $(if $(filter 1,$(WAVES)),+dumpfile=$(RUN_DIR)/wave.vcd,+nowaves) \
	    2>&1 | tee $(RUN_DIR)/run.log
	@if [ "$(SAVE)" = "1" ]; then $(MAKE) --no-print-directory save TEST=$(TEST) SEED=$(SEED) NAME=$(NAME); fi

# ---- keep a run: copied to saved/, which make clean never deletes ------------
save:
	@test -d $(RUN_DIR) || { echo "no run at $(RUN_DIR); run it first"; exit 1; }
	@test ! -e $(SAVED)/$(NAME) || { echo "$(SAVED)/$(NAME) exists; pick another NAME="; exit 1; }
	@mkdir -p $(SAVED)
	@cp -r $(RUN_DIR) $(SAVED)/$(NAME)
	@echo "saved: $(SAVED)/$(NAME)"

# ---- 2. every test once (one seed) -------------------------------------------
all: build
	@$(MAKE) --no-print-directory _sweep SEEDS="$(SEED)" SUMMARY=$(RESULTS)/all_summary.txt

# ---- 3. regression: every test x every seed, then coverage --------------------
regress: build
	@$(MAKE) --no-print-directory _sweep SUMMARY=$(RESULTS)/regress_summary.txt; rc=$$?; \
	 $(MAKE) --no-print-directory cov; exit $$rc

# Shared sweep: TESTS x SEEDS, JOBS at a time, waves off for speed
# (rerun a failing case with `make run TEST=.. SEED=..`).
_sweep:
	@mkdir -p $(RESULTS)
	@rm -f $(SUMMARY)
	@for t in $(TESTS); do \
		case " $(RANDOM_TESTS) " in *" $$t "*) ss="$(SEEDS)" ;; *) ss="$(firstword $(SEEDS))" ;; esac; \
		for s in $$ss; do echo "TEST=$$t SEED=$$s"; done; done | \
	    xargs -n 2 -P $(JOBS) $(MAKE) --no-print-directory _one SUMMARY=$(SUMMARY) NUM=$(NUM)
	@sort -o $(SUMMARY) $(SUMMARY)
	@echo "passed: $$(grep -c 'PASS$$' $(SUMMARY))   failed: $$(grep -c 'FAIL$$' $(SUMMARY))   summary: $(SUMMARY)"
	@! grep -q 'FAIL$$' $(SUMMARY)

_one:
	@$(MAKE) --no-print-directory run TEST=$(TEST) SEED=$(SEED) WAVES=0 SAVE=0 > /dev/null 2>&1 || true
	@log=$(RUN_DIR)/run.log; \
	 if grep -q -- "-> PASS" $$log 2>/dev/null && ! grep -q "%Error" $$log; then r=PASS; else r=FAIL; fi; \
	 printf "%-26s seed %-6s %s\n" $(TEST) $(SEED) $$r | tee -a $(SUMMARY)

# ---- coverage ------------------------------------------------------------------
cov:
	@mkdir -p $(RESULTS)/coverage
	verilator_coverage --write $(RESULTS)/coverage/all.dat $(wildcard $(RESULTS)/*_s*/cov.dat)
	verilator_coverage --write-info $(RESULTS)/coverage/all.info $(RESULTS)/coverage/all.dat
	lcov --quiet --extract $(RESULTS)/coverage/all.info '*/design/*' -o $(RESULTS)/coverage/rtl.info
	genhtml --quiet $(RESULTS)/coverage/rtl.info -o $(RESULTS)/coverage/html
	@lcov --summary $(RESULTS)/coverage/rtl.info 2>&1 | tee $(RESULTS)/coverage/summary.log
	@echo "cover points (hits):"
	@grep -a "c_" $(RESULTS)/coverage/all.dat | grep -ao "c_[a-z_]*' [0-9]*\|c_[a-z_0-9]*" | sort | uniq | head -20 || true
	@echo "HTML: $(RESULTS)/coverage/html/index.html"

waves:
	gtkwave $(RUN_DIR)/wave.vcd &

# ---- 4. clean: build + everything in results/top except saved/ ---------------
clean:
	rm -rf obj
	@if [ -d "$(RESULTS)" ]; then \
	    find "$(RESULTS)" -mindepth 1 -maxdepth 1 ! -name saved -exec rm -rf {} + ; \
	    echo "cleaned $(RESULTS) (kept $(SAVED))"; \
	fi

clean-saved:
	rm -rf "$(SAVED)"