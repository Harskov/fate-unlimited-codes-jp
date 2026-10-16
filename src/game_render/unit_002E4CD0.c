#include "common.h"

extern s32 D_00508EE0;

extern s32 D_00508EE4;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002E4CD0", func_002E4CD0);

void func_002E4D00(s32 arg0, s32 arg1)
{
    D_00508EE0 = arg0;
    D_00508EE4 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002E4CD0", func_002E4D10);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002E4CD0", func_002E4D70);
