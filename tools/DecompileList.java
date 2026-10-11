// Ghidra postScript: decompile a list of function addresses, dump to a file.
// Usage: -postScript DecompileList.java <out.txt> <addr1> <addr2> ...
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.Function;

import java.io.*;
import java.util.*;

public class DecompileList extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String out = args[0];
        try (PrintWriter pw = new PrintWriter(new FileWriter(out))) {
            DecompInterface decomp = new DecompInterface();
            decomp.openProgram(currentProgram);
            for (int i = 1; i < args.length; i++) {
                Function f = currentProgram.getFunctionManager()
                        .getFunctionAt(currentProgram.getAddressFactory()
                                .getDefaultAddressSpace().getAddress(args[i]));
                if (f == null) { pw.println("=== " + args[i] + " : NO FUNCTION ==="); continue; }
                pw.println("=== " + args[i] + " " + f.getName() + " ===");
                DecompileResults res = decomp.decompileFunction(f, 120, monitor);
                if (res != null && res.getDecompiledFunction() != null) {
                    pw.println(res.getDecompiledFunction().getC());
                } else {
                    pw.println("(decompile failed: " + (res != null ? res.getErrorMessage() : "null") + ")");
                }
                pw.println();
            }
        }
        println("DECOMP done -> " + out);
    }
}
