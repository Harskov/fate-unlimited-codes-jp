#include "common.h"
#include "types.h"

extern s32 D_00522C40[];

extern s32 D_00522C50[];

extern s32 D_00522C48[];

extern s32 D_003D7B90[];

extern s32 D_003D7B98[];

extern s32 D_003D7BA0[];

extern s32 D_003D7BA8[];

extern char gFormat_501960[];

extern char gFormat_501970[];

extern char D_00522BE0[];

extern char D_00522C20[];

extern int sprintf(char *, const char *, ...);

void func_00206B50();

s32 func_00207310(void)
{
    return D_00522C40[0];
}

void func_00207320(s32 arg0)
{
    D_00522C40[0] = arg0;
    switch (arg0) {
    case 0:
        break;
    case 1:
        func_00206B50();
        break;
    case 2:
    case 3:
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00207310", func_00207380);

char *func_002073D0(void)
{
    sprintf(D_00522C20, gFormat_501960, D_003D7B90[0], D_003D7B98[0], D_003D7BA0[0], D_003D7BA8[0]);
    sprintf(D_00522BE0, gFormat_501970, D_00522C20);
    return D_00522C20;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00207310", func_00207440);

void func_00207630(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00207310", func_00207640);

s32 func_00207690(void)
{
    return D_00522C50[0];
}

s32 func_002076A0(void)
{
    return D_00522C48[0];
}
