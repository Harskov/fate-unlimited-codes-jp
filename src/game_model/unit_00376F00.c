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

typedef struct Sub_00377630 {
    /* 0x000 */ u8 pad_0[0x1DC];
    /* 0x1DC */ s32 flags_1DC;
    /* 0x1E0 */ s32 flags_1E0;
    /* 0x1E4 */ u8 pad_1E4[0x8];
    /* 0x1EC */ s32 flags_1EC;
} Sub_00377630;

typedef struct Obj_00377630 {
    /* 0x00 */ u8 pad_0[0x8];
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ u8 pad_C[0x4];
    /* 0x10 */ Sub_00377630 *unk_10;
    /* 0x14 */ u8 pad_14[0xC];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ u8 pad_24[0x4];
    /* 0x28 */ f32 unk_28;
} Obj_00377630;

void func_0036CE00();

void func_00376F00(void)
{
    func_0036D830();
}

void func_00376F10(Obj_0036EBE0_A *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 1);
    }
}

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

// registers: a3 = the object's unk_10 (p), a2 = unk_1E0 under the mask 0x2722020 (bits), t0 = set unless bits is clear and unk_20 is below 91 (flag)
// clamps unk_20 to 0..300 (90 when any of the mask's bits are set), then steps the state in unk_8: 2 -> 3 when the flag is set, 4 -> 1 when it is clear
void func_00377630(Obj_00377630 *arg0)
{
    Sub_00377630 *p;
    s32 bits;
    s32 flag;

    if (arg0 == 0)
        return;
    p = arg0->unk_10;
    if (p == 0)
        return;
    bits = p->flags_1E0 & 0x2722020;
    flag = 1;
    if (bits == 0 && arg0->unk_20 < 91)
        flag = 0;
    if (p->flags_1DC & 0x8000080)
        return;
    if (p->flags_1EC & 0x8000)
        return;
    if (bits != 0)
        arg0->unk_20 = 90;
    if (arg0->unk_20 < 0)
        arg0->unk_20 = 0;
    if (arg0->unk_20 >= 300)
        arg0->unk_20 = 300;
    switch (arg0->unk_8) {
    case 2:
        if (flag != 0) {
            arg0->unk_28 = 1.0f;
            arg0->unk_8 = 3;
        }
        break;
    case 4:
        if (flag == 0) {
            arg0->unk_28 = 0.0f;
            arg0->unk_8 = 1;
        }
        break;
    }
}
