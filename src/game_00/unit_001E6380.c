#include "common.h"
#include "game_00/unit_001E6380.h"

extern s32 D_0051F220[];

void func_001E7420(int *arg0, int arg1, int arg2);

f32 func_00167D10();

typedef struct Obj_001E6C00 {
    u8 unk_0[0x2C];
    u8 unk_2C[0x18];
    u8 unk_44[8];
} Obj_001E6C00;

typedef struct Obj_001E6380 {
    u8 unk_0[0x58];
    f32 unk_58;
} Obj_001E6380;

void func_00165EA0();

void func_00165EE0();

void func_0016E920();

void func_001E6A90();

typedef struct Obj_001E69E0 {
    u8 unk_0[0xC];
    s32 unk_C;
} Obj_001E69E0;

s32 func_002E5148(s32 arg0, f32 *arg1);

typedef struct Sub_001E6960 {
    u8 unk_0[0xC];
    s32 unk_C;
    s32 unk_10;
} Sub_001E6960;

typedef struct Obj_001E6960 {
    u8 unk_0[0x20];
    u8 unk_20[0x40];
    Sub_001E6960 *unk_60;
} Obj_001E6960;

void func_001E6380(Obj_001E6380 *arg0, f32 arg1)
{
    if (arg1 != 0.0f)
        arg0->unk_58 = arg0->unk_58 + 1.5f * -arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E63C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E6530);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E65B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E6640);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E6820);

void func_001E6960(f32 *arg0, s32 arg1, Obj_001E6960 *arg2)
{
    func_0015F060((s32)arg0, (s32)&arg2->unk_20, arg1);
    arg0[0] = (f32)arg2->unk_60->unk_C * (arg0[0] / arg0[2]);
    arg0[1] = (f32)arg2->unk_60->unk_10 * (arg0[1] / arg0[2]);
}

s32 func_001E69E0(Obj_001E69E0 *arg0, f32 *arg1, f32 arg2)
{
    s32 handle;
    f32 v[4];

    handle = arg0->unk_C;
    v[0] = arg1[0];
    v[1] = arg1[1];
    v[2] = arg1[2];
    v[3] = arg2;
    return func_002E5148(handle, v) == 0;
}

void func_001E6BC0(Obj_001E6C10 *arg0, s32 arg1);

void func_001E6A30(Obj_001E6C10 *arg0, s32 arg1)
{
    u128 b;
    u128 a;

    func_001E6BC0(arg0, (s32)&a);
    func_001E6A90(arg0, &b);
    func_0016E920(arg1, &b, &a);
    func_00165EE0(arg1, arg1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E6A90);

void func_001E6BC0(Obj_001E6C10 *arg0, s32 arg1)
{
    func_00165EA0(arg1, arg0->unk_38, arg0->unk_20);
    func_00165EE0(arg1, arg1);
}

f32 func_001E6C00(Obj_001E6C00 *arg0)
{
    return func_00167D10(arg0->unk_44, arg0->unk_2C);
}

f32 func_001E6C10(Obj_001E6C10 *arg0)
{
    return func_00167D10(arg0->unk_38, arg0->unk_20);
}

s32 func_001E6C20(void)
{
    return D_0051F220[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E6C30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E6F20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E7340);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E7420);

void func_001E7560(int *arg0, int arg1, int arg2)
{
    func_001E7420(arg0, arg1, arg2);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E7570);
