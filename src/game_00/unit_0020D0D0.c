#include "common.h"

void func_00165EA0();

void func_00165EE0();

void func_0016CFD0(void *dst, void *src, f32 scale);

f32 func_0016E8F0();

extern u16 *D_00522D88[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020D0D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020D1C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020D420);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020D610);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020D6A0);

void func_0020D750(s32 arg0, f32 *arg1, f32 *arg2)
{
    f32 v[4];

    func_0016CFD0(v, arg1, -1.0f);
    func_0016CFD0(v, arg2, 2.0f * func_0016E8F0(arg2, v));
    func_00165EA0(v, v, arg2);
    func_00165EE0(arg0, v);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020D7D0);

/* the arctangent of arg0 / arg1 over the full circle: both folded into the first octant,
   an odd polynomial in (p - q) / (p + q) around pi/4, then unfolded by the flag bits */
f32 func_0020D9E0(f32 arg0, f32 arg1)
{
    u8 flags;
    f32 t;
    f32 t2;
    f32 r;

    if (arg1 == 0.0f && arg0 == 0.0f)
        return 0.0f;

    flags = 0;
    if (arg0 < 0.0f) {
        arg0 = -arg0;
        flags |= 4;
    }
    if (arg1 < 0.0f) {
        arg1 = -arg1;
        flags |= 2;
    }
    if (!(arg1 <= arg0)) {
        t = (arg0 - arg1) / (arg0 + arg1);
    } else {
        flags |= 1;
        t = (arg1 - arg0) / (arg1 + arg0);
    }

    /* odd powers of t accumulated term by term */
    t2 = t * t;
    r = 0.9999993443f * t;
    t = t * t2;
    r += -0.333298564f * t;
    t = t * t2;
    r += 0.199465364f * t;
    t = t * t2;
    r += -0.139085337f * t;
    t = t * t2;
    r += 0.0964200422f * t;
    t = t * t2;
    r += -0.055909887f * t;
    t = t * t2;
    r += 0.0218612291f * t;
    t = t * t2;
    r += -0.00405405788f * t;
    r = r + 0.785398163f;

    if (flags & 1)
        r = 1.57079633f - r;
    if (flags & 2)
        r = 3.14159265f - r;
    if (flags & 4)
        r = -r;
    return r;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020DBB0);

u16 func_0020DDA0(f32 x)
{
    f32 v = 2048.0f * x;
    s32 i;

    if (v > 0.0f) {
        i = (s32)(0.5f + v);
    } else {
        i = (s32)(v - 0.5f);
    }
    return D_00522D88[0][i];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020DE10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020DEC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020DF80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020DFE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020E040);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020E0A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020E200);

f32 func_0020E410(f32 a, f32 b, f32 t)
{
    return a - t * (a - b);
}
