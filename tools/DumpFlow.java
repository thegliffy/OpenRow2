// Ghidra postScript: dump disassembly of functions with block boundaries and incoming flow.
// Usage: -postScript DumpFlow.java <out.txt> <addr> [addr ...]
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.block.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

import java.io.*;

public class DumpFlow extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        try (PrintWriter pw = new PrintWriter(new FileWriter(args[0]))) {
            for (int a = 1; a < args.length; a++) {
                Address addr = currentProgram.getAddressFactory().getAddress(args[a]);
                if (addr == null) addr = currentProgram.getAddressFactory().getAddress("saintsrow2.i386:" + args[a]);
                Function f = (addr == null) ? null : getFunctionAt(addr);
                if (f == null) { pw.println("FUNCTION " + args[a] + " <none>"); continue; }
                SimpleBlockModel model = new SimpleBlockModel(currentProgram);
                Listing listing = currentProgram.getListing();
                pw.println("FUNCTION " + f.getEntryPoint() + " " + f.getName() + " body=" + f.getBody());
                for (CodeBlockIterator bi = model.getCodeBlocksContaining(f.getBody(), monitor); bi.hasNext();) {
                    CodeBlock b = bi.next();
                    StringBuilder ins = new StringBuilder();
                    CodeBlockReferenceIterator sit = b.getSources(monitor);
                    while (sit.hasNext()) {
                        CodeBlockReference r = sit.next();
                        ins.append(r.getFlowType().getName()).append("@").append(r.getSourceBlock()).append(",");
                    }
                    StringBuilder outs = new StringBuilder();
                    CodeBlockReferenceIterator dit = b.getDestinations(monitor);
                    while (dit.hasNext()) outs.append(dit.next().getFlowType().getName()).append(",");
                    pw.println("BLK " + b.getMinAddress() + ".." + b.getMaxAddress() + " in=[" + ins + "] out=[" + outs + "]");
                    InstructionIterator ii = listing.getInstructions(b, true);
                    while (ii.hasNext()) {
                        Instruction in = ii.next();
                        pw.println("   " + in.getAddress() + "  " + in);
                    }
                }
                pw.println();
            }
        }
        println("DUMPFLOW done");
    }
}
