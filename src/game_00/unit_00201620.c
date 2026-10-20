#include "common.h"
#include "game_01/unit_00302130.h"
#include "game_01/unit_00302178.h"

extern s32 D_00522D30[];

extern s32 D_00522D34[];

typedef struct Obj_002024C0 {
    u8 pad[0x10];
    s32 unk_10;
} Obj_002024C0;

void func_002024D0(s32, s32, void *);

extern void func_002E03D0();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00201620);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_002016C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00201A30);

void func_00201E10(s32 arg0)
{
    func_00302160(arg0);
    func_00302178(arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00201E40);

void func_00201F90(s32 arg0, s32 arg1)
{
    s64 v;

    switch (arg0) {
    case 1:
        v = (arg1 << 24) | 0x64;
        break;
    case 2:
        v = (arg1 << 24) | 0x68;
        break;
    case 3:
        v = (arg1 << 24) | 0x62;
        break;
    case 4:
        v = (arg1 << 24) | 0x6;
        break;
    default:
        v = 0x24;
        break;
    }
    func_002F7E20(2, v);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00202010);

int func_00202050(void)
{
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00202060);

s32 func_00202120(void)
{
    return D_00522D30[0];
}

s32 func_00202130(void)
{
    return D_00522D34[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00202140);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00202470);

void func_002024C0(s32 arg0, s32 arg1, s32 arg2, Obj_002024C0 *arg3)
{
    func_002024D0(arg0, arg2, &arg3->unk_10);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_002024D0);

void func_00202860(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    func_002E03D0(arg0, arg2, arg3, arg1);
}
