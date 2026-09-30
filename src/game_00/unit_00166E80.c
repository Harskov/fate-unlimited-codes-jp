#include "common.h"
#include "game_00/tbl_0051E444.h"
#include "game_00/vec.h"

extern u32 D_0051D8A0[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00166E80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00166F20);

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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167160);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167170);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167D10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167D40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167DE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167E40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167F60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167F70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00168280);

void func_0016CFD0(Vec4 *dst, Vec4 *src, float s)
{
    dst->unk_0 = src->unk_0 * s;
    dst->unk_4 = src->unk_4 * s;
    dst->unk_8 = src->unk_8 * s;
}

void func_0016D000(Vec4 *dst, float x, float y, float z, float w)
{
    dst->unk_0 = x;
    dst->unk_4 = y;
    dst->unk_8 = z;
    dst->unk_C = w;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016D020);

void func_0016D070(Vec4 *dst, Vec4 *src, float s)
{
    dst->unk_0 = src->unk_0 * s;
    dst->unk_4 = src->unk_4 * s;
    dst->unk_8 = src->unk_8 * s;
    dst->unk_C = src->unk_C * s;
}

void func_0016D0B0(Vec4 *dst, Vec4 *a, Vec4 *b)
{
    dst->unk_0 = a->unk_0 - b->unk_0;
    dst->unk_4 = a->unk_4 - b->unk_4;
    dst->unk_8 = a->unk_8 - b->unk_8;
    dst->unk_C = a->unk_C - b->unk_C;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016D100);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016D1E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016D230);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016E8A0);

float func_0016E8F0(Vec4 *a, Vec4 *b)
{
    return a->unk_0 * b->unk_0 + a->unk_4 * b->unk_4 + a->unk_8 * b->unk_8;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016E920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016E990);

void func_0016E9E0(Vec4 *dst, Vec4 *a, Vec4 *b)
{
    dst->unk_0 = a->unk_0 + b->unk_0;
    dst->unk_4 = a->unk_4 + b->unk_4;
    dst->unk_8 = a->unk_8 + b->unk_8;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016EA20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016F640);

void func_0016F680(Vec4 *dst, Vec4 *a, Vec4 *b)
{
    dst->unk_0 = a->unk_0 * b->unk_0;
    dst->unk_4 = a->unk_4 * b->unk_4;
    dst->unk_8 = a->unk_8 * b->unk_8;
    dst->unk_C = a->unk_C * b->unk_C;
}

void func_0016F6D0(Vec4 *dst, Vec4 *a, Vec4 *b)
{
    dst->unk_0 = a->unk_0 + b->unk_0;
    dst->unk_4 = a->unk_4 + b->unk_4;
    dst->unk_8 = a->unk_8 + b->unk_8;
    dst->unk_C = a->unk_C + b->unk_C;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016F720);

int func_001711F0(void)
{
    u32 v = D_0051D8A0[0] & 0x20000000;
    return (v != 0) ^ 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00171210);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00171E40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00171E90);
