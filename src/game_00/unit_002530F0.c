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

extern s32 D_003DF8F0[];

extern s32 D_003DF8F8[];

extern s32 D_00529538[];

extern Obj_00253500 D_00529660;

extern Obj_00253500 D_00529690;

void func_002534A0();

int CreateSema(s32 *param);

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
    if (D_003DF8F0[0] < 0) {
        sema = CreateSema(param);
        if (sema <= 0) {
            return -1;
        }
        D_003DF8F0[0] = sema;
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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253610);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253690);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253740);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_002537F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253870);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253900);
