#include "common.h"
#include "types.h"

int iWakeupThread(int thid);

typedef struct Obj_00253500 {
    u8 pad_0[0x24];
    int unk_24;
} Obj_00253500;

int sceSifBindRpc(Obj_00253500 *client, int id, int mode);

int func_00253590(int arg);

int func_00253500(Obj_00253500 *arg0, int arg1);

extern s32 gSemaId[];

extern s32 D_003DF8F8[];

extern s32 D_00529538[];

extern Obj_00253500 D_00529660;

extern Obj_00253500 D_00529690;

void func_002534A0();

int CreateSema(s32 *param);

typedef struct Obj_00253610 {
    u8 pad_0[0xE];
    s16 unk_E;
} Obj_00253610;

int func_00255590();

f32 func_0020E570(f32 a, f32 b, f32 c, f32 d);

f32 func_00254A20(int a, f32 b);

int func_0020E430(int a, int b, f32 c);

typedef struct Obj_002537F0 {
    u16 unk_0;
    u8 pad_2[8];
    s16 unk_A;
} Obj_002537F0;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_002530F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253160);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_002531C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_002532C0);

int func_002533B0(void)
{
    s32 param[6];
    int sema;

    if (D_00529538[0] != 0) {
        return 0;
    }
    func_002534A0();
    if (func_00253500(&D_00529690, 0x54534400) < 0) {
        return -1;
    }
    if (func_00253500(&D_00529660, 0x54534401) < 0) {
        return -1;
    }
    param[5] = 0;
    param[2] = 1;
    param[1] = 1;
    if (gSemaId[0] < 0) {
        sema = CreateSema(param);
        if (sema <= 0) {
            return -1;
        }
        gSemaId[0] = sema;
    }
    if (D_003DF8F8[0] < 0) {
        sema = CreateSema(param);
        if (sema <= 0) {
            return -1;
        }
        D_003DF8F8[0] = sema;
    }
    D_00529538[0] = 1;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_002534A0);

int func_00253500(Obj_00253500 *arg0, int arg1)
{
    int i = 0x400;

    do {
        if (sceSifBindRpc(arg0, arg1, 0) < 0) {
            return -1;
        }
        if (arg0->unk_24 != 0) {
            break;
        }
        if (func_00253590(1) < 0) {
            return -1;
        }
    } while (--i > 0);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253590);

/* probably an alarm handler: func_00253590 passes its address to SetAlarm, and it wakes the thread passed as arg */
void func_002535E0(int id, u16 time, void *arg)
{
    iWakeupThread((int)arg);
    asm {
        sync
        ei
    }
}

Obj_00253610 *func_00253610(Obj_00253610 *arg0, f32 arg1)
{
    if (func_00255590() == 0) {
        return 0;
    }
    if (arg0 == 0) {
        return 0;
    }
    arg0->unk_E = (s16)(8191.0f * func_0020E570(arg1, 0.0f, 0.0f, 2.0f));
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253690);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253740);

Obj_002537F0 *func_002537F0(Obj_002537F0 *arg0, f32 arg1)
{
    if (func_00255590() == 0) {
        return 0;
    }
    if (arg0 == 0) {
        return 0;
    }
    arg0->unk_A = func_0020E430(0, 0x7F, func_00254A20(arg0->unk_0, func_0020E570(arg1, 0.0f, 0.0f, 1.0f)));
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253870);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253900);
