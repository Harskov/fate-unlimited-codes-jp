#include "common.h"

#include "libc.h"

extern s32 D_00523B38[];

void func_001E7D20();

/* The object func_001B13B0, func_001B13C0 and func_001B2E60 take as their first argument:
   func_001B13C0 tests flag words at +0x1E0, +0x1E4 and +0x1EC, the sign of +0x24B8 and
   whether +0x53C is 0x38; func_001B2E60 tests +0x1EC too, indexes D_00523B38 with +0x0 and reads
   through the pointer at +0x3C; func_001B13B0 clears the 0xA8 bytes at +0x14C4. */
typedef struct Obj {
    s32 unk_0;
    s32 unk_4;
    u8 pad_8[0x34];
    s32 *unk_3C;
    u8 pad_40[0x1A0];
    /* 0x1E0 */ s32 flags_1E0;
    /* 0x1E4 */ s32 flags_1E4;
    /* 0x1E8 */ s32 flags_1E8;
    /* 0x1EC */ s32 flags_1EC;
    /* 0x1F0 */ s32 flags_1F0;
    /* 0x1F4 */ s32 flags_1F4;
    u8 pad_1F8[0x344];
    s32 unk_53C;
    u8 pad_540[0x6D0];
    s32 unk_C10;
    u8 pad_C14[0x24];
    /* 0xC38 */ s32 flags_C38;
    /* 0xC3C */ s32 flags_C3C;
    u8 pad_C40[0x87C];
    s32 unk_14BC;
    u8 pad_14C0[0x4];
    u8 unk_14C4[0x1C];
    s32 unk_14E0;
    u8 pad_14E4[0x44];
    u8 unk_1528[0x20];
    u8 unk_1548[0x20];
    u8 pad_1568[0x4];
    u8 pad_156C[0xE20];
    s32 unk_238C;
    s32 unk_2390;
    s32 unk_2394;
    s32 unk_2398;
    s32 unk_239C;
    s32 unk_23A0;
    u8 pad_23A4[0x4];
    s32 unk_23A8;
    u8 unk_23AC[0x28];
    u8 pad_23D4[0xE4];
    s32 unk_24B8;
    u8 pad_24BC[0x54];
    /* 0x2510 */ struct Obj *link_2510;
    u8 pad_2514[0x4];
    /* 0x2518 */ struct Obj *link_2518;
} Obj;

/* func_001B2E60's second argument: a flag word, and the word it sets bits 0x10 and
   0x1000 in. */
typedef struct Obj_001B1360 {
    s32 flags;
    /* 0x04 */ s32 *unk_4;
} Obj_001B1360;


typedef struct Obj_001B24C0 {
    u8 pad_0[0x5C];
    s32 unk_5C;
    s32 unk_60;
    s32 unk_64;
} Obj_001B24C0;

extern s32 D_0051D970[];

extern s32 D_0051E444[];

extern s32 D_00523EB4[];

extern s32 D_00523EB8[];

void func_001EC6E0(s32, f32, f32, s32);

void func_00211130(s32);

void func_0019B390(s32, s32, s32, f32, f32);

void func_001A3890(Obj *, s32, s32, s32);

s32 func_00333670(Obj *, s32);

void func_001B1360(Obj *o)
{
    memset(o->unk_1528, 0, 0x20);
    memset(o->unk_1548, 0, 0x20);
    o->unk_14E0 = 0;
}

void func_001B13B0(Obj *o)
{
    memset(o->unk_14C4, 0, 0xA8);
}

s32 func_001B13C0(Obj *o)
{
    s32 a1 = o->flags_1E0;

    if (a1 & 0x05008000)
        return 0;
    if (o->flags_1EC & 0xC00000)
        return 0;
    if (o->unk_24B8 > 0)
        return 0;
    if (o->flags_1E4 & 0xA00)
        return 0;
    if ((a1 & 0x02120000) && (o->unk_53C != 0x38))
        return 0;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B1440);

void func_001B24C0(Obj_001B24C0 *o)
{
    memset(o, 0, 0x68);
    o->unk_5C = -1;
    o->unk_60 = -1;
    o->unk_64 = -1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2500);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2660);

/* clears the same block in both objects, points the second at the first and merges their flag words */
void func_001B29C0(Obj *arg0, Obj *arg1)
{
    s32 *p;
    s32 v;
    s32 r;

    arg0->unk_238C = 0;
    arg0->unk_2390 = 0;
    arg0->unk_2394 = 0;
    arg0->unk_2398 = 0;
    arg0->unk_239C = 0;
    arg0->unk_23A0 = 0;
    arg0->unk_23A8 = 0;
    memset(arg0->unk_23AC, 0, 0x28);
    arg1->unk_238C = 0;
    arg1->unk_2390 = 0;
    arg1->unk_2394 = 0;
    arg1->unk_2398 = 0;
    arg1->unk_239C = 0;
    arg1->unk_23A0 = 0;
    arg1->unk_23A8 = 0;
    memset(arg1->unk_23AC, 0, 0x28);
    arg1->unk_14BC = arg0->unk_14BC;
    arg1->link_2510 = arg0;
    arg1->link_2518 = arg0;
    arg1->flags_1F4 |= 0x40;
    if (!(arg0->flags_1F0 & 0x2000) || !(arg1->flags_1F0 & 0x2000)) {
        arg1->flags_1F4 &= ~0x20;
    }
    if (arg0->flags_C3C & 2) {
        arg0->flags_1F4 |= 0x400;
        p = &arg1->unk_C10;
        v = arg1->flags_C38;
        r = 0;
        if ((v & 8) && !(v & 0x10) && !(*p & 4)) {
            r = 1;
        }
        if (func_00333670(arg1, 0x40) != 0) {
            r = 1;
        }
        if (r != 0) {
            arg0->flags_1F4 |= 0x80;
            arg1->flags_1F4 |= 0x80;
        }
    } else {
        arg0->flags_1F4 &= ~0x400;
    }
    if (!(arg1->flags_1E4 & 1) && !(arg1->flags_1F4 & 0x80)) {
        arg1->flags_1EC |= 0x200;
    }
    if (!(arg1->flags_1E8 & 0x40)) {
        v = arg0->flags_C38;
        if ((v & 0x40) && (v & 0x20)) {
            D_00523EB4[0] = 0x12;
            D_00523EB8[0] = arg0->unk_4;
            func_00211130(0x20000);
            func_001A3890(arg0, 0x9C4, 1, 1);
            if (D_0051D970[0] == 0) {
                func_001EC6E0(0x14, -300.0f, 500.0f, 0xFFFFFF);
            }
            func_0019B390(D_0051E444[0], 0x14, 6, 0.0f, 0.04f);
        }
    }
    arg0->flags_1F0 |= 0x200;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2C30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2D60);

void func_001B2E60(Obj *o, Obj_001B1360 *m)
{
    if (o->flags_1EC & 0x2000) {
        *m->unk_4 |= 0x10;
    } else {
        *m->unk_4 &= ~0x10;
    }
    if (m->flags & 2) {
        *m->unk_4 |= 0x1000;
    } else {
        *m->unk_4 &= ~0x1000;
    }
    func_001E7D20(m->unk_4, *o->unk_3C, D_00523B38[o->unk_0]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2EF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B30E0);
