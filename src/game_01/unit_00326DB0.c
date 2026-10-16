#include "common.h"

void func_00326F30();

typedef struct Entry_00326FD0 {
    s32 unk_0;
    u8 unk_4[0x1C];
} Entry_00326FD0;

typedef struct Obj_00326FD0 {
    u8 unk_0[0x18C];
    /* 0x18C */ Entry_00326FD0 unk_18C[1];
} Obj_00326FD0;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00326DB0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00326DD0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00326E00);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00326E20);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00326E60);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00326EB0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00326EE0);

void func_00326F10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6)
{
    func_00326F30(a0, a1, a2, a3, a4, a5, a6, 4);
}

void func_00326F20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6)
{
    func_00326F30(a0, a1, a2, a3, a4, a5, a6, 2);
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00326F30);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00326F80);

void func_00326FD0(Obj_00326FD0 *arg0, s32 arg1)
{
    arg0->unk_18C[arg1].unk_0 = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00326FE0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00327030);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00327070);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_003270E0);
