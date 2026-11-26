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

extern s32 gAddDmacHandlerResult[];

extern s32 gCreateThreadResult[];

extern s32 D_005279A0[];

extern s32 D_005279A8[];

extern s32 D_005279B0[];

extern s32 D_005279B8[];

extern s32 D_005279C8[];

extern s32 D_005279D0[];

extern s32 D_005279D8[];

extern s32 D_005279E0[];

extern s32 _gp[];

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

s32 func_0021D1C0(s32 *);

typedef struct Obj_00527620 {
    /* 0x00 */ u64 unk_0_0 : 15;
    /* 0x00 */ u64 unk_0_15 : 1;
    /* 0x00 */ u64 pad_0_16 : 44;
    /* 0x00 */ u64 unk_0_60 : 4;
    /* 0x08 */ u64 unk_8_0 : 4;
    /* 0x08 */ u64 pad_8_4 : 60;
} Obj_00527620;

typedef union Sub_00527620 {
    u128 q0;
    Obj_00527620 w0;
} Sub_00527620;

typedef struct Obj_0021DC80 {
    /* 0x00 */ u8 pad_0[4];
    /* 0x04 */ void *unk_4;
    /* 0x08 */ u8 pad_8[8];
} Obj_0021DC80;

typedef union Sub_0021DC80 {
    u64 w0[2];
    u128 q0;
} Sub_0021DC80;

extern Sub_00527620 D_00527620;

extern u64 D_003DF5E0[2];

extern s32 D_00527630[];

extern u64 D_00527650[];

void *func_00120950(s32, s32);

void func_00120B78(void *);

void *sceDmaGetChan(s32);

void sceDmaSend(void *, void *);

s32 sceGsSetDefDrawEnv(void *, s16, s16, s16, s16, s16);

s32 sceGsPutDrawEnv(void *);

void func_0011D388(Obj_0021DC80 *, void *);

void func_0011D398(Obj_0021DC80 *);

void func_0011D3A8(Obj_0021DC80 *);

void func_0011D510(Obj_0021DC80 *, s32, s32, s32);

void sceGifPkOpenGifTag(Obj_0021DC80 *, u128);

void sceGifPkAddGsAD(Obj_0021DC80 *, s32, u64);

void sceGifPkCloseGifTag(Obj_0021DC80 *);

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

void func_0021DC80(s32 r, s32 g, s32 b, s32 w, s32 h)
{
    Sub_0021DC80 tag;
    Obj_0021DC80 pk;
    void *buf;
    void *chan;

    // !FAKE: probably a local u64 giftag[2] initialised in place; the initialiser compiles to a constant of its own, not this one
    tag.w0[0] = D_003DF5E0[0];
    tag.w0[1] = D_003DF5E0[1];
    buf = func_00120950(0x10, 0x60);
    chan = sceDmaGetChan(2);

    D_00527620.q0 = 0;
    asm {
        sync
    }
    D_00527620.w0.unk_0_0 = 8;
    D_00527620.w0.unk_0_15 = 1;
    D_00527620.w0.unk_0_60 = 1;
    D_00527620.w0.unk_8_0 = 0xE;
    sceGsSetDefDrawEnv(D_00527630, 0, w, ((h / 2 + 31) / 32 + (h + 31) / 32) * 64, 0, 0);
    D_00527650[0] = 0;
    FlushCache(0);
    sceGsSyncPath(0, 0);
    sceGsPutDrawEnv(&D_00527620);

    func_0011D388(&pk, buf);
    func_0011D398(&pk);
    func_0011D510(&pk, 0, 0, 0);
    sceGifPkOpenGifTag(&pk, tag.q0);
    sceGifPkAddGsAD(&pk, 0, 6);
    sceGifPkAddGsAD(&pk, 1, (u64)r | ((u64)g << 8) | ((u64)b << 16));
    sceGifPkAddGsAD(&pk, 5, 0);
    sceGifPkAddGsAD(&pk, 5, (u64)0x2800 | ((u64)0x8C00 << 16));
    sceGifPkCloseGifTag(&pk);
    func_0011D3A8(&pk);
    FlushCache(0);
    sceGsSyncPath(0, 0);
    sceDmaSend(chan, pk.unk_4);
    sceGsSyncPath(0, 0);
    func_00120B78(buf);
}

int func_0021DF20(Obj38 *obj)
{
    switch (func_0013B9C8(obj->unk_34)) {
    case 4:
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021DF50);

int func_0021DFE0(Obj_0021E0F0 *arg0)
{
    if (D_00527940[0] != -1 && D_00527940[0] < arg0->unk_08) {
        return 1;
    }
    return 0;
}

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
    param.unk_10 = _gp;
    gCreateThreadResult[0] = CreateThread(&param);
    StartThread(gCreateThreadResult[0], D_00527880);
    while (!func_0021F650(D_00527950, arg0)) {
        DelayThread(0x1046);
    }
    sceGsSyncVCallback(func_0021D690);
    gAddDmacHandlerResult[0] = AddDmacHandler(2, func_0021D640, 0);
    EnableDmac(2);
}

s32 func_0021E300(void)
{
    if (D_005275A8[0] != 0) {
        return func_0021D1C0(D_00527820);
    }
    return 1;
}

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
