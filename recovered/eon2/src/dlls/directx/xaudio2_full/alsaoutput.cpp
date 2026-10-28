// Recovered source: eon2/src/dlls/directx/xaudio2_full/alsaoutput.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- AlsaOutput::AlsaOutput @0x041014f0 ---
/* source: alsaoutput */

void AlsaOutput__AlsaOutput(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0430f2e0;
  param_1[3] = 0;
                    /* try { // try from 04101525 to 041015a3 has its CatchHandler @ 041015a6 */
  snd_pcm_open(param_1 + 3,"default",0,0);
  if (param_1[3] == 0) {
    FUN_0400a810("mPlaybackHandle",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/alsaoutput.cpp"
                 ,0x21,"AlsaOutput::AlsaOutput()");
  }
  param_1[2] = 2;
  param_1[1] = 0xac44;
  snd_pcm_set_params(param_1[3],2,3,2,0xac44,1,20000);
  return;
}

