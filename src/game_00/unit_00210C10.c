#include "common.h"
#include "types.h"

extern s32 D_005231D8[];

typedef struct Obj_00210CA0 {
    u8 unk_0[0x30];
} Obj_00210CA0;

typedef struct Obj_00210D40 {
    /* 0x00 */ struct Obj_00210D40 *link_0;
    /* 0x04 */ struct Obj_00210D40 *link_4;
} Obj_00210D40;

extern s32 D_005231F0[];

void func_00210E70();

typedef struct Obj_00210F70 {
    /* 0x00 */ s32 unk_0;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ s32 unk_C;
} Obj_00210F70;

void func_00210FB0();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00210C10", func_00210C10);

void *func_00210CA0(Obj_00210CA0 *p)
{
    return p + 1;
}

Obj_00210CA0 *func_00210CB0(void *p)
{
    return (Obj_00210CA0 *)p - 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00210C10", func_00210CC0);

void func_00210D20(void **head, void **p)
{
    void *old;
    void **slot;

    old = *head;
    slot = p - 1;
    *slot = old;
    *head = slot;
}

// registers: a1 = the node loaded from +0x0, v1 = the node loaded from +0x4; each is stored into the other's slot
void func_00210D40(Obj_00210D40 *arg0)
{
    Obj_00210D40 *a;
    Obj_00210D40 *b;

    a = arg0->link_0;
    b = arg0->link_4;
    b->link_0 = a;
    a->link_4 = b;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00210C10", func_00210D60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00210C10", func_00210D90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00210C10", func_00210E10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00210C10", func_00210E70);

void func_00210F70(Obj_00210F70 *o)
{
    o->unk_0 = 0;
    o->unk_4 = 0;
    o->unk_8 = 0;
    o->unk_C = -1;
}

void func_00210F90(s32 arg0)
{
    func_00210FB0(D_005231F0[0] + arg0 * 48);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00210C10", func_00210FB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00210C10", func_00211070);

void func_00211110(int a, int b)
{
    func_00210E70(D_005231F0[0], a, b);
}

void func_00211130(int v)
{
    func_00210E70(D_005231F0[0], v, 0);
}

s32 func_00211150(void)
{
    return D_005231D8[0];
}

void func_00211160(int v)
{
    D_005231D8[0] = v;
}
