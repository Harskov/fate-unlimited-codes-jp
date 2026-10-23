#include "common.h"

void func_002AA448();

void func_002AA480();

s32 func_002A9D10(void)
{
    func_002AA448();
    return 1;
}

s32 func_002A9D30(void)
{
    func_002AA480();
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002A9D10", func_002A9D50);
