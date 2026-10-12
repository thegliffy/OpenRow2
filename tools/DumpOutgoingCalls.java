// Ghidra postScript: dump outgoing CALL/COMPUTED_CALL targets for each requested function.
// Usage: -postScript DumpOutgoingCalls.java <out.tsv> <addr> [addr ...]
// Prints one row per (entry, callee): entry, callee_addr, callee_name, count.
// References inside the entry function's own body (jumps/branches) do not count.
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

import java.io.*;
import java.util.*;

public class DumpOutgoingCalls extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        try (PrintWriter pw = new PrintWriter(new FileWriter(args[0]))) {
            for (int a = 1; a < args.length; a++) {
                Address addr = currentProgram.getAddressFactory().getAddress(args[a]);
                if (addr == null) addr = currentProgram.getAddressFactory().getAddress("saintsrow2.i386:" + args[a]);
                Function f = (addr == null) ? null : getFunctionAt(addr);
                if (f == null) { println("NO FUNCTION FOR " + args[a]); continue; }

                // callee key -> count
                TreeMap<String, Long> counts = new TreeMap<>();
                InstructionIterator iit = currentProgram.getListing().getInstructions(
                        new AddressSet(f.getBody().getMinAddress(), f.getBody().getMaxAddress()), true);
                while (iit.hasNext()) { Instruction instr = iit.next();
                    String mnem = instr.getMnemonicString();
                    if (!mnem.equals("CALL") && !mnem.equals("COMPUTED_CALL")) continue;
                    for (Reference ref : currentProgram.getReferenceManager().getReferencesFrom(instr.getMinAddress())) {
                        RefType t = ref.getReferenceType();
                        if (!t.isCall()) continue;
                        Address to = ref.getToAddress();
                        if (f.getBody().contains(to)) continue; // jump inside the same function
                        String name = null;
                        Function target = getFunctionAt(to);
                        if (target != null) name = target.getName();
                        if (name == null) {
                            Symbol s = currentProgram.getSymbolTable().getPrimarySymbol(to);
                            if (s != null) name = s.getName();
                        }
                        if (name == null) name = "<data:" + to + ">";
                        String key = to.toString().toLowerCase() + "\t" + name;
                        counts.merge(key, 1L, Long::sum);
                    }
                }
                for (Map.Entry<String, Long> e : counts.entrySet()) {
                    pw.println(f.getEntryPoint().toString().toLowerCase() + "\t" + e.getKey() + "\t" + e.getValue());
                }
                pw.flush();
            }
        }
    }
}
