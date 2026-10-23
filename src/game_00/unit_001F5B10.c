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

/* a 0xA0-byte record; func_001F7A30 sets up the first 22 */
typedef struct Sub_001F7A30 {
    /* 0x00 */ s32 unk_0;
    /* 0x04 */ f32 unk_4;
    /* 0x08 */ f32 unk_8;
    /* 0x0C */ u8 pad_C[0x94];
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
    arg0->unk_4[0].unk_0 = 0x050041C1;
    arg0->unk_4[0].unk_8 = 1.0f;
    arg0->unk_4[1].unk_0 = 0x04802140;
    arg0->unk_4[1].unk_4 = 1.0f;
    arg0->unk_4[2].unk_0 = 0x060004C0;
    arg0->unk_4[3].unk_0 = 0x040004C0;
    arg0->unk_4[4].unk_0 = 0x040004C0;
    arg0->unk_4[5].unk_0 = 0x040004C0;
    arg0->unk_4[6].unk_0 = 0x040004C0;
    arg0->unk_4[7].unk_0 = 0x040004C0;
    arg0->unk_4[12].unk_0 = 0x040004C0;
    arg0->unk_4[13].unk_0 = 0x040004C0;
    arg0->unk_4[14].unk_0 = 0x040004C0;
    arg0->unk_4[15].unk_0 = 0x040004C0;
    arg0->unk_4[8].unk_0 = 0x040004C0;
    arg0->unk_4[9].unk_0 = 0x040004C0;
    arg0->unk_4[10].unk_0 = 0x040004C0;
    arg0->unk_4[11].unk_0 = 0x040004C0;
    arg0->unk_4[19].unk_0 = 0x040004C0;
    arg0->unk_4[20].unk_0 = 0x040004C0;
    arg0->unk_4[21].unk_0 = 0x040004C0;
    arg0->unk_4[16].unk_0 = 0x040004C0;
    arg0->unk_4[17].unk_0 = 0x040004C0;
    arg0->unk_4[18].unk_0 = 0x040004C0;
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
