#include "common.h"

extern s32 D_00508EDC;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002E22D0", func_002E22D0);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002E22D0", func_002E25C0);

void func_002E2910(s32 arg0)
{
    D_00508EDC = arg0;
}
