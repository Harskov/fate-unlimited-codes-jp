#include "common.h"

void func_0036D830(void);

#include "game_model/obj_0036EBE0.h"

extern s32 D_004DCB60[];

extern s32 D_004DFCE0[];

extern s32 D_004DFD40[];

extern s32 D_004DFD48[];

extern s32 D_00507D10[];

void func_0036DC20();

void func_0036CE00();

extern s32 D_004DFE50[];

extern s32 D_004DFEB0[];

extern s32 D_004DFEC0[];

extern s32 D_00507CF8[];

extern s32 D_004DFD60[];

extern s32 D_004DFD90[];

extern s32 D_004DFD98[];

extern s32 D_00507D08[];

extern s32 D_004DFC60[];

extern s32 D_004DFCC0[];

extern s32 D_004DFCC8[];

extern s32 D_00507D18[];

void func_00376690(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00376690", func_003766A0);

void func_003767B0(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 2, 0xCF, D_004DCB60, D_004DFE50, D_004DFEB0, D_004DFEC0, 0, D_00507CF8);
}

void func_00376810(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00376690", func_00376820);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00376690", func_00376940);

void func_003769E0(void)
{
    func_0036D830();
}

void func_003769F0(Obj_0036EBE0_A *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 1);
    }
}

void func_00376A30(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 1, 0xCC, D_004DCB60, D_004DFD60, D_004DFD90, D_004DFD98, 0, D_00507D08);
}

void func_00376A90(void)
{
    func_0036D830();
}

void func_00376AA0(Obj_0036EBE0_A *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 2);
    }
}

void func_00376AE0(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 2, 0xCA, D_004DCB60, D_004DFCE0, D_004DFD40, D_004DFD48, 0, D_00507D10);
}

void func_00376B40(void)
{
    func_0036D830();
}

void func_00376B50(Obj_0036EBE0_A *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 2);
    }
}

void func_00376B90(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 2, 0xC8, D_004DCB60, D_004DFC60, D_004DFCC0, D_004DFCC8, 0, D_00507D18);
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00376690", func_00376BF0);
