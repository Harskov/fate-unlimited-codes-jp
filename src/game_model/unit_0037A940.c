#include "common.h"
#include "libc.h"

typedef struct Obj_0037AF70 {
    u8 pad_0[0x1E0];
    /* 0x1E0 */ s32 flags_1E0;
    /* 0x1E4 */ s32 flags_1E4;
    u8 pad_1E8[0x18];
    s32 unk_200;
    u8 pad_204[0x26];
    s16 unk_22A;
    u8 pad_22C[0x310];
    s32 unk_53C;
    u8 pad_540[0x20];
    s32 unk_560;
    s32 unk_564;
    u8 pad_568[0x58];
    u8 pad_5C0[4];
    s32 unk_5C4;
    u8 pad_5C8[0x1E8C];
    s32 unk_2454;
    u8 pad_2458[0xC];
    s32 unk_2464;
} Obj_0037AF70;

typedef struct Obj_0037B6F0 {
    u8 pad_0[0x245C];
    s32 unk_245C;
} Obj_0037B6F0;

typedef struct Obj_0037B4A0 {
    /* 0x00 */ s32 flags;
    u8 pad_4[0x70];
    f32 unk_74;
} Obj_0037B4A0;

f32 func_001A40B0(void);

void func_0037C170(void *arg0);

/* read absolutely (%hi/%lo), so its size stays unknown here */
extern s32 D_0051D9C0[];

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037A940);

/* clears bit 0x2 of the state word under the object's flag conditions; returns 1 while it is clear */
s32 func_0037A9D0(Obj_0037AF70 *arg0, s32 *arg1)
{
    s32 state;
    s32 cond;

    if (arg0->flags_1E4 & 0x1) {
        if (!(arg0->flags_1E0 & 0x38)) {
            arg1[0] &= ~0x2;
            if (arg1[0] & 0x8) {
                D_0051D9C0[0] = 0;
                arg1[3] = 0;
                arg1[0] &= ~0x1;
            }
        }
    }

    state = arg1[0];
    cond = 0;
    if (state & 0x10) {
        if (arg0->flags_1E4 & 0x100000)
            cond = 1;
    }
    if (state & 0x20) {
        if (!(arg0->flags_1E0 & 0x18)) {
            if (!(arg0->flags_1E4 & 0x4))
                cond = 1;
        }
    }

    if (cond) {
        D_0051D9C0[0] = 0;
        arg1[3] = 0;
        arg1[0] &= ~0x1;
        if (arg1[0] & 0x200)
            arg1[0] &= ~0x2;
    }

    return !(arg1[0] & 0x2);
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037AAF0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037AC20);

s32 func_0037AF70(Obj_0037AF70 *arg0, s32 *arg1)
{
    s32 flags = arg0->flags_1E4;
    s32 i;

    if ((flags & 0x80) || (arg0->flags_1E0 & 0x1000000) || (*arg1 & 0x40)) {
        if (!(flags & 0x400000)) {
            memset(&arg0->unk_560, -1, 0x60);
            return *arg1 & 1;
        }
        if (arg0->unk_564 != 0x96) {
            return *arg1 & 1;
        }
        for (i = 0; i < 0x18; i++) {
            if (arg1[i + 5] != 0 && arg0->unk_200 == arg1[i + 5]) {
                func_0037C170(arg1);
                break;
            }
        }
    }
    return *arg1 & 1;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B060);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B180);

s32 func_0037B250(Obj_0037AF70 *arg0, s32 *arg1)
{
    if (arg0->unk_53C == 0xC4 && arg0->unk_200 == 0xC0 && ((*arg1 & 0x40) || arg0->unk_5C4 == 0)) {
        func_0037C170(arg1);
    }
    return *arg1 & 1;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B2C0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B370);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B410);

s32 func_0037B4A0(void *arg0, Obj_0037B4A0 *arg1)
{
    f32 v;

    v = func_001A40B0();
    if (v < arg1->unk_74) {
        func_0037C170(arg1);
    }
    arg1->unk_74 = v;
    return arg1->flags & 1;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B500);

s32 func_0037B6F0(Obj_0037B6F0 *arg0, s32 *arg1)
{
    if (arg0->unk_245C >= arg1[5]) {
        func_0037C170(arg1);
    }
    return *arg1 & 1;
}

s32 func_0037B740(Obj_0037AF70 *arg0, s32 *arg1)
{
    if (arg0->unk_2454 >= arg1[5] && !(arg0->flags_1E4 & 0x100000)) {
        func_0037C170(arg1);
    }
    return *arg1 & 1;
}

s32 func_0037B7A0(Obj_0037AF70 *arg0, s32 *arg1)
{
    if (arg0->unk_2464 >= arg1[5] && !(arg0->flags_1E4 & 0x100000)) {
        func_0037C170(arg1);
    }
    return *arg1 & 1;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B800);

s32 func_0037B990(Obj_0037AF70 *arg0, s32 *arg1)
{
    if (func_00333720(arg0, arg1[5]) != 0) {
        func_0037C170(arg1);
    }
    return *arg1 & 1;
}

s32 func_0037B9E0(Obj_0037AF70 *arg0, s32 *arg1)
{
    if (arg0->unk_22A == arg1[5]) {
        func_0037C170(arg1);
    }
    return *arg1 & 1;
}
