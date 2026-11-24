#include "common.h"
#include "game_00/vec.h"

extern s32 D_0051D754[];

extern s32 D_0051D760[];

extern s32 D_0051D75C[];

void func_0015D130();

f32 fabsf(f32);

f32 func_0016E8F0();

extern s32 D_0051D78C[];

extern f32 D_0051D798[];

extern f32 D_0051D79C[];

typedef struct Obj16 {
    /* 0x00 */ s32 flags;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ f32 unk_C;
} Obj16;

extern s32 D_0051D758[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6090);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6110);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6190);

s32 func_001B6220(void)
{
    return D_0051D754[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6230);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6780);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6BD0);

s32 func_001B6CE0(Vec4 *arg0, Vec4 *arg1, Vec4 *arg2, Vec4 *arg3, Vec4 *out)
{
    f32 base;
    f32 dist;
    f32 denom;
    f32 t;

    base = func_0016E8F0(arg2, arg1);
    dist = func_0016E8F0(arg2, arg0);
    if (arg3 != 0) {
        denom = func_0016E8F0(arg2, arg3);
        if (fabsf(denom) <= 1.1920929e-7f)
            return 0;
        t = (base - dist) / denom;
        out->x = arg0->x + t * arg3->x;
        out->y = arg0->y + t * arg3->y;
        out->z = arg0->z + t * arg3->z;
    } else {
        t = base - dist;
        out->x = arg0->x + t * arg2->x;
        out->y = arg0->y + t * arg2->y;
        out->z = arg0->z + t * arg2->z;
    }
    return 1;
}

void func_001B6E30(s32 arg0, s32 arg1)
{
    if (arg0 != 0 && arg1 != 0)
        func_0020D070(arg0, arg1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6E60);

void func_001B6F00(f32 *out, Vec3 *a, Vec3 *b, Vec3 *c)
{
    if (out == 0)
        return;
    if (a == 0)
        return;
    if (b == 0)
        return;
    if (c == 0)
        return;

    out[0] = (b->y - a->y) * (c->z - a->z) - (b->z - a->z) * (c->y - a->y);
    out[1] = (b->z - a->z) * (c->x - a->x) - (b->x - a->x) * (c->z - a->z);
    out[2] = (b->x - a->x) * (c->y - a->y) - (b->y - a->y) * (c->x - a->x);
}

void func_001B6FD0(s32 *arg0, f32 *arg1, f32 *arg2)
{
    if (arg0 != 0) {
        func_0015D130(arg0, D_0051D78C);
    }
    if (arg1 != 0) {
        *arg1 = D_0051D798[0];
    }
    if (arg2 != 0) {
        *arg2 = D_0051D79C[0];
    }
}

s32 func_001B7040(s32 *arg0, s32 arg1, s32 arg2)
{
    if (arg0 == 0) {
        D_0051D75C[0] = -1;
    } else if (D_0051D75C[0] >= 0 && arg1 != 0) {
        D_0051D75C[0] += 1;
        if (arg2 != 0)
            *arg0 |= 0x40;
        else
            *arg0 |= 0x140;
        func_0015D130(arg0 + 8, arg1);
    }
    return D_0051D75C[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B70C0);

s32 func_001B7230(s32 *arg0)
{
    if (arg0 != 0) {
        D_0051D760[0] += 1;
        *arg0 |= 0x100;
    }
    return D_0051D760[0];
}

s32 func_001B7270(Obj16 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4)
{
    if ((arg0->flags & 5) != 5) {
        D_0051D758[0] += 1;
    }
    arg0->flags |= 5;
    arg0->unk_4 = arg1;
    arg0->unk_8 = arg2;
    arg0->unk_C = arg4;
    func_0015D130(arg0 + 1, arg3);
    return 0;
}
