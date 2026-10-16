#include "common.h"

extern s32 D_00508EEC;

extern s32 D_00508EF0;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002E6C10", func_002E6C10);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002E6C10", func_002E6C50);

void func_002E6CB0(s32 arg0, s32 arg1)
{
    D_00508EEC = arg0;
    D_00508EF0 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002E6C10", func_002E6CC0);
