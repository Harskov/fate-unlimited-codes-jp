#include "common.h"
#include "libc.h"
#include "types.h"

int sceGsSyncV(int mode);

extern int D_00527580[];

extern int D_00527588[];

void sceSdRemote();

void func_0021D380(void);

typedef struct Obj_0021D1C0 {
    u8 unk_0[0x48];
    s32 unk_48;
    u8 unk_4C[0x8];
    s32 unk_54;
} Obj_0021D1C0;

typedef struct Obj_0021D1E0 {
    s32 unk_0;
    u8 unk_4[0x28];
    u32 unk_2C;
    u8 unk_30[0x4];
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    s32 unk_40;
} Obj_0021D1E0;

void func_0021CD70(int arg0);

int func_0021CDC0(int arg0, int arg1, int arg2);

int sceSifAllocSysMemory(int type, int size, int addr);

extern int D_00526580[];

typedef struct Obj_0021D510 {
    s32 unk_0;
    u8 unk_4[0x28];
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    s32 unk_4C;
    s32 unk_50;
    s32 unk_54;
    s32 unk_58;
} Obj_0021D510;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021CD10);

void func_0021CD70(int arg0)
{
    sceSdRemote(1, 0x8010, 0xF80, arg0);
    sceSdRemote(1, 0x8010, 0x1080, arg0);
}

int func_0021CDC0(int arg0, int arg1, int arg2)
{
    int packet[4];
    int id;

    if (arg2 <= 0)
        return 0;
    packet[1] = arg0;
    packet[0] = arg1;
    packet[2] = arg2;
    packet[3] = 0;
    FlushCache(0);
    id = sceSifSetDma(packet, 1);
    while (sceSifDmaStat(id) >= 0)
        ;
    return arg2;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021CE40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021CF90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D030);

int func_0021D1C0(Obj_0021D1C0 *arg0)
{
    return arg0->unk_54 >= arg0->unk_48;
}

void func_0021D1E0(Obj_0021D1E0 *arg0, u32 arg1)
{
    u32 n;

    if (arg0->unk_0 == 0) {
        n = 0x28 - arg0->unk_2C;
        n = (n < arg1) ? n : arg1;
        arg0->unk_2C = arg0->unk_2C + n;
        if (arg0->unk_2C >= 0x28) {
            arg0->unk_0 = 1;
        }
        arg1 -= n;
    }
    arg0->unk_34 = (arg0->unk_34 + (s32)arg1) % arg0->unk_3C;
    arg0->unk_38 = arg0->unk_38 + (s32)arg1;
    arg0->unk_40 = arg0->unk_40 + (s32)arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D260);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D320);

void func_0021D370(void)
{
    func_0021D380();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D380);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D450);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D4D0);

int func_0021D510(Obj_0021D510 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    arg0->unk_0 = 0;
    arg0->unk_2C = 0;
    arg0->unk_30 = arg1;
    arg0->unk_34 = 0;
    arg0->unk_38 = 0;
    arg0->unk_3C = arg2;
    arg0->unk_40 = 0;
    arg0->unk_54 = 0;
    arg0->unk_48 = arg3;
    arg0->unk_4C = 0;
    arg0->unk_50 = 0;
    arg0->unk_44 = sceSifAllocSysMemory(1, arg3, 0);
    if (arg0->unk_44 == 0) {
        return 0;
    }
    arg0->unk_58 = sceSifAllocSysMemory(1, 0x1000, 0);
    if (arg0->unk_58 == 0) {
        return 0;
    }
    memset(D_00526580, 0, 0x1000);
    func_0021CDC0(arg0->unk_58, (int)D_00526580, 0x1000);
    func_0021CD70(0);
    return 1;
}

void func_0021D5E0(void)
{
    D_00527580[0] = 0;
}

/* probably waits for the next video field: spins until sceGsSyncV(0) returns a field other than the one passed in */
void func_0021D5F0(int field)
{
    while (sceGsSyncV(0) == field) {
    }
    D_00527580[0] = 1;
    D_00527588[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D640);
