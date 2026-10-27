#include "common.h"

typedef struct Obj_001DC510 {
    u8 unk_0[0x1E4];
    s32 unk_1E4;
    u8 pad_1E8[0x23E8 - 0x1E8];
    s32 *unk_23E8;
} Obj_001DC510;

typedef struct Obj_001D7310 {
    u8 unk_0[0x390];
    s32 unk_390;
    u8 pad_394[0xAD0 - 0x394];
    s32 unk_AD0;
} Obj_001D7310;

typedef struct Obj_001D8E50 {
    u8 unk_0[0x1C];
    s32 unk_1C;
} Obj_001D8E50;

typedef struct Obj_001D7090 {
    u8 unk_0[0x10];
    s32 unk_10;
    u8 pad_14[0x42C - 0x14];
    s32 unk_42C;
    s32 unk_430;
    s32 unk_434;
    s32 unk_438;
    s32 unk_43C;
    s32 unk_440;
    s32 unk_444;
} Obj_001D7090;

s32 func_001E3800(s32 arg0);

void func_0015D130(f32 *arg0, s32 arg1);

f32 fabsf(f32);

void func_001DC240();

void func_0019C820();

void func_0019C930();

void func_0019CA40();

void func_001DBD10();

void func_001DC020();

void func_001DC080();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D6EA0);

void func_001D7090(Obj_001D7090 *arg0)
{
    arg0->unk_42C = -1;
    arg0->unk_430 = 0;
    arg0->unk_434 = 0;
    arg0->unk_438 = 0;
    arg0->unk_43C = 0;
    arg0->unk_440 = 0;
    arg0->unk_444 = 0;
    arg0->unk_10 &= ~0x110;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D70D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D71C0);

s32 func_001D7310(Obj_001D7310 *arg0)
{
    s32 v = arg0->unk_390;

    if (v >= 0)
        return arg0->unk_AD0 >= v;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D7330);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D7490);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D7750);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D77F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D7940);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D79D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D7E70);

s32 func_001D7EF0(f32 *arg0, f32 arg1)
{
    f32 lo[4];
    f32 hi[4];

    func_0015D130(lo, func_001E3800(0));
    func_0015D130(hi, func_001E3800(1));
    if (!(lo[0] <= arg0[0] && lo[2] <= arg0[2]))
        return 0;
    if (hi[0] < arg0[0] || hi[2] < arg0[2])
        return 0;
    if (arg0[1] < 0.0f || fabsf(arg0[1]) <= arg1)
        return 1;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D7FE0);

void func_001D8240(void *arg0, f32 *arg1)
{
    f32 zero = 0.0f;

    if (zero == arg1[0] && zero == arg1[1] && zero == arg1[2])
        arg1[2] = 0.001f;
    func_00165EE0();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D82A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D8810);

void func_001D8E50(Obj_001D8E50 *arg0, s32 arg1)
{
    arg0->unk_1C |= 0x1FF;
    arg0->unk_1C &= ~(arg1 ^ 0x1FF);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D8E80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D9AE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001D9B10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DA0C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DA7B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DBB60);

void func_001DBD00(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DBD10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DC020);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DC080);

void func_001DC0C0(void)
{
    func_0019CA40(func_001DC080, 0);
    func_0019C820(func_001DBD10);
    func_0019C930(func_001DBD10);
    func_0019CA40(func_001DC020, 0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DC110);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DC240);

void func_001DC450(Obj_001DC510 *arg0)
{
    s32 *node;

    if (arg0 != 0) {
        arg0->unk_1E4 &= 0xE7FFFFFF;
        node = arg0->unk_23E8;
        while (*node != 1) {
            func_001DC240(arg0, *node);
            node = (s32 *)node[2];
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D6EA0", func_001DC4D0);

s32 func_001DC510(Obj_001DC510 *arg0)
{
    return *arg0->unk_23E8 == 1;
}
