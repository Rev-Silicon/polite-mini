#!/usr/bin/env python3
"""Generate debug_timing.svg: nibble debug stream, uo[7:4] live (t608)."""
LM = 20
F = 'font-family="Helvetica,Arial,sans-serif"'
out = []
def t(x, y, s, size=10, anchor="end", bold=False, fill="#333"):
    out.append(f'<text x="{x}" y="{y}" font-size="{size}" text-anchor="{anchor}" font-weight="{"bold" if bold else "normal"}" fill="{fill}" {F}>{s}</text>')
def ex(i, x0, w): return x0 + w * i
def bus(y, segs, x0, w):
    for a, b, lab, st in segs:
        x1, x2 = ex(a, x0, w) + 3, ex(b, x0, w) - 3
        fill, stroke = {
            "op": ("#dbe8f7", "#4a7fc1"),
            "nib": ("#fde2c8", "#d9822b"),
            "live": ("#fff", "#999"),
            "mark": ("#e5f6e8", "#2a8a3a"),
        }[st]
        out.append(f'<path d="M{x1},{y} L{x1+5},{y-9} L{x2-5},{y-9} L{x2},{y} L{x2-5},{y+9} L{x1+5},{y+9} z" fill="{fill}" stroke="{stroke}"/>')
        t((x1 + x2) / 2, y + 3, lab, 8.5, "middle")
def panel(y, title, tick0, n, w, x0, rows):
    t(LM, y, title, 12, "start", True)
    for i in range(n):
        t(ex(i, x0, w), y + 18, "k" + (f"+{i}" if i else ""), 8, "middle", fill="#888")
    t(x0 - 18, y + 40, "clk")
    d = f"M{ex(0, x0, w)-24},{y+46}"
    for i in range(n - 1):
        e = ex(i, x0, w)
        d += f" L{e},{y+46} L{e},{y+32} L{e+w/2},{y+32} L{e+w/2},{y+46}"
    out.append(f'<path d="{d}" fill="none" stroke="#777"/>')
    t(x0 - 18, y + 64, "out tick")
    for i in range(n):
        if (i + tick0) % 2:
            out.append(f'<circle cx="{ex(i, x0, w)}" cy="{y+60}" r="4" fill="#2a8a3a"/>')
    for j, (name, segs) in enumerate(rows):
        t(x0 - 0.65 * w - 6, y + 90 + 28 * j, name)
        bus(y + 86 + 28 * j, segs, x0, w)
    bot = y + 78 + 28 * len(rows)
    for i in range(n):
        out.append(f'<line x1="{ex(i, x0, w)}" y1="{y+24}" x2="{ex(i, x0, w)}" y2="{bot}" stroke="#ddd" stroke-dasharray="2,3"/>')
    return bot

# Panel A: sample edge k, execute k+1 which IS an output tick. Low nibble after k+2, high after k+4.
X0, W, N = 150, 62, 9
rows_a = [
    ("uio_in", [(-0.6, 0, "DBG", "op"), (0, 8, "NOP", "live")]),
    ("uo[3:0]", [(0, 2, "live", "live"), (2, 4, "nibble 0", "nib"), (4, 6, "nibble 1", "nib"), (6, 8, "live", "live")]),
    ("uo[7]", [(0, 2, "0", "live"), (2, 6, "1", "mark"), (6, 8, "0", "live")]),
    ("uo[6]", [(0, 2, "live", "live"), (2, 6, "0", "mark"), (6, 8, "live", "live")]),
]
bot = panel(36, "8-bit read, edge k+1 is an output tick: low nibble after k+2, high nibble after k+4", 0, N, W, X0, rows_a)
rows_b = [
    ("uio_in", [(-0.6, 0, "DBG", "op"), (0, 8, "NOP", "live")]),
    ("uo[3:0]", [(0, 3, "previous", "live"), (3, 5, "nibble 0", "nib"), (5, 7, "nibble 1", "nib"), (7, 8, "live", "live")]),
    ("uo[7]", [(0, 3, "0", "live"), (3, 7, "1", "mark"), (7, 8, "0", "live")]),
    ("uo[6]", [(0, 3, "live", "live"), (3, 7, "0", "mark"), (7, 8, "live", "live")]),
]
bot = panel(bot + 28, "8-bit read, edge k+1 is not an output tick: low nibble after k+3, high nibble after k+5", 1, N, W, X0, rows_b)
# 24-bit needs k..k+14. Narrower cells.
X1, W1, N1 = 100, 52, 16
rows_c = [
    ("uio_in", [(-0.55, 0, "DBG", "op"), (0, 15, "NOP / other legal ops", "live")]),
    ("uo[3:0]", [(0, 2, "live", "live"), (2, 4, "n0", "nib"), (4, 6, "n1", "nib"), (6, 8, "n2", "nib"),
                 (8, 10, "n3", "nib"), (10, 12, "n4", "nib"), (12, 14, "n5", "nib"), (14, 15, "live", "live")]),
    ("uo[7]", [(0, 2, "0", "live"), (2, 14, "1 on each debug nibble", "mark"), (14, 15, "0", "live")]),
    ("uo[6]", [(0, 2, "live", "live"), (2, 14, "0 on each debug nibble", "mark"), (14, 15, "live", "live")]),
]
bot = panel(bot + 28, "24-bit read (DEBUG_PARTIAL_SUM / DEBUG_ADD), edge k+1 is an output tick: six nibbles, low nibble first", 0, N1, W1, X1, rows_c)
def wrap_footer(y0, paragraphs, size=10, max_w=820, line_h=14):
    # Simple word wrap for SVG text (approx 0.55*size px per char for Helvetica).
    y = y0
    cpl = max(20, int(max_w / (size * 0.6)))
    for para in paragraphs:
        words = para.split()
        line = ""
        for w in words:
            trial = (line + " " + w).strip()
            if len(trial) > cpl and line:
                t(LM, y, line, size, "start")
                y += line_h
                line = w
            else:
                line = trial
        if line:
            t(LM, y, line, size, "start")
            y += line_h
        y += 4  # paragraph gap
    return y

footer_paras = [
    "Green dots are output ticks. Each nibble is held for one output tick (two core ticks). uo[4] (overflow) and uo[5] (illegal) stay live on every output tick and are not drawn.",
    "uo[7] is 1 exactly on a debug-nibble output tick. uo[6] is forced to 0 on those ticks, so a dump framed on bit 6 skips them. The opcode is sampled at edge k and executes at edge k+1.",
    "RUN is illegal on core ticks k+2 through k+4 for an 8-bit read (window k_exec+1..k_exec+3) and through k+12 for a 24-bit read. A second freezing debug read in that window does not restart the stream.",
]
bot = wrap_footer(bot + 22, footer_paras)
H = bot + 16
Wsvg = 20 + X1 + W1 * (N1 - 1) + 30
svg = f'<svg xmlns="http://www.w3.org/2000/svg" width="{Wsvg}" height="{H}" viewBox="0 0 {Wsvg} {H}"><rect width="{Wsvg}" height="{H}" fill="#fff"/>'
t(LM, 22, "Debug reads stream nibbles on uo[3:0], low nibble first. uo[7:4] stay live.", 14, "start", True)
open(__file__.replace("gen_debug_timing.py", "debug_timing.svg"), "w").write(svg + "".join(out) + "</svg>\n")
