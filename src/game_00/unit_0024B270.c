#include "common.h"

extern s32 D_00524798[];

void func_002186C0(s32);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_0024B270);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_0024B6A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_0024BD20);

u32 *func_0024C200(s32 arg0, s32 arg1, u32 *arg2)
{
    if (((*arg2 >> 8) & 0xFF) == 0) {
        func_002186C0(D_00524798[0]);
        arg2 = arg2 + 1;
    }
    return arg2;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_0024C250);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_0024C690);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_0024CAE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_0024CD20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_0024D9E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_0024DE60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_0024E200);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_0024E8D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_0024EFA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_0024F550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_00250220);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_002511C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0024B270", func_00251550);
