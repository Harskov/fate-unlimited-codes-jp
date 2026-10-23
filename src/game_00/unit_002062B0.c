#include "common.h"
#include "eekernel.h"

extern u8 D_00522BD0[];

extern u8 D_00522BD1[];

extern u8 D_00522BD2[];

extern void (*D_00522BC8[])(void);

void func_00206B80(void);

extern u8 D_00522DB0[];

void *memcpy(void *, const void *, unsigned int);

void *func_0020F130();

void func_0020F120();

s32 func_0015AE00();

s32 func_0013A188();

s32 func_0013A7D0();

s32 func_0013B6C0();

void func_0013B038();

void func_0015ACE0();

void func_0013AA00();

int func_002062B0(void)
{
    return 0;
}

int func_002062C0(void)
{
    return 0;
}

int func_002062D0(void)
{
    return -2;
}

int func_002062E0(void)
{
    return 0;
}

void func_002062F0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206300);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206430);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206600);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206870);

int func_00206A10(int count)
{
    int i;

    for (i = 0; i < count; i++) {
        D_00522BC8[0]();
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206A80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206AA0);

void func_00206B50(void)
{
    D_00522BD0[0] = 0;
    D_00522BD1[0] = 1;
    D_00522BD2[0] = 0;
    D_00522BC8[0] = func_00206B80;
}

void func_00206B80(void)
{
    DelayThread(0x40D8);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206B90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206C20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206C90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206D20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206DC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206ED0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206F70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00207010);

s32 func_00207090(s32 arg0, void *arg1, s32 arg2)
{
    s32 v;
    s32 h;
    s32 n;
    void *buf;

    v = func_0015AE00(2, arg0);
    if (v == -1) {
        h = func_0013A188(arg0, 0);
    } else {
        h = func_0013A7D0(2, v);
    }
    n = func_0013B6C0(h);
    if ((n << 11) != arg2) {
        buf = func_0020F130(D_00522DB0, n << 11);
        func_0013B038(h, n, buf);
        func_0015ACE0(h, 1);
        func_0013AA00(h);
        memcpy(arg1, buf, arg2);
        func_0020F120(D_00522DB0, buf);
    } else {
        func_0013B038(h, n, arg1);
        func_0015ACE0(h, 1);
        func_0013AA00(h);
    }
    return arg2;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_002071B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00207250);
