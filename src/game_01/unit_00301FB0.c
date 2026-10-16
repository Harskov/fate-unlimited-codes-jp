#include "common.h"

extern s32 D_00509010;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00301FB0", func_00301FB0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00301FB0", func_00301FE0);

s32 func_00302010(void)
{
    return ((u32)D_00509010 & 0x3000) >> 12;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00301FB0", func_00302020);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00301FB0", func_00302090);
