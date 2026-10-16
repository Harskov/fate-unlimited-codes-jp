#include "common.h"

typedef struct Obj_00327C90 {
    unsigned char pad[0x358];
    s32 unk_358;
} Obj_00327C90;

typedef struct Obj {
    unsigned char unk_0[0x1C];
    int unk_1C;
} Obj;

void func_00328250(void);

typedef struct Obj_00327C40 {
    u8 unk_0[0x318];
    f32 unk_318[1];
} Obj_00327C40;

typedef struct Obj_00327C60 {
    u8 unk_0[0x2D8];
    s32 unk_2D8[1];
} Obj_00327C60;

typedef struct Obj_00327C50 {
    u8 unk_0[0x318];
    f32 unk_318[1];
} Obj_00327C50;

typedef struct Obj_00327C70 {
    u8 unk_0[0x2D8];
    s32 unk_2D8[1];
} Obj_00327C70;

typedef struct Obj_00327C80 {
    u8 unk_0[0x358];
    s32 unk_358;
} Obj_00327C80;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327C00);

int func_00327C20(Obj *p)
{
    return p->unk_1C;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327C30);

f32 func_00327C40(Obj_00327C40 *p, s32 i)
{
    return p->unk_318[i];
}

void func_00327C50(Obj_00327C50 *p, s32 i, f32 v)
{
    p->unk_318[i] = v;
}

s32 func_00327C60(Obj_00327C60 *p, s32 i)
{
    return p->unk_2D8[i];
}

void func_00327C70(Obj_00327C70 *p, s32 i, s32 v)
{
    p->unk_2D8[i] = v;
}

void func_00327C80(Obj_00327C80 *p, s32 arg1)
{
    p->unk_358 += arg1;
}

void func_00327C90(Obj_00327C90 *p, s32 arg1)
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
