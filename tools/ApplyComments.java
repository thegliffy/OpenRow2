// Ghidra postScript: apply plate comments from a TSV (funcname<TAB>comment).
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;

import java.io.*;
import java.util.*;

public class ApplyComments extends GhidraScript {
    @Override
    public void run() throws Exception {
        String path = getScriptArgs()[0];
        Map<String, String> wanted = new LinkedHashMap<>();
        try (BufferedReader br = new BufferedReader(new FileReader(path))) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] p = line.split("\t", 2);
                if (p.length >= 2) wanted.put(p[0], p[1].replace("\\n", "\n"));
            }
        }
        FunctionManager fm = currentProgram.getFunctionManager();
        int done = 0;
        for (Function f : fm.getFunctions(true)) {
            String c = wanted.get(f.getName());
            if (c != null) { f.setComment(c); done++; }
        }
        println("COMMENTS applied=" + done + " wanted=" + wanted.size());
    }
}
