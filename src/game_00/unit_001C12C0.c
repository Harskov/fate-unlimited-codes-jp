#include "common.h"

typedef struct Obj_001C2AD0 {
    u8 unk_0[0x1E0];
    /* 0x1E0 */ u32 flags;
    /* 0x1E4 */ u32 flags_1E4;
    u8 unk_1E8[0x27C];
    f32 unk_464;
    u8 unk_468[0xD4];
    s32 unk_53C;
    u8 unk_540[0x6F4];
    /* 0xC34 */ s32 flags_C34;
    u8 unk_C38[0x18D0];
    /* 0x2508 */ struct Obj_001C2AD0 *next;
} Obj_001C2AD0;

typedef struct Sub_001C12C0 {
    u8 unk_0[0x10];
    s32 unk_10;
} Sub_001C12C0;

typedef struct Elem_001C12C0 {
    u8 unk_0[0x14];
    Sub_001C12C0 unk_14;
    u8 unk_28[0x78];
    s32 unk_A0;
    s32 unk_A4;
    u8 unk_A8[6];
    s16 unk_AE;
    u8 unk_B0[0x5C];
    s16 unk_10C;
} Elem_001C12C0;

typedef struct Obj_001C12C0 {
    u8 unk_0[0x2448];
    Elem_001C12C0 *unk_2448;
} Obj_001C12C0;

s32 func_001C12C0(Obj_001C12C0 *arg0)
{
    Elem_001C12C0 *c;
    Sub_001C12C0 *p;

    if (arg0 == 0) {
        return 0;
    }
    c = arg0->unk_2448;
    if (c == 0) {
        return 0;
    }
    p = &c->unk_14;
    if (p == 0) {
        return 0;
    }
    p->unk_10 = 0x40000000;
    c->unk_A0 = 0;
    c->unk_A4 = 0;
    c->unk_AE = 0;
    c->unk_10C = 0;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C1310);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C14B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C1550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C17A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C1A40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C1AF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C1D90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C1F90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2060);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C24A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2530);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2640);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2900);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2A10);

s32 func_001C2AD0(Obj_001C2AD0 *arg0)
{
    if (arg0 == 0) {
        return 0;
    }
    if (arg0->flags & 0x800000) {
        return 1;
    }
    switch (arg0->unk_53C) {
    case 0x62:
    case 0x63:
    case 0x33:
    case 0x35:
    case 0x34:
        return 1;
    default:
        return 0;
    }
}

s32 func_001C2B50(Obj_001C2AD0 *arg0)
{
    u32 v;
    u32 w;

    if (arg0 == 0) {
        return 0;
    }
    switch (arg0->unk_53C) {
    case 0:
    case 8:
    case 0x37:
    case 2:
    case 1:
    case 0xD:
    case 3:
    case 4:
    case 0xE:
        return 1;
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 5:
    case 6:
    case 7:
    case 0x3A:
    case 0x3B:
    case 0x3C:
        return 0;
    }
    v = arg0->flags;
    if (v & 0x100000) {
        return 0;
    }
    w = arg0->flags_1E4;
    if ((w & 0xC) == 0xC && arg0->unk_464 <= 1.5f) {
        return 0;
    }
    if ((v & 0x2) || ((v & 0x400) && !(v & 0x20)) || ((w & 0x4) && (v & 0x8)) || (w & 0x80000)
        || ((arg0->flags_C34 & 0x8) && (arg0->next->flags & 0x100008))) {
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2D40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2E30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2E70);
