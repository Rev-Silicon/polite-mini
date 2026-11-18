
# Run from tb/Vitthal. Forward tool paths through normal make variables.
SHELL := /bin/bash
.DEFAULT_GOAL := help
MODULES := tb_polite_outbuf tb_polite_outmux tb_output_path
SEED ?= 1
TEST ?= all
WAVE ?= 0
NUM ?= 10000
JOBS ?= 4
.PHONY: help build run cov lint clean
help:
	@echo "make build | run | cov | lint | clean"
	@echo "SEED=1 TEST=all NUM=10000 WAVE=0 JOBS=4"
	@echo "Set VERILATOR and VERILATOR_COVERAGE to modern matching tools."
build run cov lint clean:
	@set -e; for module in $(MODULES); do $(MAKE) -C $$module $@ SEED=$(SEED) TEST=$(TEST) WAVE=$(WAVE) NUM=$(NUM) JOBS=$(JOBS); done
