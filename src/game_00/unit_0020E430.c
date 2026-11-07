#include "common.h"

extern s32 D_00522D80[];

void func_00123470();

s32 func_0011E260(s32 arg0);

extern f32 D_00523D50[][4];

extern s32 D_00522DB0[];

extern f32 *D_00522D98[];

// !FAKE: both tables are read again after every store and after the value is computed; the plain pointers share one load, volatile forces the reloads
extern u16 *volatile D_00522D90[];

extern u16 *volatile D_00522D88[];

void func_0020D070(f32 (*)[4]);

void *func_0020F180(void *pool, s32 size);

f32 func_0012F110(f32);

f32 sinf(f32);

f32 atanf(f32);

s32 sceCdReadClock(u8 *clock);

s32 func_0020A440(void);

s32 func_0020E430(s32 a, s32 b, f32 t)
{
    f32 fa = (f32)a;
    f32 fb = (f32)b;
    return (s32)(fa - t * (fa - fb));
}

f32 func_0020E470(f32 arg0, f32 arg1, f32 arg2, f32 arg3)
{
    arg0 = arg0 + arg1;
    if (arg0 < arg2) {
        arg0 = arg3;
    }
    if (arg0 > arg3) {
        arg0 = arg2;
    }
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E4A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E520);

f32 func_0020E570(f32 arg0, f32 arg1, f32 arg2, f32 arg3)
{
    arg0 += arg1;
    if (arg0 < arg2)
        arg0 = arg2;
    if (!(arg0 <= arg3))
        arg0 = arg3;
    return arg0;
}

s32 func_0020E5A0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 clamped;

    clamped = 0;
    *arg0 += arg1;
    if (*arg0 < arg2) {
        *arg0 = arg2;
        clamped = 1;
    }
    if (*arg0 > arg3) {
        *arg0 = arg3;
        clamped = 1;
    }
    return clamped;
}

s32 func_0020E5F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    arg0 += arg1;
    if (arg0 < arg2)
        arg0 = arg2;
    if (arg3 < arg0)
        arg0 = arg3;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E620);

s32 func_0020E6B0(s32 arg0)
{
    s32 rem;

    arg0 %= 360;
    if (func_0011E260(arg0) > 180) {
        rem = arg0 % 180;
        if (arg0 >= 0)
            arg0 = rem - 180;
        else
            arg0 = rem + 180;
    }
    return arg0;
}

void func_0020E720(s32 arg0)
{
    if (arg0 == 0)
        arg0 += 1;
    D_00522D80[0] = arg0;
    func_00123470();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E740);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E7D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E850);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E8C0);

// builds the sine, arccosine and arctangent tables, then passes func_0020E720 a sum of the disc clock's bytes.
// 0.017453292f is pi / 180; 10430.378f is 65536 / (2 * pi), radians to 16-bit angle units.
void func_0020E920(void)
{
    u8 clock[8];
    s32 i;

    func_0020D070(D_00523D50);
    D_00522D98[0] = func_0020F180(D_00522DB0, 0x10000);
    D_00522D90[0] = func_0020F180(D_00522DB0, 0x8002);
    D_00522D88[0] = func_0020F180(D_00522DB0, 0x1002);

    for (i = 0; i < 0x4000; i++) {
        D_00522D98[0][i] = sinf(0.017453292f * (360.0f * i / 16384.0f));
    }
    for (i = 0; i < 0x4000; i++) {
        D_00522D90[0][i] = (s32)(10430.378f * func_0012F110((i * 2) / 16384.0f - 1.0f));
    }
    D_00522D90[0][0x3FFF] = 0x5B;
    D_00522D90[0][0x4000] = 0;
    for (i = 0; i < 0x800; i++) {
        D_00522D88[0][i] = (s32)(10430.378f * atanf(i / 2048.0f));
    }
    D_00522D88[0][0x800] = 0x2000;

    sceCdReadClock(clock);
    func_0020E720(clock[1] + clock[2] + clock[3] + clock[5] + clock[6] + clock[7] + func_0020A440());
}

void func_0020EB50(void)
{
}
