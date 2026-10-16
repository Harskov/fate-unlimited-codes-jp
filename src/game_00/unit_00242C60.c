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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00244BC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00244CA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00244D90);

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
