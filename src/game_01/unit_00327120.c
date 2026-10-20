#include "common.h"

void func_00327200(s32 a0, s32 a1, s32 a2, s32 a3);

void func_00327350(s32 a0, s32 a1, s32 a2, s32 a3);

typedef struct Elem_003272F0 {
    s32 unk_0;
    u8 pad_4[0x8];
    s32 unk_C;
    u8 pad_10[0x10];
} Elem_003272F0;

typedef struct Obj_003272F0 {
    u8 pad_0[0xD8];
    Elem_003272F0 elems[1];
} Obj_003272F0;

typedef struct Elem_00327120 {
    s32 unk_0;
    u8 pad_4[0x18];
} Elem_00327120;

typedef struct Obj_00327120 {
    s32 unk_0;
    u8 pad_4[0x14C];
    Elem_00327120 elems[1];
} Obj_00327120;

void func_00327120(Obj_00327120 *a0, s32 a1, s32 a2)
{
    a0->elems[a1].unk_0 = a2 << 8;
    a0->unk_0 |= 0x402;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327120", func_00327150);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327120", func_00327170);

void func_003271C0(void)
{
}

void func_003271D0(s32 a0, s32 a1, s32 a2)
{
    func_00327200(a0, a1, a2, 16);
}

void func_003271E0(s32 a0, s32 a1, s32 a2)
{
    func_00327200(a0, a1, a2, 8);
}

void func_003271F0(s32 a0, s32 a1, s32 a2)
{
    func_00327200(a0, a1, a2, 4);
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327120", func_00327200);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327120", func_00327250);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327120", func_00327290);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327120", func_003272D0);

void func_003272F0(Obj_003272F0 *a0, s32 a1)
{
    a0->elems[a1].unk_0 = 0;
    a0->elems[a1].unk_C = 0;
}

void func_00327310(s32 a0, s32 a1, s32 a2)
{
    func_00327350(a0, a1, a2, 16);
}

void func_00327320(s32 a0, s32 a1, s32 a2)
{
    func_00327350(a0, a1, a2, 8);
}

void func_00327330(s32 a0, s32 a1, s32 a2)
{
    func_00327350(a0, a1, a2, 4);
}

void func_00327340(s32 a0, s32 a1, s32 a2)
{
    func_00327350(a0, a1, a2, 2);
}
