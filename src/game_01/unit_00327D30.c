#include "common.h"
#include "game_01/unit_00327D30.h"

extern s32 D_00522DB0[];

void func_0020F230();

extern s32 D_00531988[];

void func_00327E80();

typedef struct Obj_003281E0 {
    /* 0x00 */ Obj_00328250 *unk_0;
    /* 0x04 */ u32 unk_4;
} Obj_003281E0;

void *func_0020F180(s32 *arg0, s32 arg1);

typedef struct Obj_00328730 {
    /* 0x00 */ f32 unk_0;
    /* 0x04 */ f32 unk_4;
    /* 0x08 */ f32 unk_8;
    /* 0x0C */ f32 unk_C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ f32 unk_28;
    /* 0x2C */ f32 unk_2C;
} Obj_00328730;

void func_00327D30(s32 *arg0, s32 arg1)
{
    arg0[3] = arg1;
    *arg0 |= 0x402;
}

void func_00327D50(s32 *arg0, s32 arg1)
{
    arg0[4] = arg1;
    *arg0 |= 0x402;
}

void func_00327D70(s32 *arg0, s32 arg1)
{
    arg0[1] = arg1;
    *arg0 |= 0x402;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_00327D90);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_00327E80);

void func_00328090(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7)
{
    s32 saved = D_00531988[0];

    D_00531988[0] = arg0;
    func_00327E80(arg3, arg1, arg4, arg2, arg5, arg6, arg7);
    D_00531988[0] = saved;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_003280F0);

void func_003281E0(Obj_003281E0 *arg0)
{
    u32 i;

    for (i = 0; i < arg0->unk_4; i++) {
        func_00328250(arg0->unk_0 + i);
    }
}

void func_00328250(Obj_00328250 *arg0)
{
    memset(arg0, 0, 0x370);
    arg0->unk_4 = -1;
    arg0->unk_1C = -1;
    arg0->unk_28 = -1;
    arg0->unk_2D0 = 0;
    arg0->unk_54 = 0;
    arg0->unk_6C = 0;
    arg0->unk_80 = 0;
    arg0->unk_98 = 0;
    arg0->unk_AC = 0;
    arg0->unk_C4 = 0;
    arg0->unk_D8 = 0;
    arg0->unk_F0 = 100.0f;
    arg0->unk_F8 = 0;
    arg0->unk_110 = 100.0f;
    arg0->unk_118 = 0;
    arg0->unk_130 = 100.0f;
    arg0->unk_18C = 0;
    arg0->unk_1AC = 0;
    arg0->unk_1CC = 0;
    arg0->unk_13C = 0;
    arg0->unk_138 = 0;
    arg0->unk_158 = 0;
    arg0->unk_154 = 0;
    arg0->unk_174 = 0;
    arg0->unk_170 = 0;
    arg0->unk_210 = -1;
    arg0->unk_238 = -1;
    arg0->unk_260 = -1;
    arg0->unk_288 = -1;
}

void func_00328300(s32 *arg0)
{
    s32 v = *arg0;
    if (v == 0) {
        return;
    }
    func_0020F230(D_00522DB0, v);
}

Obj_003281E0 *func_00328330(s32 arg0)
{
    Obj_003281E0 *p;

    p = func_0020F180(D_00522DB0, arg0 * 0x370 + 0x10);
    p->unk_0 = (Obj_00328250 *)(p + 2);
    p->unk_4 = arg0;
    func_003281E0(p);
    return p;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_003283A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_003284D0);

/* fills four points from a width and height in arg1; bits 0xC and 0x30 of arg2
   pick how each axis is anchored (centred on zero, or extending to one side) */
void func_00328730(Obj_00328730 *arg0, f32 *arg1, s32 arg2)
{
    f32 half;

    switch (arg2 & 0xC) {
    case 0:
        half = arg1[0] / 2.0f;
        arg0->unk_0 = -half;
        arg0->unk_C = -half;
        arg0->unk_18 = half;
        arg0->unk_24 = half;
        break;
    case 4:
        arg0->unk_0 = 0.0f;
        arg0->unk_C = 0.0f;
        arg0->unk_18 = arg1[0];
        arg0->unk_24 = arg1[0];
        break;
    case 8:
        arg0->unk_0 = -arg1[0];
        arg0->unk_C = -arg1[0];
        arg0->unk_18 = 0.0f;
        arg0->unk_24 = 0.0f;
        break;
    }

    switch (arg2 & 0x30) {
    case 0:
        half = arg1[1] / 2.0f;
        arg0->unk_4 = half;
        arg0->unk_10 = -half;
        arg0->unk_1C = half;
        arg0->unk_28 = -half;
        break;
    case 0x10:
        arg0->unk_4 = 0.0f;
        arg0->unk_10 = -arg1[1];
        arg0->unk_1C = 0.0f;
        arg0->unk_28 = -arg1[1];
        break;
    case 0x20:
        arg0->unk_4 = arg1[1];
        arg0->unk_10 = 0.0f;
        arg0->unk_1C = arg1[1];
        arg0->unk_28 = 0.0f;
        break;
    }

    arg0->unk_8 = 0.0f;
    arg0->unk_14 = 0.0f;
    arg0->unk_20 = 0.0f;
    arg0->unk_2C = 0.0f;
}

/* the same four points as func_00328730 with the second axis mirrored:
   bits 0xC and 0x30 of arg2 pick how each axis is anchored */
void func_00328860(Obj_00328730 *arg0, f32 *arg1, s32 arg2)
{
    f32 half;

    switch (arg2 & 0xC) {
    case 0:
        half = arg1[0] / 2.0f;
        arg0->unk_0 = -half;
        arg0->unk_C = -half;
        arg0->unk_18 = half;
        arg0->unk_24 = half;
        break;
    case 4:
        arg0->unk_0 = 0.0f;
        arg0->unk_C = 0.0f;
        arg0->unk_18 = arg1[0];
        arg0->unk_24 = arg1[0];
        break;
    case 8:
        arg0->unk_0 = -arg1[0];
        arg0->unk_C = -arg1[0];
        arg0->unk_18 = 0.0f;
        arg0->unk_24 = 0.0f;
        break;
    }

    switch (arg2 & 0x30) {
    case 0:
        half = arg1[1] / 2.0f;
        arg0->unk_4 = -half;
        arg0->unk_10 = half;
        arg0->unk_1C = -half;
        arg0->unk_28 = half;
        break;
    case 0x10:
        arg0->unk_4 = 0.0f;
        arg0->unk_10 = arg1[1];
        arg0->unk_1C = 0.0f;
        arg0->unk_28 = arg1[1];
        break;
    case 0x20:
        arg0->unk_4 = -arg1[1];
        arg0->unk_10 = 0.0f;
        arg0->unk_1C = -arg1[1];
        arg0->unk_28 = 0.0f;
        break;
    }

    arg0->unk_8 = 0.0f;
    arg0->unk_14 = 0.0f;
    arg0->unk_20 = 0.0f;
    arg0->unk_2C = 0.0f;
}

void func_00328990(s32 *arg0, s32 *arg1, s32 arg2)
{
    if (*arg0 <= 0) {
        *arg1 += arg2;
    } else {
        *arg0 -= arg2;
    }
    if (*arg0 < 0) {
        *arg1 -= *arg0;
        *arg0 = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_003289E0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_00328AA0);
