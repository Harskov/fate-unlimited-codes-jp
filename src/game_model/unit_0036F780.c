#include "common.h"

void func_0036D830(void);

#include "game_model/obj_0036EBE0.h"

extern s32 D_004DCB60[];

extern s32 D_004DCE60[];

extern s32 D_004DCEF0[];

extern s32 D_004DCF00[];

extern s32 D_005079D8[];

void func_0036DC20();

extern s32 D_004DCD70[];

extern s32 D_004DCDA0[];

extern s32 D_004DCDA8[];

extern s32 D_005079F0[];

void func_0036CE00();

void func_0036A830();

typedef struct Obj_0036F7F0 {
    /* 0x00 */ s32 flags;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ s32 unk_C;
} Obj_0036F7F0;

extern s32 D_004DCF20[];

extern s32 D_004DCFE0[];

extern s32 D_004DCFF0[];

extern s32 D_005079D0[];

extern s32 D_004DCE10[];

extern s32 D_004DCE40[];

extern s32 D_004DCE48[];

extern s32 D_005079E0[];

extern s32 D_004DCDC0[];

extern s32 D_004DCDF0[];

extern s32 D_004DCDF8[];

extern s32 D_005079E8[];

void func_0036F780(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 4, 0xCF, D_004DCB60, D_004DCF20, D_004DCFE0, D_004DCFF0, 0, D_005079D0);
}

void func_0036F7E0(void)
{
    func_0036D830();
}

void func_0036F7F0(Obj_0036EBE0_A *arg0, Obj_0036F7F0 *arg1)
{
    s32 sub;

    if ((arg1->flags & 1) && (arg1->flags & 2)) {
        sub = arg0->unk_4->unk_3C;
        func_0036CE00(arg0, arg1, sub, 3);
        func_0036A830(arg0, arg1, sub, arg1->unk_8 + 0xB0, arg1->unk_C);
    }
}

void func_0036F870(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 3, 0xCC, D_004DCB60, D_004DCE60, D_004DCEF0, D_004DCF00, 0, D_005079D8);
}

void func_0036F8D0(void)
{
    func_0036D830();
}

void func_0036F8E0(Obj_0036EBE0_A *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 1);
    }
}

void func_0036F920(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 1, 0xCA, D_004DCB60, D_004DCE10, D_004DCE40, D_004DCE48, 0, D_005079E0);
}

void func_0036F980(void)
{
    func_0036D830();
}

void func_0036F990(Obj_0036EBE0_A *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 1);
    }
}

void func_0036F9D0(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 1, 0xC9, D_004DCB60, D_004DCDC0, D_004DCDF0, D_004DCDF8, 0, D_005079E8);
}

void func_0036FA30(void)
{
    func_0036D830();
}

void func_0036FA40(Obj_0036EBE0_A *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 1);
    }
}

void func_0036FA80(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 1, 0xC8, D_004DCB60, D_004DCD70, D_004DCDA0, D_004DCDA8, 0, D_005079F0);
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0036F780", func_0036FAE0);
