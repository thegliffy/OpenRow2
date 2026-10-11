// Ghidra postScript: map defined strings to the functions that reference them.
// Output CSV: string, function_name, function_entry — the naming anchors.
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.StringDataType;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

import java.io.*;

public class DumpStringRefs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String out = getScriptArgs()[0];
        Listing listing = currentProgram.getListing();
        ReferenceManager rm = currentProgram.getReferenceManager();
        FunctionManager fm = currentProgram.getFunctionManager();
        int rows = 0, strings = 0;
        try (PrintWriter pw = new PrintWriter(new FileWriter(out))) {
            pw.println("string,function_name,function_entry");
            DataIterator di = listing.getData(true);
            while (di.hasNext()) {
                Data d = di.next();
                if (!(d.getDataType() instanceof StringDataType)) continue;
                String s = (String) d.getValue();
                if (s == null || s.length() < 6) continue;
                strings++;
                for (Reference ref : rm.getReferencesTo(d.getAddress())) {
                    Function f = fm.getFunctionContaining(ref.getFromAddress());
                    if (f != null) {
                        pw.println(esc(s) + "," + f.getName() + "," + f.getEntryPoint());
                        rows++;
                    }
                }
            }
        }
        println("STRREFS strings=" + strings + " refs=" + rows);
    }

    static String esc(String s) {
        String c = s.replace("\n", "\\n").replace("\r", "").replace("\"", "");
        if (c.contains(",")) c = "\"" + c + "\"";
        return c;
    }
}
