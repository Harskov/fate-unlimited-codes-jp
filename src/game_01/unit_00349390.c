#include "common.h"

extern u32 D_0051D8A0[];

extern s16 D_005231C0[];

typedef struct Obj8 {
    /* 0x00 */ s32 unk_0;
    /* 0x04 */ s32 unk_4;
} Obj8;

typedef struct Obj_0021A3F0 {
    /* 0x00 */ u8 pad_0[0x10];
    /* 0x10 */ Obj8 unk_10;
} Obj_0021A3F0;

typedef struct Obj20 {
    /* 0x00 */ u8 pad_0[0x20];
} Obj20;

typedef struct Sub_003493B0 {
    /* 0x00 */ f32 unk_0;
    /* 0x04 */ f32 unk_4;
} Sub_003493B0;

typedef struct Obj_003493B0 {
    /* 0x000 */ u8 pad_0[0x4];
    /* 0x004 */ s32 unk_4;
    /* 0x008 */ u8 pad_8[0x4];
    /* 0x00C */ s32 unk_C;
    /* 0x010 */ s32 unk_10;
    /* 0x014 */ u8 pad_14[0x1FC];
    /* 0x210 */ s32 unk_210;
    /* 0x214 */ u8 pad_214[0x7C];
    /* 0x290 */ u8 unk_290[0x48];
    /* 0x2D8 */ s32 unk_2D8;
    /* 0x2DC */ s32 counter;
} Obj_003493B0;

Obj_0021A3F0 *func_0021A3F0(s32 arg0);

void func_0032D780(Obj20 *out, Obj8 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);

void func_0032D3C0(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7,
                   s32 arg8, s32 *arg9, Obj20 *arg10, Sub_003493B0 arg11, s32 arg12);

// the same empty early return on bits 0x12000000 of D_0051D8A0 as func_0034DD10
void func_00349390(void)
{
    if (D_0051D8A0[0] & 0x12000000) {
        return;
    }
}

void func_003493B0(Obj_003493B0 *arg0)
{
    s32 col[4];
    Obj20 buf;
    Sub_003493B0 v;
    f32 x;

    if (D_0051D8A0[0] & 0x12000000) {
        return;
    }
    col[0] = arg0->unk_210;
    col[1] = arg0->unk_210;
    col[2] = arg0->unk_210;
    col[3] = arg0->unk_210;
    if (D_005231C0[0] == 0) {
        arg0->counter++;
    }
    x = (f32)arg0->unk_2D8 * (f32)arg0->counter;
    if (x > 700.0f) {
        x = 700.0f;
    }
    func_0032D780(&buf, func_0021A3F0(arg0->unk_4)->unk_10, 106.0f, 0.0f, 106.0f + x / 2.0f, 32.0f);
    v.unk_0 = x;
    v.unk_4 = 64.0f;
    func_0032D3C0(arg0->unk_290, 0.0f, 0.0f, 1.0f, 1.0f, 0, arg0->unk_4, arg0->unk_10 | 0x2000,
                  arg0->unk_C, col, &buf, v, 4);
}

// the same empty early return on bits 0x12000000 of D_0051D8A0 as func_0034DD10
void func_003494F0(void)
{
    if (D_0051D8A0[0] & 0x12000000) {
        return;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00349390", func_00349510);

void func_00349780(void)
{
}

void func_00349790(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00349390", func_003497A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00349390", func_0034A020);

// returns early when D_0051D8A0 has either bit of 0x12000000 set, and does nothing either way;
// probably a body compiled out of the release build
void func_0034DD10(void)
{
    if (D_0051D8A0[0] & 0x12000000) {
        return;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00349390", func_0034DD30);

// the same empty early return on bits 0x12000000 of D_0051D8A0 as func_0034DD10
void func_0034EA20(void)
{
    if (D_0051D8A0[0] & 0x12000000) {
        return;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00349390", func_0034EA40);

// the same empty early return on bits 0x12000000 of D_0051D8A0 as func_0034DD10
void func_00351EF0(void)
{
    if (D_0051D8A0[0] & 0x12000000) {
        return;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00349390", func_00351F10);
