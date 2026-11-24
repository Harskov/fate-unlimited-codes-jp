#include "common.h"

void func_0036D830(void);

#include "game_model/obj_0036EBE0.h"

extern s32 D_004DCB60[];

extern s32 D_004DD040[];

extern s32 D_004DD100[];

extern s32 D_004DD110[];

extern s32 D_005079C8[];

void func_0036DC20();

void func_0036CE00();

extern s32 D_004DD2E0[];

extern s32 D_004DD310[];

extern s32 D_004DD320[];

extern s32 D_005079B0[];

extern s32 D_004DD210[];

extern s32 D_004DD2A0[];

extern s32 D_004DD2B0[];

extern s32 D_005079B8[];

extern s32 D_004DD140[];

extern s32 D_004DD1D0[];

extern s32 D_004DD1E0[];

extern s32 D_005079C0[];

void func_0036F040(void)
{
    func_0036D830();
}

void func_0036F050(Obj_0036EBE0_A *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 1);
    }
}

void func_0036F090(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 1, 0xCB, D_004DCB60, D_004DD2E0, D_004DD310, D_004DD320, 0, D_005079B0);
}

void func_0036F0F0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0036F040", func_0036F100);

void func_0036F230(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 3, 0xDC, D_004DCB60, D_004DD210, D_004DD2A0, D_004DD2B0, 0, D_005079B8);
}

void func_0036F290(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0036F040", func_0036F2A0);

void func_0036F3D0(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 3, 0xD8, D_004DCB60, D_004DD140, D_004DD1D0, D_004DD1E0, 0, D_005079C0);
}

void func_0036F430(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0036F040", func_0036F440);

void func_0036F5C0(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 4, 0xD3, D_004DCB60, D_004DD040, D_004DD100, D_004DD110, 0, D_005079C8);
}

void func_0036F620(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0036F040", func_0036F630);
