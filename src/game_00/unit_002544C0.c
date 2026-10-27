#include "common.h"
#include "types.h"

extern s32 D_00529D90[];

extern s32 D_00523900[];

extern f32 D_00529D9C[];

extern f32 D_00529DA0[];

extern f32 D_00529DA4[];

extern f32 D_00529DA8[];

extern f32 D_00529DAC[];

s32 func_00255590(void);

void func_0015B310(s32 arg0);

void func_0015B1B0(s32 arg0, s32 arg1, f32 arg2);

void func_002544C0(s32 arg0, s32 arg1, f32 arg2)
{
    if (func_00255590() == 0) {
        return;
    }
    func_0015B1B0(arg0, arg1, arg2);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002544C0", func_00254520);

void func_00254560(s32 arg0)
{
    if (func_00255590() == 0) {
        return;
    }
    func_0015B310(arg0);
}

void func_002545A0(s32 arg0)
{
    s32 i;

    if (arg0 != 0) {
        i = 0;
    } else {
        i = 1;
    }
    for (; i < 4; i++) {
        func_00254600(i);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002544C0", func_00254600);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002544C0", func_00254680);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002544C0", func_00254760);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002544C0", func_002548D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002544C0", func_00254940);

void func_00254A10(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002544C0", func_00254A20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002544C0", func_00254AC0);

void func_00254B30(s32 arg0, s32 arg1)
{
    switch (arg0) {
    case 5:
        break;
    case 0:
        D_00523900[1] = arg1;
        break;
    case 1:
        D_00523900[2] = arg1;
        break;
    case 2:
        D_00523900[3] = arg1;
        break;
    }
}

f32 func_00254B90(u32 arg0)
{
    switch (arg0) {
    case 5:
        return D_00529D9C[0];
    case 0:
        return D_00529DA0[0];
    case 1:
        return D_00529DA4[0];
    case 2:
        return D_00529DA8[0];
    case 3:
        return D_00529DAC[0];
    case 4:
        return 1.0f;
    default:
        return 1.0f;
    }
}

// the setter that pairs with func_00254B90: stores the value into the slot the selector names
void func_00254C20(s32 arg0, f32 arg1)
{
    switch (arg0) {
    case 5:
        D_00529D9C[0] = arg1;
        break;
    case 0:
        D_00529DA0[0] = arg1;
        break;
    case 1:
        D_00529DA4[0] = arg1;
        break;
    case 2:
        D_00529DA8[0] = arg1;
        break;
    case 3:
        D_00529DAC[0] = arg1;
        break;
    }
}

s32 func_00254CA0(void)
{
    return D_00529D90[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002544C0", func_00254CB0);
