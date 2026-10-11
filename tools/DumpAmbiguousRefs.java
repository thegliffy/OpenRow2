// Ghidra postScript: for each function entry listed in the input TSV, dump every
// instruction that references a string, with the instruction address.
// Usage: -postScript DumpAmbiguousRefs.java <entries.tsv> <out.tsv>   (input col 1 = entry hex)
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Reference;

import java.io.*;
import java.util.*;

public class DumpAmbiguousRefs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String inPath = getScriptArgs()[0];
        String outPath = getScriptArgs()[1];
        Set<String> wanted = new LinkedHashSet<>();
        try (BufferedReader br = new BufferedReader(new FileReader(inPath))) {
            String line; boolean first = true;
            while ((line = br.readLine()) != null) {
                if (first) { first = false; continue; } // header
                String[] p = line.split("\t");
                if (p.length >= 1 && !p[0].isEmpty()) wanted.add(p[0].toLowerCase());
            }
        }
        Listing listing = currentProgram.getListing();
        try (PrintWriter pw = new PrintWriter(new FileWriter(outPath))) {
            pw.println("entry\tinstr\tstring");
            for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
                String entry = f.getEntryPoint().toString().toLowerCase();
                if (!wanted.contains(entry)) continue;
                for (Instruction instr : listing.getInstructions(f.getBody(), true)) {
                    for (Reference ref : instr.getReferencesFrom()) {
                        Data d = listing.getDataAt(ref.getToAddress());
                        if (d == null) continue;
                        Object v = d.getValue();
                        if (v instanceof String && !((String) v).isEmpty()) {
                            pw.println(entry + "\t" + instr.getAddress() + "\t" + ((String) v).replace("\n", "\\n"));
                        }
                    }
                }
            }
        }
        println("DUMPAMBREFS done");
    }
}
