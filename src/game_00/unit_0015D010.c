#include "common.h"

typedef struct Obj_0015E5C0 {
    int unk_0;
    /* 0x04 */ unsigned int unk_4;
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
    f32 unk_0;
    f32 unk_4;
    f32 unk_8;
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

void func_0015D900();

void func_0015D950();

void func_0015D9B0();

void func_0015DA30();

void func_0015DAF0();

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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D400);

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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D810);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D830);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D900);

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

    p->unk_4 = p->unk_4 & 0xFFFF0000;
}

void func_0015DD20(void)
{
    if (D_0051A9B8[0] == 0)
        return;
    func_00210D60();
    D_0051A9B8[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015DD60);

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
    p->unk_4 &= ~0x800;
}

void func_0015E5E0(Obj_0015E5C0 *p)
{
    p->unk_4 |= 0x800;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015E5F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015E650);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015E6F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015E760);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015E7E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015E7F0);
