#!/usr/bin/env python3
"""Bounded work loop for a local model.

The checker decides whether a name is allowed. A model may propose one.
It may not invent a name the strings do not support, and it may not edit
name batches by hand.

  python3 tools/llm_work.py next
  python3 tools/llm_work.py packet 04030340
  python3 tools/llm_work.py check proposal.tsv
  python3 tools/llm_work.py accept proposal.tsv
  python3 tools/llm_work.py ask

`ask` sends one packet to the OpenAI-compatible server in OPENROW_LLM_URL
(default http://127.0.0.1:18280/v1) and checks the reply.
"""
import csv
import json
import os
import re
import sys
import urllib.error
import urllib.request
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SEEDS = ROOT / "seeds"
DONE = ROOT / "agent" / "done.tsv"
PROPOSALS = ROOT / "agent" / "proposals"
BATCH = ROOT / "tools" / "names_batch_llm.tsv"

SIG_RE = re.compile(
    r"\b([A-Za-z_][A-Za-z0-9_]*(?:::[A-Za-z_][A-Za-z0-9_]*)+)\b"
)
NAME_RE = re.compile(
    r"^[A-Za-z_][A-Za-z0-9_]*(?:::[A-Za-z_][A-Za-z0-9_]*)+$"
)
STL = {
    "basic_string", "vector", "string", "map", "set", "list",
    "deque", "__gnu_cxx", "std",
}

# Loop protection: the uniqueness gate, the ambiguous hold, and the hand_read hold.
# OPENROW_LOOP_PROTECTION=0 disables them; the evidence rules always apply.
LOOP_PROTECTED = os.environ.get("OPENROW_LOOP_PROTECTION", "1") != "0"
ADJACENCY = (
    "until the next",
    "next path",
    "between path",
    "neighboring string",
    "string range",
    "owned by",
    "adjacency",
)

RULES = """\
Rules for one name:
- Propose a name only when this function's own strings contain exactly one Class::Method and that same string is a message about that method (the text around the signature is at least a short sentence, not the bare name).
- That signature must not appear in any other function's strings. A shared error string names the callee, not this function. Uniqueness is checked after you reply, so do not SKIP because you cannot see the other functions.
- proposed_name is that Class::Method, unchanged. kind is assert_signature.
- evidence is copied exactly from one string listed in this packet.
- Reply SKIP when the strings do not meet that bar.
- Do not rename a function that already has a Class::Method name.
- Do not use a source path, a neighboring string, or the span until the next path as a name.
- Do not publish one signature for a function whose body references more than one.
"""


def _csv_rows(path):
    with open(path, newline="") as f:
        yield from csv.DictReader(f)


def load():
    functions = {}
    for row in _csv_rows(SEEDS / "functions.csv"):
        functions[row["entry"].lower()] = row["name"]
    strings = defaultdict(list)
    for row in _csv_rows(SEEDS / "string_refs.csv"):
        strings[row["function_entry"].lower()].append(row["string"])
    plt = defaultdict(list)
    for row in _csv_rows(SEEDS / "plt_callsites.csv"):
        plt[row["caller_addr"].lower()].append(row["callee_name"])
    ambiguous = set()
    with open(SEEDS / "ambiguous_signatures.tsv") as f:
        next(f)
        for line in f:
            ambiguous.add(line.split("\t", 1)[0].lower())
    return functions, strings, plt, ambiguous


def _message(text, sig):
    rest = text.replace(sig, "").strip(" \t\r\n:-,.()")
    return len(rest) >= 8


def signatures_in(strings):
    found = defaultdict(list)
    for text in strings:
        for sig in set(SIG_RE.findall(text)):
            if _message(text, sig) and sig.split("::", 1)[0] not in STL:
                found[sig].append(text)
    return found


def index_signatures(strings):
    """signature -> set of function entries that have it in a message."""
    owners = defaultdict(set)
    per_fn = {}
    for entry, texts in strings.items():
        found = signatures_in(texts)
        per_fn[entry] = found
        for sig in found:
            owners[sig].add(entry)
    return owners, per_fn


