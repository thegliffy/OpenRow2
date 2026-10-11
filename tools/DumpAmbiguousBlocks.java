// Ghidra postScript: for each function entry in the input TSV, dump basic blocks with
// incoming flow types and which signature-style strings each block references.
// Usage: -postScript DumpAmbiguousBlocks.java <entries.tsv> <out.tsv>
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.block.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

import java.io.*;
import java.util.*;

public class DumpAmbiguousBlocks extends GhidraScript {
    static final java.util.regex.Pattern SIG =
        java.util.regex.Pattern.compile("\\b[A-Za-z_][A-Za-z0-9_]*(?:::[A-Za-z_~][A-Za-z0-9_]*)+\\s*\\(");

    @Override
    public void run() throws Exception {
        String inPath = getScriptArgs()[0];
        String outPath = getScriptArgs()[1];
        List<String> wanted = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(inPath))) {
            String line; boolean first = true;
            while ((line = br.readLine()) != null) {
                if (first) { first = false; continue; }
                String[] p = line.split("\t");
                if (p.length >= 1 && !p[0].isEmpty()) wanted.add(p[0].toLowerCase());
            }
        }
        Set<String> want = new HashSet<>(wanted);
        Listing listing = currentProgram.getListing();
        SimpleBlockModel model = new SimpleBlockModel(currentProgram);
        try (PrintWriter pw = new PrintWriter(new FileWriter(outPath))) {
            pw.println("entry\tblock\tblock_end\tincoming\tflow_out\tsigs");
            for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
                String entry = f.getEntryPoint().toString().toLowerCase();
                if (!want.contains(entry)) continue;
                for (CodeBlockIterator bi = model.getCodeBlocksContaining(f.getBody(), monitor); bi.hasNext();) {
                    CodeBlock b = bi.next();
                    StringBuilder incoming = new StringBuilder();
                    CodeBlockReferenceIterator src = model.getSources(b, monitor);
                    while (src.hasNext()) incoming.append(src.next().getFlowType().getName()).append(",");
                    StringBuilder outgoing = new StringBuilder();
                    CodeBlockReferenceIterator dst = model.getDestinations(b, monitor);
                    while (dst.hasNext()) outgoing.append(dst.next().getFlowType().getName()).append(",");
                    StringBuilder sigs = new StringBuilder();
                    InstructionIterator ii = listing.getInstructions(b, true);
                    while (ii.hasNext()) {
                        Instruction instr = ii.next();
                        for (Reference ref : instr.getReferencesFrom()) {
                            Data d = listing.getDataAt(ref.getToAddress());
                            if (d == null) continue;
                            Object v = d.getValue();
                            if (v instanceof String && SIG.matcher((String) v).find()) {
                                sigs.append(((String) v).split("\\(")[0].trim()).append(" | ");
                            }
                        }
                    }
                    pw.println(entry + "\t" + b.getMinAddress() + "\t" + b.getMaxAddress() + "\t"
                        + incoming + "\t" + outgoing + "\t" + sigs);
                }
            }
        }
        println("DUMPBLOCKS done");
    }
}
