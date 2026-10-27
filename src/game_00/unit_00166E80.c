#include "common.h"
#include "game_00/tbl_0051E444.h"
#include "game_00/vec.h"

extern u32 D_0051D8A0[];

void func_002E0290(void);

void func_0023D4A0(s32 a0, s32 a1, s32 a2, s32 a3);

void func_0015D130();

void func_00165EE0();

void func_0020C340();

void func_0020D0C0();

typedef struct Obj12 {
    s32 unk_0;
    /* 0x04 */ struct Obj12 *link_4;
    /* 0x08 */ struct Obj12 *link_8;
} Obj12;

typedef struct Obj_00166F30 {
    s32 unk_0;
    s32 unk_4;
    s32 unk_8;
} Obj_00166F30;

typedef struct Sub_00167DE0 {
    unsigned char unk_0[0xC];
    int unk_C;
} Sub_00167DE0;

typedef struct Elem_00167DE0 {
    unsigned char unk_0[0xC];
    Sub_00167DE0 *unk_C;
    unsigned char unk_10[0xE0];
} Elem_00167DE0;

typedef struct Obj_00167DE0 {
    unsigned char unk_0[0x6C];
    Elem_00167DE0 *unk_6C;
} Obj_00167DE0;

extern int func_001619C0(Obj_00167DE0 *a);

extern int func_002E6C10(int v);

extern int func_0020CE80(int v);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00166E80);

void func_00166F20(void)
{
    func_002E0290();
}

s32 func_00166F30(s32 a0, Obj_00166F30 *a1)
{
    if (a1->unk_0 == a1->unk_4)
        a1->unk_8 = a0;
    a1->unk_0 = a1->unk_0 + 1;
    return a0;
}

int func_00166F60(void)
{
    Obj0051E444 *p = D_0051E444[0];
    if (p != 0)
        return p->unk_334;
    return D_00524798[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00166F90);

Obj12 *func_00167130(s32 a0, Obj12 *a1, Obj12 *a2)
{
    a2->link_8->link_4 = a1;
    a1->unk_0 = a0;
    a1->link_4 = a2;
    a1->link_8 = a2->link_8;
    a2->link_8 = a1;
    return a1;
}

void func_00167160(s32 a0, s32 a1, s32 a2)
{
    func_0023D4A0(a0, a1, a2, 1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167170);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167D10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_00167D40);

int func_00167DE0(Obj_00167DE0 *arg0)
{
    int i;

    i = func_001619C0(arg0);
    if (i < 0)
        return 0;
    return func_0020CE80(func_002E6C10(arg0->unk_6C[i].unk_C->unk_C));
}

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

void func_0016E8A0(Vec4 *a, Vec4 *b)
{
    func_00165EE0(a, b);
    func_00165EE0(a + 1, b + 1);
    func_00165EE0(a + 2, b + 2);
    func_0020D0C0(a);
}

float func_0016E8F0(Vec4 *a, Vec4 *b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z;
}

void func_0016E920(Vec4 *dst, Vec4 *a, Vec4 *b)
{
    Vec4 cross;

    cross.x = a->y * b->z - a->z * b->y;
    cross.y = a->z * b->x - a->x * b->z;
    cross.z = a->x * b->y - a->y * b->x;
    func_0015D130(dst, &cross);
}

void func_0016E990(Vec4 *dst, Vec4 *a, Vec4 *b)
{
    Vec4 scaled;

    func_00165EE0(&scaled, b);
    func_0020C340(dst, a, &scaled, 0);
}

void func_0016E9E0(Vec4 *dst, Vec4 *a, Vec4 *b)
{
    dst->x = a->x + b->x;
    dst->y = a->y + b->y;
    dst->z = a->z + b->z;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00166E80", func_0016EA20);

void func_0016F640(Vec4 *dst, Vec4 *src)
{
    func_0015D130(dst, src);
    dst->w = src->w;
}

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