def unique_signature(entry, owners, per_fn):
    found = per_fn.get(entry, {})
    alone = [sig for sig in found if owners[sig] == {entry}]
    if len(alone) != 1 or len(found) != 1:
        return None
    return alone[0]


def done_entries(path=DONE):
    if not path.exists():
        return set()
    out = set()
    for line in path.read_text().splitlines():
        if line.strip():
            out.add(line.split("\t", 1)[0].lower())
    return out


def batched_names(path=BATCH):
    if not path.exists():
        return set()
    out = set()
    for line in path.read_text().splitlines():
        if "\t" in line:
            out.add(line.split("\t", 1)[0])
    return out


def candidates(functions, owners, per_fn, done, batched=None):
    if batched is None:
        batched = batched_names()
    out = []
    for entry in sorted(per_fn):
        if entry in done:
            continue
        name = functions.get(entry, "")
        if not name.startswith("FUN_") or name in batched:
            continue
        sig = unique_signature(entry, owners, per_fn)
        if sig is None and not LOOP_PROTECTED and per_fn[entry]:
            sig = sorted(per_fn[entry])[0]
        if sig:
            out.append(entry)
    return out


def render_packet(entry, functions, strings, plt, ambiguous, owners, per_fn):
    entry = entry.lower()
    name = functions.get(entry)
    if name is None:
        raise SystemExit(f"unknown function {entry}")
    texts = strings.get(entry, [])
    calls = plt.get(entry, [])
    lines = [
        f"entry: {entry}",
        f"current_name: {name}",
        f"ambiguous: {'yes' if entry in ambiguous else 'no'}",
        "",
        "strings:",
    ]
    if texts:
        for i, text in enumerate(texts, 1):
            lines.append(f"{i}. {text}")
    else:
        lines.append("(none)")
    lines.append("")
    lines.append("plt calls:")
    if calls:
        for callee in calls[:12]:
            lines.append(f"- {callee}")
        if len(calls) > 12:
            lines.append(f"- ({len(calls) - 12} more)")
    else:
        lines.append("(none)")
    sig = unique_signature(entry, owners, per_fn)
    lines.append("")
    if sig is None:
        if LOOP_PROTECTED:
            lines.append("This function is not a naming candidate. Reply SKIP.")
        else:
            lines.append("Loop protection is off: a shared signature from your own strings may be proposed.")
    lines.append(RULES.rstrip())
    lines.append("")
    lines.append("Reply with one line, or the single word SKIP:")
    lines.append("entry\tcurrent_name\tproposed_name\tkind\tevidence")
    return "\n".join(lines) + "\n"


def _bad_phrase(text):
    low = text.lower()
    return next((p for p in ADJACENCY if p in low), None)


def check_row(row, functions, strings, ambiguous, owners, per_fn):
    """Return (verdict, reason). verdict is pass, hold, or reject."""
    need = ("entry", "current_name", "proposed_name", "kind", "evidence")
    if any(k not in row or row[k] == "" for k in need):
        return "reject", "missing a field"
    entry = row["entry"].lower()
    current = functions.get(entry)
    if current is None:
        return "reject", f"unknown entry {entry}"
    if row["current_name"] != current:
        return "reject", f"current_name is {current}"
    if entry in ambiguous and LOOP_PROTECTED:
        return "reject", "function references more than one signature; split the body before naming"
    phrase = _bad_phrase(row["evidence"])
    if phrase:
        return "reject", f"evidence uses a string range ({phrase})"
    if row["kind"] == "hand_read" and LOOP_PROTECTED:
        return "hold", "hand-read names stay out of the batch until a person applies them"
    if row["kind"] not in ("assert_signature", "hand_read"):
        return "reject", "kind must be assert_signature"
    if "::" in current:
        return "reject", "this function already carries a signature name"
    if not NAME_RE.match(row["proposed_name"]):
        return "reject", "proposed_name must be Class::Method"
    if row["proposed_name"].split("::", 1)[0] in STL:
        return "reject", "standard-library name"
    sig = unique_signature(entry, owners, per_fn)
    if sig is None:
        if not LOOP_PROTECTED:
            # gate off: a signature from this function's own message strings is
            # allowed even when shared; the model must own the judgement.
            found = per_fn.get(entry, {})
            if row["proposed_name"] not in found:
                return "reject", "proposed_name is not a signature in this function's strings"
            if row["evidence"] not in found[row["proposed_name"]]:
                return "reject", "evidence is not this function's message string for that signature"
            return "pass", f"{row['proposed_name']} (shared; gate off)"
        return "reject", "this function does not have one unshared assert signature"
    if row["proposed_name"] != sig:
        return "reject", f"proposed_name must be {sig}"
    owned = set(per_fn.get(entry, {}).get(sig, []))
    if row["evidence"] not in owned:
        return "reject", "evidence is not this function's message string for that signature"
    if owners[sig] != {entry}:
        return "reject", "that signature is shared with another function"
    return "pass", sig


