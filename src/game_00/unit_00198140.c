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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198140);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198190);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_001984E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_001986B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198730);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198B70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198C30);

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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198F50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198F90);

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
