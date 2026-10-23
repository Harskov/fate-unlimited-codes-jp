#include "common.h"
#include "game_00/unit_0020D0D0.h"
#include "types.h"

extern s32 D_00527A08[];

typedef struct Obj_002240B0 {
    u8 unk_0[0x5C];
    s32 unk_5C;
} Obj_002240B0;

typedef struct Obj_00225720 {
    u8 unk_0[0xC];
    Obj_002240B0 *unk_C;
} Obj_00225720;

extern s32 D_00527A00[];

extern s32 D_00527A04[];

void func_002240C0(void);

typedef struct Obj_00225730 {
    /* 0x00 */ u8 unk_0[0x54];
    /* 0x54 */ s32 unk_54;
} Obj_00225730;

/* an operand slot: the opcodes read and write it as a float or as an integer */
typedef union Sub_00225730 {
    /* 0x00 */ f32 f0;
    /* 0x00 */ s32 i0;
} Sub_00225730;

extern char gFormat_502280[];

extern f32 *D_00522D98[];

extern int sprintf(char *, const char *, ...);

f32 fabsf(f32);

f32 sqrtf(f32);

f32 func_0012F110(f32);


f32 func_0020E410(f32, f32, f32);

f32 func_0020E570(f32, f32, f32, f32);

f32 func_0020E740(f32, f32);

void func_00223240();

u32 *func_00223250(void *arg0, Obj_00225730 *arg1, Sub_00225730 **dst, Sub_00225730 **src, u32 *pc);

u32 *func_002235A0(void *arg0, Obj_00225730 *arg1, Sub_00225730 **out, u32 *pc);

void func_00223860(void *arg0, char *str);

typedef struct Obj_002256E0 {
    u8 unk_0[0x5C];
    s32 *unk_5C;
} Obj_002256E0;

extern s32 D_00527A0C[];

void func_00178060();

s32 func_002240B0(void)
{
    return D_00527A08[0];
}

void func_002240C0(void)
{
    func_00178060(D_00527A0C);
    D_00527A08[0] = 0;
}

void func_002240F0(void)
{
    D_00527A00[0] = 0;
    D_00527A04[0] = 0;
    func_002240C0();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224110);

u32 *func_002246D0(u32 *arg0)
{
    u32 w;

    for (;;) {
        w = *arg0;
        if (!(w & 0xFF000000) || !(w & 0xFF0000) || !(w & 0xFF00) || !(w & 0xFF)) {
            break;
        }
        arg0++;
    }
    return arg0 + 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224730);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224920);

void func_00224E10(f32 *arg0, f32 *arg1, f32 *arg2)
{
    arg0[0] = arg1[0] / arg2[0];
    arg0[1] = arg1[1] / arg2[1];
    arg0[2] = arg1[2] / arg2[2];
}

void func_00224E50(f32 *arg0, f32 *arg1, f32 *arg2)
{
    arg0[0] = arg1[0] * arg2[0];
    arg0[1] = arg1[1] * arg2[1];
    arg0[2] = arg1[2] * arg2[2];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224E90);

s32 func_002256E0(Obj_002256E0 *arg0)
{
    s32 *p = arg0->unk_5C;
    s32 v = *p;
    arg0->unk_5C = p + 1;
    return v;
}

void func_00225700(Obj_002256E0 *arg0, s32 arg1)
{
    arg0->unk_5C = arg0->unk_5C - 1;
    *arg0->unk_5C = arg1;
}

s32 func_00225720(Obj_00225720 *arg0, s32 arg1)
{
    return arg1 - arg0->unk_C->unk_5C;
}

