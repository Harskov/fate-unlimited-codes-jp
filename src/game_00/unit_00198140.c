#include "common.h"

/* the flag words func_001990C0 tests */
/* 0x00 */ typedef struct Flags { int flags; unsigned char pad[0xC]; int unk_10; } Flags;

extern s32 D_0051C270[];

void func_00199020();

extern s32 D_0051C274[];

extern s32 D_0051C464[];

extern s32 D_0051E930[];

extern s32 D_00523900[];

void func_00159BB0();

extern s32 D_0051C260[];

s8 *func_0015D810();

void func_00159B60();

void * func_0020EC40(s32, s32);

extern s32 D_00522DB0[];

void func_0020F230();

typedef struct Obj14 {
    /* 0x00 */ s32 unk_0;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ s32 unk_C;
    /* 0x10 */ s32 unk_10;
} Obj14;

typedef struct Obj88 {
    /* 0x00 */ s8 unk_0;
    u8 pad_1[3];
    /* 0x04 */ Obj14 unk_4;
    u8 pad_18[0x70];
} Obj88;

typedef struct Obj10 {
    /* 0x00 */ s32 unk_0;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ s32 unk_C;
} Obj10;

typedef struct Obj_00198C30 {
    u8 pad_0[0x6C];
    /* 0x6C */ Obj88 *unk_6C;
} Obj_00198C30;

s8 *func_00198EF0(s8 arg0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198140);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198190);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_001984E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_001986B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198730);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198B70);

/* fills the 0x88-byte block at +0x6C (allocated through func_00198EF0 on first use)
   from arg2: each word of arg2 equal to 1 sets the matching word of the block */
void func_00198C30(Obj_00198C30 *arg0, s32 arg1, Obj10 *arg2)
{
    Obj14 *s;

    if (arg0 == 0 || arg1 == 0)
        return;
    if (arg0->unk_6C == 0) {
        arg0->unk_6C = (Obj88 *)func_00198EF0(1);
        if (arg0->unk_6C == 0)
            return;
    }
    s = &arg0->unk_6C->unk_4;
    s->unk_0 = arg1;
    if (arg2->unk_4 == 1) {
        s->unk_8 = 1;
        s->unk_4 = arg2->unk_0;
    }
    if (arg2->unk_8 == 1)
        s->unk_C = 1;
    if (arg2->unk_C == 1)
        s->unk_10 = 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198D00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198DD0);

s8 *func_00198EF0(s8 arg0)
{
    s8 *p;

    p = func_0015D810(D_0051C260[0]);
    if (p != 0) {
        memset(p, 0, 0x88);
        *p = arg0;
        return p;
    }
    return 0;
}

void func_00198F50(void)
{
    if (D_0051C260[0] == 0)
        return;
    func_0020F230(D_00522DB0, D_0051C260[0]);
    D_0051C260[0] = 0;
}

void func_00198F90(void)
{
    D_0051C260[0] = (s32)func_0020EC40(0xC, 0x88);
}

void func_00198FC0(void)
{
    memcpy(D_00523900, D_0051C274, 0x1F0);
    memcpy(D_0051E930, D_0051C464, 0x394);
    func_00159BB0(D_00523900, 1);
}

void func_00199020(void)
{
    func_00159B60(D_00523900);
    D_0051C270[0] = 1;
    memcpy(D_0051C274, D_00523900, 0x1F0);
    memcpy(D_0051C464, D_0051E930, 0x394);
}

void func_00199080(void)
{
    memset(D_0051C270, 0, 0x588);
    func_00199020();
}

void func_001990B0(void)
{
}

void func_001990C0(Flags *f)
{
    f->unk_10 |= 4;
    if (f->flags & 0x20)
        f->unk_10 |= 0x80;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00199100);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00199390);
