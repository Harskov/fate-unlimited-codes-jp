#include "common.h"
#include "types.h"

// the small-data threshold would fold these into $gp-relative accesses;
// an incomplete type keeps them absolutely addressed
extern s32 D_00522B80[];

extern s32 D_00522B84[];

extern s32 D_00522B88[];

extern s32 D_00522B8C[];

extern s32 D_00522B90[];

extern s32 D_00522B94[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002057D0", func_002057D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002057D0", func_00205970);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002057D0", func_002059D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002057D0", func_00205FC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002057D0", func_00206040);

// clears the five state words and copies the fifth into the sixth
void func_00206160(void)
{
    D_00522B80[0] = 0;
    D_00522B84[0] = 0;
    D_00522B8C[0] = 0;
    D_00522B88[0] = 0;
    D_00522B90[0] = 0;
    D_00522B94[0] = D_00522B90[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002057D0", func_002061A0);

void func_00206210(void)
{
}

void func_00206220(void)
{
}

void func_00206230(void)
{
}

void func_00206240(void)
{
}

void func_00206250(void)
{
}

void func_00206260(void)
{
}

void func_00206270(void)
{
}

void func_00206280(void)
{
}

void func_00206290(void)
{
}

void func_002062A0(void)
{
}
