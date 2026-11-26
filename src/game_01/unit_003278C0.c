#include "common.h"
#include "libc.h"

typedef struct Obj_00327A20 {
    unsigned char pad[0x28];
    s32 unk_28;
} Obj_00327A20;

void func_003279B0(s32 a0, s32 a1, s32 a2, s32 a3);

typedef struct Obj_00327A30 {
    s32 unk_0;
    unsigned char pad_4[0x10];
    s32 unk_14;
} Obj_00327A30;

typedef struct Obj_00327B10 {
    s32 unk_0;
    unsigned char pad_4[0x28];
    f32 unk_2C;
    f32 unk_30;
} Obj_00327B10;

typedef struct Elem_003278C0 {
    f32 unk_0;
    unsigned char pad_4[0x28];
} Elem_003278C0;

typedef struct Obj_003278C0 {
    unsigned char pad_0[0x70];
    Elem_003278C0 unk_70[1];
} Obj_003278C0;

typedef struct Obj_00327A00 {
    unsigned char *unk_0;
} Obj_00327A00;

typedef struct Obj_00327AB0 {
    s32 unk_0;
    unsigned char pad_4[0x18];
    s32 unk_1C;
    s32 unk_20;
    unsigned char pad_24[0x2AC];
    s32 unk_2D0;
} Obj_00327AB0;

typedef struct Obj_00327BD0 {
    s32 unk_0;
    unsigned char pad_4[0x30];
    f32 unk_34;
    f32 unk_38;
    f32 unk_3C;
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
} Obj_00327BD0;

f32 func_003278C0(Obj_003278C0 *arg0, s32 arg1)
{
    return arg0->unk_70[arg1].unk_0;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003278C0", func_003278E0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003278C0", func_00327940);

void func_003279A0(s32 a0, s32 a1, s32 a2)
{
    func_003279B0(a0, a1, a2, 1);
}

// 880 (0x370) is the size of one entry, as func_00328330 allocates them
void func_003279B0(s32 a0, s32 a1, s32 a2, s32 a3)
{
    unsigned char *base = ((Obj_00327A00 *)a0)->unk_0;
    memcpy(base + a1 * 880, base + a2 * 880, a3 * 880);
}

unsigned char *func_00327A00(Obj_00327A00 *arg0, s32 arg1)
{
    return arg0->unk_0 + arg1 * 880;
}

void func_00327A20(Obj_00327A20 *p, s32 arg1)
{
    p->unk_28 = arg1;
}

void func_00327A30(Obj_00327A30 *p, s32 arg1)
{
    p->unk_14 = p->unk_14 & ~(arg1 & 0x3C);
    p->unk_0 = p->unk_0 | 0x402;
}

void func_00327A60(Obj_00327A30 *arg0, s32 arg1)
{
    arg0->unk_14 = arg0->unk_14 & ~(arg1 & 0x3);
    arg0->unk_0 = arg0->unk_0 | 0x402;
}

// clears the caller's bits in the word at +0x0, then sets 0x402 as the neighbouring functions of this unit do
void func_00327A90(Obj_00327A30 *arg0, s32 arg1)
{
    arg0->unk_0 = arg0->unk_0 & ~arg1;
    arg0->unk_0 = arg0->unk_0 | 0x402;
}

void func_00327AB0(Obj_00327AB0 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    arg0->unk_2D0 = arg1;
    arg0->unk_1C = 0;
    arg0->unk_20 = arg3 | 0x400 | (arg2 << 16);
    arg0->unk_0 = arg0->unk_0 | 0x402;
}

void func_00327AE0(Obj_00327AB0 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    arg0->unk_2D0 = arg1;
    arg0->unk_1C = 0;
    arg0->unk_20 = arg3 | 0x80 | (arg2 << 16);
    arg0->unk_0 = arg0->unk_0 | 0x402;
}

void func_00327B10(Obj_00327B10 *arg0, f32 arg1, f32 arg2)
{
    arg0->unk_2C = arg1;
    arg0->unk_30 = arg2;
    arg0->unk_0 = arg0->unk_0 | 0x402;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003278C0", func_00327B30);

void func_00327BD0(Obj_00327BD0 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    arg0->unk_34 = arg1;
    arg0->unk_38 = arg2;
    arg0->unk_3C = arg1;
    arg0->unk_40 = arg4;
    arg0->unk_44 = arg3;
    arg0->unk_48 = arg2;
    arg0->unk_4C = arg3;
    arg0->unk_50 = arg4;
    arg0->unk_0 |= 0x402;
}
