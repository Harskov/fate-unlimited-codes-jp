#include "common.h"

typedef struct Obj_0015E5C0 {
    int unk_0;
    /* 0x04 */ unsigned int flags;
} Obj_0015E5C0;

typedef struct Obj_0015D700 {
    unsigned char pad[0xD4];
    s32 unk_D4;
} Obj_0015D700;

typedef struct Link_0015D710 {
    struct Link_0015D710 *next;
} Link_0015D710;

void func_0015E5C0();

extern s32 D_0051A9B8[];

void func_00210D60();

typedef struct Obj_0015D130 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
} Obj_0015D130;

typedef struct Obj_0015DED0 {
    unsigned char pad[0xC];
    f32 unk_C;
} Obj_0015DED0;

void func_0015D010();

void func_0015D150();

void func_0015D220();

typedef void (*Handler)();

extern s32 D_0051A9D0[];

extern s32 D_0051A9E0[];

extern s32 D_0051A9F0[];

extern s32 D_003D65E8[];

extern s32 D_003D65F0[];

extern s32 D_003D65F8[];

extern s32 D_0051A9D4[];

extern s32 D_0051A9D8[];

extern s32 D_0051A9DC[];

extern s32 D_0051A9E4[];

extern s32 D_0051A9E8[];

extern s32 D_0051A9EC[];

extern s32 D_0051A9F4[];

extern s32 D_0051A9F8[];

extern s32 D_0051A9FC[];

void func_0015D500();

void func_0015D640();

void func_0015D720();

void func_0015D830();

void func_0015D950();

void func_0015D9B0();

void func_0015DA30();

void func_0015DAF0();

typedef struct Obj_0015E5F0 {
    /* 0x00 */ struct Obj_0015E5F0 *next;
    u8 unk_4[0x90];
    u32 unk_94;
    u8 unk_98[4];
    u8 unk_9C;
    u8 unk_9D[2];
    u8 unk_9F;
} Obj_0015E5F0;

extern Obj_0015E5F0 *D_0051AD48[];

typedef struct Sub_0015D400 {
    u8 unk_0[0xC];
    void *unk_C;
} Sub_0015D400;

typedef struct Obj_0015D400 {
    u8 unk_0[0x94];
    u32 unk_94;
    u8 unk_98[0x34];
    Sub_0015D400 *unk_CC;
} Obj_0015D400;

extern s32 D_00522DB0[];

void func_0020F230(s32 *, void *);

void func_0015E7E0();

extern Link_0015D710 *D_0051A9C0[];

s32 func_0015D900(Obj_0015D700 *p);

typedef struct Obj_0015DD60 {
    /* 0x00 */ s32 unk_0;
    /* 0x04 */ s32 counter;
    /* 0x08 */ u8 pad_8[4];
    /* 0x0C */ f32 unk_C;
} Obj_0015DD60;

extern s32 D_0051A9C8[];

extern s16 D_005231C0[];

extern s32 D_00523DAC[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D010);

void func_0015D130(Obj_0015D130 *dst, Obj_0015D130 *src)
{
    *dst = *src;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D150);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D220);

Handler func_0015D2A0(s32 arg0)
{
    switch (arg0) {
    case 0:
        return func_0015D220;
    case 1:
        return func_0015D150;
    case 2:
        return func_0015D010;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D2F0);

s32 func_0015D400(Obj_0015D400 *arg0)
{
    arg0->unk_94 &= ~4;
    func_0020F230(D_00522DB0, arg0->unk_CC->unk_C);
    func_0020F230(D_00522DB0, arg0->unk_CC);
    arg0->unk_CC = 0;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D460);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D500);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D640);

void func_0015D700(Obj_0015D700 *p, s32 arg1)
{
    p->unk_D4 = arg1;
}

void func_0015D710(Link_0015D710 *head, Link_0015D710 *node)
{
    node->next = head->next;
    head->next = node;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D720);

