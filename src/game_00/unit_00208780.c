#include "common.h"
#include "libc.h"

extern s32 D_00522C70[];

extern s32 D_00522C78[];

extern s32 D_00522DB0[];

s32 func_0020F180(s32 *arg0, s32 arg1);

extern int strcmp(const char *a, const char *b);

extern s32 D_00522CA0[];

void func_00208D10(s32 *arg0, s32 arg1);

extern s32 D_00522CA4[];

extern s32 D_00522CA8[];

extern s32 D_00522CAC[];

extern s32 D_00522CB0[];

typedef struct Obj_00208CB0 Obj_00208CB0;

struct Obj_00208CB0 {
    /* 0x00 */ s32 *flags;
    s32 unk_4;
    /* 0x08 */ Obj_00208CB0 *next;
};

extern s32 D_00522D08[];

extern Obj_00208CB0 *D_00522D14[];

s32 *func_002087C0(void);

extern s16 D_00522D00[];

void func_00177580(void * *, void * *);

void func_00179380(s32 *arg0);

typedef struct Obj_00208A00 {
    s32 unk_0;
    s32 unk_4;
    s32 unk_8;
    s32 *unk_C;
    s32 unk_10;
    s32 unk_14;
    u8 unk_18[0x24];
    u8 unk_3C;
} Obj_00208A00;

// registers the table at D_00522DB0 with the size 0x1C8000 and keeps the result
void func_00208780(void)
{
    D_00522C78[0] = 0x1C8000;
    D_00522C70[0] = func_0020F180(D_00522DB0, 0x1C8000);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_002087C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208840);

int func_002088B0(char *a, char *b)
{
    int len;

    len = strlen(b);
    if (len > 0x3F)
        b += len - 0x3F;
    return strcmp(a, b);
}

void func_00208910(char *dst, char *src)
{
    int len;

    len = strlen(src);
    if (len > 0x3F)
        src += len - 0x3F;
    strcpy(dst, src);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208970);

s32 func_00208A00(Obj_00208A00 *arg0)
{
    s32 *p;

    if (arg0 == 0)
        return 0;
    D_00522D00[0] -= 1;
    p = arg0->unk_C;
    arg0->unk_0 = 0;
    arg0->unk_14 = 0;
    arg0->unk_3C = 0;
    arg0->unk_10 = 0;
    func_00179380(&arg0->unk_4);
    func_00177580((void **)D_00522D08[0], (void **)arg0);
    return *p;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208A80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208B50);

s32 *func_00208BF0(void)
{
    s32 *p;
    s32 flags;

    p = func_002087C0();
    if (p == 0)
        return 0;
    flags = *p;
    if (flags & 0x200)
        return 0;
    if (flags & 0x100)
        return p;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208C40);

s32 func_00208CB0(void)
{
    Obj_00208CB0 *node;
    s32 count;

    count = 0;
    if (D_00522D08[0] != 0) {
        node = D_00522D14[0];
        while (node->flags != (s32 *)1) {
            if (!(*node->flags & 0x100))
                count++;
            node = node->next;
        }
    }
    return count;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208D10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208EA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00209020);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00209250);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_002095C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00209600);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_002096A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00209750);

s32 func_00209830(void)
{
    D_00522CA0[0] = 0;
    D_00522CA4[0] = 0;
    D_00522CA8[0] = 0x14;
    D_00522CAC[0] = 0;
    D_00522CB0[0] = 0;
    return 1;
}

s32 func_00209870(s32 arg0)
{
    func_00208D10(D_00522CA0, 0);
    return 0;
}
