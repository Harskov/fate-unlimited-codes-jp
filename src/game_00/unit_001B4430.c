#include "common.h"

typedef int s32;

s32 func_001B5800();

extern s32 D_0051D740[];

void func_001B5DC0();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B4430", func_001B4430);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B4430", func_001B49E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B4430", func_001B4A80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B4430", func_001B4B30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B4430", func_001B4C10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B4430", func_001B5210);

void func_001B57E0(s32 *arg0, s32 *arg1, s32 arg2)
{
    *arg1 += arg2;
    func_001B5800(arg0, arg2);
}

s32 func_001B5800(s32 arg0, s32 arg1)
{
    return arg0 + arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B4430", func_001B5810);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B4430", func_001B5870);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B4430", func_001B5CE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B4430", func_001B5DC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B4430", func_001B5DD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B4430", func_001B5E00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B4430", func_001B5F00);

void func_001B5F30(s32 arg0)
{
    func_001B5DC0(arg0, D_0051D740);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B4430", func_001B5F40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B4430", func_001B6030);
