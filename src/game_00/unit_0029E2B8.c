#include "common.h"

extern s32 D_00508C38;

extern s32 D_00508C3C;

void func_0029E2B8(s32 arg0, s32 arg1)
{
    D_00508C38 = arg0;
    D_00508C3C = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0029E2B8", func_0029E2C8);
