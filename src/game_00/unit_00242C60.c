#include "common.h"
#include "types.h"

int sceMcInit(void);

extern int D_00524514[];

extern int D_00524518[];

extern int D_0052450C[];

extern int D_00528B28[];

extern u8 D_00528B30[];

extern u8 D_00528B38[];

extern u8 D_00528B40[];

extern int D_00528B48[];

extern s32 D_00503340[];

extern s32 D_00503380[];

extern s32 D_005033B0[];

extern s32 D_005033E0[];

extern s32 D_00503410[];

extern s32 D_00528B80[];

extern s16 D_00528B86[];

extern s32 D_00528B8C[];

extern s32 D_00528B90[];

extern s32 D_00528BD0[];

extern s32 D_00528C00[];

extern s32 D_00528C30[];

extern s32 D_00528C40[];

extern s32 D_00528C84[];

extern s32 D_00528CC4[];

extern s32 D_00528D04[];

extern void *memcpy(void *, void *, unsigned int);

extern void *memset(void *, int, unsigned int);

extern char *strcpy(void *, void *);

extern s32 D_0051C270[];

extern s32 D_00528B58[];

extern s32 D_00528B68[];

extern s32 D_00528F80[];

extern s32 D_00528F84[];

extern s64 D_00529510[];

extern s64 GetTimerSystemTime(void);

extern int sceMcWrite(int, void *, int);

int func_00244E70(void);

extern s32 D_00523DB0[];

extern int sceMcRead(int, void *, int);

extern int sceMcSync(int, int *, int *);

extern s32 D_0051C280[];

extern s32 D_0051C2E0[];

extern s32 D_0051C2E4[];

extern s32 D_00524530[];

extern s32 D_00524534[];

extern s32 D_00524538[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00242C60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_002430F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00243160);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_002434D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00243890);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_002439E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00243A80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00243CF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00243DD0);

void func_00244A90(char *arg0, s16 arg1, char *arg2, char *arg3, char *arg4)
{
    memset(D_00528B80, 0, 0x3C4);
    strcpy(D_00528B80, D_00503410);
    strcpy(D_00528C40, arg0);
    D_00528B86[0] = arg1;
    D_00528B8C[0] = 0x68;
    memcpy(D_00528B90, D_00503340, 0x40);
    memcpy(D_00528BD0, D_00503380, 0x30);
    memcpy(D_00528C00, D_005033B0, 0x30);
    memcpy(D_00528C30, D_005033E0, 0x10);
    strcpy(D_00528C84, arg2);
    strcpy(D_00528CC4, arg3);
    strcpy(D_00528D04, arg4);
}

int func_00244BC0(int arg0, int arg1, int *arg2)
{
    int flags;
    int v;

    if (D_00528B28[0] == 0) {
        D_0052450C[0] = sceMcRead(arg0, D_00528F80, 0x598);
    }
    D_00528B28[0] = 1;
    if (sceMcSync(1, 0, D_00523DB0) == 0) {
        return 0;
    }
    flags = arg1 & 0x100;
    D_00528B28[0] = 0;
    if (flags != 0) {
        v = D_00528B48[0];
    } else {
        v = func_00244E70();
    }
    if (D_00528F80[0] != v) {
        *arg2 = 1;
    } else {
        *arg2 = 0;
    }
    if (flags != 0 && D_00528B48[0] == 0) {
        *arg2 = 2;
    }
    return 1;
}

int func_00244CA0(int arg0, int arg1)
{
    switch (arg1) {
    case 0:
        if (D_00528B28[0] == 0) {
            D_0052450C[0] = sceMcRead(arg0, D_00528F80, 0x598);
        }
        D_00528B28[0] = 1;
        if (sceMcSync(1, 0, D_00523DB0) == 0) {
            return 0;
        }
        D_00528B28[0] = 0;
        if (D_00523DB0[0] >= 0 && arg1 == 0) {
            memcpy(D_0051C270, D_00528F84, 0x588);
            D_00524538[0] = D_0051C280[0];
            D_00524530[0] = D_0051C2E4[0];
            D_00524534[0] = D_0051C2E0[0];
        }
        break;
    }
    return 1;
}

void func_00244D90(int arg0, u8 arg1)
{
    switch (arg1) {
    case 0:
        memcpy(D_00528F84, D_0051C270, 0x588);
        D_00528F80[0] = 0;
        D_00529510[0] = GetTimerSystemTime();
        D_00528F80[0] = func_00244E70();
        D_0052450C[0] = sceMcWrite(arg0, D_00528F80, 0x598);
        break;
    case 1:
        D_0052450C[0] = sceMcWrite(arg0, D_00528B80, 0x3C4);
        break;
    case 2:
        D_0052450C[0] = sceMcWrite(arg0, (void *)D_00528B68[0], D_00528B58[0]);
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00244E70);

/* evidence: stores the result of sceMcInit() in D_0052450C */
void memcardInit(void)
{
    D_00524514[0] = 0;
    D_00524518[0] = 0;
    D_0052450C[0] = sceMcInit();
    D_00528B28[0] = 0;
    D_00528B30[0] = 0;
    D_00528B38[0] = 0;
    D_00528B40[0] = 0;
    D_00528B48[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00244F10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00246520);
