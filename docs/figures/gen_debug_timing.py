#!/usr/bin/env python3
"""Generate debug_timing.svg for the 33 MHz pad-out (uo_out updates once per beat = 2 clk)."""
F = 'font-family="Helvetica,Arial,sans-serif"'
X0, W, N = 230, 76, 9            # first edge x, px per clock, edges shown (k .. k+8)
out = []
def t(x, y, s, size=10, anchor="end", bold=False, fill="#333"):
    out.append(f'<text x="{x}" y="{y}" font-size="{size}" text-anchor="{anchor}" font-weight="{"bold" if bold else "normal"}" fill="{fill}" {F}>{s}</text>')
def ex(i): return X0 + W * i
def bus(y, segs):  # segs: (start_edge, end_edge, label, style)
    for a, b, lab, st in segs:
        x1, x2 = ex(a) + 4, ex(b) - 4; fill, stroke = {"op": ("#dbe8f7", "#4a7fc1"), "byte": ("#fde2c8", "#d9822b"), "live": ("#fff", "#999")}[st]
        out.append(f'<path d="M{x1},{y} L{x1+6},{y-10} L{x2-6},{y-10} L{x2},{y} L{x2-6},{y+10} L{x1+6},{y+10} z" fill="{fill}" stroke="{stroke}"/>')
        t((x1 + x2) / 2, y + 4, lab, 9.5, "middle")
def panel(y, title, tick0, uio, core, uo):
    t(60, y, title, 12, "start", True)
    for i in range(N): t(ex(i), y + 22, "edge k" + (f"+{i}" if i else ""), 9.5, "middle", fill="#888")
    t(175, y + 46, "clk"); d = f"M{ex(0)-30},{y+52}"
    for i in range(N - 1): d += f" L{ex(i)},{y+52} L{ex(i)},{y+36} L{ex(i)+W/2},{y+36} L{ex(i)+W/2},{y+52}"
    out.append(f'<path d="{d}" fill="none" stroke="#777"/>')
    t(175, y + 76, "output tick")
    for i in range(N):
        if (i + tick0) % 2: out.append(f'<circle cx="{ex(i)}" cy="{y+72}" r="5" fill="#2a8a3a"/>')
    rows = [("uio_in", uio), ("core output", core), ("uo_out", uo)]
    for j, (name, segs) in enumerate(rows): t(175, y + 104 + 30 * j, name); bus(y + 100 + 30 * j, segs)
    for i in range(N): out.append(f'<line x1="{ex(i)}" y1="{y+30}" x2="{ex(i)}" y2="{y+178}" stroke="#ddd" stroke-dasharray="2,3"/>')
# Panel A: core edge k+1 is an output tick (tick0=0 -> edges k+1,k+3,.. ticks)
panel(50, "DEBUG_MULTIPLY, edge k+1 is an output tick: byte on uo_out after edge k+2, held 2 clocks", 0,
      [(-0.7, 0, "0x9p", "op"), (0, 8, "NOP", "live")],
      [(0, 1, "live", "live"), (1, 3, "product (2 edges)", "byte"), (3, 8, "live", "live")],
      [(0, 2, "live", "live"), (2, 4, "product[7:0]", "byte"), (4, 8, "live", "live")])
panel(250, "DEBUG_MULTIPLY, edge k+1 is not an output tick: byte after edge k+3, held 2 clocks", 1,
      [(-0.7, 0, "0x9p", "op"), (0, 8, "NOP", "live")],
      [(0, 1, "live", "live"), (1, 3, "product (2 edges)", "byte"), (3, 8, "live", "live")],
      [(0, 1, "live", "live"), (1, 3, "previous beat", "live"), (3, 5, "product[7:0]", "byte"), (5, 8, "live", "live")])
panel(450, "DEBUG_PARTIAL_SUM: 3 opcodes one beat apart, one byte per beat (no burst)", 0,
      [(-0.7, 0, "byte 0", "op"), (0, 1, "NOP", "live"), (1, 2, "byte 1", "op"), (2, 3, "NOP", "live"), (3, 4, "byte 2", "op"), (4, 8, "NOP", "live")],
      [(0, 1, "live", "live"), (1, 3, "sum[7:0]", "byte"), (3, 5, "sum[15:8]", "byte"), (5, 7, "sum[23:16]", "byte"), (7, 8, "live", "live")],
      [(0, 2, "live", "live"), (2, 4, "sum[7:0]", "byte"), (4, 6, "sum[15:8]", "byte"), (6, 8, "sum[23:16]", "byte")])
# uio_in lanes in panel 3 are applied before edges k, k+2, k+4: draw as pin-time segments ending at those edges
t(60, 655, "Pins change at most once per 2 clocks (33 MHz). The opcode is sampled at edge k and executes at edge k+1. The core holds the frozen byte for 2 edges,", 10, "start")
t(60, 671, "so exactly one output tick (green) loads it into uo_out. Reading uo_out after edge k+3 always returns the byte. Space debug reads one beat apart.", 10, "start")
H = 690
svg = f'<svg xmlns="http://www.w3.org/2000/svg" width="900" height="{H}" viewBox="0 0 900 {H}"><rect width="900" height="{H}" fill="#fff"/>'
t(60, 24, "A debug opcode returns one byte, held on the pins for one beat (2 clocks)", 13, "start", True)
open(__file__.replace("gen_debug_timing.py", "debug_timing.svg"), "w").write(svg + "".join(out) + "</svg>")
