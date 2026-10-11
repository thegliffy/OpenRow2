# OpenRow2 — working as a model

This repo is a decompilation of the Saints Row 2 Linux executable. The Ghidra project and the game binary stay on disk. They are not committed.

Read this file, then run the work loop. Do not scan `seeds/` by hand and do not edit `tools/names_batch*.tsv` directly.

## Loop

From the repo root:

```
python3 tools/llm_work.py next
```

That prints one function: its current name, the strings it references, and the naming rules. Answer with one TSV row, or `SKIP`.

```
python3 tools/llm_work.py check agent/proposals/<entry>.tsv
python3 tools/llm_work.py accept agent/proposals/<entry>.tsv
```

`check` is the authority. `accept` appends a passing row to `tools/names_batch_llm.tsv` as `current_name<TAB>proposed_name`, which `ApplyNames.java` can apply after batches 2–7. A `hold` or `reject` is not appended.

`python3 tools/llm_work.py ask` sends that same packet to the local OpenAI-compatible server (`OPENROW_LLM_URL`, default `http://127.0.0.1:18280/v1`) and checks the reply. It does not accept the name.

`python3 tools/llm_work.py queue` lists the functions the checker is willing to consider.

## What a name is

A project name is `Class::Method` taken from an assert message that this function alone references. The message is the signature plus the text around it. A bare type name, a source path, a module prefix, and a string shared with another function are not a name.

`seeds/ambiguous_signatures.tsv` lists functions whose body references more than one signature. Leave them. Splitting the body comes before another name.

A function that already has a `Class::Method` name keeps it. A later pass may add a qualifier. It does not replace the method with a shorter string from the same function.

Windows `__FILE__` markers in `seeds/win_rdata_paths.csv` are single literals. The strings on either side are context. `seeds/rejected/` is closed.

## Layout

| Path | Role |
|---|---|
| `seeds/functions.csv` | entry, current name |
| `seeds/string_refs.csv` | string, function, entry — the naming evidence |
| `seeds/ambiguous_signatures.tsv` | do not rename |
| `tools/names_batch2.tsv` … `names_batch7.tsv` | applied waves, in order |
| `tools/names_batch_llm.tsv` | rows `accept` has checked |
| `decomp/` | decompiler text already saved |
| `agent/proposals/` | model output, not committed |
| `agent/done.tsv` | entries already attempted, not committed |

## Out of bounds

Do not commit `*.exe`, `bin/`, `vendor/`, or a Ghidra project. Do not regenerate `seeds/rejected/`. Do not treat `win_rdata_paths.csv` as a map from a path to every string until the next path.
