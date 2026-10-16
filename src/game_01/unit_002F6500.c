#include "common.h"

extern s32 D_00508F48;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002F6500", func_002F6500);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002F6500", func_002F6630);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002F6500", func_002F6810);

void func_002F6B00(s32 arg0)
{
    D_00508F48 = arg0;
}
