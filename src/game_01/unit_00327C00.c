#include "common.h"
#include "game_01/unit_00327D30.h"

/* one element of the table func_00250220 indexes in steps of 0x370; each accessor here takes one */
typedef struct Obj_00327C40 {
    /* 0x000 */ s32 unk_0;
    /* 0x004 */ u8 unk_4[0x18];
    /* 0x01C */ int unk_1C;
    /* 0x020 */ s32 unk_20;
    /* 0x024 */ u8 unk_24[0x2B4];
    /* 0x2D8 */ s32 unk_2D8[16];
    /* 0x318 */ f32 unk_318[16];
    /* 0x358 */ s32 unk_358;
    /* 0x35C */ u8 unk_35C[0x14];
} Obj_00327C40;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327C00);

int func_00327C20(Obj_00327C40 *p)
{
    return p->unk_1C;
}

int func_00327C30(int *arg0)
{
    return arg0[1];
}

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

void func_00327CA0(s32 *arg0, s32 arg1)
{
    *arg0 |= arg1;
    *arg0 |= 0x402;
}

void func_00327CC0(s32 *arg0, s32 arg1, s32 arg2)
{
    arg0[5] |= arg1 & arg2;
    arg0[0] |= 0x402;
}

void func_00327CE0(Obj_00328250 *p)
{
    func_00328250(p);
}

void func_00327CF0(Obj_00327C40 *p)
{
    p->unk_1C = -1;
    p->unk_0 |= 0x402;
}

void func_00327D10(Obj_00327C40 *p, s32 arg1, s32 arg2)
{
    p->unk_1C = arg1;
    p->unk_20 = arg2;
    p->unk_0 |= 0x402;
}
