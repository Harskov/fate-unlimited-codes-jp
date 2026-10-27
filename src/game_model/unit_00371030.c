#include "common.h"

void func_0036D830(void);

extern s32 D_004DCB60[];

extern s32 D_004DDB90[];

extern s32 D_004DDBC0[];

extern s32 D_004DDBC8[];

extern s32 D_00507A80[];

void func_0036DC20();

typedef struct Obj_00371030 {
    u8 unk_0[0x3C];
    s32 unk_3C;
} Obj_00371030;

typedef struct Obj_003711E0 {
    s32 unk_0;
    Obj_00371030 *unk_4;
} Obj_003711E0;

extern s32 D_004DDA90[];

extern s32 D_004DDB20[];

extern s32 D_004DDB30[];

extern s32 D_00507A88[];

void func_0036CE00();

typedef struct Obj_00371610 {
    /* 0x00 */ s32 flags;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ s32 unk_C;
} Obj_00371610;

void func_0036A830();

void func_00371030(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00371030", func_00371040);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00371030", func_00371080);

void func_003710E0(void)
{
    func_0036D830();
}

void func_003710F0(Obj_003711E0 *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00371030", func_00371130);

void func_00371190(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00371030", func_003711A0);

void func_003711E0(Obj_003711E0 *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 1, 0xC8, D_004DCB60, D_004DDB90, D_004DDBC0, D_004DDBC8, 4, D_00507A80);
}

void func_00371240(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00371030", func_00371250);

void func_00371370(Obj_003711E0 *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 3, 0xCB, D_004DCB60, D_004DDA90, D_004DDB20, D_004DDB30, 4, D_00507A88);
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00371030", func_003713D0);

void func_00371600(void)
{
    func_0036D830();
}

void func_00371610(Obj_003711E0 *arg0, Obj_00371610 *arg1)
{
    s32 sub;

    if ((arg1->flags & 1) && (arg1->flags & 2)) {
        sub = arg0->unk_4->unk_3C;
        func_0036CE00(arg0, arg1, sub, 2);
        func_0036A830(arg0, arg1, sub, arg1->unk_8 + 0xB0, arg1->unk_C);
    }
}
