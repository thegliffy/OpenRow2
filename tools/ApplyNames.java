// Ghidra postScript: rename functions from an evidence-based name list.
// Usage: -postScript ApplyNames.java <names.txt>   (lines: oldname<TAB>newname)
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;

import java.io.*;

public class ApplyNames extends GhidraScript {
    @Override
    public void run() throws Exception {
        String path = getScriptArgs()[0];
        FunctionManager fm = currentProgram.getFunctionManager();
        java.util.Map<String, String> wanted = new java.util.LinkedHashMap<>();
        try (BufferedReader br = new BufferedReader(new FileReader(path))) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] p = line.split("\t");
                if (p.length >= 2) wanted.put(p[0], p[1]);
            }
        }
        int renamed = 0;
        for (Function f : fm.getFunctions(true)) {
            String target = wanted.get(f.getName());
            if (target != null) {
                f.setName(target, SourceType.USER_DEFINED);
                renamed++;
            }
        }
        println("NAMES renamed=" + renamed + " wanted=" + wanted.size());
    }
}
