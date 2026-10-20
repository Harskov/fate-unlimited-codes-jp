#include "common.h"
#include "types.h"

extern s32 D_00529D90[];

extern s32 D_00523900[];

extern f32 D_00529D9C[];

extern f32 D_00529DA0[];

extern f32 D_00529DA4[];

extern f32 D_00529DA8[];

extern f32 D_00529DAC[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002544C0", func_002544C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002544C0", func_00254520);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002544C0", func_00254560);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002544C0", func_002545A0);

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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002544C0", func_00254C20);

s32 func_00254CA0(void)
{
    return D_00529D90[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002544C0", func_00254CB0);
