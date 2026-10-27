#include "common.h"

void func_0019CA40();

void func_00358250();

extern s32 D_00531F20[];

#include "libc.h"

extern s32 D_004DC2C0[];

int func_00254290();

extern s32 D_004DC040[][4];

extern s32 D_004DC180[][4];

int func_0019CB40();

int func_002542F0();

int func_0015AFB0();

int func_00357AE0(void)
{
    int v;
    int i;

    v = func_00254290(0);
    if (v < 0)
        return 0;
    for (i = 0; i < 0x12; i++) {
        if (v == D_004DC2C0[i])
            return 0;
    }
    return 1;
}

int func_00357B40(void)
{
    if (func_002542F0(0) == 0)
        return 1;
    return func_0015AFB0(0) >= 1;
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00357B80);

void func_00357C20(void)
{
    memset(D_00531F20, 0, 0x48);
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00357C40);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00357DB0);

int func_00357E20(int arg0, int arg1)
{
    if (func_0019CB40())
        return D_004DC180[arg0][arg1];
    return D_004DC040[arg0][arg1];
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00357EA0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00357EE0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00357F50);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00357FB0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00358030);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00358250);

void func_003582D0(s32 arg0)
{
    func_0019CA40(func_00358250, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_003582E0);
