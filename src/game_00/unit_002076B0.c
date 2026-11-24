#include "common.h"
#include "types.h"

extern s32 D_00522C78[];

void func_00207CE0(void);

extern s16 D_00522C80[];

extern char *D_003D7BB0[];

#include "libc.h"
#include "game_00/unit_002076B0.h"

char *strstr(const char *, const char *);

typedef struct Obj_00207E60 {
    s32 unk_0;
    s32 unk_4;
    u8 unk_8;
} Obj_00207E60;

typedef struct Obj_002084D0 {
    u8 unk_0[0x10];
    s32 unk_10;
} Obj_002084D0;

extern s32 D_00522C70[];

extern int strcmp(const char *a, const char *b);

extern s32 D_00522C84[];

typedef struct Obj_002077F0 {
    u8 unk_0[4];
    s32 unk_4;
    u8 unk_8[0x80];
} Obj_002077F0;

extern s32 D_00522C48[];

extern Obj_002077F0 *D_00522C60[];

typedef struct Obj_00208200 {
    u8 unk_0[0x10];
    s32 unk_10;
    s32 unk_14;
} Obj_00208200;

extern Obj_00208200 *func_00208200(void);

typedef struct Obj_00207830 {
    u8 unk_0[0x2C];
    s32 unk_2C;
} Obj_00207830;

extern Obj_00207830 *func_00207830(void);

s32 func_00208700(void *arg0, s32 arg1, s32 arg2);

extern void **D_00522C8C[];

void func_00177580(void * *, void * *);

void func_00179380(void *);

typedef struct Obj_002084F0 {
    s32 unk_0;
    u8 unk_4[8];
    s32 *unk_C;
    s32 unk_10;
    u8 unk_14[8];
    u8 unk_1C;
} Obj_002084F0;

s32 func_002076B0(char *arg0)
{
    char *found = strstr(arg0, D_003D7BB0[0]);
    if (found != 0 && found == arg0) {
        return 1;
    }
    return 0;
}

char *func_00207700(char *dst)
{
    if (dst != 0) {
        strcpy(dst, D_003D7BB0[0]);
    }
    return D_003D7BB0[0];
}

int func_00207730(char *a, char *b)
{
    int len;

    len = strlen(b);
    if (len > 0x1F)
        b += len - 0x1F;
    return strcmp(a, b);
}

void func_00207790(char *dst, char *src)
{
    int len;

    len = strlen(src);
    if (len > 0x7F)
        src += len - 0x7F;
    strcpy(dst, src);
}

int func_002077F0(void)
{
    int i;
    int n;
    Obj_002077F0 *p;

    i = 0;
    n = D_00522C48[0];
    if (0 < n) {
        p = D_00522C60[0];
        do {
            if (p->unk_4 == 0)
                break;
            i++;
            p++;
        } while (i < n);
    }
    return i;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207830);

s32 func_00207940(void)
{
    Obj_00207830 *p;

    p = func_00207830();
    if (p != 0)
        return (p->unk_2C + 0x1F) & ~0x1F;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207980);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207AC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207B70);

void func_00207CD0(void)
{
    func_00207CE0();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207CE0);

void func_00207E60(Obj_00207E60 *arg0)
{
    arg0->unk_0 = 0;
    arg0->unk_4 = 0;
    arg0->unk_8 = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207E70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207F00);

s32 func_00207F50(void)
{
    return D_00522C78[0] - D_00522C84[0];
}

s32 func_00207F70(void)
{
    return D_00522C78[0];
}

s16 *func_00207F80(void)
{
    return D_00522C80;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207F90);

s32 func_00208120(s32 arg0, void *arg1, s32 arg2, s32 arg3)
{
    Obj_00208200 *p = func_00208200();
    if (p != 0) {
        func_00208700(arg1, p->unk_10 + arg2, arg3);
        return arg3;
    }
    return 0;
}

s32 func_00208180(s32 arg0, void *arg1)
{
    Obj_00208200 *p = func_00208200();
    if (p != 0) {
        func_00208700(arg1, p->unk_10, p->unk_14);
        return p->unk_14;
    }
    return 0;
}

s32 func_002081D0(void)
{
    Obj_00208200 *p = func_00208200();
    if (p != 0)
        return p->unk_14;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208200);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208280);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208300);

int func_00208410(char *arg0, char *arg1)
{
    int len;

    len = strlen(arg1);
    if (len > 0x1F)
        arg1 += len - 0x1F;
    return strcmp(arg0, arg1);
}

void func_00208470(char *dst, char *src)
{
    int len;

    len = strlen(src);
    if (len > 0x1F)
        src += len - 0x1F;
    strcpy(dst, src);
}

s32 func_002084D0(Obj_002084D0 *arg0)
{
    return arg0->unk_10 + D_00522C70[0];
}

s32 func_002084F0(Obj_002084F0 *arg0)
{
    s32 *p;

    if (arg0 != 0) {
        D_00522C80[0] -= 1;
        p = arg0->unk_C;
        arg0->unk_0 = 0;
        arg0->unk_1C = 0;
        arg0->unk_10 = 0;
        func_00179380(arg0->unk_4);
        func_00177580(D_00522C8C[0], (void **)arg0);
        return *p;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208570);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208660);

s32 func_00208700(void *arg0, s32 arg1, s32 arg2)
{
    memcpy(arg0, (void *)(D_00522C70[0] + arg1), arg2);
    return arg2;
}

s32 func_00208740(s32 arg0, void *arg1, s32 arg2)
{
    memcpy((void *)(D_00522C70[0] + arg0), arg1, arg2);
    return arg2;
}
