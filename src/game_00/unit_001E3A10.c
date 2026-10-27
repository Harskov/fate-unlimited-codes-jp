#include "common.h"
#include "libc.h"

extern s32 D_0051F190[];

typedef struct Obj_001E3D00 {
    u8 unk_0[0xB0];
    s32 unk_B0;
} Obj_001E3D00;

typedef struct Obj_001E4E00 {
    u8 pad_0[0x4];
    s32 unk_4;
    u8 pad_8[0x3C];
    s32 unk_44;
} Obj_001E4E00;

typedef struct Obj_001E3CC0 {
    u8 pad_0[0xC];
    s32 unk_C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
} Obj_001E3CC0;

typedef struct Obj_001E3DA0 {
    s32 unk_0;
    u8 pad_4[0x4];
    s32 unk_8;
    s32 unk_C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    u8 pad_24[0x8C];
    s32 unk_B0;
    u8 pad_B4[0xC];
    s32 unk_C0;
} Obj_001E3DA0;

void func_001E3120();

void func_001E3A10();

void func_001E3CA0();

s32 *func_001E3FE0(void);

extern s32 D_0051F180[];

typedef struct Obj_001E50E0 {
    u8 pad_0[0x4];
    s32 unk_4;
    s16 unk_8;
    s16 unk_A;
    s32 unk_C;
    s32 unk_10;
    u8 pad_14[0xC];
    u8 unk_20[0xC];
    f32 unk_2C;
    u8 unk_30[0x10];
    u8 unk_40[0x20];
} Obj_001E50E0;

Obj_001E50E0 *func_0015D810(s32 arg0);

void func_0015D130(void *dst, void *src);

void func_0015EE20(void *dst, f32 x, f32 y, f32 z);

s32 func_001E4FA0(s32 arg0);

typedef struct Obj_001E4470 {
    u8 pad_0[0xBC];
    s32 unk_BC;
} Obj_001E4470;

s32 func_001E4FE0(s32 arg0);

s32 func_001E4BF0();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3A10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3AA0);

s32 func_001E3B30(f32 arg0, f32 arg1, f32 arg2, f32 arg3)
{
    f32 lo;
    f32 hi;
    f32 shifted;
    s32 result;

    arg0 = arg0 + 180.0f;
    arg1 = arg1 + 180.0f;
    if (arg0 > 360.0f) {
        arg0 = arg0 - 360.0f;
    }
    if (arg1 > 360.0f) {
        arg1 = arg1 - 360.0f;
    }
    lo = arg1 + arg2;
    hi = arg1 + arg3;
    result = 0;
    if (arg0 > lo && arg0 < hi) {
        result = 1;
    }
    if (lo < 0.0f) {
        shifted = arg0 - 360.0f;
        if (shifted > lo && shifted < hi) {
            result = 1;
        }
    }
    if (hi > 360.0f) {
        shifted = 360.0f + arg0;
        if (shifted > lo && shifted < hi) {
            result = 1;
        }
    }
    return result;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3C20);

// resets the object func_001E3DA0 sets up; -1 in unk_10 is the value func_001E3CC0 reads as empty
void func_001E3CA0(Obj_001E3DA0 *p)
{
    p->unk_C = 0;
    p->unk_10 = -1;
    p->unk_14 = 0;
    p->unk_20 = 0;
}

s32 func_001E3CC0(Obj_001E3CC0 *p)
{
    s32 v = p->unk_10;

    if (v == -1) {
        return 0;
    }
    p->unk_C = v;
    p->unk_18 = p->unk_14;
    p->unk_10 = -1;
    p->unk_14 = 0;
    return 1;
}

void func_001E3D00(Obj_001E3D00 *p, s32 arg1)
{
    if (p != 0 && arg1 != 0) {
        p->unk_B0 = arg1;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3D20);

void func_001E3DA0(Obj_001E3DA0 *arg0, s32 arg1, s32 arg2)
{
    memset(arg0, 0, 0xD0);
    func_001E3CA0(arg0);
    arg0->unk_8 = arg2;
    arg0->unk_0 = arg1;
    arg0->unk_B0 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = -1;
    func_001E3120(arg0, 0);
    func_001E3A10();
    arg0->unk_C0 = 0;
    *func_001E3FE0() = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3E30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3F50);

s32 *func_001E3FE0(void)
{
    return D_0051F190;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3FF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4330);

void func_001E43B0(Obj_001E4470 *arg0)
{
    Obj_001E3CC0 *p = (Obj_001E3CC0 *)arg0->unk_BC;
    s32 saved;

    if (p != 0) {
        saved = p->unk_C;
        if (func_001E4BF0(p) == 2) {
            arg0->unk_BC = saved;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4400);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4430);

void func_001E4470(Obj_001E4470 *arg0)
{
    arg0->unk_BC = func_001E4FE0(arg0->unk_BC);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E44A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E44D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4650);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4910);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4950);

f32 func_001E4B60(f32 a, f32 b, f32 c, f32 d, f32 e)
{
    f32 x;
    f32 diff;

    diff = b - d;
    if (a + c < e) {
        if (!(diff <= e)) {
            return 1.0f;
        }
        x = b - e;
    } else {
        x = a - e;
        d = c;
    }
    if (x < 0.0f) {
        x = -x;
    }
    if (d == 0.0f) {
        return 1.0f;
    }
    return x / d;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4BF0);

void func_001E4CD0(Obj_001E3CC0 *arg0)
{
    arg0->unk_10 = func_001E4FE0(arg0->unk_10);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4D00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4D30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4DA0);

void func_001E4E00(Obj_001E4E00 *arg0, s32 arg1)
{
    if (arg0 != 0) {
        arg0->unk_4 |= 8;
        arg0->unk_44 = arg1;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4E20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4E60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4EC0);

s32 func_001E4FA0(s32 arg0)
{
    if (arg0 != 0) {
        D_0051F190[0] += arg0;
    }
    return D_0051F190[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4FE0);

Obj_001E50E0 *func_001E50E0(s32 arg0, void *arg1, s16 arg2, f32 arg3)
{
    Obj_001E50E0 *p;

    p = func_0015D810(D_0051F180[0]);
    if (p == 0) {
        return 0;
    }
    p->unk_4 = 0x8000;
    p->unk_A = arg2;
    p->unk_10 = 0;
    if (arg1 != 0) {
        func_0015D130(p->unk_20, arg1);
    } else {
        func_0015EE20(p->unk_20, 0, 0, 0);
    }
    func_0015EE20(p->unk_30, 0, 0, 0);
    p->unk_2C = arg3;
    p->unk_C = arg0;
    memset(p->unk_40, 0, 0x20);
    p->unk_8 = D_0051F190[0];
    func_001E4FA0(1);
    return p;
}
