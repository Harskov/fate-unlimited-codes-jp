#include "common.h"

extern s32 D_00508E94;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DDC10", func_002DDC10);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DDC10", func_002DDE60);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DDC10", func_002DDEB0);

void func_002DDFB0(s32 arg0)
{
    D_00508E94 = arg0;
}
