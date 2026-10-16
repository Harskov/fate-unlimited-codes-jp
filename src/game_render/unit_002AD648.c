#include "common.h"

extern s32 D_00508D18;

extern s32 D_00508D1C;

void func_002AD648(s32 arg0, s32 arg1)
{
    D_00508D18 = arg0;
    D_00508D1C = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002AD648", func_002AD658);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002AD648", func_002AD6F8);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002AD648", func_002AD7E8);