Link_0015D710 *func_0015D810(Link_0015D710 **arg0)
{
    Link_0015D710 *n = *arg0;
    if (n != 0) {
        *arg0 = n->next;
        return n;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D830);

s32 func_0015D900(Obj_0015D700 *p)
{
    s32 node = p->unk_D4;
    if (node != 0) {
        func_0015D710(D_0051A9C0[0], (Link_0015D710 *)node);
        func_0015D700(p, 0);
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D950);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D9B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015DA30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015DAF0);

s32 *func_0015DBE0(s32 arg0)
{
    switch (arg0) {
    case 0:
        return D_0051A9F0;
    case 1:
        return D_0051A9E0;
    case 2:
        return D_0051A9D0;
    }
    return 0;
}

void func_0015DC30(void)
{
    D_0051A9F0[0] = (s32)func_0015DAF0;
    D_0051A9F4[0] = (s32)func_0015DA30;
    D_0051A9F8[0] = (s32)func_0015D9B0;
    D_0051A9FC[0] = D_003D65E8[0];
    D_0051A9E0[0] = (s32)func_0015D950;
    D_0051A9E4[0] = (s32)func_0015D900;
    D_0051A9E8[0] = (s32)func_0015D830;
    D_0051A9EC[0] = D_003D65F0[0];
    D_0051A9D0[0] = (s32)func_0015D720;
    D_0051A9D4[0] = (s32)func_0015D640;
    D_0051A9D8[0] = (s32)func_0015D500;
    D_0051A9DC[0] = D_003D65F8[0];
}

void func_0015DD00(void)
{
    Obj_0015E5C0 *p = (Obj_0015E5C0 *)D_0051A9B8[0];

    p->flags = p->flags & 0xFFFF0000;
}

void func_0015DD20(s32 arg0)
{
    if (D_0051A9B8[0] == 0)
        return;
    func_00210D60();
    D_0051A9B8[0] = 0;
}

// A nonzero arg1 arms the object (state -1) when bit 0x8000 is set and D_00523DAC is 0x3E9 or 0x3F8;
// a zero arg1 steps it: state 1 counts unk_4 down (unless D_005231C0 holds it), and at zero or in
// state -1 the object's unk_C is handed to the shared object before func_00210D60 runs.
s32 func_0015DD60(Obj_0015DD60 *arg0, s32 arg1)
{
    if (arg1 != 0) {
        if (arg1 & 0x8000) {
            if (D_00523DAC[0] == 0x3E9 || D_00523DAC[0] == 0x3F8) {
                arg0->unk_0 = -1;
                return 1;
            }
        }
        return 0;
    }

    switch (arg0->unk_0) {
    case 1:
        if (D_005231C0[0] == 0)
            arg0->counter--;
        if (arg0->counter != 0)
            break;
        /* fallthrough */
    case -1:
        ((Obj_0015DED0 *)D_0051A9B8[0])->unk_C = arg0->unk_C;
        func_00210D60();
        D_0051A9C8[0]--;
        break;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015DE40);

f32 func_0015DED0(void)
{
    Obj_0015DED0 *p = (Obj_0015DED0 *)D_0051A9B8[0];

    if (p != 0)
        return p->unk_C;
    return 1.0f;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015DF00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015E530);

void func_0015E5C0(Obj_0015E5C0 *p)
{
    p->flags &= ~0x800;
}

void func_0015E5E0(Obj_0015E5C0 *p)
{
    p->flags |= 0x800;
}

void func_0015E5F0(s32 arg0, s32 arg1, u32 arg2, u32 arg3)
{
    Obj_0015E5F0 *p;

    for (p = D_0051AD48[0]; p != 0; p = p->next) {
        if (p->unk_9C == arg0 && p->unk_9F == arg1) {
            p->unk_94 |= arg2;
            p->unk_94 &= ~arg3;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015E650);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015E6F0);

void func_0015E760(u32 arg0, u32 arg1)
{
    Obj_0015E5F0 *p;

    for (p = D_0051AD48[0]; p != 0; p = p->next) {
        if (p->unk_9C >= arg0 && p->unk_9C <= arg1) {
            func_0015E7E0(p);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015E7E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015E7F0);
