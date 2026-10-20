#include "common.h"

void func_0036D830(void);

void func_0036CE00();

typedef struct Obj_0037D550_Inner {
    u8 pad_0[0x3C];
    u32 unk_3C;
} Obj_0037D550_Inner;

typedef struct Obj_0037D550 {
    u32 unk_0;
    Obj_0037D550_Inner *unk_4;
} Obj_0037D550;

extern s32 D_004DCB60[];

extern s32 D_004E1730[];

extern s32 D_004E1790[];

extern s32 D_004E17A0[];

extern s32 D_00507E50[];

void func_0036DC20();

void func_0037D160(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037D160", func_0037D170);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037D160", func_0037D280);

void func_0037D2E0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037D160", func_0037D2F0);

void func_0037D3B0(Obj_0037D550 *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 2, 0xE3, D_004DCB60, D_004E1730, D_004E1790, D_004E17A0, 4, D_00507E50);
}

void func_0037D410(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037D160", func_0037D420);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037D160", func_0037D4E0);

void func_0037D540(void)
{
    func_0036D830();
}

void func_0037D550(Obj_0037D550 *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037D160", func_0037D590);

void func_0037D5F0(void)
{
    func_0036D830();
}

void func_0037D600(Obj_0037D550 *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037D160", func_0037D640);

void func_0037D6A0(void)
{
    func_0036D830();
}

void func_0037D6B0(Obj_0037D550 *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037D160", func_0037D6F0);
