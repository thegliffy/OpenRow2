// Recovered source: eon2/src/core/linux/filesystem.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_FileSystem::windowsRegistryPathMacPlist @0x0401a1a0 ---
/* source: filesystem */

undefined4 eON_FileSystem__windowsRegistryPathMacPlist(void)

{
  FUN_0400a810("false",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/filesystem.cpp",0x1b2
               ,"const char* eON_FileSystem::windowsRegistryPathMacPlist()");
  return 0;
}

// --- readSymbolicLink @0x04017fd0 ---
/* WARNING: Removing unreachable block (ram,0x0401899c) */
/* WARNING: Removing unreachable block (ram,0x0401894b) */
/* WARNING: Removing unreachable block (ram,0x04018980) */
/* WARNING: Removing unreachable block (ram,0x0401898e) */
/* WARNING: Removing unreachable block (ram,0x04018a4a) */
/* WARNING: Removing unreachable block (ram,0x0401893d) */
/* WARNING: Removing unreachable block (ram,0x04018a3c) */
/* WARNING: Removing unreachable block (ram,0x04018964) */
/* WARNING: Removing unreachable block (ram,0x04018956) */
/* WARNING: Removing unreachable block (ram,0x04018a83) */
/* WARNING: Removing unreachable block (ram,0x04018972) */
/* source: filesystem */

