#include "common.h"

extern s32 D_00508D60;

extern s32 D_00508D64;

void func_002B6BC0(s32 arg0, s32 arg1)
{
    D_00508D60 = arg0;
    D_00508D64 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002B6BC0", func_002B6BD0);
