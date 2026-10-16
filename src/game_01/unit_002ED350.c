#include "common.h"

extern s32 D_00508F30;

extern s32 D_00508F34;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002ED350", func_002ED350);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002ED350", func_002ED370);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002ED350", func_002ED410);

void func_002ED4B0(s32 arg0, s32 arg1)
{
    D_00508F30 = arg0;
    D_00508F34 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002ED350", func_002ED4C0);
