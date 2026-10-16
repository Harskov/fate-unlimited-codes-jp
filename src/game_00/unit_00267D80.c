#include "common.h"

extern s32 D_00508630;

extern s32 D_00508634;

void func_00267D80(s32 arg0, s32 arg1)
{
    D_00508630 = arg0;
    D_00508634 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00267D80", func_00267D90);
