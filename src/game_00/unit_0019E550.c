#include "common.h"

typedef struct Obj {
    u8 pad_0[0x1E0];
    /* 0x1E0 */ s32 flags_1E0;
    /* 0x1E4 */ s32 flags_1E4;
    u8 pad_1E8[0x4];
    /* 0x1EC */ s32 flags_1EC;
    u8 pad_1F0[0x4];
    /* 0x1F4 */ s32 flags_1F4;
    u8 pad_1F8[0x540 - 0x1F8];
    s32 unk_540;
    u8 pad_544[0x14B8 - 0x544];
    s32 unk_14B8;
    s32 unk_14BC;
    u8 pad_14C0[0x14CC - 0x14C0];
    /* 0x14CC */ s32 flags_14CC;
    u8 pad_14D0[0x14E0 - 0x14D0];
    /* 0x14E0 */ s32 flags_14E0;
    u8 pad_14E4[0x2518 - 0x14E4];
    /* 0x2518 */ struct Obj *next;
} Obj;

typedef struct Obj_0019E550 {
    unsigned char unk_0[0x5C];
    int unk_5C;
} Obj_0019E550;

typedef struct Obj_0019E550_2 {
    unsigned char unk_0[0xC];
    Obj_0019E550 *unk_C;
} Obj_0019E550_2;

typedef struct Obj_001A2620 {
    /* 0x00 */ s32 unk_0;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ s32 unk_C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1C */ s32 unk_1C;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
} Obj_001A2620;

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
    s32 flags = o->flags_1F4;
    s32 bits;
    Obj *p;

    if (flags & 0x20) {
        if (o->unk_14B8 == -1) {
            o->flags_1F4 = flags & ~0x120;
            return -1;
        }
        if ((flags & 0x8) && !(o->flags_1E4 & 0x200)) {
            o->flags_1F4 |= 0x10;
        }
        o->flags_1F4 &= ~0x20002A;
        o->flags_1E4 &= ~0xA09;
        o->flags_1E4 |= 0x2;
        if (!(o->flags_1F4 & 0x100)) {
            o->flags_1E4 &= ~0x4;
        }
        o->flags_1F4 &= ~0x100;
        o->unk_540 = -1;
        return o->unk_14B8;
    }

    if (flags & 0x40) {
        if (o->unk_14BC == -1) {
            o->flags_1F4 &= ~0x140;
            return -1;
        }
        if ((flags & 0x8) && !(o->flags_1E4 & 0x200)) {
            o->flags_1F4 |= 0x10;
        }
        o->flags_1F4 &= ~0x20004A;
        o->flags_1E4 &= ~0xA09;
        o->flags_1E4 |= 0x2;
        if (!(o->flags_1F4 & 0x100)) {
            o->flags_1E4 &= ~0x4;
        }
        o->flags_1F4 &= ~0x100;
        o->unk_540 = -1;
        return o->unk_14BC;
    }

    if (flags & 0x80) {
        bits = o->flags_1E0;
        if (bits & 0x1000000) {
            o->flags_1F4 &= ~0x80;
            return 0xE3;
        }
        if (bits & 0x2000000) {
            o->flags_1F4 &= ~0x80;
            return 0xE4;
        }
    } else if (o->flags_1E0 & 0x2100000) {
        p = o->next;
        if (p != 0 && (p->flags_1E0 & 0x1000000) && (p->flags_1F4 & 0x400)
            && !(o->flags_1EC & 0x200) && (o->flags_14E0 & 0x30) == 0x30) {
            bits = o->flags_14CC;
            if ((bits & 0xC) && !(bits & 0x3)) {
                o->flags_1F4 |= 0x80;
                p->flags_1F4 |= 0x80;
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

void func_001A2620(Obj_001A2620 *o)
{
    o->unk_0 = 0;
    o->unk_4 = 0;
    o->unk_8 = 0;
    o->unk_C = 0;
    o->unk_10 = -1;
    memset(&o->unk_14, -1, 8);
    memset(&o->unk_1C, -1, 8);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019E550", func_001A2680);

int func_001A27C0(Obj_0019E550_2 *o, int n)
{
    return o->unk_C->unk_5C + n;
}
