#include "common.h"

typedef struct Obj_00327A20 {
    unsigned char pad[0x28];
    s32 unk_28;
} Obj_00327A20;

void func_003279B0(s32 a0, s32 a1, s32 a2, s32 a3);

typedef struct Obj_00327A30 {
    s32 unk_0;
    unsigned char pad_4[0x10];
    s32 unk_14;
} Obj_00327A30;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003278C0", func_003278C0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003278C0", func_003278E0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003278C0", func_00327940);

void func_003279A0(s32 a0, s32 a1, s32 a2)
{
    func_003279B0(a0, a1, a2, 1);
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003278C0", func_003279B0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003278C0", func_00327A00);

void func_00327A20(Obj_00327A20 *p, s32 arg1)
{
    p->unk_28 = arg1;
}

void func_00327A30(Obj_00327A30 *p, s32 arg1)
{
    p->unk_14 = p->unk_14 & ~(arg1 & 0x3C);
    p->unk_0 = p->unk_0 | 0x402;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003278C0", func_00327A60);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003278C0", func_00327A90);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003278C0", func_00327AB0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003278C0", func_00327AE0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003278C0", func_00327B10);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003278C0", func_00327B30);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003278C0", func_00327BD0);
