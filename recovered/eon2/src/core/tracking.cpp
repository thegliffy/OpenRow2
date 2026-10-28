// Recovered source: eon2/src/core/tracking.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_TrackingManager::Create @0x0402fee0 ---
/* source: tracking */

void eON_TrackingManager__Create(int param_1,int *param_2)

{
  char cVar1;
  pthread_t pVar2;
  int iVar3;
  uint uVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_044117f0);
  pVar2 = pthread_self();
  iVar3 = eON_TrackingManager__GetThread(param_1,pVar2,1);
  uVar4 = 0;
  do {
    if (*(int *)(iVar3 + 4 + uVar4 * 4) == 0) goto LAB_0402ff71;
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0xff);
  FUN_0402cd10(0xf,
               "ERROR: Number of recurrent calls in a thread reached TRACKING__MAX_OBJECTS_ON_STACK! Increase this constant!"
              );
  FUN_0400a810("false","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/tracking.cpp",0x95,
               "void eON_TrackingManager::Create(const eON_LocalTracking*)");
LAB_0402ff71:
  cVar1 = (&DAT_0001001c)[param_1];
  *(int **)(iVar3 + 4 + uVar4 * 4) = param_2;
  if ((cVar1 != '\0') && (uVar4 <= *(uint *)(&DAT_00010014 + param_1))) {
    iVar3 = param_2[1];
    if ((int)uVar4 < 0) {
      FUN_0400a810("indent >= 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/tracking.cpp",0x33,
                   "const char* eON_TrackingManager::GetIndentString(int)");
    }
    else if (0xff < (int)uVar4) {
      FUN_0400a810("indent <= (int) TRACKING__MAX_OBJECTS_ON_STACK",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/tracking.cpp",0x34,
                   "const char* eON_TrackingManager::GetIndentString(int)");
    }
    FUN_0402cd10(*(undefined4 *)(&DAT_00010018 + param_1),"%s:%s-> %s",
                 *(undefined4 *)(param_1 + 0x10000 + *param_2 * 4),
                 *(int *)(&DAT_00010020 + param_1) + (0xff - uVar4) * 4,iVar3);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_044117f0);
  return;
}

// --- eON_TrackingManager::Delete @0x04030040 ---
/* source: tracking */

void eON_TrackingManager__Delete(int param_1,int *param_2)

{
  pthread_t pVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_044117f0);
  pVar1 = pthread_self();
  iVar2 = eON_TrackingManager__GetThread(param_1,pVar1,0);
  if (iVar2 == 0) {
    FUN_0402cd10(0xf,"Thread %p trying to exit from function \'%s\' it never entered!",pVar1,
                 param_2[1]);
  }
  else {
    do {
      if (*(int *)(iVar2 + 4 + iVar5 * 4) == 0) {
        if (iVar5 != 0) goto LAB_040300df;
        FUN_0402cd10(0xf,"Thread %p trying to exit from function \'%s\' it never entered! (2)",pVar1
                     ,param_2[1]);
        goto LAB_04030142;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0xff);
    FUN_0402cd10(0xf,
                 "ERROR: Number of recurrent calls in a thread reached TRACKING__MAX_OBJECTS_ON_STACK! Increase this constant!"
                );
    FUN_0400a810("false","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/tracking.cpp",
                 0xb7,"void eON_TrackingManager::Delete(const eON_LocalTracking*)");
LAB_040300df:
    uVar4 = iVar5 - 1;
    piVar3 = *(int **)(iVar2 + 4 + uVar4 * 4);
    if (param_2 != piVar3) {
      piVar6 = (int *)(iVar2 + 4 + uVar4 * 4);
      do {
        FUN_0402cd10(0xf,
                     "Removing object %p ( tracking set %u, thread %p ) from stack - game exited function \'%s\' on the stack below it!"
                     ,piVar3,*param_2,pVar1,param_2[1]);
        *piVar6 = 0;
        if (uVar4 == 0) goto LAB_04030142;
        piVar6 = piVar6 + -1;
        uVar4 = uVar4 - 1;
        piVar3 = (int *)*piVar6;
      } while (param_2 != piVar3);
    }
    *(undefined4 *)(iVar2 + 4 + uVar4 * 4) = 0;
    if (((&DAT_0001001d)[param_1] != '\0') && (uVar4 <= *(uint *)(&DAT_00010014 + param_1))) {
      iVar2 = param_2[1];
      if ((int)uVar4 < 0) {
        FUN_0400a810("indent >= 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/tracking.cpp",0x33,
                     "const char* eON_TrackingManager::GetIndentString(int)");
      }
      else if (0xff < (int)uVar4) {
        FUN_0400a810("indent <= (int) TRACKING__MAX_OBJECTS_ON_STACK",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/tracking.cpp",0x34,
                     "const char* eON_TrackingManager::GetIndentString(int)");
      }
      FUN_0402cd10(*(undefined4 *)(&DAT_00010018 + param_1),"%s:%s<- %s",
                   *(undefined4 *)(param_1 + 0x10000 + *param_2 * 4),
                   (0xff - uVar4) * 4 + *(int *)(&DAT_00010020 + param_1),iVar2);
    }
  }
LAB_04030142:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_044117f0);
  return;
}

// --- eON_TrackingManager::GetIndent @0x04030280 ---
/* source: tracking */

