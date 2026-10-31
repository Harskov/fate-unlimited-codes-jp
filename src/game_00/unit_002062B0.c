#include "common.h"
#include "libc.h"
#include "eekernel.h"
#include "game_00/unit_0015AB90.h"

extern u8 gMode[];

extern u8 D_00522BD1[];

extern u8 D_00522BD2[];

extern void (*D_00522BC8[])(void);

void func_00206B80(void);

extern u8 D_00522DB0[];

void *func_0020F130();

void func_0020F120();

s32 func_0015AE00();

s32 func_0013A188();

s32 func_0013A7D0();

s32 func_0013B6C0();

void func_0013B038();

void func_0013AA00();

int func_00206A10(int count);

s32 func_00206A80();

s32 sceCdDiskReady(s32 mode);

s32 sceCdRead(u32 lbn, u32 sectors, void *buf, void *mode);

s32 sceCdStandby(void);

s32 sceCdSync(s32 mode);

s32 sceCdGetError(void);

extern s32 D_00522C40[];

s32 func_00206430();

s32 func_00206B90();

s32 func_00207010();

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

/* Reads from the disc with sceCdRead until a read completes without error,
   spinning the drive back up (sceCdStandby) after a failed request or an error;
   returns the sector count from func_00206A80 in bytes (2048 per sector). */
s32 func_00206870(s32 arg0, s32 arg1, s32 arg2)
{
    s32 n;

    n = func_00206A80(arg1);
    for (;;) {
        sceCdDiskReady(0);
        if (sceCdRead(arg0, n, (void *)arg2, gMode) == 0) {
            while (!sceCdStandby()) {
                func_00206A10(1);
            }
            while (sceCdSync(1)) {
                func_00206A10(1);
            }
            continue;
        }
        while (sceCdSync(1)) {
            func_00206A10(1);
        }
        if (sceCdGetError() == 0) {
            break;
        }
        while (!sceCdStandby()) {
            func_00206A10(1);
        }
        while (sceCdSync(1)) {
            func_00206A10(1);
        }
    }
    return n << 11;
}

int func_00206A10(int count)
{
    int i;

    for (i = 0; i < count; i++) {
        D_00522BC8[0]();
    }
    return 0;
}

s32 func_00206A80(u32 arg0)
{
    s32 sectors;

    sectors = arg0 >> 11;
    if (arg0 & 0x7FF) {
        sectors++;
    }
    return sectors;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206AA0);

void func_00206B50(void)
{
    gMode[0] = 0;
    D_00522BD1[0] = 1;
    D_00522BD2[0] = 0;
    D_00522BC8[0] = func_00206B80;
}

void func_00206B80(void)
{
    DelayThread(0x40D8);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206B90);

s32 func_00206C20(void)
{
    switch (D_00522C40[0]) {
    case 3:
        return func_00207010();
    case 0:
        return func_00206B90();
    case 1:
        return func_00206430();
    default:
        return 0;
    }
}

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
