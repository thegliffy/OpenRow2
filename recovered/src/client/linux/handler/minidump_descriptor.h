// Recovered source: ./src/client/linux/handler/minidump_descriptor.h
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- minidump_descriptor_042c7690 @0x042c7690 ---
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* source: minidump_descriptor */

uint minidump_descriptor_042c7690
               (undefined4 param_1,undefined4 param_2,string *param_3,code *param_4,
               undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int in_GS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x42c769e;
  local_38 = 1;
  local_34 = 0xffffffff;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  std::string::string((string *)&local_30,param_3);
  local_28 = 0;
  local_24 = 0xffffffff;
  local_2c = PTR__S_empty_rep_storage_044082b0 + 0xc;
  if (*(int *)(*(int *)param_3 + -0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!directory.empty()","./src/client/linux/handler/minidump_descriptor.h",0x3e,
                  "google_breakpad::MinidumpDescriptor::MinidumpDescriptor(const string&)");
  }
                    /* try { // try from 042c770b to 042c7736 has its CatchHandler @ 042c781e */
  google_breakpad__MinidumpDescriptor__UpdatePath(&local_38);
  uVar2 = google_breakpad__WriteMinidump(local_28,param_1,param_2);
  if (((char)uVar2 != '\0') && (param_4 != (code *)0x0)) {
    uVar2 = (*param_4)(&local_38,param_5,1);
  }
  if ((allocator *)(local_2c + -0xc) != (allocator *)PTR__S_empty_rep_storage_044082b0) {
    if (PTR___pthread_key_create_044082d0 == (undefined *)0x0) {
      iVar3 = *(int *)(local_2c + -4);
      *(int *)(local_2c + -4) = iVar3 + -1;
    }
    else {
      LOCK();
      piVar1 = (int *)(local_2c + -4);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    if (iVar3 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_2c + -0xc));
      uVar2 = uVar2 & 0xff;
    }
  }
  if ((allocator *)(local_30 + -0xc) != (allocator *)PTR__S_empty_rep_storage_044082b0) {
    if (PTR___pthread_key_create_044082d0 == (undefined *)0x0) {
      iVar3 = *(int *)(local_30 + -4);
      *(int *)(local_30 + -4) = iVar3 + -1;
    }
    else {
      LOCK();
      piVar1 = (int *)(local_30 + -4);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    if (iVar3 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_30 + -0xc));
      uVar2 = uVar2 & 0xff;
    }
  }
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_042d5e70();
}

// --- minidump_descriptor_042c7bd0 @0x042c7bd0 ---
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* source: minidump_descriptor */

undefined1 minidump_descriptor_042c7bd0(string *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int in_GS_OFFSET;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64 [68];
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x42c7be1;
  local_7c = 1;
  local_78 = 0xffffffff;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  std::string::string((string *)&local_74,param_1);
  local_6c = 0;
  local_68 = 0xffffffff;
  local_70 = PTR__S_empty_rep_storage_044082b0 + 0xc;
  if (*(int *)(*(int *)param_1 + -0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!directory.empty()","./src/client/linux/handler/minidump_descriptor.h",0x3e,
                  "google_breakpad::MinidumpDescriptor::MinidumpDescriptor(const string&)");
  }
                    /* try { // try from 042c7c66 to 042c7c6a has its CatchHandler @ 042c7d87 */
  FUN_042c7840(local_64,&local_7c,0,param_2,param_3,0,0xffffffff);
                    /* try { // try from 042c7c6f to 042c7c73 has its CatchHandler @ 042c7d5e */
  uVar2 = FUN_042c72e0(local_64);
                    /* try { // try from 042c7c7d to 042c7c81 has its CatchHandler @ 042c7d87 */
  FUN_042c62c0(local_64);
  if ((allocator *)(local_70 + -0xc) != (allocator *)PTR__S_empty_rep_storage_044082b0) {
    if (PTR___pthread_key_create_044082d0 == (undefined *)0x0) {
      iVar3 = *(int *)(local_70 + -4);
      *(int *)(local_70 + -4) = iVar3 + -1;
    }
    else {
      LOCK();
      piVar1 = (int *)(local_70 + -4);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    if (iVar3 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_70 + -0xc));
    }
  }
  if ((allocator *)(local_74 + -0xc) != (allocator *)PTR__S_empty_rep_storage_044082b0) {
    if (PTR___pthread_key_create_044082d0 == (undefined *)0x0) {
      iVar3 = *(int *)(local_74 + -4);
      *(int *)(local_74 + -4) = iVar3 + -1;
    }
    else {
      LOCK();
      piVar1 = (int *)(local_74 + -4);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    if (iVar3 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_74 + -0xc));
    }
  }
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_042d5e70();
}

