#include "common.h"

typedef struct Obj_001DC510 {
    u8 unk_0[0x1E4];
    s32 unk_1E4;
    u8 pad_1E8[0x23E8 - 0x1E8];
    s32 *unk_23E8;
} Obj_001DC510;

typedef struct Obj_001D7310 {
    u8 unk_0[0x88];
    s32 unk_88;
    /* 0x8C */ s32 flags_8C;
    s32 unk_90;
    u8 pad_94[0x98 - 0x94];
    s32 unk_98;
    u8 pad_9C[0xA0 - 0x9C];
    s32 unk_A0;
    s32 unk_A4;
    s32 unk_A8;
    u8 pad_AC[0xDC - 0xAC];
    f32 unk_DC;
    f32 unk_E0;
    f32 unk_E4;
    f32 unk_E8;
    u8 pad_EC[0x120 - 0xEC];
    s32 unk_120;
    s32 unk_124;
    f32 unk_128;
    f32 unk_12C;
    f32 unk_130;
    u8 pad_134[0x38C - 0x134];
    /* 0x38C */ s32 flags_38C;
    s32 unk_390;
    s32 unk_394;
    s32 unk_398;
    s32 unk_39C;
    s32 unk_3A0;
    s32 unk_3A4;
    s32 unk_3A8;
    s32 unk_3AC;
    s32 unk_3B0;
    s32 unk_3B4;
    f32 unk_3B8;
    f32 unk_3BC;
    f32 unk_3C0;
    f32 unk_3C4;
    f32 unk_3C8;
    f32 unk_3CC;
    f32 unk_3D0;
    u8 pad_3D4[0xAD0 - 0x3D4];
    s32 unk_AD0;
} Obj_001D7310;

typedef struct Obj_001D8E50 {
    u8 unk_0[0x1C];
    s32 unk_1C;
} Obj_001D8E50;

typedef struct Obj_001D7090 {
    u8 unk_0[0x10];
    s32 unk_10;
    u8 pad_14[0x42C - 0x14];
    s32 unk_42C;
    s32 unk_430;
    s32 unk_434;
    s32 unk_438;
    s32 unk_43C;
    s32 unk_440;
    s32 unk_444;
} Obj_001D7090;

s32 func_001E3800(s32 arg0);

void func_0015D130(f32 *arg0, s32 arg1);

f32 fabsf(f32);

void func_001DC240();

void func_0019C820();

void func_0019C930();

void func_0019CA40();

void func_001DBD10();

void func_001DC020();

void func_001DC080();

typedef struct Obj_001D9AE0 {
    u8 unk_0[0x1C];
    /* 0x1C */ s32 flags;
    u8 pad_20[0xAA4 - 0x20];
    s32 unk_AA4;
} Obj_001D9AE0;

typedef struct Obj_001DC4D0 {
    u8 unk_0[0x150];
    s32 unk_150;
} Obj_001DC4D0;

typedef struct Obj_001D7E70 {
    u8 unk_0[0x3E8];
    f32 unk_3E8[3];
    f32 unk_3F4[3];
} Obj_001D7E70;

void func_00165E40(f32 *arg0, f32 *arg1);

void func_00165EA0(f32 *arg0, f32 *arg1, f32 *arg2);

typedef struct Obj_001D77F0 {
    u8 unk_0[0x28];
    /* 0x28 */ s32 flags;
    u8 pad_2C[0x30 - 0x2C];
    s32 unk_30;
} Obj_001D77F0;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D6EA0);

void func_001D7090(Obj_001D7090 *arg0)
{
    arg0->unk_42C = -1;
    arg0->unk_430 = 0;
    arg0->unk_434 = 0;
    arg0->unk_438 = 0;
    arg0->unk_43C = 0;
    arg0->unk_440 = 0;
    arg0->unk_444 = 0;
    arg0->unk_10 &= ~0x110;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D70D0);

/* Copies each pending block of values at +0x394.. into its live place when its bit in
   the word at +0x38C is set, clearing the bit; bit 0x80000 of +0x8C survives the copy. */
void func_001D71C0(Obj_001D7310 *arg0)
{
    s32 v;

    if (arg0->flags_38C & 0x8) {
        arg0->unk_88 = arg0->unk_394;
        v = arg0->unk_398;
        if (arg0->flags_8C & 0x80000)
            v |= 0x80000;
        arg0->flags_8C = v;
        arg0->unk_90 = arg0->unk_39C;
        arg0->flags_38C &= ~0x8;
    }
    if (arg0->flags_38C & 0x1) {
        arg0->unk_A0 = arg0->unk_3A4;
        arg0->unk_A4 = arg0->unk_3A8;
        arg0->unk_A8 = arg0->unk_3A0;
        arg0->flags_38C &= ~0x1;
    }
    if (arg0->flags_38C & 0x2) {
        arg0->unk_120 = arg0->unk_3B0;
        arg0->unk_124 = arg0->unk_3B4;
        arg0->unk_128 = arg0->unk_3B8;
        arg0->unk_12C = arg0->unk_3BC;
        arg0->unk_130 = arg0->unk_3C0;
        arg0->flags_38C &= ~0x2;
    }
    if (arg0->flags_38C & 0x4) {
        arg0->unk_98 = arg0->unk_3AC;
        arg0->flags_38C &= ~0x4;
    }
    if (arg0->flags_38C & 0x10) {
        arg0->unk_DC = arg0->unk_3C4;
        arg0->unk_E0 = arg0->unk_3C8;
        arg0->unk_E4 = arg0->unk_3CC;
        arg0->unk_E8 = arg0->unk_3D0;
        arg0->flags_38C &= ~0x10;
    }
    arg0->unk_390 = -1;
}