def read_proposal(path):
    with open(path, newline="") as f:
        rows = list(csv.DictReader(f, delimiter="\t"))
    if not rows:
        raise SystemExit(f"{path} has no rows")
    return rows


def check_file(path, functions, strings, ambiguous, owners, per_fn):
    results = []
    for row in read_proposal(path):
        verdict, reason = check_row(row, functions, strings, ambiguous, owners, per_fn)
        results.append((verdict, reason, row))
    return results


def mark_done(entry, status, proposed, path=DONE):
    path.parent.mkdir(parents=True, exist_ok=True)
    with open(path, "a") as f:
        f.write(f"{entry.lower()}\t{status}\t{proposed}\n")


def accept_file(path, functions, strings, ambiguous, owners, per_fn, batch=BATCH, done=DONE):
    results = check_file(path, functions, strings, ambiguous, owners, per_fn)
    bad = [r for r in results if r[0] != "pass"]
    if bad:
        return results
    existing = set()
    if batch.exists():
        for line in batch.read_text().splitlines():
            if "\t" in line:
                existing.add(line.split("\t", 1)[0])
    with open(batch, "a") as f:
        for _, _, row in results:
            if row["current_name"] in existing:
                raise SystemExit(f"{row['current_name']} is already in {batch.name}")
            f.write(f"{row['current_name']}\t{row['proposed_name']}\n")
            existing.add(row["current_name"])
            mark_done(row["entry"], "accepted", row["proposed_name"], done)
    return results


def _strip_model_text(text):
    if not isinstance(text, str):
        return ""
    text = re.sub(r"<think>.*?</think>", "", text, flags=re.S)
    text = text.strip()
    if text.startswith("```"):
        text = re.sub(r"^```[a-zA-Z]*\n", "", text)
        text = re.sub(r"\n```$", "", text)
    return text.strip()


def parse_reply(message):
    if isinstance(message, str):
        text = message
    else:
        text = message.get("content") or ""
        if not _strip_model_text(text):
            text = message.get("reasoning_content") or ""
    text = _strip_model_text(text)
    if not text or text.upper() == "SKIP":
        return None
    for line in text.splitlines():
        if "\t" in line and not line.lower().startswith("entry\t"):
            parts = line.split("\t")
            if len(parts) >= 5:
                evidence = "\t".join(parts[4:])
                return {
                    "entry": parts[0].strip(),
                    "current_name": parts[1].strip(),
                    "proposed_name": parts[2].strip(),
                    "kind": parts[3].strip(),
                    "evidence": evidence.strip(),
                }
    raise SystemExit("model reply was neither SKIP nor a TSV row")


def llm_base():
    return os.environ.get("OPENROW_LLM_URL", "http://127.0.0.1:18280/v1").rstrip("/")


def llm_model():
    chosen = os.environ.get("OPENROW_LLM_MODEL")
    if chosen:
        return chosen
    with urllib.request.urlopen(llm_base() + "/models", timeout=30) as resp:
        data = json.load(resp)
    return data["data"][0]["id"]


