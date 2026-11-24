#include "common.h"
#include "libc.h"

typedef struct Obj_00381E50 {
    /* 0x000 */ u8 pad_0[0xC];
    /* 0x00C */ s32 unk_C;
    /* 0x010 */ u8 pad_10[0x12C];
} Obj_00381E50;

void func_001A6190();

typedef struct Obj_003812B0 {
    /* 0x00 */ s32 flags;
    /* 0x04 */ u8 pad_4[0xC];
    /* 0x10 */ u8 unk_10[0x7C];
    /* 0x8C */ u8 unk_8C[4];
} Obj_003812B0;

extern u8 *D_005361B8[];

typedef struct Obj_00381F90 {
    /* 0x000 */ u8 pad_0[0x1B0];
    /* 0x1B0 */ s32 unk_1B0;
    /* 0x1B4 */ u8 pad_1B4[0xF0];
} Obj_00381F90;

extern Obj_00381F90 *D_005361C8[];

extern s32 D_00522DB0[];

extern s32 D_005361C0[];

void func_0020F230(s32 *arg0, u8 *arg1);

u8 *func_0020F180(s32 *arg0, s32 arg1);

typedef struct Obj_00380E90 {
    /* 0x00 */ u8 pad_0[0x44];
    /* 0x44 */ f32 unk_44;
    /* 0x48 */ f32 unk_48;
    /* 0x4C */ u8 pad_4C[0x40];
    /* 0x8C */ u8 unk_8C[4];
} Obj_00380E90;

f32 func_00167D10(u8 *arg0, s32 arg1);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00380E10);

u8 *func_00380E60(s32 arg0)
{
    return D_005361B8[0] + arg0 * 316;
}

void func_00380E90(Obj_00380E90 *arg0, s32 arg1)
{
    u8 buf[16];
    f32 v;

    func_001A6190(buf, 0, arg0->unk_8C);
    v = func_00167D10(buf, arg1) - arg0->unk_48;
    arg0->unk_44 = v;
    if (v < 0.0f) {
        arg0->unk_44 = 0.0f;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00380F00);

void func_003812B0(Obj_003812B0 *arg0)
{
    if (arg0->flags & 0x100) {
        func_001A6190(arg0->unk_10, 0, arg0->unk_8C);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_003812F0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_003813B0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00381940);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_003819C0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00381BB0);

typedef struct Obj_00381CD0 {
    /* 0x00 */ u8 pad_0[0x8C];
    /* 0x8C */ u8 unk_8C[0xB0];
} Obj_00381CD0;

void func_00381CD0(Obj_00381CD0 *arg0)
{
    memset(arg0->unk_8C, 0, 0xB0);
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00381CE0);

void func_00381E50(Obj_00381E50 *arg0)
{
    s32 saved;

    saved = arg0->unk_C;
    memset(arg0, 0, 0x13C);
    arg0->unk_C = saved;
}

Obj_00381E50 *func_00381E90(s32 arg0)
{
    Obj_00381E50 *p;

    p = (Obj_00381E50 *)(D_005361B8[0] + D_005361C0[0] * 0x13C);
    p->unk_C = arg0;
    func_00381E50(p);
    D_005361C0[0]++;
    return p;
}

void func_00381F00(void)
{
    if (D_005361B8[0] != 0) {
        func_0020F230(D_00522DB0, D_005361B8[0]);
        D_005361B8[0] = 0;
        D_005361C0[0] = 0;
    }
}

void func_00381F40(void)
{
    u8 *p;

    if (D_005361B8[0] != 0) {
        return;
    }
    p = func_0020F180(D_00522DB0, 0x62C0);
    D_005361B8[0] = p;
    memset(p, 0, 0x62C0);
}

/* counts the 32 table entries whose word at +0x1B0 is set */
s32 func_00381F90(void)
{
    s32 count;
    s32 i;
    Obj_00381F90 *p;

    count = 0;
    p = D_005361C8[0];
    for (i = 0; i < 0x20; i++) {
        if (p->unk_1B0 != 0) {
            count++;
        }
        p++;
    }
    return count;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00381FD0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_003820A0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00382840);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00382960);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_003829F0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00382B50);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00382C60);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00382D90);

typedef struct Obj_00382EB0 {
    /* 0x000 */ u8 pad_0[0x1B4];
    /* 0x1B4 */ u8 unk_1B4[0xE0];
} Obj_00382EB0;

void func_00382EB0(Obj_00382EB0 *arg0)
{
    memset(arg0->unk_1B4, 0, 0xE0);
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00382EC0);
