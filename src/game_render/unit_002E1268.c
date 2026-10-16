#include "common.h"

extern s32 D_00508ECC;

extern s32 D_00508ED0;

void func_002E1268(s32 arg0, s32 arg1)
{
    D_00508ECC = arg0;
    D_00508ED0 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002E1268", func_002E1278);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002E1268", func_002E12D8);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002E1268", func_002E1318);

void *func_002E13D8(void *arg0)
{
    return arg0;
}
