.DEFAULT_GOAL := test
SHELL := /bin/bash
VERILATOR ?= verilator
GTKWAVE ?= gtkwave
CC ?= cc
SEED ?= 1347374153
CYCLES ?= 20000
CONFIG ?= 1
JOBS ?= 2
ROOT := $(abspath .)
GOLDEN_DIR ?= $(ROOT)/golden
BLOCKS := polite_ctrl.sv polite_pe.sv polite_outbuf.sv polite_dbg.sv polite_outmux.sv
ifeq ($(strip $(RTL_DIR)),)
SRC := $(ROOT)/example_rtl
MODE := example
TOP_DEFAULT := $(ROOT)/rtl/tt_um_polite_mini.sv
else
SRC := $(abspath $(RTL_DIR))
MODE := project-$(shell printf '%s' '$(SRC)' | cksum | cut -d' ' -f1)
TOP_DEFAULT := $(if $(wildcard $(SRC)/tt_um_polite_mini.sv),$(SRC)/tt_um_polite_mini.sv,$(ROOT)/rtl/tt_um_polite_mini.sv)
endif
TOP ?= $(TOP_DEFAULT)
ifeq ($(filter $(CONFIG),0 1),)
$(error CONFIG must be 0 or 1)
endif
BUILD_ROOT ?= build
DIR := $(BUILD_ROOT)/$(MODE)/buf$(CONFIG)
BIN := $(DIR)/Vsim_top
RTL := $(TOP) $(addprefix $(SRC)/,$(BLOCKS))
GOLDEN := $(abspath $(GOLDEN_DIR))
EXTRA_VFLAGS ?=
ARGS ?=

.PHONY: test build check directed exhaustive wrap random wave view golden-test clean help
# Each config elaborates separately; a failed command fails Make.
test: golden-test
	$(MAKE) --no-print-directory check CONFIG=1
	$(MAKE) --no-print-directory check CONFIG=0
build: $(BIN)
check: $(BIN)
	@echo 'Sources: $(SRC) ; top: $(TOP)'
	$(BIN) --suite all --seed $(SEED) --cycles $(CYCLES) --stats $(DIR)/stats.csv --coverage $(DIR)/coverage.dat $(ARGS)
directed exhaustive wrap random: $(BIN)
	$(BIN) --suite $@ --seed $(SEED) --cycles $(CYCLES) --stats $(DIR)/$@.csv $(ARGS)
wave: $(BIN)
	$(BIN) --suite directed --trace $(DIR)/polite.vcd --stats $(DIR)/directed.csv $(ARGS)
	$(GTKWAVE) $(DIR)/polite.vcd waves/polite.gtkw
view:
	$(GTKWAVE) $(DIR)/polite.vcd waves/polite.gtkw

golden-test: $(DIR)/chip_test
	$(DIR)/chip_test
$(DIR)/chip_test: $(GOLDEN)/chip.c $(GOLDEN)/chip.h Makefile
	mkdir -p $(DIR)
	$(CC) -std=c11 -O2 -Wall -Wextra -I$(GOLDEN) $(GOLDEN)/chip.c -o $@
$(DIR)/chip.o: $(GOLDEN)/chip.c $(GOLDEN)/chip.h Makefile
	mkdir -p $(DIR)
	$(CC) -std=c11 -O2 -Wall -Wextra -DCHIP_NO_MAIN -I$(GOLDEN) -c $(GOLDEN)/chip.c -o $@
$(BIN): $(RTL) tb/sim_top.sv tb/testbench.cpp $(GOLDEN)/chip.h $(DIR)/chip.o Makefile
	$(VERILATOR) --cc --exe --build -j $(JOBS) --trace --coverage --assert \
	  --timescale 1ps/1ps --top-module sim_top -GHAS_OUTBUF="1'b$(CONFIG)" \
	  --Mdir $(DIR) -I$(SRC) $(EXTRA_VFLAGS) \
	  -CFLAGS '-std=c++17 -O2 -DHAS_BUFFER=$(CONFIG) -I$(GOLDEN)' \
	  $(RTL) $(ROOT)/tb/sim_top.sv $(ROOT)/tb/testbench.cpp $(abspath $(DIR)/chip.o)
clean:
	rm -rf -- $(BUILD_ROOT)
help:
	@echo 'make test | directed | exhaustive | wrap | random | wave [CONFIG=0|1]'
	@echo 'Use RTL_DIR=/path/to/actual/rtl to test your implementation.'
	@echo 'ARGS="--trace path.vcd --record pins.txt --pins-only" adds runner options.'
