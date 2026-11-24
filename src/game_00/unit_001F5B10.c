#include "common.h"

typedef struct Obj_001F5EE0 {
    u8 unk_0[0x18];
    s32 unk_18;
    u8 pad_1C[0x18];
    u8 *unk_34;
} Obj_001F5EE0;

extern char D_005017A0[];

extern char D_005017B0[];

s32 func_00205390(const char *);

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

typedef struct Obj_001F7BD0 {
    /* 0x00 */ u8 pad_0[0x38];
} Obj_001F7BD0;

void func_001F7C60(Obj_001F7BD0 *a, Obj_001F7BD0 *b, s32 arg2);

extern s32 D_00522DB0[];

void func_0020F230();

typedef struct Obj_001F8430 {
    /* 0x00 */ s32 flags;
    /* 0x04 */ u8 pad_4[0x4];
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ u8 pad_C[0x8];
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 pad_18[0x14];
    /* 0x2C */ s32 *unk_2C;
    /* 0x30 */ s32 count;
    /* 0x34 */ u8 pad_34[0x4];
} Obj_001F8430;

s32 func_001F78B0(Obj_001F8430 *arg0, s32 arg1, s32 arg2, f32 arg3);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F5B10);

void func_001F5E00(u8 *arg0, s32 arg1)
{
    u8 *end;
    u8 c;

    end = arg0 + arg1 - 1;
    while (arg0 < end) {
        c = *arg0;
        *arg0 = *end;
        *end = c;
        arg0++;
        end--;
    }
}

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

void func_001F6630(f32 *arg0, u16 *arg1, u16 *arg2, f32 arg3)
{
    s32 la[4];
    s32 lb[4];

    la[0] = arg1[0] << 16;
    la[1] = arg1[1] << 16;
    la[2] = arg1[2] << 16;
    la[3] = arg1[3] << 16;
    lb[0] = arg2[0] << 16;
    lb[1] = arg2[1] << 16;
    lb[2] = arg2[2] << 16;
    lb[3] = arg2[3] << 16;
    func_001F6180(arg0, (f32 *)la, (f32 *)lb, arg3);
}

void func_001F66B0(f32 *dst, u16 *src)
{
    union {
        s32 i;
        f32 f;
    } w0, w1, w2, w3;

    w0.i = src[0] << 16;
    w1.i = src[1] << 16;
    w2.i = src[2] << 16;
    w3.i = src[3] << 16;
    dst[0] = w0.f;
    dst[1] = w1.f;
    dst[2] = w2.f;
    dst[3] = w3.f;
}

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

void func_001F7BD0(Obj_001F7BD0 *a, Obj_001F7BD0 *b, s32 n, s32 arg3, s32 arg4)
{
    s32 i;

    for (i = 0; i < n; i++) {
        func_001F7C60(&a[i], &b[i], arg4);
    }
}

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

/* clears +0x8 and +0x14, applies the same 0x400/0x4 flag step as func_001F8270,
   then returns the index of the first table entry func_001F78B0 accepts, or -1 */
s32 func_001F82B0(Obj_001F8430 *arg0, s32 arg1, f32 arg2)
{
    s32 flags;
    s32 i;
    s32 found;

    arg0->unk_8 = 0;
    arg0->unk_14 = 0;
    flags = arg0->flags;
    if (flags & 0x400) {
        arg0->flags = flags & ~0x400;
        arg0->flags ^= 4;
    }

    for (i = 0; i < arg0->count; i++) {
        found = func_001F78B0(arg0, arg0->unk_2C[i], arg1, arg2);
        if (!found)
            continue;
        return i;
    }
    return -1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F8390);

/* writes arg3 into entry arg2 of each record's table, across arg1 records;
   an index past the first record's bound at +0x30 writes nothing */
void func_001F8430(Obj_001F8430 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 i;

    if (arg2 >= arg0->count)
        return;

    for (i = 0; i < arg1; i++) {
        arg0[i].unk_2C[arg2] = arg3;
    }
}

void func_001F8590(s32 arg0)
{
    switch (arg0) {
    case 0:
        return;
    }
    func_0020F230(D_00522DB0, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F5B10", func_001F85C0);
