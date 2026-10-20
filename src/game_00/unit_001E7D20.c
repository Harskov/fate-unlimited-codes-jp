#include "common.h"

void func_001E8F10(s32 arg0, s32 arg1);

extern s32 D_0051F338[];

extern s32 D_0051F340[];

extern s32 D_0051F344[];

extern s32 D_0051F348[];

extern s32 D_0051F34C[];

s32 func_001F1520();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E7D20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E7DF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E7EC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E7F00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E7FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8150);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8270);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E83E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8400);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8580);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8700);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8870);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8AF0);

// stores one result into five globals, the last one first
void func_001E8B70(void)
{
    s32 v = func_001F1520();

    D_0051F34C[0] = v;
    D_0051F348[0] = v;
    D_0051F344[0] = v;
    D_0051F340[0] = v;
    D_0051F338[0] = v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8BC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8C60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8DB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8DE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8E20);

void func_001E8F00(s32 arg0)
{
    func_001E8F10(arg0, 0);
}
