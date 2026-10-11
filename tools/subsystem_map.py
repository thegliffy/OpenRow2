#!/usr/bin/env python3
"""Classify engine functions into subsystems by their library-call signatures.

Reads plt_callsites.csv (caller -> PLT callee edges), buckets callees by
subsystem (GL/drawing, audio/OpenAL, file I/O, decompression, network,
threads, memory, filesystem), and reports which functions anchor each
subsystem — the navigation map for the decompilation.
"""
import csv
from collections import defaultdict

BUCKETS = {
    "render": ["gl"],
    "audio": ["al", "alc"],
    "fileio": ["fopen", "fread", "fwrite", "fseek", "fclose", "ftell", "fflush", "setvbuf"],
    "inflate": ["inflate", "uncompress", "zlib"],
    "network": ["socket", "connect", "send", "recv", "bind", "listen", "select", "gethostby", "inet_", "closesocket", "WSA"],
    "threads": ["pthread", "sem_", "mutex"],
    "alloc": ["malloc", "calloc", "realloc", "free", "operator"],
    "filesystem": ["open", "read", "write", "close", "stat", "access", "opendir", "unlink", "mkdir"],
    "string": ["strlen", "strcpy", "strncpy", "strcmp", "strncmp", "strstr", "strchr", "strcat", "sprintf", "snprintf"],
    "memory": ["memcpy", "memset", "memmove", "memcmp"],
}


def bucket(name):
    n = name.lower()
    for b, prefixes in BUCKETS.items():
        for p in prefixes:
            if n.startswith(p):
                return b
    return None


def main():
    edges = defaultdict(set)  # caller -> buckets
    callees = defaultdict(set)  # bucket -> callee names
    with open("seeds/plt_callsites.csv") as f:
        for row in csv.DictReader(f):
            b = bucket(row["callee_name"])
            if b:
                edges[row["caller_name"]].add(b)
                callees[b].add(row["callee_name"])

    print("=== subsystem call-volume map ===")
    for b in sorted(callees, key=lambda x: -len(edges_of(callees, edges, x)) if False else 0):
        pass

    def count(b):
        return sum(1 for s in edges.values() if b in s)

    for b, names in sorted(callees.items(), key=lambda kv: -count(kv[0])):
        print(f"{b}: {count(b)} functions, callees={sorted(names)[:8]}")

    # anchor functions: functions whose calls are dominated by one subsystem
    print("\n=== top anchors (functions calling ONLY one subsystem, >=3 calls) ===")
    anchors = defaultdict(list)
    with open("seeds/plt_callsites.csv") as f:
        per_func = defaultdict(list)
        for row in csv.DictReader(f):
            b = bucket(row["callee_name"])
            if b:
                per_func[(row["caller_addr"], row["caller_name"])].append(b)
    for (addr, name), bs in per_func.items():
        if len(bs) >= 3 and len(set(bs)) == 1:
            anchors[bs[0]].append((addr, name, len(bs)))
    for b in sorted(anchors, key=lambda x: -len(anchors[x])):
        print(f"\n{b} ({len(anchors[b])} anchors):")
        for addr, name, n in sorted(anchors[b], key=lambda x: -x[2])[:10]:
            print(f"  {addr} {name} ({n} calls)")


if __name__ == "__main__":
    main()
