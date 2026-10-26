#!/bin/bash
# Apply a names_batch TSV (addr, old, new, lock) through the MCP gateway on moneta.
# Usage: apply_batch.sh tools/names_batchNNN.tsv [checkpoint_every]
set -u
BATCH="$1"
CKPT="${2:-200}"
GATE="http://moneta:8191/mcp"
LOG="${BATCH%.tsv}.apply.log"
ok=0; fail=0; n=0
tail -n +2 "$BATCH" | while IFS=$'\t' read -r addr old new lock; do
  n=$((n+1))
  out=$(mcporter call --http-url "$GATE" --allow-http rename --args "{\"target\":\"$addr\",\"new_name\":\"$new\"}" 2>&1)
  if echo "$out" | grep -q '"error"'; then
    fail=$((fail+1)); echo "FAIL $addr $new :: $out" | tee -a "$LOG"
  else
    ok=$((ok+1))
  fi
  if [ $((n % CKPT)) -eq 0 ]; then
    echo "checkpoint $n: ok=$ok fail=$fail" | tee -a "$LOG"
  fi
done
echo "DONE ok=$ok fail=$fail" | tee -a "$LOG"
