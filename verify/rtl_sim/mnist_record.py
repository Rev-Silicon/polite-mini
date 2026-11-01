#!/usr/bin/env python3
"""Record host/mnist pin traffic through golden as "1 ui uio uo" lines for tb_adv. usage: mnist_record.py A|B out.txt [n]"""
import os, sys
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..", "host", "mnist"))
import chipio, run_smoke
f = open(sys.argv[2], "w"); orig = chipio.Driver.step
def step(self, d, ins):
    o = orig(self, d, ins); f.write(f"1 {int(d) & 0xff:02x} {ins:02x} {o:02x}\n"); return o
chipio.Driver.step = step
sys.argv = ["x", "--cfg", sys.argv[1], "--n", sys.argv[3] if len(sys.argv) > 3 else "2"]; run_smoke.main(); f.close()
