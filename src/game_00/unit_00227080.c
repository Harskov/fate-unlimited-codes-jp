#include "common.h"

#include "game_00/unit_0020D0D0.h"

#include "types.h"
#include "game_00/unit_002240B0.h"

extern char D_005022E8[];

extern char D_005023F8[];

extern char D_00502400[];

extern int sprintf(char *, const char *, ...);

double pow(double, double);

s32 func_001A27C0();

s32 func_0020E4A0(s32, s32, s32, s32);

s32 func_0020E5F0(s32, s32, s32, s32);

s32 func_0020E850(s32, s32);

// one integer opcode of the script at pc, chosen by bits 8-15 of its first word; returns the next opcode.
// Opcodes 10 and 11 branch through func_001A27C0 (the script's base plus the offset in the next word);
// 0.005493164f is 360 / 0x10000 and 182.04445f is 0x10000 / 360, as in func_00225730
u32 *func_00227080(Obj_00225720 *arg0, Obj_00225730 *arg1, u32 *pc)
{
    Sub_00225730 *dst;
    Sub_00225730 *src;
    Sub_00225730 *a;
    Sub_00225730 *b;
    char buf[256];

    switch ((*pc >> 8) & 0xFF) {
    case 0:
        pc = func_002235A0(arg0, arg1, &dst, pc);
        if (arg0->unk_C->unk_8 & 0x80) {
            sprintf(buf, D_00502400, dst->i0);
        } else if (arg0->unk_C->unk_8 & 0x100) {
            sprintf(buf, D_005023F8, dst->i0);
        } else {
            sprintf(buf, D_005022E8, dst->i0, dst->i0);
        }
        func_00223860(arg0, buf);
        break;
    case 1:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        dst->i0 = src->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 2:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        arg1->unk_54 = dst->i0 - src->i0;
        break;
    case 3:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        arg1->unk_54 = dst->i0 & src->i0;
        break;
    case 4:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        dst->i0 = ~src->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 5:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        dst->i0 = -src->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 6:
        pc = func_002235A0(arg0, arg1, &dst, pc);
        dst->i0++;
        arg1->unk_54 = dst->i0;
        break;
    case 7:
        pc = func_002235A0(arg0, arg1, &dst, pc);
        dst->i0--;
        arg1->unk_54 = dst->i0;
        break;
    case 8:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        dst->f0 = src->i0;
        break;
    case 9:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        dst->h0 = src->i0;
        break;
    case 10:
        pc = func_002235A0(arg0, arg1, &dst, pc);
        if (dst->i0 == 0) {
            pc = (u32 *)func_001A27C0(arg0, *pc);
        } else {
            pc++;
        }
        break;
    case 11:
        pc = func_002235A0(arg0, arg1, &dst, pc);
        if (dst->i0 != 0) {
            pc = (u32 *)func_001A27C0(arg0, *pc);
        } else {
            pc++;
        }
        break;
    case 12:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->i0 = src->i0 + a->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 13:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->i0 = src->i0 - a->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 14:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->i0 = src->i0 * a->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 15:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->i0 = src->i0 / a->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 16:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->i0 = src->i0 % a->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 17:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->i0 = src->i0 << a->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 18:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->i0 = src->i0 >> a->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 19:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->i0 = pow((f32)src->i0, (f32)a->i0);
        arg1->unk_54 = dst->i0;
        break;
    case 20:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        dst->i0 &= src->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 21:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->i0 = src->i0 & a->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 22:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        dst->i0 |= src->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 23:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->i0 = src->i0 | a->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 24:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        dst->i0 &= ~src->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 25:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->i0 = src->i0 & ~a->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 26:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        dst->i0 ^= src->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 27:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->i0 = src->i0 ^ a->i0;
        arg1->unk_54 = dst->i0;
        break;
    case 28:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        dst->i0 = func_0020E850(src->i0, a->i0);
        arg1->unk_54 = dst->i0;
        break;
    case 29:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        pc = func_002235A0(arg0, arg1, &b, pc);
        dst->i0 = func_0020E5F0(dst->i0, src->i0, a->i0, b->i0);
        arg1->unk_54 = dst->i0;
        break;
    case 30:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        pc = func_002235A0(arg0, arg1, &a, pc);
        pc = func_002235A0(arg0, arg1, &b, pc);
        dst->i0 = func_0020E4A0(dst->i0, src->i0, a->i0, b->i0);
        arg1->unk_54 = dst->i0;
        break;
    case 31:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        dst->i0 = (s32)(0.005493164f * src->i0);
        arg1->unk_54 = dst->i0;
        break;
    case 32:
        pc = func_00223250(arg0, arg1, &dst, &src, pc);
        dst->i0 = (s32)(182.04445f * src->i0);
        arg1->unk_54 = dst->i0;
        break;
    default:
        func_00223240(arg0, arg1, pc);
        *(long long *)1 = 0;
        break;
    }
    return pc;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00227080", func_00227AD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00227080", func_00227CD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00227080", func_00228510);

int *func_00229500(int *base, int i)
{
    return &base[i * 2 + 1];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00227080", sys_bp);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00227080", func_00229800);
