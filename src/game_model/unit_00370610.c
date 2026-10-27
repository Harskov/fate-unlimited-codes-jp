#include "common.h"

void func_0036D830(void);

#include "game_model/obj_0036EBE0.h"

extern s32 D_004DCB60[];

extern s32 D_004DD660[];

extern s32 D_004DD6F0[];

extern s32 D_004DD700[];

extern s32 D_00507A38[];

void func_0036DC20();

extern s32 D_004DD788[];

extern s32 D_004DD7A0[];

extern s32 D_004DD830[];

extern s32 D_004DD840[];

extern s32 D_00507A28[];

void func_0036D890();

extern s32 D_004DD888[];

extern s32 D_004DD8A0[];

extern s32 D_004DD930[];

extern s32 D_004DD940[];

extern s32 D_00507A20[];

void func_0036CE00();

void func_0036A830();

typedef struct Obj_0036F7F0 {
    /* 0x00 */ s32 flags;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ s32 unk_C;
} Obj_0036F7F0;

void func_00370610(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00370610", func_00370620);

void func_00370720(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036D890(arg0, arg1, arg0->unk_4->unk_3C, 3, D_004DD888, D_004DCB60, D_004DD8A0, D_004DD930, D_004DD940, 0x40, D_00507A20);
}

void func_00370790(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00370610", func_003707A0);

void func_003708F0(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036D890(arg0, arg1, arg0->unk_4->unk_3C, 3, D_004DD788, D_004DCB60, D_004DD7A0, D_004DD830, D_004DD840, 0, D_00507A28);
}

void func_00370950(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00370610", func_00370960);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00370610", func_003709A0);

void func_00370A00(void)
{
    func_0036D830();
}

void func_00370A10(Obj_0036EBE0_A *arg0, Obj_0036F7F0 *arg1)
{
    s32 sub;

    if ((arg1->flags & 1) && (arg1->flags & 2)) {
        sub = arg0->unk_4->unk_3C;
        func_0036CE00(arg0, arg1, sub, 3);
        func_0036A830(arg0, arg1, sub, arg1->unk_8 + 0xB0, arg1->unk_C);
    }
}

void func_00370A90(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 3, 0xCC, D_004DCB60, D_004DD660, D_004DD6F0, D_004DD700, 0, D_00507A38);
}

void func_00370AF0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00370610", func_00370B00);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00370610", func_00370B40);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00370610", func_00370BA0);
