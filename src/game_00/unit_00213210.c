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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00213C60);

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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00217DF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00217F60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00218090);
