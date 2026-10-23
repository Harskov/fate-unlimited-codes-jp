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

typedef struct Sub_001F7A30 {
    s32 unk_0;
    u8 pad_4[4];
    s32 unk_8;
    u8 pad_C[0x94];
    s32 unk_A0;
    s32 unk_A4;
    u8 pad_A8[0x98];
    s32 unk_140;
    u8 pad_144[0x9C];
    s32 unk_1E0;
    u8 pad_1E4[0x9C];
    s32 unk_280;
    u8 pad_284[0x9C];
    s32 unk_320;
    u8 pad_324[0x9C];
    s32 unk_3C0;
    u8 pad_3C4[0x9C];
    s32 unk_460;
    u8 pad_464[0x9C];
    s32 unk_500;
    u8 pad_504[0x9C];
    s32 unk_5A0;
    u8 pad_5A4[0x9C];
    s32 unk_640;
    u8 pad_644[0x9C];
    s32 unk_6E0;
    u8 pad_6E4[0x9C];
    s32 unk_780;
    u8 pad_784[0x9C];
    s32 unk_820;
    u8 pad_824[0x9C];
    s32 unk_8C0;
    u8 pad_8C4[0x9C];
    s32 unk_960;
    u8 pad_964[0x9C];
    s32 unk_A00;
    u8 pad_A04[0x9C];
    s32 unk_AA0;
    u8 pad_AA4[0x9C];
    s32 unk_B40;
    u8 pad_B44[0x9C];
    s32 unk_BE0;
    u8 pad_BE4[0x9C];
    s32 unk_C80;
    u8 pad_C84[0x9C];
    s32 unk_D20;
} Sub_001F7A30;

typedef struct Obj_001F7A30 {
    u8 pad_0[4];
    Sub_001F7A30 *unk_4;
    u8 pad_8[0x18];
    s32 *unk_20;
    s32 *unk_24;
} Obj_001F7A30;

extern s32 D_003D7690[];

extern s32 D_003D7750[];

extern s32 D_003D7810[];

extern s32 D_00501788[];

extern s32 D_00501790[];

extern s32 D_00501798[];

void func_002052F0();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F5B10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F5E00);

void func_001F5E40(u32 *arg0)
{
    u32 flags;
    u32 i;
    s32 *p;

    func_002052F0(D_00501788);
    flags = *arg0;
    p = D_003D7810;
    for (i = 0; i < 0x20; i++) {
        if (flags & 1) {
            func_002052F0(D_00501798, *p);
        }
        p++;
        flags >>= 1;
    }
    func_002052F0(D_00501790);
}

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

void func_001F7A30(Obj_001F7A30 *arg0)
{
    arg0->unk_20 = &D_003D7690[0];
    arg0->unk_24 = &D_003D7750[0];
    arg0->unk_4->unk_0 = 0x050041C1;
    arg0->unk_4->unk_8 = 0x3F800000;
    arg0->unk_4->unk_A0 = 0x04802140;
    arg0->unk_4->unk_A4 = 0x3F800000;
    arg0->unk_4->unk_140 = 0x060004C0;
    arg0->unk_4->unk_1E0 = 0x040004C0;
    arg0->unk_4->unk_280 = 0x040004C0;
    arg0->unk_4->unk_320 = 0x040004C0;
    arg0->unk_4->unk_3C0 = 0x040004C0;
    arg0->unk_4->unk_460 = 0x040004C0;
    arg0->unk_4->unk_780 = 0x040004C0;
    arg0->unk_4->unk_820 = 0x040004C0;
    arg0->unk_4->unk_8C0 = 0x040004C0;
    arg0->unk_4->unk_960 = 0x040004C0;
    arg0->unk_4->unk_500 = 0x040004C0;
    arg0->unk_4->unk_5A0 = 0x040004C0;
    arg0->unk_4->unk_640 = 0x040004C0;
    arg0->unk_4->unk_6E0 = 0x040004C0;
    arg0->unk_4->unk_BE0 = 0x040004C0;
    arg0->unk_4->unk_C80 = 0x040004C0;
    arg0->unk_4->unk_D20 = 0x040004C0;
    arg0->unk_4->unk_A00 = 0x040004C0;
    arg0->unk_4->unk_AA0 = 0x040004C0;
    arg0->unk_4->unk_B40 = 0x040004C0;
}

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