// one float opcode of the script at pc, chosen by bits 8-15 of its first word; returns the next opcode.
// 182.04445f is 0x10000 / 360: degrees to the 14-bit index of D_00522D98's table, probably sines (a quarter
// turn more reads the cosine); 0.017453292f is pi / 180 and 0.005493164f is 360 / 0x10000
u32 *func_00225730(void *arg0, Obj_00225730 *arg1, u32 *pc)
{
    Sub_00225730 *dst;
    Sub_00225730 *src;
    Sub_00225730 *a;
    Sub_00225730 *b;
    char buf[256];
    f32 *k;
    s32 ok;
    f32 f;
    s32 *ip;

    switch ((*pc >> 8) & 0xFF) {
    case 0:
        pc = func_002235A0(arg0, arg1, &dst, pc);
        sprintf(buf, gFormat_502280, dst->f0);
        func_00223860(arg0, buf);
        break;
    case 1:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        dst->f0 = src->f0;
        break;
    case 2:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        if (dst->f0 - src->f0 > 1.1920929e-7f) { /* FLT_EPSILON */
            arg1->unk_54 = 1;
        } else if (src->f0 - dst->f0 > 1.1920929e-7f) {
            arg1->unk_54 = -1;
        } else {
            arg1->unk_54 = 0;
        }
        break;
    case 3:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->f0 = src->f0 + a->f0;
        break;
    case 4:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->f0 = src->f0 - a->f0;
        break;
    case 5:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->f0 = src->f0 * a->f0;
        break;
    case 6:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->f0 = src->f0 / a->f0;
        break;
    case 7:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        dst->f0 = -src->f0;
        break;
    case 8:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        pc = func_002235A0(arg0, arg1, &b, pc);
        dst->f0 = func_0020E410(src->f0, a->f0, b->f0);
        break;
    case 9:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        pc = func_002235A0(arg0, arg1, &b, pc);
        dst->f0 = func_0020E570(dst->f0, src->f0, a->f0, b->f0);
        break;
    case 10:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        pc = func_002235A0(arg0, arg1, &b, pc);
        dst->f0 += src->f0;
        if (dst->f0 >= b->f0) {
            dst->f0 -= b->f0 - a->f0;
        }
        if (dst->f0 <= a->f0) {
            dst->f0 += b->f0 - a->f0;
        }
        break;
    case 11:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->f0 = func_0020E740(src->f0, a->f0);
        break;
    case 12:
        k = (f32 *)func_00223250(arg0, arg1, &dst, &src, pc);
        dst->f0 = src->f0 * (k[0] / k[1]) + k[2];
        pc = (u32 *)(k + 3);
        break;
    case 13:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        dst->f0 = sqrtf(src->f0);
        break;
    case 14:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        f = src->f0;
        dst->f0 = D_00522D98[0][(((s32)(182.04445f * f) + 2) >> 2) & 0x3FFF];
        break;
    case 15:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        f = src->f0;
        dst->f0 = D_00522D98[0][((((s32)(182.04445f * f) + 2) >> 2) + 0x1000) & 0x3FFF];
        break;
    case 16:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        ok = 0;
        if (src->i0 > -1 && src->i0 < 1) { /* func_0012F110 wraps __ieee754_acosf: keep to its domain */
            ok = 1;
        }
        dst->f0 = ok ? func_0012F110(src->i0) : 0.0f;
        break;
    case 17:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->f0 = func_0020DBB0(src->f0, a->f0);
        break;
    case 18:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        ip = &dst->i0;
        *ip = src->f0;
        arg1->unk_54 = *ip;
        break;
    case 19:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        dst->f0 = fabsf(src->f0);
        break;
    case 20:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        f = src->f0;
        dst->f0 = f * 0.017453292f;
        break;
    case 21:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        f = src->f0;
        dst->f0 = f * 0.005493164f;
        break;
    default:
        func_00223240(arg0, arg1, pc);
        *(long long *)1 = 0;
        break;
    }
    return pc;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00225E80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_002267A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00227080);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00227AD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00227CD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00228510);

int *func_00229500(int *base, int i)
{
    return &base[i * 2 + 1];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", sys_bp);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00229800);
