#include "common.h"

typedef struct Obj_001DEAB0 {
    u8 pad_0[0x194];
    s32 *unk_194;
} Obj_001DEAB0;

typedef struct Obj_001DD960 {
    u8 unk_0[0x41C];
    s32 unk_41C;
} Obj_001DD960;

typedef struct Sub_001DD960 {
    u8 unk_0[0x50];
    f32 unk_50;
    f32 unk_54;
} Sub_001DD960;

extern f32 func_001B7C70();

void func_00165EE0();

void func_0020C1B0();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DCFB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DD060);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DD340);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DD4D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DD850);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DD8C0);

void func_001DD960(Obj_001DD960 *arg0, Sub_001DD960 *arg1)
{
    arg1->unk_54 = 0.049999997f + func_001B7C70(&arg1->unk_50);
    arg0->unk_41C = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DD9B0);

void func_001DE170(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u128 local;

    func_00165EE0(&local, arg3);
    func_0020C1B0(arg0, arg1, arg2, &local);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DE1D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DE4D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DE6D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DEA20);

void func_001DEAB0(Obj_001DEAB0 *arg0, s32 arg1)
{
    s32 *p = arg0->unk_194;
    if (p != 0)
        *p = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DEAD0);

int func_001DEC60(void)
{
    return 0;
}

int func_001DEC70(void)
{
    return 0;
}

void func_001DEC80(void)
{
}

void func_001DEC90(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DECA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DEED0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DF180);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DF210);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DF390);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DF420);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DCFB0", func_001DFBE0);
