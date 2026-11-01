#!/bin/sh
# Build docs/SPEC.pdf from docs/SPEC.md (python-markdown + headless Chrome, letter).
set -e; cd "$(dirname "$0")"
python3 - <<'P'
import markdown
b=markdown.markdown(open('SPEC.md').read(),extensions=['tables','fenced_code'])
css="@page{size:letter;margin:1.5cm}body{font-family:sans-serif;font-size:10.5pt}table{border-collapse:collapse;margin:6px 0}td,th{border:1px solid #888;padding:3px 6px}th{background:#eee}code{background:#f3f3f3}h1{font-size:18pt}h2{border-bottom:1px solid #ccc}img{max-width:100%;page-break-inside:avoid}"
open('SPEC.html','w').write(f"<html><head><meta charset=utf-8><style>{css}</style></head><body>{b}</body></html>")
P
google-chrome --headless --no-sandbox --no-pdf-header-footer --print-to-pdf=SPEC.pdf "file://$PWD/SPEC.html" 2>/dev/null
rm -f SPEC.html
