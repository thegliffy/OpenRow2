// Ghidra postScript: dump all functions (entry, name) to CSV.
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;

import java.io.*;

public class DumpFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        try (PrintWriter pw = new PrintWriter(new FileWriter(getScriptArgs()[0]))) {
            pw.println("entry,name");
            for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
                pw.println(f.getEntryPoint() + "," + f.getName());
            }
        }
        println("DUMPFUNCS done");
    }
}
