#include "common.h"

extern int D_0051AC70[];

extern int D_0051AC78[];

extern int D_0051AE40[];

extern int D_0051AE58[];

extern int D_00522DB0[];

int func_0020F180(void *p, int size);

extern void *memset(void *s, int c, unsigned int n);

int func_0017A820(int *p, int v);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017A710", func_0017A710);

int func_0017A740(int n)
{
    int pool;
    int *e;
    int i;

    D_0051AE58[0] = 0;
    D_0051AE40[0] = 0;
    pool = func_0020F180(D_00522DB0, n * 0xD0);
    D_0051AC70[0] = pool;
    D_0051AC78[0] = 0;
    for (i = 0; i < n; i++) {
        e = (int *)func_0017A820(&pool, 0xD0);
        if (e == 0)
            return i;
        memset(e, 0, 0xD0);
        *e = D_0051AC78[0];
        D_0051AC78[0] = (int)e;
    }
    return i;
}

int func_0017A820(int *p, int v)
{
    int old = *p;
    *p = old + v;
    return old;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017A710", func_0017A830);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017A710", func_0017A9F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017A710", func_0017AC30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017A710", func_0017B990);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017A710", func_0017BA10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017A710", func_0017BAA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017A710", func_0017BC90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017A710", func_0017C830);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017A710", func_0017C950);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017A710", func_0017CB60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017A710", func_0017CC00);
