#include "common.h"
#include "libc.h"
#include "types.h"

int func_0010C5E8(int a, int b, int c);

extern s32 D_00529900[];

void func_00255450();

void sceSdRemoteInit(void);

void sceSdRemoteInit();

extern s32 D_003DFB90[];

extern s32 D_00529950[];

void func_00254FD0();

extern s32 D_00529910[];

extern s32 D_005299D0[];

extern s32 D_00529D90[];

extern s32 D_00529D94[];

void func_0015B6E0();

void func_00253B70();

void func_00254B30(int a, int b);

void func_00254C20(int a, f32 b);

void func_002554A0();

void func_00255520(void);

void func_00255550();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00254D30", func_00254D30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00254D30", func_00254DE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00254D30", func_00254E30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00254D30", func_00254E80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00254D30", func_00254F20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00254D30", func_00254FD0);

void func_00255040(void)
{
    s32 i;
    s32 *p;

    p = D_00529950;
    for (i = 0; i < 8; i++) {
        func_00254FD0(p);
        p += 4;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00254D30", func_00255090);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00254D30", func_00255290);

s32 func_00255430(s32 arg0)
{
    return D_003DFB90[arg0];
}

void func_00255450(int *result, int arg)
{
    while ((*result = func_0010C5E8(arg, 0, 0)) < 0) {
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00254D30", func_002554A0);

void func_00255520(void)
{
    func_00255290(0, 2);
    func_00255290(1, 2);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00254D30", func_00255550);

s32 func_00255590(void)
{
    return D_00529900[0];
}

void func_002555A0(void)
{
    D_00529900[0] = 1;
    memset(D_005299D0, 0, 0x3B8);
    memset(D_00529950, 0, 0x80);
    func_002554A0();
    func_00255550(0);
    func_0015B6E0();
    func_00255520();
    func_00253B70();
    memset(D_00529D90, 0, 0x20);
    D_00529D90[0] = 1;
    D_00529D94[0] = 0;
    memset(D_00529910, 0, 8);
    func_00254C20(5, 1.0f);
    func_00254C20(0, 1.0f);
    func_00254C20(1, 1.0f);
    func_00254C20(2, 1.0f);
    func_00254C20(3, 1.0f);
    func_00254B30(0, 4);
    func_00254B30(1, 4);
    func_00254B30(2, 4);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00254D30", func_002556C0);
