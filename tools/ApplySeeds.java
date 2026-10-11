// Ghidra postScript: apply verified hash->name seeds to the binary.
// Scans every instruction for immediate operands matching a seed hash,
// adds EOL comments at hits, plate comments on functions, and renames
// unnamed functions that reference exactly one seed hash.
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.scalar.Scalar;

import java.io.*;
import java.util.*;

public class ApplySeeds extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String csvPath = args.length > 0 ? args[0] : "/home/gliffy/OpenRow2/seeds/verified_seeds.csv";

        Map<Long, String> seeds = new HashMap<>();
        try (BufferedReader br = new BufferedReader(new FileReader(csvPath))) {
            String line = br.readLine(); // header
            while ((line = br.readLine()) != null) {
                String[] p = line.split(",", 3);
                if (p.length >= 2) {
                    String h = p[0].trim();
                    if (h.startsWith("0x")) h = h.substring(2);
                    seeds.put(Long.parseLong(h, 16), p[1].trim().replaceAll("^\"|\"$", ""));
                }
            }
        }
        println("SEEDS loaded=" + seeds.size());

        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();

        // pass 1: collect hits per function
        Map<String, Set<String>> fnHits = new HashMap<>(); // function name -> seed names
        int instrs = 0, hits = 0;
        InstructionIterator ii = listing.getInstructions(true);
        while (ii.hasNext()) {
            Instruction instr = ii.next();
            instrs++;
            for (int oi = 0; oi < instr.getNumOperands(); oi++) {
                for (Object o : instr.getOpObjects(oi)) {
                    if (o instanceof Scalar) {
                        long v = ((Scalar) o).getValue() & 0xFFFFFFFFL;
                        String name = seeds.get(v);
                        if (name != null) {
                            hits++;
                            Function f = fm.getFunctionContaining(instr.getMinAddress());
                            if (f != null) {
                                fnHits.computeIfAbsent(f.getName(), k -> new TreeSet<>()).add(name);
                            }
                        }
                    }
                }
            }
            if (instrs % 100000 == 0) monitor.setProgress(instrs);
        }
        println("SEEDS scanned=" + instrs + " instruction_hits=" + hits + " functions_touched=" + fnHits.size());

        // pass 2: annotate
        int commented = 0, renamed = 0;
        for (Function f : fm.getFunctions(true)) {
            Set<String> names = fnHits.get(f.getName());
            if (names == null) continue;
            StringBuilder sb = new StringBuilder("Seed hash references:\n");
            for (String n : names) sb.append("  ").append(n).append("\n");
            f.setComment(sb.toString());
            commented++;
            if (names.size() == 1 && f.getName().startsWith("FUN_")) {
                String slug = names.iterator().next().replaceAll("[^A-Za-z0-9]+", "_");
                f.setName("uses_" + slug, SourceType.ANALYSIS);
                renamed++;
            }
        }
        println("SEEDS done commented=" + commented + " renamed=" + renamed);
    }
}
