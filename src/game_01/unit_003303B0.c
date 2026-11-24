#include "common.h"

extern s32 D_00531BB4[][29];

typedef struct Obj_00330410 {
    /* 0x00 */ s32 flags;
    /* 0x04 */ u8 pad_4[0x30];
    /* 0x34 */ f32 unk_34;
} Obj_00330410;

extern f32 *D_00522D98[];

void func_00165EA0();

void func_00165EE0(f32 *arg0, f32 *arg1);

f32 fabsf(f32);

typedef struct Obj_00531B60 {
    /* 0x00 */ s32 unk_0;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ u8 pad_8[0xC];
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1C */ s32 unk_1C;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ u8 pad_24[0x18];
    /* 0x3C */ s32 unk_3C;
    /* 0x40 */ u8 unk_40[0x10];
    /* 0x50 */ u8 pad_50[0x24];
} Obj_00531B60;

extern Obj_00531B60 D_00531B60[];

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003303B0", func_003303B0);

/* Copies a four-float value from arg3 to arg4; with bit 0x100000 of the flag word set, adds an offset read from
   the table behind D_00522D98 to each component and clamps it at 255. 182.04445f is 65536 / 360, degrees to
   table steps; the table has 0x4000 entries. */
void func_00330410(Obj_00330410 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4)
{
    f32 v[4];
    f32 x;
    f32 ofs;

    if (!(arg0->flags & 0x100000)) {
        arg4[0] = arg3[0];
        arg4[1] = arg3[1];
        arg4[2] = arg3[2];
        arg4[3] = arg3[3] * arg0->unk_34;
    } else {
        func_00165EA0(v, arg2, arg1);
        func_00165EE0(v, v);
        x = 360.0f * v[0] + 360.0f * v[2];
        ofs = (f32)((s32)(255.0f * fabsf(D_00522D98[0][(((s32)(182.04445f * x) + 2) >> 2) & 0x3FFF])) ^ 0xFF);
        arg4[0] = arg3[0] + ofs;
        if (arg4[0] > 255.0f)
            arg4[0] = 255.0f;
        arg4[1] = arg3[1] + ofs;
        if (arg4[1] > 255.0f)
            arg4[1] = 255.0f;
        arg4[2] = arg3[2] + ofs;
        if (arg4[2] > 255.0f)
            arg4[2] = 255.0f;
        arg4[3] = arg3[3] + ofs;
        if (arg4[3] > 255.0f)
            arg4[3] = 255.0f;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003303B0", func_003305B0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003303B0", func_00330B80);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003303B0", func_003313D0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003303B0", func_00331C70);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003303B0", func_003325F0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003303B0", func_00332770);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003303B0", func_00332AD0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003303B0", func_00332B40);

void func_00332CB0(void)
{
    s32 i;
    Obj_00531B60 *p;

    p = D_00531B60;
    for (i = 0; i < 2; i++) {
        p->unk_0 = 0;
        p->unk_4 = 0;
        p->unk_14 = 0;
        p->unk_18 = 0;
        p->unk_1C = 0;
        p->unk_20 = 0;
        p->unk_3C = 0;
        memset(p->unk_40, 0, 0x10);
        p++;
    }
}

s32 func_00332D20(s32 arg0, s32 arg1)
{
    return D_00531BB4[arg0][arg1];
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003303B0", func_00332D50);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003303B0", func_00332E10);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003303B0", func_00332EA0);
