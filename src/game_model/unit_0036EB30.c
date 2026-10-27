#include "common.h"

void func_0036D830(void);

#include "game_model/obj_0036EBE0.h"

extern s32 D_004DCB60[];

extern s32 D_004DCCD0[];

extern s32 D_004DCD00[];

extern s32 D_004DCD08[];

extern s32 D_00507990[];

void func_0036DC20();

extern s32 D_004DCC80[];

extern s32 D_004DCCB0[];

extern s32 D_004DCCB8[];

extern s32 D_00507998[];

extern s32 D_004DCC30[];

extern s32 D_004DCC60[];

extern s32 D_004DCC68[];

extern s32 D_005079A0[];

void func_0036CE00();

void func_0036A830();

typedef struct Obj_0036F7F0 {
    /* 0x00 */ s32 flags;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ s32 unk_C;
} Obj_0036F7F0;

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0036EB30", func_0036EB30);

void func_0036EB90(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0036EB30", func_0036EBA0);

void func_0036EBE0(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 1, 0xCB, D_004DCB60, D_004DCCD0, D_004DCD00, D_004DCD08, 0, D_00507990);
}

void func_0036EC40(void)
{
    func_0036D830();
}

void func_0036EC50(Obj_0036EBE0_A *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 1);
    }
}

void func_0036EC90(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 1, 0xCD, D_004DCB60, D_004DCC80, D_004DCCB0, D_004DCCB8, 0, D_00507998);
}

void func_0036ECF0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0036EB30", func_0036ED00);

void func_0036ED40(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 1, 0xC9, D_004DCB60, D_004DCC30, D_004DCC60, D_004DCC68, 0, D_005079A0);
}

void func_0036EDA0(void)
{
    func_0036D830();
}

void func_0036EDB0(Obj_0036EBE0_A *arg0, Obj_0036F7F0 *arg1)
{
    s32 sub;

    if ((arg1->flags & 1) && (arg1->flags & 2)) {
        sub = arg0->unk_4->unk_3C;
        func_0036CE00(arg0, arg1, sub, 2);
        func_0036A830(arg0, arg1, sub, arg1->unk_8 + 0xB0, arg1->unk_C);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0036EB30", func_0036EE30);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0036EB30", func_0036EE90);
