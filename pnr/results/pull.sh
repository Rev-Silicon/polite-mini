#!/bin/bash
# pull.sh <a0|b0> <outdir>: copy latest tower run metrics + summarize
d=$1; o=$2; R=$(ssh tower "ls -d ~/fleet/polite-vneg1/pnr/$d/runs/RUN_* | tail -1" 2>/dev/null); mkdir -p $o; echo $R > $o/RUN_PATH
for f in final/metrics.json final/metrics.csv resolved.json warning.log; do scp -q tower:$R/$f $o/ 2>/dev/null; done
ssh tower "cat \$(ls -d $R/*-openroad-stapostpnr|tail -1)/max_ss_100C_1v60/violator_list.rpt" > $o/violators_max_ss.rpt 2>/dev/null
python3 - $o/metrics.json <<'P'
import json,sys;m=json.load(open(sys.argv[1]))
g=lambda k:m.get(k)
for c in ['nom_tt_025C_1v80','nom_ss_100C_1v60','max_ss_100C_1v60','min_ss_100C_1v60','nom_ff_n40C_1v95']:
  print(c,'setupWS %.3f TNS %.3f holdWS %.3f'%(g('timing__setup__ws__corner:'+c),g('timing__setup__tns__corner:'+c),g('timing__hold__ws__corner:'+c)))
for k in ['timing__setup__ws','timing__setup__tns','timing__hold__ws','design__max_slew_violation__count','design__max_cap_violation__count','design__die__bbox','design__instance__area__stdcell','design__instance__count__stdcell','design__instance__utilization','route__drc_errors','magic__drc_error__count','klayout__drc_error__count','design__lvs_error__count']: print(k,g(k))
P
