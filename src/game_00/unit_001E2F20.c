#include "common.h"

extern s32 D_0051F138[];

typedef struct Obj_001E3140 {
    unsigned char pad[0xB8];
    s32 unk_B8;
} Obj_001E3140;

typedef struct Obj_001E3120 {
    unsigned char pad[0xB4];
    u8 unk_B4;
    u8 unk_B5;
    u8 unk_B6;
    u8 unk_B7;
} Obj_001E3120;

extern s32 D_0051D8A0[];

extern f32 D_0051F140[];

extern f32 D_0051F144[];

extern f32 D_0051F148[];

extern f32 D_0051F160[];

extern f32 D_0051F164[];

extern f32 D_0051F168[];

void func_0015D130();

extern u8 D_00501340[];

extern s32 D_0051D8B0[];

typedef struct Elem_001E3560 {
    unsigned char pad_0[0xE0];
    s32 unk_E0;
    unsigned char pad_E4[0xC];
} Elem_001E3560;

typedef struct Obj_001E3560 {
    unsigned char pad_0[0x6C];
    Elem_001E3560 *unk_6C;
} Obj_001E3560;

s32 func_001619C0();

s32 func_001E2F20(void)
{
    return D_0051F138[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E2F30);

void func_001E3110(void)
{
}

void func_001E3120(Obj_001E3120 *p, s32 arg1)
{
    p->unk_B4 = 0xFF;
    p->unk_B5 = 0xFF;
    p->unk_B6 = 0xFF;
    p->unk_B7 = 0xFF;
}

void func_001E3140(Obj_001E3140 *p, s32 arg1)
{
    p->unk_B8 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3150);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3500);

s32 func_001E3560(Obj_001E3560 *arg0, s32 arg1)
{
    s32 idx;

    idx = func_001619C0(arg0, arg1);
    if (idx < 0) {
        return 0;
    }
    return arg0->unk_6C[idx].unk_E0;
}

void func_001E35B0(s32 arg0, s32 arg1)
{
    if (arg0 != 0) {
        if (arg1 != 0) {
            D_0051D8A0[0] &= 0xFEFFFFFF;
        } else {
            D_0051D8A0[0] |= 0x01000000;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E3600);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E2F20", func_001E36C0);

void func_001E37F0(void)
{
}

s32 func_001E3800(s32 arg0)
{
    s32 idx;

    if (arg0 < 0 || arg0 >= 2) {
        *(long long *)1 = 0;
    }
    idx = D_0051D8B0[0];
    if (idx < 0 || idx >= 0xB) {
        idx = 1;
    }
    return (s32)(arg0 * 12 + (D_00501340 + idx * 24));
}

void func_001E3880(s32 arg0, f32 *arg1)
{
    if (arg0 >= 2) {
        *(long long *)1 = 0;
    }
    func_0015D130(&D_0051F140[arg0 * 3], arg1);
}

void func_001E38D0(s32 arg0, f32 *arg1)
{
    if (arg0 >= 2) {
        *(long long *)1 = 0;
    }
    func_0015D130(&D_0051F160[arg0 * 3], arg1);
}

s32 func_001E3920(s32 arg0, f32 *arg1)
{
    if (arg0 >= 2) {
        *(long long *)1 = 0;
    }
    if (!(D_0051F160[arg0 * 3] <= arg1[0] && D_0051F164[arg0 * 3] <= arg1[1] && D_0051F168[arg0 * 3] <= arg1[2])) {
        return 0;
    }
    if (D_0051F140[arg0 * 3] < arg1[0] || D_0051F144[arg0 * 3] < arg1[1] || D_0051F148[arg0 * 3] < arg1[2]) {
        return 0;
    }
    return 1;
}
