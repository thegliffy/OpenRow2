// Ghidra postScript: reconstruct a vtable from an anchor function.
// Finds data references TO the anchor's entry point (its vtable slot), walks the
// contiguous pointer run in .rdata, and prints every slot: slot_addr, target, target_name.
// Usage: -postScript DumpVtable.java <anchor_function_name> <out.tsv>
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

import java.io.*;
import java.util.*;

public class DumpVtable extends GhidraScript {
    @Override
    public void run() throws Exception {
        String anchorName = getScriptArgs()[0];
        String outPath = getScriptArgs()[1];
        SymbolTable st = currentProgram.getSymbolTable();
        Listing listing = currentProgram.getListing();
        ReferenceManager rm = currentProgram.getReferenceManager();
        Function anchor = null;
        for (Function f : listing.getFunctions(true)) {
            if (f.getName().equals(anchorName)) { anchor = f; break; }
        }
        if (anchor == null) throw new Exception("anchor not found: " + anchorName);
        // find data pointers to the anchor entry
        List<Address> slots = new ArrayList<>();
        for (Reference r : rm.getReferencesTo(anchor.getEntryPoint())) {
            if (r.getReferenceType().isData()) slots.add(r.getFromAddress());
        }
        println("VTABLE anchor=" + anchorName + " slots=" + slots.size());
        try (PrintWriter pw = new PrintWriter(new FileWriter(outPath))) {
            pw.println("slot_addr\tindex\ttarget\ttarget_name");
            for (Address slot : slots) {
                // walk the contiguous pointer run around this slot
                Address lo = slot, hi = slot;
                DataIterator di = listing.getData(slot, true);
                Data d = di.next();
                if (d == null || !(d.getDataType() instanceof Pointer)) { pw.println("NOTPOINTER\t" + slot); continue; }
                long sz = d.getLength();
                // walk backward
                while (true) {
                    Address prev = lo.subtractNoWrap(sz);
                    if (prev == null) break;
                    Data pd = listing.getDataAt(prev);
                    if (!(pd != null && pd.getDataType() instanceof Pointer)) break;
                    lo = prev;
                }
                // walk forward
                while (true) {
                    Address next = hi.addNoWrap(sz);
                    if (next == null) break;
                    Data nd = listing.getDataAt(next);
                    if (!(nd != null && nd.getDataType() instanceof Pointer)) break;
                    hi = next;
                }
                int idx = 0;
                for (Address a = lo; a != null && a.compareTo(hi) <= 0; a = a.addNoWrap(sz), idx++) {
                    Data pd = listing.getDataAt(a);
                    if (pd == null) continue;
                    Object v = pd.getValue();
                    if (!(v instanceof Address)) continue;
                    Address target = (Address) v;
                    Function f = currentProgram.getFunctionManager().getFunctionAt(target);
                    pw.println(a + "\t" + idx + "\t" + target + "\t" + (f != null ? f.getName() : "<none>"));
                }
            }
        }
        println("DUMPTABLE done " + anchorName);
    }
}
