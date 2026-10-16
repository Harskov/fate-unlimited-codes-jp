#include "common.h"

extern s32 D_00508D50;

extern s32 D_00508D54;

void func_002B5D48(s32 arg0, s32 arg1)
{
    D_00508D50 = arg0;
    D_00508D54 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002B5D48", func_002B5D58);
