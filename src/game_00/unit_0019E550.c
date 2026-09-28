#include "common.h"

typedef int s32;

typedef unsigned char u8;

typedef struct Obj {
    u8 pad_0[0x1E0];
    s32 unk_1E0;
    s32 unk_1E4;
    u8 pad_1E8[0x4];
    s32 unk_1EC;
    u8 pad_1F0[0x4];
    s32 unk_1F4;
    u8 pad_1F8[0x540 - 0x1F8];
    s32 unk_540;
    u8 pad_544[0x14B8 - 0x544];
    s32 unk_14B8;
    s32 unk_14BC;
    u8 pad_14C0[0x14CC - 0x14C0];
    s32 unk_14CC;
    u8 pad_14D0[0x14E0 - 0x14D0];
    s32 unk_14E0;
    u8 pad_14E4[0x2518 - 0x14E4];
    struct Obj *unk_2518;
} Obj;

typedef struct Inner001A27C0 {
    unsigned char unk_0[0x5C];
    int unk_5C;
} Inner001A27C0;

typedef struct Outer001A27C0 {
    unsigned char unk_0[0xC];
    Inner001A27C0 *unk_C;
} Outer001A27C0;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_0019E550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_0019E7F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_0019ED50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_0019F920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_0019F9F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_0019FD10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_0019FD30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_001A03C0);

s32 func_001A04B0(Obj *o)
{
    s32 flags = o->unk_1F4;
    s32 bits;
    Obj *p;

    if (flags & 0x20) {
        if (o->unk_14B8 == -1) {
            o->unk_1F4 = flags & ~0x120;
            return -1;
        }
        if ((flags & 0x8) && !(o->unk_1E4 & 0x200)) {
            o->unk_1F4 |= 0x10;
        }
        o->unk_1F4 &= ~0x20002A;
        o->unk_1E4 &= ~0xA09;
        o->unk_1E4 |= 0x2;
        if (!(o->unk_1F4 & 0x100)) {
            o->unk_1E4 &= ~0x4;
        }
        o->unk_1F4 &= ~0x100;
        o->unk_540 = -1;
        return o->unk_14B8;
    }

    if (flags & 0x40) {
        if (o->unk_14BC == -1) {
            o->unk_1F4 &= ~0x140;
            return -1;
        }
        if ((flags & 0x8) && !(o->unk_1E4 & 0x200)) {
            o->unk_1F4 |= 0x10;
        }
        o->unk_1F4 &= ~0x20004A;
        o->unk_1E4 &= ~0xA09;
        o->unk_1E4 |= 0x2;
        if (!(o->unk_1F4 & 0x100)) {
            o->unk_1E4 &= ~0x4;
        }
        o->unk_1F4 &= ~0x100;
        o->unk_540 = -1;
        return o->unk_14BC;
    }

    if (flags & 0x80) {
        bits = o->unk_1E0;
        if (bits & 0x1000000) {
            o->unk_1F4 &= ~0x80;
            return 0xE3;
        }
        if (bits & 0x2000000) {
            o->unk_1F4 &= ~0x80;
            return 0xE4;
        }
    } else if (o->unk_1E0 & 0x2100000) {
        p = o->unk_2518;
        if (p != 0 && (p->unk_1E0 & 0x1000000) && (p->unk_1F4 & 0x400)
            && !(o->unk_1EC & 0x200) && (o->unk_14E0 & 0x30) == 0x30) {
            bits = o->unk_14CC;
            if ((bits & 0xC) && !(bits & 0x3)) {
                o->unk_1F4 |= 0x80;
                p->unk_1F4 |= 0x80;
            }
        }
    }
    return -1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_001A0730);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_001A0AE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_001A0C90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_001A0E20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_001A0F00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_001A1270);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_001A1350);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_001A17A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_001A1980);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_001A1B80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_001A1D70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_001A2620);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_001A2680);

int func_001A27C0(Outer001A27C0 *o, int n)
{
    return o->unk_C->unk_5C + n;
}
