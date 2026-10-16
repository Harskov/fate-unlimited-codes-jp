#include "common.h"

extern s32 D_0051F138[];

typedef struct Obj_001E3140 {
    unsigned char pad[0xB8];
    s32 unk_B8;
} Obj_001E3140;

s32 func_001E2F20(void)
{
    return D_0051F138[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E2F30);

void func_001E3110(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3120);

void func_001E3140(Obj_001E3140 *p, s32 arg1)
{
    p->unk_B8 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3150);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3500);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3560);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E35B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3600);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E36C0);

void func_001E37F0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3800);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3880);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E38D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3920);
