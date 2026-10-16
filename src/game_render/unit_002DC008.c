#include "common.h"

extern s32 D_00508E8C;

extern s32 D_00508E90;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DC008", func_002DC008);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DC008", func_002DC248);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DC008", func_002DC408);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DC008", func_002DC438);

void func_002DC468(s32 arg0, s32 arg1)
{
    D_00508E8C = arg0;
    D_00508E90 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DC008", func_002DC478);
