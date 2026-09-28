#include "common.h"

/* the flag words func_001990C0 tests */
typedef struct Flags { int f0; unsigned char pad[0xC]; int f10; } Flags;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198140);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198190);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_001984E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_001986B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198730);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198B70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198C30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198D00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198DD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198EF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198F50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198F90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00198FC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00199020);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00199080);

void func_001990B0(void)
{
}

void func_001990C0(Flags *f)
{
    f->f10 |= 4;
    if (f->f0 & 0x20)
        f->f10 |= 0x80;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00199100);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00198140", func_00199390);
