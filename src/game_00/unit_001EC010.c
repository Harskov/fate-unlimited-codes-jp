#include "common.h"

extern f32 D_0051FA00[];

extern f32 D_0051FA04[];

extern s32 D_0051FA08[];

extern f32 D_0051F9D4[];

extern f32 D_0051F9E0[];

extern s32 D_0051F9EC[];

void func_001EC730(s32, f32, f32, f32, f32, s32, s32);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC010);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC070);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC0D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC130);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC320);

void func_001EC6A0(s32 arg0)
{
    func_001EC730(arg0, D_0051F9D4[0], D_0051FA00[0], D_0051F9E0[0], D_0051FA04[0], D_0051F9EC[0], D_0051FA08[0]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC6E0);

void func_001EC700(s32 arg0, s32 arg1, f32 arg2, f32 arg3)
{
    func_001EC730(arg0, D_0051F9D4[0], arg2, D_0051F9E0[0], arg3, D_0051F9EC[0], arg1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC730);

void func_001EC7F0(s32 arg0, f32 arg1, f32 arg2)
{
    D_0051FA00[0] = arg1;
    D_0051FA04[0] = arg2;
    D_0051FA08[0] = arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC810);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC860);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001ECFA0);
