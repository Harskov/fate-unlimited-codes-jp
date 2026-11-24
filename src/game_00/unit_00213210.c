#include "common.h"
#include "types.h"

#include "libc.h"

void func_00218E20(void);

typedef struct Obj_00215AF0 {
    u8 unk_0;
    u8 pad_1[7];
    f32 unk_8;
    f32 unk_C;
    u8 unk_10[0x40];
    u8 unk_50[4];
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    s32 unk_60;
    u8 pad_64[8];
    s32 unk_6C;
    s32 unk_70;
} Obj_00215AF0;

Obj_00215AF0 *func_002190A0(int size);

void func_00218090(int arg, Obj_00215AF0 *obj);

typedef struct Obj_00217F60 {
    /* 0x00 */ f32 unk_0;
    /* 0x04 */ f32 unk_4;
    /* 0x08 */ f32 unk_8;
    u8 pad_C[4];
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
    u8 pad_1C[4];
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ f32 unk_28;
    /* 0x2C */ f32 unk_2C;
    u8 pad_30[0x10];
} Obj_00217F60;

typedef struct Sub_00217F60 {
    /* 0x00 */ f32 unk_0;
    /* 0x04 */ f32 unk_4;
} Sub_00217F60;

typedef struct Elem_00217F60 {
    /* 0x00 */ u8 unk_0;
    /* 0x01 */ u8 unk_1;
    /* 0x02 */ u8 unk_2;
    /* 0x03 */ u8 unk_3;
} Elem_00217F60;

typedef struct Obj_00213C60 {
    /* 0x00 */ u8 unk_0;
    u8 pad_1[7];
    /* 0x08 */ f32 unk_8;
    /* 0x0C */ f32 unk_C;
    /* 0x10 */ f32 *unk_10;
    /* 0x14 */ f32 *unk_14;
    /* 0x18 */ s32 *unk_18;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ s16 unk_24;
    u8 pad_26[2];
    /* 0x28 */ s32 unk_28;
    /* 0x2C */ s32 unk_2C;
    /* 0x30 */ s32 unk_30;
} Obj_00213C60;

// !FAKE: the global is read again for every record, after the store before it; a volatile read is the plain C that keeps the load in the loop
extern volatile f32 D_00525120[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00213210);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00213420);

void func_002134F0(f32 *v)
{
    v[0] += -0.5f;
    v[1] += -0.5f;
    v[2] += -0.5f;
    v[3] += -0.5f;
    v[4] += -0.5f;
    v[5] += -0.5f;
    v[6] += -0.5f;
    v[7] += -0.5f;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00213560);

void func_002135C0(void *dst, unsigned int n)
{
    memset(dst, 0, n);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_002135D0);

int func_002138B0(float x, float y)
{
    if (x > 4096.0f)
        return 0;
    if (x < -4096.0f)
        return 0;
    if (y > 4096.0f)
        return 0;
    if (y < -4096.0f)
        return 0;
    return 1;
}

int func_00213910(float *p)
{
    int i;

    for (i = 0; i < 4; i++, p += 2) {
        if (p[0] > 4096.0f)
            return 0;
        if (p[0] < -4096.0f)
            return 0;
        if (p[1] > 4096.0f)
            return 0;
        if (p[1] < -4096.0f)
            return 0;
    }
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_002139A0);

void func_00213C50(void)
{
}

/* Probably builds a kind-2 record once the points and the position pass the range checks,
   keeping its own copies of the two point arrays and the word array it is given. */
