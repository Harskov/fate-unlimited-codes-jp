#include "common.h"

extern s32 D_003D7A90[];

extern s16 D_0051FDE8[];

extern s32 D_00522DB0[];

void *func_0020F180();

typedef struct Obj_00200650 {
    u8 unk_0[0x34];
    /* 0x34 */ s32 counter;
} Obj_00200650;

void func_00200690();

extern int strlen(const char *s);

#include "libc.h"
#include "game_00/unit_001FE660.h"

extern s32 D_0051FDD8[];

extern char *strchr(const char *s, int c);

extern char *strcat(char *dst, const char *src);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FE660);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FE7F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FE8A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FE9A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FEA40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FEB20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FEC10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FED00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FEDF0);

s32 func_001FEEE0(void)
{
    return D_003D7A90[0];
}

s32 func_001FEEF0(s32 arg0)
{
    D_003D7A90[0] = arg0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FEF00);

void *func_001FEFB0(s32 arg0, s32 arg1)
{
    return func_0020F180(D_00522DB0, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FEFC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FF000);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FFDC0);

void func_002002E0(char *dst, char *src, char *ext)
{
    char buf[0x100];
    char *p;

    strcpy(buf, src);
    p = strchr(buf, '.');
    if (p != 0 && *p == '.')
        *p = 0;
    if (ext != 0)
        strcat(buf, ext);
    strcpy(dst, buf);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200360);

void func_002003C0(char *dst, char *src)
{
    int len;

    len = strlen(src);
    if (len > 0x1F)
        src += len - 0x1F;
    strcpy(dst, src);
}

s16 func_00200420(void)
{
    return D_0051FDE8[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200430);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_002004B0);

s32 func_00200550(s32 arg0, s32 arg1)
{
    if (arg1 == 0)
        D_0051FDD8[0] = arg0;
    return D_0051FDD8[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200580);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200630);

void func_00200650(Obj_00200650 *arg0)
{
    arg0->counter--;
    if (arg0->counter <= 0)
        func_00200690();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200690);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_002009A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200A90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200BB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200DF0);

int func_00200E30(int arg0)
{
    return arg0 & 0x0E0F7FFF;
}
