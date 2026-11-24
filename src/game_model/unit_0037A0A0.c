#include "common.h"

void func_0036D830(void);

void func_0036CE00();

typedef struct Obj_0037A0A0 {
    u8 pad_0[0x3C];
    u32 unk_3C;
} Obj_0037A0A0;

typedef struct Obj_0037A460 {
    u32 unk_0;
    Obj_0037A0A0 *unk_4;
} Obj_0037A460;

extern s32 D_004DCB60[];

extern s32 D_004E0F10[];

extern s32 D_004E0F70[];

extern s32 D_004E0F78[];

extern s32 D_00507D80[];

void func_0036DC20();

extern s32 D_004E0B30[];

extern s32 D_004E0B90[];

extern s32 D_004E0BA0[];

extern s32 D_00507D60[];

extern s32 D_004E0A90[];

extern s32 D_004E0AF0[];

extern s32 D_004E0B00[];

extern s32 D_00507D68[];

extern s32 D_004E0A10[];

extern s32 D_004E0A70[];

extern s32 D_004E0A78[];

extern s32 D_00507D70[];

extern s32 D_004E0990[];

extern s32 D_004E09F0[];

extern s32 D_004E09F8[];

extern s32 D_00507D78[];

void func_0037A0A0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A0A0", func_0037A0B0);

void func_0037A1C0(Obj_0037A460 *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 2, 0xD3, D_004DCB60, D_004E0B30, D_004E0B90, D_004E0BA0, 0, D_00507D60);
}

void func_0037A220(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A0A0", func_0037A230);

void func_0037A340(Obj_0037A460 *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 2, 0xD0, D_004DCB60, D_004E0A90, D_004E0AF0, D_004E0B00, 0, D_00507D68);
}

void func_0037A3A0(void)
{
    func_0036D830();
}

void func_0037A3B0(Obj_0037A460 *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 2);
    }
}

void func_0037A3F0(Obj_0037A460 *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 2, 0xCA, D_004DCB60, D_004E0A10, D_004E0A70, D_004E0A78, 0, D_00507D70);
}

void func_0037A450(void)
{
    func_0036D830();
}

void func_0037A460(Obj_0037A460 *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 2);
    }
}

void func_0037A4A0(Obj_0037A460 *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 2, 0xC8, D_004DCB60, D_004E0990, D_004E09F0, D_004E09F8, 0, D_00507D78);
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A0A0", func_0037A500);

void func_0037A760(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A0A0", func_0037A770);

void func_0037A800(Obj_0037A460 *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 2, 0xC8, D_004DCB60, D_004E0F10, D_004E0F70, D_004E0F78, 4, D_00507D80);
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A0A0", func_0037A860);
