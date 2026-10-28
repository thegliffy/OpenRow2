// Recovered source: eon2/src/core/filesystem.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_FileSystem::winToPosixPath @0x0400f690 ---
/* source: filesystem */

string * eON_FileSystem__winToPosixPath(string *param_1)

{
  allocator local_d [5];
  
  FUN_0400a810("false","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/filesystem.cpp",
               0x6f,"std::string eON_FileSystem::winToPosixPath(const string&)");
  std::string::string(param_1,"",local_d);
  return param_1;
}