undefined4 readSymbolicLink(void)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  ssize_t sVar8;
  __pid_t _Var9;
  stat64 local_b4;
  int local_54;
  undefined1 *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  allocator local_2a;
  allocator local_29;
  allocator local_28 [24];
  
  pcVar4 = getenv("HOME");
  if (pcVar4 == (char *)0x0) {
    fwrite("eON_FileSystem::init() - HOME environment variable not set!\n",1,0x3c,stderr);
    return 0;
  }
  std::string::string((string *)&local_54,pcVar4,&local_2a);
                    /* try { // try from 04018011 to 04018015 has its CatchHandler @ 040189aa */
  std::string::swap((string *)&DAT_044112d4);
  if ((allocator *)(local_54 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar5 = (int *)(local_54 + -4);
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_54 + -0xc));
    }
  }
  iVar6 = *(int *)(DAT_044112d4 + -0xc);
  if (-1 < *(int *)(DAT_044112d4 + -4)) {
    std::string::_M_leak_hard();
  }
  if (DAT_044112d4[iVar6 + -1] != '/') {
    iVar6 = *(int *)(DAT_044112d4 + -0xc);
    uVar1 = iVar6 + 1;
    if ((*(uint *)(DAT_044112d4 + -8) < uVar1) || (0 < *(int *)(DAT_044112d4 + -4))) {
      std::string::reserve(0x44112d4);
      iVar6 = *(int *)(DAT_044112d4 + -0xc);
    }
    DAT_044112d4[iVar6] = 0x2f;
    puVar2 = DAT_044112d4;
    if (DAT_044112d4 != &DAT_04410d0c) {
      *(undefined4 *)(DAT_044112d4 + -4) = 0;
      *(uint *)(puVar2 + -0xc) = uVar1;
      puVar2[uVar1] = 0;
    }
  }
  local_50 = &DAT_04410d0c;
  pcVar4 = getenv("XDG_DATA_HOME");
  if (pcVar4 == (char *)0x0) {
                    /* try { // try from 04018561 to 04018565 has its CatchHandler @ 040189bc */
    std::string::string((string *)&local_4c,(string *)&DAT_044112d4);
                    /* try { // try from 04018579 to 0401857d has its CatchHandler @ 04018a25 */
    std::string::append((char *)&local_4c,0x42dca8d);
                    /* try { // try from 04018585 to 04018589 has its CatchHandler @ 04018a23 */
    std::string::swap((string *)&local_50);
    if ((allocator *)(local_4c + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
      LOCK();
      piVar5 = (int *)(local_4c + -4);
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 < 1) {
        std::string::_Rep::_M_destroy((allocator *)(local_4c + -0xc));
      }
    }
  }
  else {
                    /* try { // try from 040180bb to 040180bf has its CatchHandler @ 040189ce */
    std::string::string((string *)&local_48,pcVar4,&local_29);
                    /* try { // try from 040180ca to 040180ce has its CatchHandler @ 04018a58 */
    std::string::swap((string *)&local_50);
    if ((allocator *)(local_48 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
      LOCK();
      piVar5 = (int *)(local_48 + -4);
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 < 1) {
        std::string::_Rep::_M_destroy((allocator *)(local_48 + -0xc));
      }
    }
  }
  iVar6 = *(int *)(local_50 + -0xc);
  if (-1 < *(int *)(local_50 + -4)) {
                    /* try { // try from 040180f1 to 04018144 has its CatchHandler @ 040189bc */
    std::string::_M_leak_hard();
  }
  if (local_50[iVar6 + -1] != '/') {
    iVar6 = *(int *)(local_50 + -0xc);
    uVar1 = iVar6 + 1;
    if ((*(uint *)(local_50 + -8) < uVar1) || (0 < *(int *)(local_50 + -4))) {
      std::string::reserve((uint)&local_50);
      iVar6 = *(int *)(local_50 + -0xc);
    }
    local_50[iVar6] = 0x2f;
    if (local_50 != &DAT_04410d0c) {
      *(undefined4 *)(local_50 + -4) = 0;
      *(uint *)(local_50 + -0xc) = uVar1;
      local_50[uVar1] = 0;
    }
  }
  std::string::string((string *)&local_44,(string *)&local_50);
                    /* try { // try from 04018150 to 04018154 has its CatchHandler @ 04018a69 */
  std::string::append((string *)&local_44);
                    /* try { // try from 04018168 to 0401816c has its CatchHandler @ 04018a13 */
  piVar5 = (int *)std::string::append((char *)&local_44,0x42e5ca1);
  local_40 = *piVar5;
  *piVar5 = (int)&DAT_04410d0c;
                    /* try { // try from 04018186 to 0401818a has its CatchHandler @ 04018a0f */
  piVar5 = (int *)std::string::append((string *)&local_40);
  local_3c = *piVar5;
  *piVar5 = (int)&DAT_04410d0c;
                    /* try { // try from 040181ac to 040181b0 has its CatchHandler @ 04018a0b */
  piVar5 = (int *)std::string::append((char *)&local_3c,0x42e5ca1);
  local_38 = *piVar5;
  *piVar5 = (int)&DAT_04410d0c;
                    /* try { // try from 040181ca to 040181ce has its CatchHandler @ 040189d3 */
  std::string::swap((string *)&DAT_044112d8);
  if ((allocator *)(local_38 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar5 = (int *)(local_38 + -4);
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_38 + -0xc));
    }
  }
  if ((allocator *)(local_3c + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar5 = (int *)(local_3c + -4);
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_3c + -0xc));
    }
  }
  if ((allocator *)(local_40 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar5 = (int *)(local_40 + -4);
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_40 + -0xc));
    }
  }
  if ((allocator *)(local_44 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar5 = (int *)(local_44 + -4);
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_44 + -0xc));
    }
  }
  iVar6 = __xstat64(3,DAT_044112d8,&local_b4);
  if (iVar6 == 0) {
LAB_040182ae:
    iVar6 = access("/proc",0);
    if (iVar6 == 0) {
      pcVar4 = malloc(0x1000);
      sVar8 = readlink("/proc/self/exe",pcVar4,0x1000);
      if (sVar8 == -1) {
        free(pcVar4);
LAB_04018693:
        _Var9 = getpid();
        snprintf((char *)&local_b4,0x40,"/proc/%llu/exe",_Var9,_Var9 >> 0x1f);
        pcVar4 = malloc(0x1000);
        sVar8 = readlink((char *)&local_b4,pcVar4,0x1000);
        if (sVar8 == -1) {
          free(pcVar4);
        }
        else {
          if (0xfff < sVar8) {
            FUN_0400a810("readCount < linkSize",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/filesystem.cpp"
                         ,0xad,"char* readSymbolicLink(const char*)");
          }
          pcVar4[sVar8] = '\0';
          pcVar4 = realloc(pcVar4,sVar8 + 1);
          if (pcVar4 != (char *)0x0) goto LAB_04018353;
        }
        fwrite("eON_FileSystem::init() - Can\'t determine executable path using \'/proc\'!\n",1,0x48
               ,stderr);
      }
      else {
        if (0xfff < sVar8) {
          FUN_0400a810("readCount < linkSize",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/filesystem.cpp"
                       ,0xad,"char* readSymbolicLink(const char*)");
        }
        pcVar4[sVar8] = '\0';
        pcVar4 = realloc(pcVar4,sVar8 + 1);
        if (pcVar4 == (char *)0x0) goto LAB_04018693;
LAB_04018353:
        std::string::string((string *)&local_34,pcVar4,local_28);
        free(pcVar4);
                    /* try { // try from 04018384 to 040183af has its CatchHandler @ 04018a17 */
        iVar6 = std::string::rfind((char)(string *)&local_34,0x2f);
        if (iVar6 == -1) {
                    /* try { // try from 040184f8 to 040184fc has its CatchHandler @ 04018a17 */
          fwrite("eON_FileSystem::init() - Executable path contains no \'/\'s!\n",1,0x3b,stderr);
          if ((allocator *)(local_34 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar5 = (int *)(local_34 + -4);
            iVar6 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            uVar7 = 0;
            if (iVar6 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_34 + -0xc));
              uVar7 = 0;
            }
            goto LAB_0401827a;
          }
        }
        else {
          std::string::string((string *)&local_30,(string *)&local_34,0,iVar6 + 1);
                    /* try { // try from 040183bb to 040183bf has its CatchHandler @ 04018a6b */
          std::string::swap((string *)&DAT_044112dc);
          if ((allocator *)(local_30 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar5 = (int *)(local_30 + -4);
            iVar6 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar6 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_30 + -0xc));
            }
          }
          if ((allocator *)(local_34 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar5 = (int *)(local_34 + -4);
            iVar6 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar6 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_34 + -0xc));
            }
          }
          pcVar4 = tempnam("/tmp",DAT_044112e0);
          if (pcVar4 != (char *)0x0) {
            strlen(pcVar4);
                    /* try { // try from 0401841a to 040184cb has its CatchHandler @ 040189bc */
            std::string::assign((char *)&DAT_044112d0,(uint)pcVar4);
            free(pcVar4);
            iVar6 = *(int *)(DAT_044112d0 + -0xc);
            if (-1 < *(int *)(DAT_044112d0 + -4)) {
              std::string::_M_leak_hard();
            }
            if (DAT_044112d0[iVar6 + -1] != '/') {
              iVar6 = *(int *)(DAT_044112d0 + -0xc);
              uVar1 = iVar6 + 1;
              if ((*(uint *)(DAT_044112d0 + -8) < uVar1) || (0 < *(int *)(DAT_044112d0 + -4))) {
                std::string::reserve(0x44112d0);
                iVar6 = *(int *)(DAT_044112d0 + -0xc);
              }
              DAT_044112d0[iVar6] = 0x2f;
              puVar2 = DAT_044112d0;
              if (DAT_044112d0 != &DAT_04410d0c) {
                *(undefined4 *)(DAT_044112d0 + -4) = 0;
                *(uint *)(puVar2 + -0xc) = uVar1;
                puVar2[uVar1] = 0;
                uVar7 = 1;
                goto LAB_0401827a;
              }
            }
            uVar7 = 1;
            goto LAB_0401827a;
          }
          piVar5 = __errno_location();
          pcVar4 = strerror(*piVar5);
                    /* try { // try from 0401867b to 04018765 has its CatchHandler @ 040189bc */
          fprintf(stderr,"eON_FileSystem::init() - Couldn\'t create temporary folder, (%u) %s\n",
                  *piVar5,pcVar4);
        }
      }
    }
    else {
      fwrite("eON_FileSystem::init() - Can\'t access \'/proc\' to get executable folder!\n",1,0x48,
             stderr);
    }
  }
  else {
    piVar5 = __errno_location();
    if (*piVar5 == 2) {
      cVar3 = eON_FileSystem__createPath();
      if (cVar3 != '\0') goto LAB_040182ae;
    }
    else {
      pcVar4 = strerror(*piVar5);
                    /* try { // try from 04018273 to 04018368 has its CatchHandler @ 040189bc */
      fprintf(stderr,"eON_FileSystem::checkPathExists() failed for path %s, (%u) %s\n",DAT_044112d8,
              *piVar5,pcVar4);
    }
  }
  uVar7 = 0;
LAB_0401827a:
  if ((allocator *)(local_50 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar5 = (int *)(local_50 + -4);
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_50 + -0xc));
    }
  }
  return uVar7;
}