s32 func_001D7310(Obj_001D7310 *arg0)
{
    s32 v = arg0->unk_390;

    if (v >= 0)
        return arg0->unk_AD0 >= v;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D7330);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D7490);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D7750);

/* a factor from the two objects' levels at +0x30: arg1's level picks the base,
   arg0's level against it lowers it, and bit 0x2 of either word at +0x28 overrides it */
f32 func_001D77F0(Obj_001D77F0 *arg0, Obj_001D77F0 *arg1)
{
    f32 r = 1.0f;
    s32 b = arg1->unk_30;
    s32 a;
    s32 m;

    switch (b) {
    case 0:
        break;
    case 1:
        r = 2.0f;
        break;
    case 2:
        r = 3.0f;
        break;
    case 3:
        r = 3.0f;
        break;
    }

    m = arg0->flags & 2;
    if (m == 0 && !(arg1->flags & 2)) {
        a = arg0->unk_30;
        if (a >= b) {
            if (a == b)
                r = 1.0f;
            else if (a == 2 && b == 1)
                r = 0.5f;
            else if (a == 2 && b == 0)
                r = 0.25f;
            else if (a == 1 && b == 0)
                r = 0.5f;
        }
    }
    if (m != 0 && !(arg1->flags & 2))
        r = 0.0f;
    return r;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D7940);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D79D0);

s32 func_001D7E70(Obj_001D7E70 *arg0)
{
    f32 v[4];
    s32 r;

    r = 0;
    if (arg0 == 0)
        *(long long *)1 = 0;
    func_00165EA0(v, arg0->unk_3E8, arg0->unk_3F4);
    func_00165E40(v, v);
    if (v[1] < -0.139139f)
        r = 1;
    return r;
}

s32 func_001D7EF0(f32 *arg0, f32 arg1)
{
    f32 lo[4];
    f32 hi[4];

    func_0015D130(lo, func_001E3800(0));
    func_0015D130(hi, func_001E3800(1));
    if (!(lo[0] <= arg0[0] && lo[2] <= arg0[2]))
        return 0;
    if (hi[0] < arg0[0] || hi[2] < arg0[2])
        return 0;
    if (arg0[1] < 0.0f || fabsf(arg0[1]) <= arg1)
        return 1;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D7FE0);

void func_001D8240(void *arg0, f32 *arg1)
{
    f32 zero = 0.0f;

    if (zero == arg1[0] && zero == arg1[1] && zero == arg1[2])
        arg1[2] = 0.001f;
    func_00165EE0(arg0, arg1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D82A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D8810);

void func_001D8E50(Obj_001D8E50 *arg0, s32 arg1)
{
    arg0->unk_1C |= 0x1FF;
    arg0->unk_1C &= ~(arg1 ^ 0x1FF);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D8E80);

s32 func_001D9AE0(Obj_001D9AE0 *arg0)
{
    return arg0->unk_AA4 > 0 && !(arg0->flags & 0x80000000);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D9B10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DA0C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DA7B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DBB60);

void func_001DBD00(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DBD10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DC020);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DC080);

void func_001DC0C0(void)
{
    func_0019CA40(func_001DC080, 0);
    func_0019C820(func_001DBD10);
    func_0019C930(func_001DBD10);
    func_0019CA40(func_001DC020, 0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DC110);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DC240);

void func_001DC450(Obj_001DC510 *arg0)
{
    s32 *node;

    if (arg0 != 0) {
        arg0->unk_1E4 &= 0xE7FFFFFF;
        node = arg0->unk_23E8;
        while (*node != 1) {
            func_001DC240(arg0, *node);
            node = (s32 *)node[2];
        }
    }
}

s32 func_001DC4D0(Obj_001DC510 *arg0, s32 arg1)
{
    s32 *node;
    s32 count;

    count = 0;
    node = arg0->unk_23E8;
    while (*node != 1) {
        if (((Obj_001DC4D0 *)*node)->unk_150 == arg1) {
            count++;
        }
        node = (s32 *)node[2];
    }
    return count;
}

s32 func_001DC510(Obj_001DC510 *arg0)
{
    return *arg0->unk_23E8 == 1;
}
