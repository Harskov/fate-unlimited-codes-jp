#include "common.h"

#include "libc.h"

void func_002E03D0(s32, s32, s32, s32);

void func_0020D040(void *);

void *func_0020CE80(void *);

extern s32 D_00523EB4[];

extern s32 D_00523EB8[];

extern f32 D_00523FB4[];

extern f32 D_00523FB8[];

extern s32 D_005240B8[];

void func_0015BD90();

union Sub_0015F4A0 {
    s32 i0;
    f32 f0;
};

extern s32 D_005243C0[];

void func_0015D130();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EE30", func_0015EE30);

void func_0015EFF0(s32 arg0, s32 arg1, s32 arg2)
{
    void func_0015F050(void *arg0);
    void func_0015F060(s32 arg0, s32 arg1, s32 arg2);
    u128 buf[4];

    func_0020D040(buf);
    func_0015F050(func_0020CE80(buf));
    func_0015F060(arg0, (s32)buf, arg2);
}

void func_0015F050(void *arg0)
{
    memset(arg0, 0, 12);
}

void func_0015F060(s32 arg0, s32 arg1, s32 arg2)
{
    func_002E03D0(arg0, arg2, 1, arg1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EE30", func_0015F070);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EE30", func_0015F230);

s32 *func_0015F3D0(s32 arg0, s32 arg1, s32 arg2, s32 *arg3)
{
    D_005240B8[0] = arg2;
    func_0015D130(D_005243C0, arg3);
    func_0015BD90(0x8000, 1);
    return arg3 + 3;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EE30", func_0015F420);

union Sub_0015F4A0 *func_0015F4A0(s32 arg0, s32 arg1, s32 arg2, union Sub_0015F4A0 *arg3)
{
    D_005240B8[0] = arg2;
    D_00523EB4[0] = arg3[0].i0;
    D_00523EB8[0] = arg3[1].i0;
    D_00523FB4[0] = arg3[0].f0;
    D_00523FB8[0] = arg3[1].f0;
    func_0015BD90(0x8000, 1);
    return arg3 + 2;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EE30", func_0015F510);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EE30", func_0015F630);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EE30", func_0015F710);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EE30", func_0015F7F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EE30", func_0015F8F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EE30", func_0015F9B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EE30", func_0015FA90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EE30", func_0015FC30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EE30", func_0015FD10);