void func_00213C60(int arg0, f32 *arg1, f32 *arg2, s16 arg3, s32 *arg4, int arg5, int arg6, int arg7, f32 x, f32 y, f32 z, f32 w)
{
    Obj_00213C60 *o;
    int i;

    if (func_00213910(arg1) == 0)
        return;
    if (func_002138B0(x, y) == 0)
        return;

    o = (Obj_00213C60 *)func_002190A0(sizeof(Obj_00213C60));
    if (o != 0) {
        func_00218090(arg7, (Obj_00215AF0 *)o);
        o->unk_0 = 2;
        o->unk_8 = x;
        o->unk_C = y;
        o->unk_1C = z;
        o->unk_20 = w;
        o->unk_2C = arg5;
        o->unk_28 = arg6;
        o->unk_24 = arg3;
        o->unk_30 = arg0;

        o->unk_10 = (f32 *)func_002190A0(arg0 * 8);
        if (o->unk_10 != 0)
            memcpy(o->unk_10, arg1, arg0 * 8);

        o->unk_14 = (f32 *)func_002190A0(arg0 * 8);
        if (o->unk_14 != 0)
            memcpy(o->unk_14, arg2, arg0 * 8);

        o->unk_18 = (s32 *)func_002190A0(arg0 * 4);
        if (o->unk_18 != 0) {
            for (i = 0; i < arg0; i++)
                o->unk_18[i] = arg4[i];
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00213F40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00214180);

void func_002146B0(void *arg0, void *arg1, int arg2, int arg3, int arg4, char *arg5, int arg6, f32 x, f32 y)
{
    Obj_00215AF0 *o;
    int len;

    if (arg5 != 0) {
        len = strlen(arg5) + 1;
        o = func_002190A0(0x70);
        if (o != 0) {
            func_00218090(arg6, o);
            o->unk_0 = 0x10;
            o->unk_8 = x;
            o->unk_C = y;
            o->unk_5C = arg4;
            if (arg0 != 0) {
                memcpy(o->unk_10, arg0, 0x40);
            } else {
                o->unk_5C |= 8;
            }
            memcpy(o->unk_50, arg1, 4);
            o->unk_54 = arg2;
            o->unk_58 = arg3;
            o->unk_60 = (s32)func_002190A0(len);
            if (o->unk_60 != 0) {
                strcpy((char *)o->unk_60, arg5);
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_002147F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00215180);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00215950);

void func_00215AF0(void *arg0, void *arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, f32 x, f32 y, int arg8)
{
    Obj_00215AF0 *p;

    if (arg5 == 0)
        return;
    p = func_002190A0(0x80);
    if (p == 0)
        return;
    func_00218090(arg8, p);
    p->unk_0 = 0x11;
    p->unk_8 = x;
    p->unk_C = y;
    if (arg0 != 0) {
        memcpy(p->unk_10, arg0, 0x40);
        p->unk_70 = arg6;
    } else {
        p->unk_70 = arg6 | 8;
    }
    memcpy(p->unk_50, arg1, 4);
    p->unk_54 = arg2;
    p->unk_5C = arg4;
    p->unk_58 = arg3;
    p->unk_60 = arg5;
    p->unk_6C = arg7;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00215C10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00215F80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00216400);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00216CE0);

void func_00216E30(void *arg0, void *arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, f32 x, f32 y, int arg8)
{
    Obj_00215AF0 *p;

    if (arg5 == 0)
        return;
    p = func_002190A0(0x80);
    if (p == 0)
        return;
    func_00218090(arg8, p);
    p->unk_0 = 0xF;
    p->unk_8 = x;
    p->unk_C = y;
    if (arg0 != 0) {
        memcpy(p->unk_10, arg0, 0x40);
        p->unk_70 = arg6;
    } else {
        p->unk_70 = arg6 | 8;
    }
    memcpy(p->unk_50, arg1, 4);
    p->unk_54 = arg2;
    p->unk_5C = arg4;
    p->unk_58 = arg3;
    p->unk_60 = arg5;
    p->unk_6C = arg7;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00216F50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_002171C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00217240);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00217560);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00217680);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00217920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00217A70);

void func_00217DE0(void)
{
    func_00218E20();
}

/* Sets the float at +0x8 of each of arg1 records to 3276.0 and the one at +0x18
   to the global value; the eight-wide body is the compiler's unrolling. */
void func_00217DF0(Obj_00217F60 *arg0, int arg1)
{
    int i;

    for (i = 0; i < arg1; i++) {
        arg0[i].unk_8 = 3276.0f;
        arg0[i].unk_18 = D_00525120[0];
    }
}

/* Fills arg4 records: a float pair from arg1, four bytes from arg3 widened to
   floats, and a second float pair from arg2 when that table is given. */
void func_00217F60(Obj_00217F60 *arg0, Sub_00217F60 *arg1, Sub_00217F60 *arg2, Elem_00217F60 *arg3, int arg4)
{
    int i;

    for (i = 0; i < arg4; i++) {
        arg0[i].unk_0 = arg1[i].unk_0;
        arg0[i].unk_4 = arg1[i].unk_4;
        arg0[i].unk_20 = arg3[i].unk_0;
        arg0[i].unk_24 = arg3[i].unk_1;
        arg0[i].unk_28 = arg3[i].unk_2;
        arg0[i].unk_2C = arg3[i].unk_3;
        if (arg2 != 0) {
            arg0[i].unk_10 = arg2[i].unk_0;
            arg0[i].unk_14 = arg2[i].unk_4;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00218090);
