#include "common.h"

void func_0036D830(void);

void func_0036CE00();

typedef struct Obj_0037A460_Inner {
    u8 pad_0[0x3C];
    u32 unk_3C;
} Obj_0037A460_Inner;

typedef struct Obj_0037A460 {
    u32 unk_0;
    Obj_0037A460_Inner *unk_4;
} Obj_0037A460;

extern s32 D_004DCB60[];

extern s32 D_004E0F10[];

extern s32 D_004E0F70[];

extern s32 D_004E0F78[];

extern s32 D_00507D80[];

void func_0036DC20();

void func_0037A0A0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A0A0", func_0037A0B0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A0A0", func_0037A1C0);

void func_0037A220(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A0A0", func_0037A230);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A0A0", func_0037A340);

void func_0037A3A0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A0A0", func_0037A3B0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A0A0", func_0037A3F0);

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

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A0A0", func_0037A4A0);

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
