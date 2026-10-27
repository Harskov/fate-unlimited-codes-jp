#include "common.h"
#include "game_model/obj_0036EBE0.h"

void func_0036D830(void);

extern s32 D_004DCB60[];

extern s32 D_004DE608[];

extern s32 D_004DE610[];

extern s32 D_004DE670[];

extern s32 D_004DE680[];

extern s32 D_00507A90[];

void func_0036D890();

extern s32 D_004DE568[];

extern s32 D_004DE570[];

extern s32 D_004DE5D0[];

extern s32 D_004DE5E0[];

extern s32 D_00507A98[];

extern s32 D_004DE4C8[];

extern s32 D_004DE4D0[];

extern s32 D_004DE530[];

extern s32 D_004DE540[];

extern s32 D_00507AA0[];

extern s32 D_004DE428[];

extern s32 D_004DE430[];

extern s32 D_004DE490[];

extern s32 D_004DE4A0[];

extern s32 D_00507AA8[];

void func_0036CE00();

void func_0036A830();

typedef struct Obj_0036F7F0 {
    /* 0x00 */ s32 flags;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ s32 unk_C;
} Obj_0036F7F0;

void func_00371690(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036D890(arg0, arg1, arg0->unk_4->unk_3C, 2, D_004DE608, D_004DCB60, D_004DE610, D_004DE670, D_004DE680, 4, D_00507A90);
}

void func_00371700(void)
{
    func_0036D830();
}

void func_00371710(Obj_0036EBE0_A *arg0, Obj_0036F7F0 *arg1)
{
    s32 sub;

    if ((arg1->flags & 1) && (arg1->flags & 2)) {
        sub = arg0->unk_4->unk_3C;
        func_0036CE00(arg0, arg1, sub, 2);
        func_0036A830(arg0, arg1, sub, arg1->unk_8 + 0xB0, arg1->unk_C);
    }
}

void func_00371790(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036D890(arg0, arg1, arg0->unk_4->unk_3C, 2, D_004DE568, D_004DCB60, D_004DE570, D_004DE5D0, D_004DE5E0, 4, D_00507A98);
}

void func_00371800(void)
{
    func_0036D830();
}

void func_00371810(Obj_0036EBE0_A *arg0, Obj_0036F7F0 *arg1)
{
    s32 sub;

    if ((arg1->flags & 1) && (arg1->flags & 2)) {
        sub = arg0->unk_4->unk_3C;
        func_0036CE00(arg0, arg1, sub, 2);
        func_0036A830(arg0, arg1, sub, arg1->unk_8 + 0xB0, arg1->unk_C);
    }
}

void func_00371890(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036D890(arg0, arg1, arg0->unk_4->unk_3C, 2, D_004DE4C8, D_004DCB60, D_004DE4D0, D_004DE530, D_004DE540, 4, D_00507AA0);
}

void func_00371900(void)
{
    func_0036D830();
}

void func_00371910(Obj_0036EBE0_A *arg0, Obj_0036F7F0 *arg1)
{
    s32 sub;

    if ((arg1->flags & 1) && (arg1->flags & 2)) {
        sub = arg0->unk_4->unk_3C;
        func_0036CE00(arg0, arg1, sub, 2);
        func_0036A830(arg0, arg1, sub, arg1->unk_8 + 0xB0, arg1->unk_C);
    }
}

void func_00371990(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036D890(arg0, arg1, arg0->unk_4->unk_3C, 2, D_004DE428, D_004DCB60, D_004DE430, D_004DE490, D_004DE4A0, 4, D_00507AA8);
}

void func_00371A00(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00371690", func_00371A10);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00371690", func_00371B40);

void func_00371BA0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00371690", func_00371BB0);
