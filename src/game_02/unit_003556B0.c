#include "common.h"

void func_00210D60(void);

typedef struct Obj_003575A0 {
    unsigned char unk_0[0x9C];
    int unk_9C;
    int unk_A0;
} Obj_003575A0;

void func_0015D130();

typedef struct Sub_00356630 {
    unsigned char unk_0[0x84];
    unsigned char unk_84[0x34];
    unsigned char unk_B8[0x10];
} Sub_00356630;

typedef struct Obj_00356630 {
    unsigned char unk_0[0x78];
    unsigned char unk_78[0xC];
    unsigned char unk_84[0xB4];
    Sub_00356630 unk_138;
} Obj_00356630;

float func_0020E740(float, float);

typedef struct Obj_003560E0 {
    unsigned char unk_0[0x3C];
    /* 0x3C */ f32 counter_3C;
    /* 0x40 */ f32 counter_40;
    /* 0x44 */ f32 counter_44;
    /* 0x48 */ f32 counter_48;
    /* 0x4C */ f32 unk_4C;
    /* 0x50 */ f32 unk_50;
    /* 0x54 */ f32 unk_54;
    /* 0x58 */ f32 unk_58;
} Obj_003560E0;

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", sceCdStream);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00355820);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00355FE0);

/* steps four values by their rates at +0x4C..+0x58, then pulls each back by 2*pi
   (6.2831855f) once it leaves [-2*pi, 2*pi]: probably angles in radians */
void func_003560E0(Obj_003560E0 *arg0)
{
    arg0->counter_3C += arg0->unk_4C;
    arg0->counter_40 += arg0->unk_50;
    arg0->counter_44 += arg0->unk_54;
    arg0->counter_48 += arg0->unk_58;

    if (arg0->counter_3C < -6.2831855f)
        arg0->counter_3C += 6.2831855f;
    if (arg0->counter_3C > 6.2831855f)
        arg0->counter_3C -= 6.2831855f;

    if (arg0->counter_40 < -6.2831855f)
        arg0->counter_40 += 6.2831855f;
    if (arg0->counter_40 > 6.2831855f)
        arg0->counter_40 -= 6.2831855f;

    if (arg0->counter_44 < -6.2831855f)
        arg0->counter_44 += 6.2831855f;
    if (arg0->counter_44 > 6.2831855f)
        arg0->counter_44 -= 6.2831855f;

    if (arg0->counter_48 < -6.2831855f)
        arg0->counter_48 += 6.2831855f;
    if (arg0->counter_48 > 6.2831855f)
        arg0->counter_48 -= 6.2831855f;
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_003562B0);

void func_003565A0(void)
{
    func_00210D60();
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_003565B0);

void func_00356630(Obj_00356630 *arg0)
{
    Sub_00356630 *s = &arg0->unk_138;

    func_0015D130(arg0->unk_78, s->unk_84);
    func_0015D130(arg0->unk_84, s->unk_B8);
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00356680);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_003569C0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00356E40);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00357070);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00357290);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00357380);

int func_00357490(Obj_003575A0 *arg0, int *arg1)
{
    float r;

    *arg1 = 0x96;
    arg0->unk_9C = 0x5555;
    r = func_0020E740(-20.0f, 20.0f);
    arg0->unk_A0 = (int)(182.04445f * r);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00357500);

int func_003575A0(Obj_003575A0 *arg0, int *arg1)
{
    *arg1 = 0x12C;
    arg0->unk_9C = 0x360B;
    arg0->unk_A0 = 0;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_003575C0);
