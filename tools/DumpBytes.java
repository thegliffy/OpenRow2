// Ghidra postScript: dump N bytes at an address as hex.
// Usage: -postScript DumpBytes.java <out.txt> <addr> <len>
//@category OpenRow2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;

public class DumpBytes extends GhidraScript {
    @Override
    public void run() throws Exception {
        Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(getScriptArgs()[0]);
        int len = Integer.parseInt(getScriptArgs()[1], 16);
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < len; i++)
            sb.append(String.format("%02x", currentProgram.getMemory().getByte(a.add(i)) & 0xff));
        println("BYTES " + getScriptArgs()[0] + " " + sb);
    }
}
