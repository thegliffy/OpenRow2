// Ghidra postScript: dump every call edge from engine functions into PLT thunks.
// Output CSV: caller_addr, caller_name, callee_name (thunks only).
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

import java.io.*;

public class DumpPltCallsites extends GhidraScript {
    @Override
    public void run() throws Exception {
        String out = getScriptArgs().length > 0 ? getScriptArgs()[0]
                : "/home/gliffy/OpenRow2/seeds/plt_callsites.csv";
        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceManager rm = currentProgram.getReferenceManager();
        int rows = 0, funcs = 0;
        try (PrintWriter pw = new PrintWriter(new FileWriter(out))) {
            pw.println("caller_addr,caller_name,callee_name");
            for (Function f : fm.getFunctions(true)) {
                funcs++;
                boolean wrote = false;
                InstructionIterator ii = currentProgram.getListing().getInstructions(f.getBody(), true);
                while (ii.hasNext()) {
                    Instruction instr = ii.next();
                    if (!instr.getFlowType().isCall()) continue;
                    for (Reference ref : rm.getReferencesFrom(instr.getMinAddress())) {
                        Function target = fm.getFunctionContaining(ref.getToAddress());
                        if (target != null && target.isThunk()) {
                            pw.println(f.getEntryPoint() + "," + f.getName() + "," + target.getName());
                            wrote = true;
                            rows++;
                        }
                    }
                }
                if (funcs % 500 == 0) monitor.setProgress(funcs);
            }
        }
        println("PLTDUMP functions=" + funcs + " call_edges=" + rows);
    }
}
