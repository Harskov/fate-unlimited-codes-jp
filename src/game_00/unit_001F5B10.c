#include "common.h"

typedef struct Obj_001F5EE0 {
    u8 unk_0[0x18];
    s32 unk_18;
    u8 pad_1C[0x18];
    u8 *unk_34;
} Obj_001F5EE0;

extern s32 D_005017A0[];

extern s32 D_005017B0[];

void func_00205390();

void func_0020BC70();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F5B10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F5E00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F5E40);

void func_001F5EE0(Obj_001F5EE0 *arg0)
{
    if (arg0->unk_18 == 0)
        return;
    func_00205390(D_005017A0);
    func_0020BC70(arg0->unk_34 + 0xF0);
    func_00205390(D_005017B0);
    func_0020BC70(arg0->unk_34 + 0x130);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F5F40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F60C0);

void func_001F6180(f32 *dst, f32 *a, f32 *b, f32 t)
{
    dst[0] = b[0] + t * (a[0] - b[0]);
    dst[1] = b[1] + t * (a[1] - b[1]);
    dst[2] = b[2] + t * (a[2] - b[2]);
    dst[3] = b[3] + t * (a[3] - b[3]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F61F0);

void func_001F65E0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F65F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F6630);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F66B0);

void func_001F6710(u32 *src, u16 *dst)
{
    dst[0] = src[0] >> 16;
    dst[1] = src[1] >> 16;
    dst[2] = src[2] >> 16;
    dst[3] = src[3] >> 16;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F6750);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F6D60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F6E70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F70F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F71A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F78B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F7980);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F79E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F7A30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F7B30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F7BD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F7C60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F80D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F81C0);

int func_001F8270(s32 *arg0)
{
    s32 flags = *arg0;
    if (flags & 0x400) {
        *arg0 = flags & ~0x400;
        *arg0 ^= 4;
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F82B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F8390);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F8430);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F8590);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F85C0);
