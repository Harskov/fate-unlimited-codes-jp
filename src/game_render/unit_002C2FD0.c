#include "common.h"

extern s32 D_00508D98;

extern s32 D_00508D9C;

extern s32 D_00508DA0;

extern s32 D_00508DA4;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002C2FD0", func_002C2FD0);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002C2FD0", func_002C3040);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002C2FD0", func_002C30D0);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002C2FD0", func_002C3100);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002C2FD0", func_002C3310);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002C2FD0", func_002C35F0);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002C2FD0", func_002C39D0);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002C2FD0", func_002C3CD0);

void func_002C3E40(s32 arg0, s32 arg1)
{
    D_00508D98 = arg0;
    D_00508D9C = arg1;
}

void func_002C3E50(s32 arg0, s32 arg1)
{
    D_00508DA0 = arg0;
    D_00508DA4 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002C2FD0", func_002C3E60);
