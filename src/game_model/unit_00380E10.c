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

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00380E10);

u8 *func_00380E60(s32 arg0)
{
    return D_005361B8[0] + arg0 * 316;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00380E90);

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

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00381E90);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00381F00);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00381F40);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380E10", func_00381F90);

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
