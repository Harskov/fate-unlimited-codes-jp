#include "common.h"

extern s32 D_00508D38;

extern s32 D_00508D3C;

extern s32 D_00508D40;

extern s32 D_00508D44;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002B1D48", func_002B1D48);

void func_002B1DB8(s32 arg0, s32 arg1)
{
    D_00508D38 = arg0;
    D_00508D3C = arg1;
}

void func_002B1DC8(s32 arg0, s32 arg1)
{
    D_00508D40 = arg0;
    D_00508D44 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002B1D48", func_002B1DD8);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002B1D48", func_002B1E28);
