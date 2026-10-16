#include "common.h"

extern s32 D_00508E48;

extern s32 D_00508E4C;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002CF6A0", func_002CF6A0);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002CF6A0", func_002CFA30);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002CF6A0", func_002CFC00);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002CF6A0", func_002CFDF0);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002CF6A0", func_002D0170);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002CF6A0", func_002D0360);

void func_002D0620(s32 arg0, s32 arg1)
{
    D_00508E48 = arg0;
    D_00508E4C = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002CF6A0", func_002D0630);
