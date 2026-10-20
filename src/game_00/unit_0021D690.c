#include "common.h"
#include "types.h"

#include "game_00/adxowner.h"
#include "game_00/tbl_0051E444.h"

int func_0013B9C8(void *p);

extern s32 D_00527820[];

extern void func_0021D030(void *);

extern s32 gChangeThreadPriorityResult[];

void RotateThreadReadyQueue(s32);

extern s32 D_003DF610[];

extern s32 D_003DF630[];

extern s32 D_005275A8[];

extern s32 D_005275B8[];

extern s32 D_005275C0[];

extern s32 D_005275D0[];

extern s32 D_00527940[];

void func_00209A30(s32, s32);

void func_00209910(void);

void func_0020A260(s32);

void func_0020A380(s32);

void func_0021DC80(s32, s32, s32, s32, s32);

void func_0021E7B0(s32);

void func_0015B6A0(void);

void func_0015AF90(s32, s32);

void func_00253870(void);

s32 func_002543F0(s32);

void func_00254760(s32, s32, s32, s32, f32, f32, s32);

void sceGsResetPath(void);

void sceDmaReset(s32);

void sceGsResetGraph(s32, s32, s32, s32);

void sceGsSetDefDBuff(s32 *, s32, s32, s32, s32, s32, s32);

void sceGsSyncPath(s32, s32);

void FlushCache(s32);

void DelayThread(s32);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021D690);

/* probably the uncached mirror of a main-memory address: the EE maps RAM uncached at 0x20000000 */
u64 func_0021D870(u64 arg0)
{
    return ((arg0 << 36) >> 36) | 0x20000000;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021D890);

u64 func_0021DC70(u64 arg0)
{
    return (arg0 << 36) >> 36;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021DC80);

int func_0021DF20(Obj38 *obj)
{
    switch (func_0013B9C8(obj->unk34)) {
    case 4:
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021DF50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021DFE0);

void func_0021E020(void)
{
    func_0021D030(D_00527820);
}

void func_0021E030(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E040);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E0F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E300);

void func_0021E330(void)
{
    RotateThreadReadyQueue(gChangeThreadPriorityResult[0]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E340);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E760);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E7B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E8E0);

void func_0021EB20(s32 arg0)
{
    func_00209A30(D_00524798[0], 1);
    func_00209910();
    func_0020A260(0);
    sceGsResetPath();
    sceDmaReset(1);
    sceGsResetGraph(0, 1, 2, 1);
    D_005275C0[0] = 0xE0;
    D_005275B8[0] = 0xE0;
    func_0021DC80(0, 0, 0, 0x280, 0x1C0);
    sceGsSetDefDBuff(D_005275D0, 0, 0x280, (s16)D_005275C0[0], 0, 0, 1);
    FlushCache(0);
    func_0015B6A0();
    func_0015AF90(0, 0x1E);
    if (D_005275A8[0] == 0) {
        func_00254760(3, D_003DF630[arg0], 0, 0, 1.0f, 0.0f, 1);
        for (;;) {
            if (func_002543F0(0) == 3) {
                break;
            }
            func_00253870();
            DelayThread(0x40D8);
        }
    }
    D_00527940[0] = 0xF;
    func_0021E7B0(D_003DF610[arg0]);
    sceGsSyncPath(0, 0);
    func_0020A260(1);
    func_0015B6A0();
    func_0015AF90(0, 0x3C);
    func_0020A380(3);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021ECC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021EE00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021EEE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021F000);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021F040);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021F0A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021F110);
