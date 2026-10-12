// Ghidra postScript: for each named function in the arg list, print its callers.
// Usage: -postScript DumpCallers.java <out.txt> <name1> <name2> ...
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

import java.io.*;
import java.util.*;

public class DumpCallers extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        try (PrintWriter pw = new PrintWriter(new FileWriter(args[0]))) {
            Map<String, Function> byName = new HashMap<>();
            for (Function f : currentProgram.getFunctionManager().getFunctions(true))
                byName.putIfAbsent(f.getName(), f);
            for (int i = 1; i < args.length; i++) {
                Function f = byName.get(args[i]);
                if (f == null) { pw.println("=== " + args[i] + " NOT FOUND"); continue; }
                pw.println("=== " + f.getName() + " @ " + f.getEntryPoint());
                for (Reference r : currentProgram.getReferenceManager().getReferencesTo(f.getEntryPoint())) {
                    if (r.getReferenceType().isCall()) {
                        Function c = currentProgram.getFunctionManager().getFunctionContaining(r.getFromAddress());
                        pw.println("  caller: " + (c != null ? c.getName() : "?") + " @ " + r.getFromAddress());
                    }
                }
            }
        }
        println("DUMPCALLERS done");
    }
}
