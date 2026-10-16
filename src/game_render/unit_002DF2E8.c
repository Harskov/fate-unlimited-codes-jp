#include "common.h"

extern s32 D_00508EA0;

extern s32 D_00508EA4;

void func_002DF2E8(s32 arg0, s32 arg1)
{
    D_00508EA0 = arg0;
    D_00508EA4 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DF2E8", func_002DF2F8);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DF2E8", func_002DF3A8);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DF2E8", func_002DF4B8);
