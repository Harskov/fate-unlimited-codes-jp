#include "common.h"

void iSignalSema(int semid);

typedef struct Obj_00529560 {
    s32 unk_0;
    s32 unk_4;
} Obj_00529560;

int PollSema(int semid);

int WaitSema(int semid);

int SignalSema(int semid);

void func_00252B70(int semid);

extern s32 gSemaId[];

extern s32 D_00529540[];

extern s32 D_00529550[];

extern Obj_00529560 D_00529560[];

extern s32 D_00529690[];

extern s32 D_00529700[];

int func_00252470(Obj_00529560 *arg0);

int func_00255590(void);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00252470", func_00252470);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00252470", func_002526C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00252470", func_00252750);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00252470", func_002527E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00252470", func_00252940);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00252470", func_00252A20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00252470", func_00252A60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00252470", func_00252AD0);

void func_00252B70(int semid)
{
    iSignalSema(semid);
}

/* Drains the ring of 32 queued entries under the semaphore, then sends the pending
   request by RPC; the RPC's end callback signals the semaphore on success. */
int func_00252B80(int arg0)
{
    int i;
    Obj_00529560 *p;
    int n;
    int size;

    if (func_00255590() == 0) {
        return 0;
    }
    if (arg0 != 0) {
        if (PollSema(gSemaId[0]) < 0) {
            return -1;
        }
    } else {
        WaitSema(gSemaId[0]);
    }
    i = D_00529550[0];
    p = &D_00529560[i];
    while (p->unk_0 >= 0) {
        if (func_00252470(p) < 0) {
            break;
        }
        p->unk_0 = -1;
        i = (i + 1) % 32;
        p = &D_00529560[i];
    }
    D_00529550[0] = i;
    n = D_00529540[0];
    if (n != 0) {
        size = (n + 0x10) & ~0xF;
        if (arg0 != 0) {
            arg0 = 1;
        }
        if (sceSifCallRpc(D_00529690, 0, arg0, D_00529700, size, D_00529700, 0, func_00252B70, gSemaId[0]) < 0) {
            SignalSema(gSemaId[0]);
            return -1;
        }
        D_00529540[0] = 0;
    } else {
        SignalSema(gSemaId[0]);
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00252470", func_00252D10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00252470", func_00252D80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00252470", func_00252EC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00252470", func_00252FD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00252470", func_00253080);
