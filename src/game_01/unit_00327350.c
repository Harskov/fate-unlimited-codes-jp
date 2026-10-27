#include "common.h"

void func_00327850(s32 a0, s32 a1, s32 a2, s32 a3);

typedef struct Slot_00327390 {
    s32 unk_0;
    s32 unk_4;
    s32 unk_8;
    s32 unk_C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    u8 pad_1C[0x4];
} Slot_00327390;

typedef struct Obj_00327390 {
    u32 unk_0;
    u8 pad_4[0xD4];
    /* 0xD8 */ Slot_00327390 unk_D8[1];
} Obj_00327390;

typedef struct Slot_003273C0 {
    s32 unk_0;
    u8 pad_4[0x28];
} Slot_003273C0;

typedef struct Obj_003273C0 {
    u32 unk_0;
    u8 pad_4[0x5C];
    /* 0x60 */ Slot_003273C0 unk_60[1];
} Obj_003273C0;

typedef struct Slot_003273F0 {
    s32 unk_0;
    u8 pad_4[0x8];
    s32 unk_C;
    u8 pad_10[0x1C];
} Slot_003273F0;

typedef struct Obj_003273F0 {
    u8 pad_0[0x54];
    /* 0x54 */ Slot_003273F0 unk_54[1];
} Obj_003273F0;

void func_00327350(Obj_00327390 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4)
{
    arg0->unk_D8[arg1].unk_10 = arg0->unk_D8[arg1].unk_18;
    arg0->unk_D8[arg1].unk_14 = arg4;
    arg0->unk_D8[arg1].unk_4 = 0;
    arg0->unk_D8[arg1].unk_8 = arg2 << 8;
    arg0->unk_D8[arg1].unk_0 = arg3;
    arg0->unk_D8[arg1].unk_C = 0;
    arg0->unk_0 |= 0x482;
}

void func_00327390(Obj_00327390 *arg0, s32 arg1, f32 arg2)
{
    arg0->unk_D8[arg1].unk_18 = arg2;
    arg0->unk_D8[arg1].unk_0 = 0;
    arg0->unk_D8[arg1].unk_C = 0;
    arg0->unk_0 |= 0x482;
}

void func_003273C0(Obj_003273C0 *arg0, s32 arg1, s32 arg2)
{
    arg0->unk_60[arg1].unk_0 = arg2 << 8;
    arg0->unk_0 |= 0x402;
}

void func_003273F0(Obj_003273F0 *arg0, s32 arg1)
{
    arg0->unk_54[arg1].unk_0 = 0;
    arg0->unk_54[arg1].unk_C = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327350", func_00327420);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327350", func_00327510);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327350", func_00327630);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327350", func_003276B0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327350", func_00327730);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327350", func_003277A0);

void func_00327810(s32 a0, s32 a1, s32 a2)
{
    func_00327850(a0, a1, a2, 8);
}

void func_00327820(s32 a0, s32 a1, s32 a2)
{
    func_00327850(a0, a1, a2, 4);
}

void func_00327830(s32 a0, s32 a1, s32 a2)
{
    func_00327850(a0, a1, a2, 1024);
}

void func_00327840(s32 a0, s32 a1, s32 a2)
{
    func_00327850(a0, a1, a2, 2);
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327350", func_00327850);
