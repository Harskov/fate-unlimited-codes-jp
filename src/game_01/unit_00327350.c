#include "common.h"

void func_00327850(s32 a0, s32 a1, s32 a2, s32 a3);

typedef struct Slot_00327390 {
    s32 unk_0;
    u8 pad_4[0x8];
    s32 unk_C;
    u8 pad_10[0x8];
    f32 unk_18;
    u8 pad_1C[0x4];
} Slot_00327390;

typedef struct Obj_00327390 {
    u32 unk_0;
    u8 pad_4[0xD4];
    Slot_00327390 slots[1];
} Obj_00327390;

typedef struct Slot_003273C0 {
    s32 unk_0;
    u8 pad_4[0x28];
} Slot_003273C0;

typedef struct Obj_003273C0 {
    u32 unk_0;
    u8 pad_4[0x5C];
    Slot_003273C0 slots[1];
} Obj_003273C0;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327350", func_00327350);

void func_00327390(Obj_00327390 *arg0, s32 arg1, f32 arg2)
{
    arg0->slots[arg1].unk_18 = arg2;
    arg0->slots[arg1].unk_0 = 0;
    arg0->slots[arg1].unk_C = 0;
    arg0->unk_0 |= 0x482;
}

void func_003273C0(Obj_003273C0 *arg0, s32 arg1, s32 arg2)
{
    arg0->slots[arg1].unk_0 = arg2 << 8;
    arg0->unk_0 |= 0x402;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327350", func_003273F0);

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
