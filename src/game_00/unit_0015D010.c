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

typedef struct Obj_0015E7E0 {
    u8 pad0[0x8];
    s32 unk_08;
    u8 pad_0C[0x84];
    u32 unk_90;
} Obj_0015E7E0;

void func_0015E5C0();

typedef struct Obj2_0015E7E0 {
    u8 unk_0[8];
    s32 unk_8;
    u8 unk_C[0x84];
    f32 unk_90;
} Obj2_0015E7E0;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D010);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D130);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D150);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D220);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015D2A0);

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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015DBE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015DC30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015DD00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015DD20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015DD60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015DE40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015D010", func_0015DED0);

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
