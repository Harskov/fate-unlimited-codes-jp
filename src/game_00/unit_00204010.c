#include "common.h"
#include "libc.h"

void func_00204740();

extern s32 D_003D7B18[];

extern s32 D_00522B08[];

extern s32 *D_00522B0C[];

extern s32 D_00520060[];

extern s32 D_00520064[];

extern s32 D_00520070[];

extern s32 D_00520074[];

extern s32 D_00520078[];

extern s32 D_0052007C[];

extern f32 D_003D7AD0[];

extern f32 D_003D7AD4[];

extern f32 D_003D7AD8[];

extern f32 D_003D7ADC[];

extern f32 D_003D7AE0[];

extern f32 D_003D7AE4[];

extern f32 D_003D7AE8[];

extern f32 D_003D7AF0[];

extern f32 D_003D7AF4[];

extern f32 D_003D7AF8[];

extern f32 D_003D7B00[];

extern f32 D_003D7B04[];

extern f32 D_003D7B08[];


void func_00178060(s32 *arg0);

s32 func_002B5D58(s32 arg0);

void func_002B5EE0(s32 arg0, f32 *arg1);

s32 func_002C1CE0(f32 *arg0);

void func_002E6460(s32 arg0, f32 *arg1, s32 arg2);

void func_002E64E0(s32 arg0, f32 *arg1, s32 arg2, f32 arg3);

void func_002E66E0(s32 arg0);

void func_002E6C50(s32 arg0);

s32 func_002E6CC0(void);

void func_002EDCA8(s32 arg0, s32 arg1);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204010);

// clears the 0x24-byte block at D_00520060, sets up its handles, then sets flag 0x800
void func_00204090(void)
{
    f32 extent[6];
    f32 init[4];
    f32 vecA[3];
    f32 vecB[3];
    f32 vecC[3];

    memset(D_00520060, 0, 0x24);
    func_00178060(D_00520064);
    D_00520070[0] = 0;
    D_00520060[0] = 0;
    D_00520074[0] = func_002B5D58(1);
    if (D_00520074[0] != 0) {
        init[0] = D_003D7AD0[0];
        init[1] = D_003D7AD4[0];
        init[2] = D_003D7AD8[0];
        init[3] = D_003D7ADC[0];
        vecA[0] = D_003D7AE0[0];
        vecA[1] = D_003D7AE4[0];
        vecA[2] = D_003D7AE8[0];
        vecB[0] = D_003D7AF0[0];
        vecB[1] = D_003D7AF4[0];
        vecB[2] = D_003D7AF8[0];
        vecC[0] = D_003D7B00[0];
        vecC[1] = D_003D7B04[0];
        vecC[2] = D_003D7B08[0];
        D_00520078[0] = func_002E6CC0();
        func_002E66E0(D_00520078[0]);
        func_002E6460(D_00520078[0], vecA, 0);
        func_002E64E0(D_00520078[0], vecB, 2, 90.0f);
        func_002E64E0(D_00520078[0], vecC, 2, 90.0f);
        func_002E6C50(D_00520078[0]);
        func_002EDCA8(D_00520074[0], D_00520078[0]);
        func_002B5EE0(D_00520074[0], init);
    }
    D_00520060[0] |= 0x800;
    extent[5] = -150.0f;
    extent[4] = -150.0f;
    extent[3] = -150.0f;
    extent[2] = 150.0f;
    extent[1] = 150.0f;
    extent[0] = 150.0f;
    D_0052007C[0] = func_002C1CE0(extent);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204270);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_002043E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204420);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_002044A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204650);

void func_00204730(s32 arg0, s32 arg1)
{
    func_00204740(arg0, arg1, 1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204740);

void func_002047D0(int arg0, int arg1)
{
    func_00204740(arg0, arg1, 0);
}

int func_002047E0(void)
{
    return 0;
}

s32 *func_002047F0(void)
{
    return D_003D7B18;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204800);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204860);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204900);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204A10);

void func_00204A70(void)
{
}

s32 func_00204A80(s32 idx)
{
    s32 *tbl = D_00522B0C[0];
    s32 r;

    if (idx > 0 && idx < D_00522B08[0]) {
        r = tbl[idx];
    } else {
        r = tbl[2];
    }
    return r;
}
