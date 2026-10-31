#include "common.h"
#include "game_00/unit_002076B0.h"

typedef struct Obj_00225730 {
    /* 0x00 */ u8 unk_0[0x4C];
    /* 0x4C */ s32 unk_4C;
    /* 0x50 */ u8 unk_50[0x4];
    /* 0x54 */ s32 unk_54;
} Obj_00225730;

/* an operand slot: the opcodes read and write it as a float or as an integer */
typedef union Sub_00225730 {
    /* 0x00 */ f32 f0;
    /* 0x00 */ s32 i0;
} Sub_00225730;

extern char D_00503548[];

extern char D_00503550[];

extern char D_00503558[];

extern char D_00503560[];

extern char D_00503590[];

extern char D_005035C0[];

extern char D_005035E0[];

extern char D_00503610[];

extern char D_00503630[];

extern s32 D_00522DB0[];

extern s32 D_00522DD0[];

s32 func_001CDDB0(s32);

void func_00205120(s32, s32, s32, const char *fmt, ...);

void func_002051C0(s32, s32, const char *fmt, ...);

void func_00205250(s32, const char *fmt, ...);

void func_002052F0(const char *fmt, ...);

void func_00205760(s32, s32);

void func_002057B0(s32, s32, s32, s32);

void func_002057D0(s32, s32, s32);

void func_00205970(s32, s32);

s32 func_00207640(void);

s32 func_00207690(void);

s32 func_002076A0(void);

s32 func_00207F50(void);

s32 func_00207F70(void);

u32 func_0020ED50(s32 *);

u32 func_0020EDE0(s32 *);

u32 func_0020EEE0(s32 *);

u32 func_0020EEF0(s32 *);

void func_00223240();

u32 *func_00223250(void *arg0, Obj_00225730 *arg1, Sub_00225730 **dst, Sub_00225730 **src, u32 *pc);

u32 *func_002235A0(void *arg0, Obj_00225730 *arg1, Sub_00225730 **out, u32 *pc);

s32 func_00254D30(void);

typedef struct Obj_00249A20 {
    u8 unk_0[2];
    u8 unk_2;
} Obj_00249A20;

typedef struct Sub_00249A90 {
    /* 0x00 */ u8 unk_0;
    /* 0x01 */ u8 unk_1;
    /* 0x02 */ u8 unk_2;
    /* 0x03 */ u8 unk_3;
} Sub_00249A90;

typedef struct Obj_00249A90 {
    /* 0x00 */ u8 unk_0[0x4];
    /* 0x04 */ Sub_00249A90 unk_4;
} Obj_00249A90;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002468D0", func_002468D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002468D0", func_002469B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002468D0", func_00247280);

/* One opcode of a text command stream; bits 8-15 of the opcode word select the form. Ops 4-7 print an inline
   string or one operand as "%d", "%x" or "%f", op 8 the memory report (OSMEM, SYSMEM, SOUND, FDB, FPACK, in KB),
   op 9 a string through "%s". Returns the address of the next opcode. */
