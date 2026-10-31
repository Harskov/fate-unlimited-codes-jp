#include "common.h"

void func_00326F30();

typedef struct Entry_00326FD0 {
    s32 unk_0;
    u8 unk_4[0x1C];
} Entry_00326FD0;

typedef struct Obj_00326FD0 {
    u8 unk_0[0x18C];
    /* 0x18C */ Entry_00326FD0 unk_18C[1];
} Obj_00326FD0;

typedef struct Obj_00326E00 {
    s32 unk_0;
    u8 pad_4[0x14];
    s32 unk_18;
    u8 pad_1C[0x8];
    s32 unk_24;
    u8 pad_28[0x2A8];
    s32 unk_2D0;
} Obj_00326E00;

typedef struct Entry_00326EE0 {
    s32 unk_0;
    u8 pad_4[0xC];
    s32 unk_10;
    u8 pad_14[0x14];
} Entry_00326EE0;

typedef struct Obj_00326EE0 {
    s32 unk_0;
    u8 pad_4[0x1E8];
    /* 0x1EC */ Entry_00326EE0 unk_1EC[1];
} Obj_00326EE0;

typedef struct Entry_003270E0 {
    s32 unk_0;
    f32 unk_4;
    f32 unk_8;
    s32 unk_C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    s32 unk_1C;
} Entry_003270E0;

typedef struct Obj_003270E0 {
    s32 unk_0;
    u8 pad_4[0x188];
    /* 0x18C */ Entry_003270E0 unk_18C[1];
} Obj_003270E0;

void func_00326F80();

typedef struct Slot_00326E20 {
    u8 unk_0;
    u8 unk_1;
    u8 unk_2;
    u8 pad_3[0x25];
} Slot_00326E20;

typedef struct Obj_00326E20 {
    u8 pad_0[0x210];
    /* 0x210 */ Slot_00326E20 unk_210[1];
} Obj_00326E20;

typedef struct Entry_00326F80 {
    s32 unk_0;
    u8 pad_4[0xC];
    s32 unk_10;
    u8 pad_14[0x10];
    /* 0x24 */ union {
        u32 unk_0;
        u8 field_0[4];
    } unk_24;
} Entry_00326F80;

typedef struct Obj_00326F80 {
    s32 unk_0;
    u8 pad_4[0x1E8];
    /* 0x1EC */ Entry_00326F80 unk_1EC[1];
} Obj_00326F80;

void func_00326DB0(Obj_00326E00 *arg0, s32 arg1, s32 arg2)
{
    arg0->unk_24 = 2;
    arg0->unk_18 = arg1;
    arg0->unk_2D0 = arg2;
    arg0->unk_0 |= 0x402;
}

void func_00326DD0(Obj_00326E00 *arg0, s32 arg1, s32 *arg2)
{
    arg0->unk_24 = 2;
    arg0->unk_18 = arg1;
    arg0->unk_2D0 = *arg2;
    arg0->unk_0 |= 0x402;
}

void func_00326E00(Obj_00326E00 *arg0, s32 arg1)
{
    arg0->unk_24 = 2;
    arg0->unk_18 = arg1;
    arg0->unk_0 |= 0x402;
}

void func_00326E20(Obj_00326E20 *arg0, s32 arg1, s32 arg2)
{
    func_00326F80(arg0, arg1, (arg2 << 24) | ((arg0->unk_210[arg1].unk_2 << 16) | (arg0->unk_210[arg1].unk_0 | (arg0->unk_210[arg1].unk_1 << 8))));
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00326E60);

void func_00326EB0(Obj_00326EE0 *arg0, s32 arg1, s32 arg2)
{
    arg0->unk_1EC[arg1].unk_10 = arg2 << 8;
    arg0->unk_0 |= 2;
}

void func_00326EE0(Obj_00326EE0 *arg0, s32 arg1)
{
    arg0->unk_1EC[arg1].unk_0 = 0;
    arg0->unk_1EC[arg1].unk_10 = 0;
    arg0->unk_0 |= 2;
}

void func_00326F10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6)
{
    func_00326F30(a0, a1, a2, a3, a4, a5, a6, 4);
}

void func_00326F20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6)
{
    func_00326F30(a0, a1, a2, a3, a4, a5, a6, 2);
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00326F30);

void func_00326F80(Obj_00326F80 *arg0, s32 arg1, u32 arg2)
{
    arg0->unk_1EC[arg1].unk_24.unk_0 = arg2;
    arg0->unk_1EC[arg1].unk_24.field_0[0] = arg2;
    arg0->unk_1EC[arg1].unk_24.field_0[1] = arg2 >> 8;
    arg0->unk_1EC[arg1].unk_24.field_0[2] = arg2 >> 16;
    arg0->unk_1EC[arg1].unk_24.field_0[3] = arg2 >> 24;
    arg0->unk_1EC[arg1].unk_0 = 0;
    arg0->unk_1EC[arg1].unk_10 = 0;
    arg0->unk_0 |= 2;
}

void func_00326FD0(Obj_00326FD0 *arg0, s32 arg1)
{
    arg0->unk_18C[arg1].unk_0 = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00326FE0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00327030);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00326DB0", func_00327070);

void func_003270E0(Obj_003270E0 *a0, s32 a1, f32 f0, f32 f1, f32 f2, f32 f3)
{
    a0->unk_18C[a1].unk_8 = f0;
    a0->unk_18C[a1].unk_18 = f0;
    a0->unk_18C[a1].unk_4 = f1;
    a0->unk_18C[a1].unk_10 = f2;
    a0->unk_18C[a1].unk_14 = f3;
    a0->unk_18C[a1].unk_C = 0;
    a0->unk_18C[a1].unk_1C = 0;
    a0->unk_0 |= 0x602;
}
