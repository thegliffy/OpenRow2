// Ghidra postScript: for each (entry, boundary, ref_source) DATA-ref row, report what the
// ref_source data unit is (container path/type), the reference types FROM ref_source to the
// boundary, and every function that references ref_source or its top-level container.
// Usage: -postScript ClassifyDataRefs.java <rows.tsv> <out.tsv>   (rows: entry<TAB>boundary<TAB>ref_source)
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

import java.io.*;
import java.util.*;

public class ClassifyDataRefs extends GhidraScript {
    private Address addr(String s) {
        Address a = currentProgram.getAddressFactory().getAddress(s);
        if (a == null) a = currentProgram.getAddressFactory().getAddress("saintsrow2.i386:" + s);
        return a;
    }

    private String funcOf(Address a) {
        Function f = currentProgram.getFunctionManager().getFunctionContaining(a);
        if (f == null) f = currentProgram.getFunctionManager().getFunctionAt(a);
        return f == null ? "<none>" : f.getName() + "@" + f.getEntryPoint();
    }

    private String refsTo(Address a) {
        StringBuilder sb = new StringBuilder();
        for (Reference r : currentProgram.getReferenceManager().getReferencesTo(a)) {
            if (sb.length() > 0) sb.append(",");
            sb.append(r.getFromAddress()).append("#").append(r.getReferenceType().getName())
              .append("#").append(funcOf(r.getFromAddress()));
        }
        return sb.toString();
    }

    private String refsFrom(Address a) {
        StringBuilder sb = new StringBuilder();
        for (Reference r : currentProgram.getReferenceManager().getReferencesFrom(a)) {
            if (sb.length() > 0) sb.append(",");
            sb.append(r.getToAddress()).append("#").append(r.getReferenceType().getName());
        }
        return sb.toString();
    }

    @Override
    public void run() throws Exception {
        String inPath = getScriptArgs()[0];
        String outPath = getScriptArgs()[1];
        List<String[]> rows = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(inPath))) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] p = line.split("\t");
                if (p.length >= 3 && !p[0].isEmpty()) rows.add(p);
            }
        }
        Listing listing = currentProgram.getListing();
        try (PrintWriter pw = new PrintWriter(new FileWriter(outPath))) {
            pw.println("entry\tboundary\tref_source\tblock\tdunit_path\tdunit_type\tcontaining_func\trefs_from_source\trefs_to_source\trefs_to_container");
            for (String[] row : rows) {
                Address src = addr(row[2]);
                if (src == null) { pw.println(row[0] + "\t" + row[1] + "\t" + row[2] + "\tBADADDR\t\t\t\t\t\t"); continue; }
                Data d = listing.getDataAt(src);
                if (d == null) d = listing.getDataContaining(src);
                Data root = d;
                while (root != null && root.getParent() != null) root = root.getParent();
                pw.println(row[0] + "\t" + row[1] + "\t" + row[2]
                    + "\t" + currentProgram.getMemory().getBlock(src).getName()
                    + "\t" + (d == null ? "<nodata>" : d.getPathName())
                    + "\t" + (d == null ? "" : (d.getDataType() == null ? "" : d.getDataType().getName())
                        + (d.getDataType() instanceof Pointer ? "(ptr)" : ""))
                    + "\t" + funcOf(src)
                    + "\t" + refsFrom(src)
                    + "\t" + refsTo(src)
                    + "\t" + (root == null || root == d ? "" : refsTo(root.getMinAddress())));
            }
        }
        println("CLASSIFYDATAREFS done rows=" + rows.size());
    }
}
