#include "common.h"

extern s32 D_00508F28;

extern s32 D_00508F2C;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002ED578", func_002ED578);

void func_002ED618(s32 arg0, s32 arg1)
{
    D_00508F28 = arg0;
    D_00508F2C = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002ED578", func_002ED628);
