#include "common.h"

typedef struct Obj {
    u8 pad[0x14C];
    s32 unk_14C;
} Obj;

typedef struct Obj_001C42B0 {
    u16 unk_0;
    u8 unk_2;
    u8 unk_3;
} Obj_001C42B0;

typedef struct Sub_001C33F0 {
    u8 pad[0x90];
    s32 unk_90;
} Sub_001C33F0;

typedef struct Obj_001C33F0 {
    u8 pad[0x2448];
    Sub_001C33F0 *unk_2448;
} Obj_001C33F0;

typedef struct Obj56 {
    s32 unk_0[14];
} Obj56;

typedef struct Obj_001C3940 {
    u8 pad[0x94];
    s16 unk_94;
} Obj_001C3940;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3100);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3260);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3300);

void func_001C33F0(Obj_001C33F0 *arg0)
{
    Sub_001C33F0 *sub;

    if (arg0 != 0) {
        sub = arg0->unk_2448;
        if (sub != 0) {
            sub->unk_90 |= 1;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3420);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C34D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3660);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3770);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C37C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3860);

s32 func_001C3940(Obj_001C3940 *arg0)
{
    if (arg0 == 0)
        return 0;
    switch (arg0->unk_94) {
    case 1:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
        return 0;
    default:
        return 1;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3A10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3B20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C4080);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C41A0);

void func_001C42B0(Obj_001C42B0 *arg0)
{
    if (arg0 != 0) {
        arg0->unk_0 = 0;
        arg0->unk_2 = 0;
        arg0->unk_3 = 0xFF;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C42D0);

void func_001C43F0(Obj56 *arg0, Obj56 *arg1)
{
    *arg0 = *arg1;
}

s32 func_001C4420(Obj *arg0, s32 arg1)
{
    return arg0->unk_14C & arg1;
}