def complete(packet):
    body = {
        "model": llm_model(),
        "temperature": 0,
        "max_tokens": 400,
        "reasoning_effort": "none",
        "messages": [
            {"role": "system", "content": "You name one Saints Row 2 function from the packet. Follow the packet's rules. Output one TSV row or SKIP."},
            {"role": "user", "content": packet},
        ],
    }
    req = urllib.request.Request(
        llm_base() + "/chat/completions",
        data=json.dumps(body).encode(),
        headers={"Content-Type": "application/json"},
    )
    try:
        with urllib.request.urlopen(req, timeout=180) as resp:
            data = json.load(resp)
    except urllib.error.URLError as exc:
        raise SystemExit(f"local model request failed: {exc}") from exc
    return data["choices"][0]["message"]


def write_proposal(entry, row):
    PROPOSALS.mkdir(parents=True, exist_ok=True)
    path = PROPOSALS / f"{entry}.tsv"
    with open(path, "w", newline="") as f:
        w = csv.DictWriter(
            f,
            fieldnames=["entry", "current_name", "proposed_name", "kind", "evidence"],
            delimiter="\t",
            lineterminator="\n",
        )
        w.writeheader()
        if row:
            w.writerow(row)
    return path


def cmd_next(functions, strings, plt, ambiguous, owners, per_fn):
    queue = candidates(functions, owners, per_fn, done_entries())
    if not queue:
        print("queue empty")
        return 0
    sys.stdout.write(render_packet(queue[0], functions, strings, plt, ambiguous, owners, per_fn))
    print(f"remaining: {len(queue)}", file=sys.stderr)
    return 0


def cmd_ask(functions, strings, plt, ambiguous, owners, per_fn):
    queue = candidates(functions, owners, per_fn, done_entries())
    if not queue:
        print("queue empty")
        return 0
    entry = queue[0]
    packet = render_packet(entry, functions, strings, plt, ambiguous, owners, per_fn)
    reply = complete(packet)
    row = parse_reply(reply)
    path = write_proposal(entry, row)
    if row is None:
        mark_done(entry, "skip", "")
        print(f"SKIP {entry} -> {path}")
        return 0
    verdict, reason = check_row(row, functions, strings, ambiguous, owners, per_fn)
    print(f"{verdict}\t{reason}\t{path}")
    if verdict == "reject":
        mark_done(entry, "reject", row.get("proposed_name", ""))
    return 0 if verdict != "reject" else 1


def main(argv):
    if len(argv) < 2:
        raise SystemExit(__doc__)
    cmd = argv[1]
    functions, strings, plt, ambiguous = load()
    owners, per_fn = index_signatures(strings)
    if cmd == "next":
        return cmd_next(functions, strings, plt, ambiguous, owners, per_fn)
    if cmd == "queue":
        queue = candidates(functions, owners, per_fn, done_entries())
        print(f"{len(queue)} functions")
        for entry in queue:
            print(f"{entry}\t{functions[entry]}")
        return 0
    if cmd == "packet":
        if len(argv) != 3:
            raise SystemExit("usage: llm_work.py packet <entry>")
        sys.stdout.write(render_packet(argv[2], functions, strings, plt, ambiguous, owners, per_fn))
        return 0
    if cmd == "check":
        if len(argv) != 3:
            raise SystemExit("usage: llm_work.py check <proposal.tsv>")
        results = check_file(argv[2], functions, strings, ambiguous, owners, per_fn)
        for verdict, reason, row in results:
            print(f"{verdict}\t{row.get('entry','')}\t{reason}")
        return 0 if all(v == "pass" for v, _, _ in results) else 1
    if cmd == "accept":
        if len(argv) != 3:
            raise SystemExit("usage: llm_work.py accept <proposal.tsv>")
        results = accept_file(argv[2], functions, strings, ambiguous, owners, per_fn)
        failed = False
        for verdict, reason, row in results:
            print(f"{verdict}\t{row.get('entry','')}\t{reason}")
            failed = failed or verdict != "pass"
        if not failed:
            print(f"appended to {BATCH}")
        return 1 if failed else 0
    if cmd == "ask":
        return cmd_ask(functions, strings, plt, ambiguous, owners, per_fn)
    raise SystemExit(f"unknown command {cmd}")


if __name__ == "__main__":
    sys.exit(main(sys.argv) or 0)
