#include "common.h"

extern s32 D_0051F138[];

typedef struct Obj_001E3140 {
    unsigned char pad[0xB8];
    s32 unk_B8;
} Obj_001E3140;

typedef struct Obj_001E3120 {
    unsigned char pad[0xB4];
    u8 unk_B4;
    u8 unk_B5;
    u8 unk_B6;
    u8 unk_B7;
} Obj_001E3120;

extern s32 D_0051D8A0[];

s32 func_001E2F20(void)
{
    return D_0051F138[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E2F30);

void func_001E3110(void)
{
}

void func_001E3120(Obj_001E3120 *p)
{
    p->unk_B4 = 0xFF;
    p->unk_B5 = 0xFF;
    p->unk_B6 = 0xFF;
    p->unk_B7 = 0xFF;
}

void func_001E3140(Obj_001E3140 *p, s32 arg1)
{
    p->unk_B8 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3150);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3500);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3560);

void func_001E35B0(s32 arg0, s32 arg1)
{
    if (arg0 != 0) {
        if (arg1 != 0) {
            D_0051D8A0[0] &= 0xFEFFFFFF;
        } else {
            D_0051D8A0[0] |= 0x01000000;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3600);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E36C0);

void func_001E37F0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3800);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3880);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E38D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3920);