u32 *func_002475D0(void *arg0, Obj_00225730 *arg1, u32 *pc)
{
    Sub_00225730 *a;
    Sub_00225730 *b;
    Sub_00225730 *c;
    Sub_00225730 *f;
    Sub_00225730 *g;
    u32 *p;
    u32 w;
    s32 slot;
    s32 word;
    f32 fa;
    f32 fb;
    s16 *pair;

    w = pc[0];
    switch ((w >> 8) & 0xFF) {
    case 0:
        arg1->unk_4C = 0;
        arg1->unk_54 = 0;
        pc += 1;
        break;
    case 1:
        switch ((w >> 16) & 0xFF) {
        case 0:
            func_00205970((s16)pc[1], (s16)(pc[1] >> 16));
            pc += 2;
            break;
        case 1:
            if ((w >> 24) & 0xFF) {
                func_002057D0(0, 0, 1);
                pc += 1;
            } else {
                func_002057D0((s16)pc[1], (s16)(pc[1] >> 16), 0);
                pc += 2;
            }
            break;
        }
        break;
    case 2:
        func_002057B0(pc[1] & 0xFF, (pc[1] >> 8) & 0xFF, (pc[1] >> 16) & 0xFF, (pc[1] >> 24) & 0xFF);
        pc += 2;
        break;
    case 3:
        pc = func_00223250(arg0, arg1, &f, &g, pc);
        func_00205760((s32)f->f0, (s32)g->f0);
        break;
    case 4:
        switch ((w >> 16) & 0xFF) {
        case 0:
            pc += 1;
            func_002052F0((char *)pc);
            /* the string is stored inline: step over whole words up to the one holding its zero byte */
            while ((*pc & 0xFF000000) && (*pc & 0xFF0000) && (*pc & 0xFF00) && (*pc & 0xFF)) {
                pc++;
            }
            pc++;
            break;
        case 1:
            pc = func_002235A0(arg0, arg1, &a, pc);
            func_002052F0(D_00503548, a->i0);
            break;
        case 2:
            pc = func_002235A0(arg0, arg1, &a, pc);
            func_002052F0(D_00503550, a->i0);
            break;
        case 3:
            pc = func_002235A0(arg0, arg1, &f, pc);
            func_002052F0(D_00503558, f->f0);
            break;
        }
        break;
    case 5:
        switch ((w >> 16) & 0xFF) {
        case 0:
            word = pc[1];
            pc += 2;
            func_00205250(word, (char *)pc);
            while ((*pc & 0xFF000000) && (*pc & 0xFF0000) && (*pc & 0xFF00) && (*pc & 0xFF)) {
                pc++;
            }
            pc++;
            break;
        case 1:
            p = func_002235A0(arg0, arg1, &a, pc);
            word = p[0];
            func_00205250(word, D_00503548, a->i0);
            pc = p + 1;
            break;
        case 2:
            p = func_002235A0(arg0, arg1, &a, pc);
            word = p[0];
            func_00205250(word, D_00503550, a->i0);
            pc = p + 1;
            break;
        case 3:
            p = func_002235A0(arg0, arg1, &f, pc);
            word = p[0];
            func_00205250(word, D_00503558, f->f0);
            pc = p + 1;
            break;
        }
        break;
    case 6:
        switch ((w >> 16) & 0xFF) {
        case 0:
            fa = ((f32 *)pc)[1];
            fb = ((f32 *)pc)[2];
            pc += 3;
            func_002051C0((s32)fa, (s32)fb, (char *)pc);
            while ((*pc & 0xFF000000) && (*pc & 0xFF0000) && (*pc & 0xFF00) && (*pc & 0xFF)) {
                pc++;
            }
            pc++;
            break;
        case 1:
            p = func_002235A0(arg0, arg1, &a, pc);
            fa = ((f32 *)p)[0];
            fb = ((f32 *)p)[1];
            func_002051C0((s32)fa, (s32)fb, D_00503548, a->i0);
            pc = p + 2;
            break;
        case 2:
            p = func_002235A0(arg0, arg1, &a, pc);
            fa = ((f32 *)p)[0];
            fb = ((f32 *)p)[1];
            func_002051C0((s32)fa, (s32)fb, D_00503550, a->i0);
            pc = p + 2;
            break;
        case 3:
            p = func_002235A0(arg0, arg1, &f, pc);
            fa = ((f32 *)p)[0];
            fb = ((f32 *)p)[1];
            func_002051C0((s32)fa, (s32)fb, D_00503558, f->f0);
            pc = p + 2;
            break;
        }
        break;
    case 7:
        switch ((w >> 16) & 0xFF) {
        case 0:
            word = pc[1];
            fa = ((f32 *)pc)[2];
            fb = ((f32 *)pc)[3];
            pc += 4;
            func_00205120((s32)fa, (s32)fb, word, (char *)pc);
            while ((*pc & 0xFF000000) && (*pc & 0xFF0000) && (*pc & 0xFF00) && (*pc & 0xFF)) {
                pc++;
            }
            pc++;
            break;
        case 1:
            p = func_002235A0(arg0, arg1, &a, pc);
            word = p[0];
            fa = ((f32 *)p)[1];
            fb = ((f32 *)p)[2];
            func_00205120((s32)fa, (s32)fb, word, D_00503548, a->i0);
            pc = p + 3;
            break;
        case 2:
            p = func_002235A0(arg0, arg1, &a, pc);
            word = p[0];
            fa = ((f32 *)p)[1];
            fb = ((f32 *)p)[2];
            func_00205120((s32)fa, (s32)fb, word, D_00503550, a->i0);
            pc = p + 3;
            break;
        case 3:
            p = func_002235A0(arg0, arg1, &f, pc);
            word = p[0];
            fa = ((f32 *)p)[1];
            fb = ((f32 *)p)[2];
            func_00205120((s32)fa, (s32)fb, word, D_00503558, f->f0);
            pc = p + 3;
            break;
        }
        break;
    case 8:
        pc = func_00223250(arg0, arg1, &a, &b, pc);
        pc = func_002235A0(arg0, arg1, &c, pc);
        pair = func_00207F80();
        slot = c->i0;
        func_002057D0(a->i0, b->i0, 0);
        func_00205250(slot, D_00503560, func_0020EEF0(D_00522DD0) >> 10, func_0020EEE0(D_00522DD0) >> 10,
                      func_0020ED50(D_00522DD0), func_0020EDE0(D_00522DD0));
        func_00205250(slot, D_00503590, func_0020EEF0(D_00522DB0) >> 10, func_0020EEE0(D_00522DB0) >> 10,
                      func_0020ED50(D_00522DB0), func_0020EDE0(D_00522DB0));
        /* SOUND: 0x1E0000 bytes less func_00254D30()'s count, against 0x780 KB, which is 0x1E0000 bytes */
        func_00205250(slot, D_005035C0, (0x1E0000 - func_00254D30()) / 1024, 0x780);
        func_00205250(slot, D_005035E0, pair[0], pair[1], (f32)func_00207F50() / 1024.0f, (f32)func_00207F70() / 1024.0f);
        func_00205250(slot, D_00503610, func_00207690(), func_002076A0(), (f32)func_00207640() / 1024.0f);
        func_002057D0(0, 0, 1);
        break;
    case 9:
        pc = func_00223250(arg0, arg1, &a, &b, pc);
        func_00205250(a->i0, D_00503630, func_001CDDB0(b->i0));
        break;
    default:
        func_00223240(arg0, arg1, pc);
        *(long long *)1 = 0;
        break;
    }
    return pc;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002468D0", func_00247F70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002468D0", func_00248D70);

int func_00249140(int a0, int a1, int a2)
{
    return a2;
}

int func_00249150(int arg0, int arg1, int arg2)
{
    *(long long *)1 = 0;
    return arg2;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002468D0", func_00249160);

Obj_00249A20 *func_00249A00(Obj_00249A20 *a0, s32 a1)
{
    a0->unk_2 = a0->unk_2 & ~a1;
    return a0;
}

Obj_00249A20 *func_00249A20(Obj_00249A20 *a0, s32 a1)
{
    a0->unk_2 = a0->unk_2 | a1;
    return a0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002468D0", func_00249A40);

Obj_00249A90 *func_00249A90(Obj_00249A90 *arg0, Sub_00249A90 *arg1)
{
    arg0->unk_4 = *arg1;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002468D0", func_00249AC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002468D0", func_00249C70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002468D0", func_00249D60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002468D0", func_00249EC0);
