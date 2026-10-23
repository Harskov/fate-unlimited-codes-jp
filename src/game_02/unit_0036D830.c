#include "common.h"

void func_0036D830(void);

extern s32 D_00532048[];

extern s32 D_00532060[];

typedef struct Obj_00532060 {
    u8 unk_0[0x10];
    f32 unk_10;
    u8 pad_14[0x54];
} Obj_00532060;

typedef struct Obj_0036D830 {
    /* 0x00 */ Obj_00532060 unk_0[16];
} Obj_0036D830;

typedef struct Entry {
    u8 unk_0[0x14];
    f32 unk_14[8];
    u8 unk_34[0x34];
} Entry;

typedef struct Slot {
    Entry unk_0[16];
} Slot;

typedef struct Sub_0036E6D0 {
    u8 pad_0[0xC];
    s32 unk_C;
    u8 pad_10[0x1CC];
    /* 0x1DC */ s32 flags;
} Sub_0036E6D0;

typedef struct Obj_0036E6D0 {
    s32 unk_0;
    Sub_0036E6D0 *unk_4;
} Obj_0036E6D0;

typedef s32 (*Handler_0036E6D0)(Obj_0036E6D0 *, s32);

extern Handler_0036E6D0 D_004DCB10[];

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0036D830", func_0036D830);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0036D830", func_0036D890);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0036D830", func_0036DC20);

void func_0036DFB0(s32 *arg0, s32 arg1, s32 arg2, f32 arg3)
{
    if (arg2 < 8) {
        ((Slot *)D_00532060)[*arg0].unk_0[arg1].unk_14[arg2] = arg3;
    }
}

void func_0036E020(s32 *arg0, s32 arg1, f32 *arg2)
{
    Entry *entry;
    s32 i;

    entry = &((Slot *)D_00532060)[*arg0].unk_0[arg1];
    for (i = 0; i < 8; i++)
        entry->unk_14[i] = arg2[i];
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0036D830", func_0036E0A0);

void func_0036E140(s32 *arg0, s32 arg1, f32 arg2)
{
    Obj_0036D830 *bank;

    if (arg0 != 0) {
        bank = (Obj_0036D830 *)D_00532060 + *arg0;
        if (bank != 0 && arg1 >= 0 && arg1 < 16) {
            bank->unk_0[arg1].unk_10 = arg2;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0036D830", func_0036E1B0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0036D830", func_0036E230);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0036D830", func_0036E2B0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0036D830", func_0036E3E0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0036D830", func_0036E510);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0036D830", func_0036E630);

s32 func_0036E6D0(Obj_0036E6D0 *arg0, s32 arg1)
{
    Sub_0036E6D0 *sub;
    Handler_0036E6D0 handler;

    if (arg0 == 0)
        return 0;
    sub = arg0->unk_4;
    handler = D_004DCB10[sub->unk_C];
    if (handler == 0)
        return 0;
    if (arg0->unk_0 == 1 && arg1 == 0 && (sub->flags & 0x80000))
        return 0;
    return handler(arg0, 0);
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0036D830", func_0036E750);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0036D830", func_0036E8C0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0036D830", func_0036E930);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0036D830", func_0036EA30);

void func_0036EAC0(void)
{
    D_00532048[0] = 0;
    memset(D_00532060, 0, 0x4100);
}

void func_0036EAE0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0036D830", func_0036EAF0);
