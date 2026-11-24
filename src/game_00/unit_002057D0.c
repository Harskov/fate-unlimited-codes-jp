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

extern s32 D_00522B60[];

extern s32 D_00522DB0[];

void func_0020F230();

void func_002D2368();

void func_002D2608();

extern s32 D_00522B98[];

extern s32 D_00522B9C[];

extern s32 D_00522BA0[];

s8 tolower(s8);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002057D0", func_002057D0);

void func_00205970(s32 arg0, s32 arg1)
{
    if (func_0020FA40() >= 2) {
        return;
    }
    D_00522B98[0] = arg0;
    D_00522BA0[0] = arg0;
    D_00522B9C[0] = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002057D0", func_002059D0);

void func_00205FC0(void)
{
    s32 i;

    if (D_00522B90[0] != 0) {
        func_0020F230(D_00522DB0, D_00522B90[0]);
    }
    D_00522B90[0] = 0;
    for (i = 0; i < 8; i++) {
        func_002D2608(D_00522B60[i]);
    }
    func_002D2368();
}

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

void func_002061A0(s8 *arg0, s8 *arg1)
{
    s8 c;

    for (;;) {
        c = *arg1;
        if (c == 0 || c == 0xD || c == 0xA) {
            break;
        }
        arg1++;
        *arg0 = tolower(c);
        arg0++;
    }
    *arg0 = 0;
}

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
