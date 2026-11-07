#include "common.h"
#include "eekernel.h"
#include "types.h"

#include "game_00/adxowner.h"
#include "game_00/tbl_0051E444.h"
#include "game_00/unit_0015AB90.h"

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

void func_00253870(void);

s32 func_002543F0(s32);

void func_00254760(s32, s32, s32, s32, f32, f32, s32);

void sceGsResetPath(void);

void sceDmaReset(s32);

void sceGsResetGraph(s32, s32, s32, s32);

void sceGsSetDefDBuff(s32 *, s32, s32, s32, s32, s32, s32);

void sceGsSyncPath(s32, s32);

void FlushCache(s32);

extern s32 D_00527880[];

extern s32 D_00527948[];

extern s32 D_00527950[];

extern s32 D_00527998[];

void func_0021E040();

void func_0021E0F0();

void func_0021E340();

extern s32 D_00527800[];

extern s32 D_00527930[];

extern s32 D_00527990[];

extern s32 D_005279A0[];

extern s32 D_005279A8[];

extern s32 D_005279B0[];

extern s32 D_005279B8[];

extern s32 D_005279C8[];

extern s32 D_005279D0[];

extern s32 D_005279D8[];

extern s32 D_005279E0[];

extern s32 D_00510470[];

typedef struct Obj_0021E0F0 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ void *unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ void *unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 pad_18[8];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ u8 pad_24[0xC];
} Obj_0021E0F0;

void func_0021D640();

void func_0021D690();

void func_0021EE00();

void func_0021EEE0();

void func_00220C20();

void func_0021F160(s32);

void sceMpegInit(void);

void func_00220EE0(void *, s32, s32, s32, s32, s32, s32, s32);

s32 func_0021D510(void *, s32, s32, s32);

int mpegAddStrCallback(void *, int, int, void *, void *);

void func_002211B0(void *, u64, s32, s32);

s32 CreateThread(void *);

s32 StartThread(s32, void *);

s32 func_0021F650(void *, s32);

void sceGsSyncVCallback(void *);

s32 AddDmacHandler(s32, void *, s32);

s32 EnableDmac(s32);

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
    switch (func_0013B9C8(obj->unk_34)) {
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

void func_0021E0F0(s32 arg0)
{
    Obj_0021E0F0 param;

    /* the DMAC's D_CTRL and D_STAT registers */
    *(s32 *)0x1000E000 |= 3;
    *(s32 *)0x1000E010 = 4;
    func_0021F160(D_00527998[0]);
    sceMpegInit();
    func_00220EE0(D_00527880, D_005279C8[0], 0x13D800, D_005279B0[0], D_005279D0[0], 0x100, D_005279A0[0], 0x200);
    if (D_005275A8[0] != 0) {
        func_0021D510(D_00527820, D_005279B8[0], 0xC000, 0x6000);
    }
    mpegAddStrCallback(D_00527880, 0, 0, func_0021EEE0, (void *)D_00527998[0]);
    if (D_005275A8[0] != 0) {
        mpegAddStrCallback(D_00527880, 2, 0, func_0021EE00, (void *)D_00527998[0]);
    }
    func_002211B0(D_00527800, func_0021D870(D_005279E0[0]), D_005279D8[0], 2);
    param.unk_20 = 0;
    param.unk_04 = func_00220C20;
    param.unk_08 = D_005279A8[0];
    param.unk_0C = 0x4000;
    param.unk_14 = gChangeThreadPriorityResult[0];
    param.unk_10 = D_00510470;
    D_00527990[0] = CreateThread(&param);
    StartThread(D_00527990[0], D_00527880);
    while (!func_0021F650(D_00527950, arg0)) {
        DelayThread(0x1046);
    }
    sceGsSyncVCallback(func_0021D690);
    D_00527930[0] = AddDmacHandler(2, func_0021D640, 0);
    EnableDmac(2);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E300);

void func_0021E330(void)
{
    RotateThreadReadyQueue(gChangeThreadPriorityResult[0]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E340);

s32 func_0021E760(s32 arg0)
{
    func_0021E0F0(arg0);
    func_0021E340(D_00527880, D_00527998[0], D_00527950);
    func_0021E040();
    return D_00527948[0];
}

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
