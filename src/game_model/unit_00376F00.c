#include "common.h"

void func_0036D830(void);

#include "game_model/obj_0036EBE0.h"

extern s32 D_004DCB60[];

extern s32 D_004E0890[];

extern s32 D_004E08F0[];

extern s32 D_004E0900[];

extern s32 D_00507D28[];

void func_0036DC20();

extern s32 D_004E0930[];

extern s32 D_004E0960[];

extern s32 D_004E0968[];

extern s32 D_00507D20[];

extern s32 D_004E07F0[];

extern s32 D_004E0850[];

extern s32 D_004E0860[];

extern s32 D_00507D30[];

void func_00376F00(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00376F00", func_00376F10);

void func_00376F50(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 1, 0xCC, D_004DCB60, D_004E0930, D_004E0960, D_004E0968, 4, D_00507D20);
}

void func_00376FB0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00376F00", func_00376FC0);

void func_00377080(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 2, 0xC8, D_004DCB60, D_004E0890, D_004E08F0, D_004E0900, 0, D_00507D28);
}

void func_003770E0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00376F00", func_003770F0);

void func_003771F0(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 2, 0xCA, D_004DCB60, D_004E07F0, D_004E0850, D_004E0860, 0x10, D_00507D30);
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00376F00", func_00377250);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00376F00", func_00377390);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00376F00", func_003773D0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00376F00", func_00377500);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00376F00", func_00377630);
