// Ghidra postScript: for each (entry, boundary, sig) row, list incoming references to the
// boundary address with authoritative reference types. CALL/DATA refs = real function entry.
// Usage: -postScript SplitCheck.java <boundaries.tsv> <out.tsv>   (rows: entry<TAB>boundary<TAB>sig)
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

import java.io.*;
import java.util.*;

public class SplitCheck extends GhidraScript {
    @Override
    public void run() throws Exception {
        String inPath = getScriptArgs()[0];
        String outPath = getScriptArgs()[1];
        List<String[]> rows = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(inPath))) {
            String line; boolean first = true;
            while ((line = br.readLine()) != null) {
                if (first) { first = false; continue; }
                String[] p = line.split("\t");
                for (int i = 0; i < p.length; i++) p[i] = p[i].trim();
                // columns: blob(entry) current_name split_addr new_name
                if (p.length >= 4 && !p[2].isEmpty()) rows.add(p);
            }
        }
        try (PrintWriter pw = new PrintWriter(new FileWriter(outPath))) {
            pw.println("entry\tboundary\tsig\tref_type\tref_source\tref_source_function");
            for (String[] row : rows) {
                Address a = currentProgram.getAddressFactory().getAddress(row[2]);
                if (a == null) a = currentProgram.getAddressFactory().getAddress("saintsrow2.i386:" + row[2]);
                if (a == null) { pw.println(row[0] + "\t" + row[2] + "\t" + row[3] + "\tBADADDR\t\t"); continue; }
                ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(a);
                int nrefs = 0;
                while (refs.hasNext()) {
                    Reference r = refs.next(); nrefs++;
                    Address s = r.getFromAddress();
                    Function sf = currentProgram.getFunctionManager().getFunctionAt(s);
                    if (sf == null) sf = currentProgram.getFunctionManager().getFunctionContaining(s);
                    pw.println(row[0] + "\t" + row[1] + "\t" + row[2] + "\t" + r.getReferenceType().getName()
                        + "\t" + s + "\t" + (sf != null ? sf.getName() : "<none>"));
                }
                if (nrefs == 0) pw.println(row[0] + "\t" + row[1] + "\t" + row[2] + "\tNONE\t\t");
            }
        }
        println("SPLITCHECK done rows=" + rows.size());
    }
}
