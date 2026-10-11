// Ghidra postScript: report function/string/symbol stats for the OpenRow2 binary.
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class Stats extends GhidraScript {
    @Override
    public void run() throws Exception {
        FunctionIterator fi = currentProgram.getFunctionManager().getFunctions(true);
        int total = 0, named = 0, thunk = 0;
        while (fi.hasNext()) {
            Function f = fi.next();
            total++;
            if (f.isThunk()) thunk++;
            String n = f.getName();
            if (n != null && !n.startsWith("FUN_")) named++;
        }
        println("STATS total_functions=" + total);
        println("STATS named_functions=" + named);
        println("STATS thunks=" + thunk);
    }
}
