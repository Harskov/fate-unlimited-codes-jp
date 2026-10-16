#include "common.h"
#include "game_00/tbl_0051E444.h"
#include "game_00/vec.h"

extern u32 D_0051D8A0[];

void func_002E0290(void);

void func_0023D4A0(s32 a0, s32 a1, s32 a2, s32 a3);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00166E80);

void func_00166F20(void)
{
    func_002E0290();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00166F30);

int func_00166F60(void)
{
    Obj0051E444 *p = D_0051E444[0];
    if (p != 0)
        return p->unk_334;
    return D_00524798[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00166F90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167130);

void func_00167160(s32 a0, s32 a1, s32 a2)
{
    func_0023D4A0(a0, a1, a2, 1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167170);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167D10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167D40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167DE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167E40);

int func_00167F60(int a0, int a1, int a2)
{
    return a2;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167F70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00168280);

void func_0016CFD0(Vec4 *dst, Vec4 *src, float s)
{
    dst->x = src->x * s;
    dst->y = src->y * s;
    dst->z = src->z * s;
}

void func_0016D000(Vec4 *dst, float x, float y, float z, float w)
{
    dst->x = x;
    dst->y = y;
    dst->z = z;
    dst->w = w;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016D020);

void func_0016D070(Vec4 *dst, Vec4 *src, float s)
{
    dst->x = src->x * s;
    dst->y = src->y * s;
    dst->z = src->z * s;
    dst->w = src->w * s;
}

void func_0016D0B0(Vec4 *dst, Vec4 *a, Vec4 *b)
{
    dst->x = a->x - b->x;
    dst->y = a->y - b->y;
    dst->z = a->z - b->z;
    dst->w = a->w - b->w;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016D100);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016D1E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016D230);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016E8A0);

float func_0016E8F0(Vec4 *a, Vec4 *b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016E920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016E990);

void func_0016E9E0(Vec4 *dst, Vec4 *a, Vec4 *b)
{
    dst->x = a->x + b->x;
    dst->y = a->y + b->y;
    dst->z = a->z + b->z;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016EA20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016F640);

void func_0016F680(Vec4 *dst, Vec4 *a, Vec4 *b)
{
    dst->x = a->x * b->x;
    dst->y = a->y * b->y;
    dst->z = a->z * b->z;
    dst->w = a->w * b->w;
}

void func_0016F6D0(Vec4 *dst, Vec4 *a, Vec4 *b)
{
    dst->x = a->x + b->x;
    dst->y = a->y + b->y;
    dst->z = a->z + b->z;
    dst->w = a->w + b->w;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016F720);

int func_001711F0(void)
{
    return !(D_0051D8A0[0] & 0x20000000);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00171210);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00171E40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00171E90);
