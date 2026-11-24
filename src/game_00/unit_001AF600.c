#include "common.h"

f32 fabsf(f32);

f32 func_00333310(void *);

f32 func_001A47A0(void *);

typedef struct Obj_001AF7B0 {
    u8 pad_0[0x460];
    /* 0x460 */ s32 unk_460;
} Obj_001AF7B0;

f32 func_00167D10(s32 *, s32 *);

typedef struct Node_001AF760 {
    u8 unk_0[0xC];
    /* 0x0C */ s32 unk_C;
} Node_001AF760;

typedef struct Elem_001AF760 {
    u8 unk_0[0xC];
    /* 0x0C */ Node_001AF760 *unk_C;
    u8 unk_10[0xE0];
} Elem_001AF760;

typedef struct Obj_001AF760 {
    u8 unk_0[0x6C];
    /* 0x6C */ Elem_001AF760 *unk_6C;
} Obj_001AF760;

s32 func_001619C0();

s64 func_001E9250(int);

extern f32 *D_00522D98[];

typedef struct Obj_001B0140 {
    u8 pad_0[0x3C];
    /* 0x3C */ s32 unk_3C;
    u8 pad_40[0x450];
    /* 0x490 */ f32 unk_490;
    /* 0x494 */ f32 unk_494;
} Obj_001B0140;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AF600);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AF6D0);

s32 func_001AF760(Obj_001AF760 *arg0, s32 arg1)
{
    s32 i;

    i = func_001619C0(arg0, arg1);
    if (i < 0) {
        return 0;
    }
    return arg0->unk_6C[i].unk_C->unk_C + 0x10;
}

f32 func_001AF7B0(Obj_001AF7B0 *arg0, Obj_001AF7B0 *arg1)
{
    if (arg0 != 0 && arg1 != 0) {
        return func_00167D10(&arg0->unk_460, &arg1->unk_460);
    }
    return 0.0f;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AF7F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AF910);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AFA90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AFC40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AFC90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AFE20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AFF90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001B00B0);

// adds the value at +0x490, scaled by a table entry picked by a 16-bit angle (probably a sine table), to *arg1;
// then steps that value by +0x494 and clears both once it reaches or crosses zero
void func_001B0140(Obj_001B0140 *arg0, f32 *arg1)
{
    f32 zero = 0.0f;

    if (zero == arg0->unk_490 && zero == arg0->unk_494) {
        return;
    }

    *arg1 += arg0->unk_490
        * D_00522D98[0][(((s16)func_001E9250(arg0->unk_3C) + 2) >> 2) & 0x3FFF];

    if (arg0->unk_490 > zero) {
        arg0->unk_490 += arg0->unk_494;
        if (arg0->unk_490 <= zero) {
            arg0->unk_490 = zero;
            arg0->unk_494 = zero;
        }
    } else {
        arg0->unk_490 += arg0->unk_494;
        if (arg0->unk_490 >= zero) {
            arg0->unk_490 = zero;
            arg0->unk_494 = zero;
        }
    }
}

f32 func_001B0230(void *arg0)
{
    if (fabsf(func_00333310(arg0) - 1.0f) < 0.001f) {
        return 1.0f;
    }
    return func_001A47A0(arg0);
}
