#include "common.h"
#include "types.h"

extern s32 D_00522DA0[];

extern s32 D_00522DE8[];

extern s32 D_00522E10[];

extern s16 D_00522E90[];

extern s16 D_00522EF4[];

extern s32 D_00522E08[];

extern s32 D_00522E20[];

void func_0020FAE0();

extern s32 D_00523D90[];

s32 AddIntcHandler(s32, s32 (*)(), s32);

void EnableIntc(s32);

s32 scePadPortOpen(s32, s32, void *);

extern s32 gAddIntcHandlerResult[];

extern s32 D_00522DF0[];

extern s32 D_00522DF8[];

extern s32 D_00522E00[];

extern u8 D_00522F80[];

void func_0020F530();

void func_0020F6C0();

s32 func_0020FA00(void);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F380);

void func_0020F400(int v)
{
    D_00522DA0[0] = v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F410);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F4B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F530);

void func_0020F650(void)
{
    func_0020FAE0(D_00522E90, D_00522E20);
    D_00522E10[0] = D_00522E08[0];
    D_00522E08[0] = 0;
}

void func_0020F690(void)
{
    D_00522E90[0] &= ~8;
    D_00522EF4[0] &= ~8;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F6C0);

void *func_0020F850(void *arg0)
{
    return arg0;
}

s32 func_0020F860(void)
{
    return D_00522DE8[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F870);

void func_0020F900(void)
{
    s32 i;
    s16 *info;
    u8 *buf;

    gAddIntcHandlerResult[0] = AddIntcHandler(3, func_0020FA00, 0);
    EnableIntc(3);
    func_0020F6C0();
    D_00522DF8[0] = 2;
    i = 0;
    info = D_00522E90;
    buf = D_00522F80;
    do {
        info[0] = 0;
        info[1] = 0;
        if (scePadPortOpen(i, 0, buf) == 0) {
            info[1] = -1;
        }
        func_0020F530(i, 0);
        i++;
        info += 50;
        buf += 0x100;
    } while (i < D_00522DF8[0]);
    D_00522E00[0] = 1;
    D_00522DE8[0] = 0;
    D_00522DF0[0] = 1;
}

void func_0020F9F0(void)
{
    D_00522E10[0] = 0;
}

s32 func_0020FA00(void)
{
    D_00522E08[0] += 1;
    D_00523D90[0] += 1;
    asm {
        sync
        ei
    }
    return 0;
}
