#include "common.h"
#include "types.h"

extern s32 D_005231D8[];

typedef struct Obj_00210CA0 {
    u8 unk_0[0x30];
} Obj_00210CA0;

typedef struct Obj_00210D40 {
    /* 0x00 */ struct Obj_00210D40 *link_0;
    /* 0x04 */ struct Obj_00210D40 *link_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ void **unk_C;
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

typedef struct Obj_00210E10 {
    /* 0x00 */ u8 unk_0[0x10];
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1C */ s32 unk_1C;
} Obj_00210E10;

extern s32 D_005231E0[];

extern s32 D_005231E8[];

extern s32 D_005231EC[];

extern s32 D_00522DB0[];

void func_0020F230(s32 *head, void **p);

void func_00210D20(void **head, void **p);

void func_00210D40(Obj_00210D40 *arg0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00210C10", func_00210C10);

void *func_00210CA0(Obj_00210CA0 *p)
{
    return p + 1;
}

Obj_00210CA0 *func_00210CB0(void *p)
{
    return (Obj_00210CA0 *)p - 1;
}

void func_00210CC0(Obj_00210D40 *arg0)
{
    void **head;

    func_00210D40(arg0);
    head = arg0->unk_C;
    if (head != 0) {
        func_00210D20(head, (void **)arg0);
    } else {
        func_0020F230(D_00522DB0, (void **)arg0);
    }
}

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

s32 func_00210E10(Obj_00210E10 *arg0)
{
    if (D_005231E0[0] == 0) {
        return 0;
    }
    if (arg0->unk_10 == 0) {
        return 0;
    }
    if (D_005231E8[0] != arg0->unk_18) {
        return 0;
    }
    if (D_005231EC[0] >= 0 && D_005231EC[0] != arg0->unk_1C) {
        return 0;
    }
    return 1;
}

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
