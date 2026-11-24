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

typedef struct Obj_0020F380 {
    void *unk_0;
    void *unk_4;
    void *unk_8;
    s32 unk_C;
    s32 unk_10;
    s32 unk_14;
} Obj_0020F380;

typedef struct Sub_0020F380 {
    void *unk_0;
    void *unk_4;
    s32 unk_8;
    s32 unk_C;
} Sub_0020F380;

void func_0020F400(int v);

extern s32 D_00522E80[];

extern s16 D_00522E22[];

extern s16 D_00522E24[];

extern s16 D_00522E26[];

extern s16 D_00522E2A[];

extern s32 D_00522E2C[];

extern s32 D_00522E30[];

extern s32 D_00522E34[];

extern s32 D_00522E38[];

extern s32 D_00522E3C[];

extern s16 D_00522E40[];

extern s16 D_00522E42[];

extern s16 D_00522E44[];

extern s16 D_00522E46[];

extern s16 D_00522E62[];

typedef struct Obj_0020F6C0 {
    /* 0x00 */ s16 unk_0;
    /* 0x02 */ u8 pad_2[2];
    /* 0x04 */ s16 unk_4;
    /* 0x06 */ s16 unk_6;
    /* 0x08 */ s16 unk_8;
    /* 0x0A */ s16 unk_A;
    /* 0x0C */ s32 unk_C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1C */ s32 unk_1C;
    /* 0x20 */ s16 unk_20;
    /* 0x22 */ s16 unk_22;
    /* 0x24 */ s16 unk_24;
    /* 0x26 */ s16 unk_26;
    /* 0x28 */ s16 unk_28;
    /* 0x2A */ s16 unk_2A;
    /* 0x2C */ u8 pad_2C[4];
    /* 0x30 */ s16 unk_30;
    /* 0x32 */ s16 unk_32;
    /* 0x34 */ s16 unk_34;
    /* 0x36 */ s16 unk_36;
    /* 0x38 */ s16 unk_38;
    /* 0x3A */ s16 unk_3A;
    /* 0x3C */ s16 unk_3C;
    /* 0x3E */ u8 pad_3E[2];
    /* 0x40 */ s16 unk_40;
    /* 0x42 */ s16 unk_42;
    /* 0x44 */ u8 unk_44[6];
    /* 0x4A */ u8 unk_4A[6];
    /* 0x50 */ u8 unk_50[12];
    /* 0x5C */ s16 unk_5C;
    /* 0x5E */ s16 unk_5E;
    /* 0x60 */ s32 unk_60;
} Obj_0020F6C0;

void func_0020F380(Obj_0020F380 *arg0, Sub_0020F380 *arg1, s32 arg2)
{
    if (arg2 != 0) {
        memset(arg1, 0, arg2);
    }
    arg0->unk_10 = 1;
    arg0->unk_8 = arg1;
    arg0->unk_4 = arg1;
    arg0->unk_C = 0;
    arg1->unk_C = 0;
    arg1->unk_4 = &arg0->unk_4;
    arg1->unk_0 = &arg0->unk_4;
    arg1->unk_8 = arg2;
    arg0->unk_14 = arg2;
    arg0->unk_0 = arg1;
    func_0020F400(0);
}

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

/* clears the state words before D_00522E90, then resets both 0x64-byte records there,
   each taking its own index at +0x60 */
void func_0020F6C0(void)
{
    s32 i;
    s32 k;
    Obj_0020F6C0 *p;

    D_00522E80[0] = -1;
    D_00522E24[0] = 0;
    D_00522E26[0] = 0;
    D_00522E22[0] = 0;
    D_00522E30[0] = 0;
    D_00522E2C[0] = 0;
    D_00522E2A[0] = 0;
    D_00522E34[0] = 0;
    D_00522E38[0] = 0;
    D_00522E3C[0] = 0;
    D_00522E62[0] = 0;
    D_00522E46[0] = 0;
    D_00522E44[0] = 0;
    D_00522E42[0] = 0;
    D_00522E40[0] = 0;

    for (i = 0, p = (Obj_0020F6C0 *)D_00522E90; i < 2; i++, p++) {
        p->unk_60 = i;
        p->unk_8 = 0;
        p->unk_4 = 0;
        p->unk_6 = 0;
        p->unk_A = 0;
        p->unk_C = 0;
        p->unk_10 = 0;
        p->unk_14 = 0;
        p->unk_18 = 0;
        p->unk_1C = 0;
        p->unk_26 = 0;
        p->unk_24 = 0;
        p->unk_22 = 0;
        p->unk_20 = 0;
        p->unk_32 = 0;
        p->unk_30 = 0;
        p->unk_2A = 0;
        p->unk_28 = 0;
        p->unk_36 = 0;
        p->unk_34 = 0;
        p->unk_3A = -1;
        p->unk_38 = -1;
        p->unk_3C = 1;
        p->unk_40 = 0;
        p->unk_42 = 0;
        for (k = 0; k < 6; k++) {
            p->unk_4A[k] = 0;
            p->unk_44[k] = 0;
        }
        p->unk_4A[0] = 0;
        p->unk_4A[1] = 1;
        p->unk_4A[2] = 0xFF;
        p->unk_4A[3] = 0xFF;
        p->unk_4A[4] = 0xFF;
        p->unk_4A[5] = 0xFF;
        for (k = 0; k < 12; k++) {
            p->unk_50[k] = 0;
        }
        p->unk_5C = 0;
        p->unk_5E = 0;
    }
}

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