int eON_TrackingManager__GetIndent(undefined4 param_1)

{
  pthread_t pVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_044117f0);
  pVar1 = pthread_self();
  iVar2 = eON_TrackingManager__GetThread(param_1,pVar1,0);
  if (iVar2 != 0) {
    do {
      if (*(int *)(iVar2 + 4 + iVar3 * 4) == 0) goto LAB_04030303;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0xff);
    FUN_0402cd10(0xf,
                 "ERROR: Number of recurrent calls in a thread reached TRACKING__MAX_OBJECTS_ON_STACK! Increase this constant!"
                );
    FUN_0400a810("false","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/tracking.cpp",
                 0xe8,"unsigned int eON_TrackingManager::GetIndent()");
  }
LAB_04030303:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_044117f0);
  return iVar3;
}

// --- eON_TrackingManager::GetThread @0x0402fc70 ---
/* source: tracking */

int * eON_TrackingManager__GetThread(int *param_1,int param_2,char param_3)

{
  uint uVar1;
  int *piVar2;
  int *__s;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  byte bVar11;
  int local_28;
  
  bVar11 = 0;
  do {
    iVar7 = 0;
    piVar2 = param_1;
    do {
      if (*piVar2 == 0) {
        if (iVar7 != 0x40) goto LAB_0402fd79;
        break;
      }
      if (*piVar2 == param_2) {
        if (param_1 + iVar7 * 0x100 != (int *)0x0) {
          return param_1 + iVar7 * 0x100;
        }
        goto LAB_0402fd79;
      }
      iVar7 = iVar7 + 1;
      piVar2 = piVar2 + 0x100;
    } while (iVar7 != 0x40);
    iVar6 = 0;
    local_28 = 0;
    piVar2 = param_1;
    do {
      if (*piVar2 == 0) break;
      if (piVar2[1] == 0) {
        local_28 = local_28 + 1;
        *piVar2 = 0;
      }
      else if (local_28 != 0) {
        uVar1 = 0x400;
        __s = param_1 + iVar6 * 0x100;
        piVar3 = param_1 + (iVar6 - local_28) * 0x100;
        bVar10 = ((uint)piVar3 & 1) != 0;
        piVar8 = __s;
        piVar9 = piVar3;
        if (bVar10) {
          piVar9 = (int *)((int)piVar3 + 1);
          *(char *)piVar3 = (char)*__s;
          uVar1 = 0x3ff;
          piVar8 = (int *)((int)__s + 1);
        }
        if (((uint)piVar9 & 2) != 0) {
          iVar5 = *piVar8;
          uVar1 = uVar1 - 2;
          piVar8 = (int *)((int)piVar8 + 2);
          *(short *)piVar9 = (short)iVar5;
          piVar9 = (int *)((int)piVar9 + 2);
        }
        for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *piVar9 = *piVar8;
          piVar8 = piVar8 + (uint)bVar11 * -2 + 1;
          piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
        }
        if ((uVar1 & 2) == 0) {
          iVar5 = 0;
        }
        else {
          *(short *)piVar9 = (short)*piVar8;
          iVar5 = 2;
        }
        if (bVar10) {
          *(undefined1 *)((int)piVar9 + iVar5) = *(undefined1 *)((int)piVar8 + iVar5);
        }
        bzero(__s,0x400);
      }
      iVar6 = iVar6 + 1;
      piVar2 = piVar2 + 0x100;
    } while (iVar6 != 0x40);
    iVar6 = 0;
    piVar2 = param_1;
    while (*piVar2 != 0) {
      iVar6 = iVar6 + 1;
      piVar2 = piVar2 + 0x100;
      if (iVar6 == 0x40) {
        FUN_0402cd10(0xf,
                     "ERROR: Number of concurrent threads reached TRACKING__MAX_THREADS_IN_SET! Increase this constant!"
                    );
        FUN_0400a810("false","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/tracking.cpp"
                     ,0x70,
                     "eON_TrackingManager::ThreadStack* eON_TrackingManager::GetThread(pthread_t, bool)"
                    );
LAB_0402fd79:
        piVar2 = (int *)0x0;
        if (param_3 != '\0') {
          param_1[iVar7 * 0x100] = param_2;
          if ((param_1 + iVar7 * 0x100)[1] != 0) {
            FUN_0400a810("!ThreadsData[i].Objects[0]",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/tracking.cpp",
                         0x7d,
                         "eON_TrackingManager::ThreadStack* eON_TrackingManager::GetThread(pthread_t, bool)"
                        );
          }
          piVar2 = param_1 + iVar7 * 0x100;
        }
        return piVar2;
      }
    }
  } while( true );
}

// --- tracking_0402f9a0 @0x0402f9a0 ---
/* source: tracking */

int tracking_0402f9a0(int param_1,int param_2)

{
  if (param_2 < 0) {
    FUN_0400a810("indent >= 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/tracking.cpp",0x33,
                 "const char* eON_TrackingManager::GetIndentString(int)");
  }
  else if (0xff < param_2) {
    FUN_0400a810("indent <= (int) TRACKING__MAX_OBJECTS_ON_STACK",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/tracking.cpp",0x34,
                 "const char* eON_TrackingManager::GetIndentString(int)");
  }
  return (0xff - param_2) * 4 + *(int *)(&DAT_00010020 + param_1);
}

