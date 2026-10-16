#include "common.h"

/* one element of the table func_00250220 indexes in steps of 0x370; each matched accessor here takes one */
typedef struct Obj_00327C40 {
    /* 0x000 */ u8 unk_0[0x1C];
    /* 0x01C */ int unk_1C;
    /* 0x020 */ u8 unk_20[0x2B8];
    /* 0x2D8 */ s32 unk_2D8[16];
    /* 0x318 */ f32 unk_318[16];
    /* 0x358 */ s32 unk_358;
    /* 0x35C */ u8 unk_35C[0x14];
} Obj_00327C40;

void func_00328250(void);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327C00);

int func_00327C20(Obj_00327C40 *p)
{
    return p->unk_1C;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327C30);

f32 func_00327C40(Obj_00327C40 *p, s32 i)
{
    return p->unk_318[i];
}

void func_00327C50(Obj_00327C40 *p, s32 i, f32 v)
{
    p->unk_318[i] = v;
}

s32 func_00327C60(Obj_00327C40 *p, s32 i)
{
    return p->unk_2D8[i];
}

void func_00327C70(Obj_00327C40 *p, s32 i, s32 v)
{
    p->unk_2D8[i] = v;
}

void func_00327C80(Obj_00327C40 *p, s32 arg1)
{
    p->unk_358 += arg1;
}

void func_00327C90(Obj_00327C40 *p, s32 arg1)
{
    p->unk_358 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327CA0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327CC0);

void func_00327CE0(void)
{
    func_00328250();
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327CF0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327D10);
