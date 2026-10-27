#include "common.h"

typedef struct Obj_003795A0 {
    u8 pad_0[0x238C];
    s32 unk_238C;
    u8 pad_2390[0x18];
    s32 unk_23A8;
} Obj_003795A0;

extern s16 D_005231C0[];

s32 func_003795A0(Obj_003795A0 *arg0);

typedef struct Obj_00378F78 {
    u8 pad_0[0x3C];
    s32 unk_3C;
} Obj_00378F78;

typedef struct Elem_00378F40 {
    /* 0x000 */ s32 unk_0;
    /* 0x004 */ u8 unk_4;
    u8 pad_5[3];
    /* 0x008 */ s32 unk_8;
    u8 pad_C[0x174];
    /* 0x180 */ s32 *unk_180;
    u8 pad_184[0x4C];
} Elem_00378F40;

typedef struct Obj_00378F40 {
    /* 0x000 */ s32 unk_0;
    /* 0x004 */ s32 unk_4;
    u8 pad_8[4];
    /* 0x00C */ s32 unk_C;
    /* 0x010 */ Obj_00378F78 *unk_10;
    /* 0x014 */ s32 unk_14;
    /* 0x018 */ s32 unk_18;
    /* 0x01C */ s32 unk_1C;
    /* 0x020 */ s32 unk_20;
    /* 0x024 */ s32 unk_24;
    /* 0x028 */ s32 unk_28;
    /* 0x02C */ f32 unk_2C;
    /* 0x030 */ Elem_00378F40 unk_30[2];
    /* 0x3D0 */ f32 unk_3D0;
    /* 0x3D4 */ s32 unk_3D4;
    /* 0x3D8 */ s32 unk_3D8;
    /* 0x3DC */ s32 unk_3DC;
    /* 0x3E0 */ s32 unk_3E0;
    /* 0x3E4 */ s32 unk_3E4;
    /* 0x3E8 */ s32 unk_3E8;
    /* 0x3EC */ s32 unk_3EC;
    /* 0x3F0 */ s32 unk_3F0;
    /* 0x3F4 */ s32 unk_3F4;
    /* 0x3F8 */ s32 unk_3F8;
    /* 0x3FC */ s32 unk_3FC;
    /* 0x400 */ s32 unk_400;
} Obj_00378F40;

extern s32 D_004E0980[];

s32 *func_0016D020(s32 arg0, s32 arg1);

s32 func_00171E40(s32 arg0, s32 arg1);

typedef struct Obj_003795F0 {
    s32 unk_0;
    s32 unk_4;
    u8 pad_8[8];
    s32 unk_10;
    s32 unk_14;
} Obj_003795F0;

void func_003784B0();

void func_00378980();

void func_00378ED0(Obj_00378F40 *arg0, Elem_00378F40 *arg1, f32 arg2);

typedef struct Obj_00379550 {
    u8 pad_0[0x8];
    /* 0x008 */ s32 unk_8;
    u8 pad_C[0x1C];
    /* 0x028 */ f32 unk_28;
    /* 0x02C */ f32 unk_2C;
} Obj_00379550;

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00377DF0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00377F50);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378070);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378350);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_003784B0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378610);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378790);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378870);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378980);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378D90);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378DE0);

s32 func_00378E60(Obj_00378F40 *arg0)
{
    if (arg0 == 0)
        return 1;
    func_00378980();
    if (arg0->unk_30[0].unk_0 != arg0->unk_30[1].unk_0)
        func_00378ED0(arg0, &arg0->unk_30[0], 0.5f);
    func_00378ED0(arg0, &arg0->unk_30[1], 1.0f);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378ED0);

/* sets up both halves of the object from the source's handle; 1 when an input is missing */
s32 func_00378F40(Obj_00378F40 *arg0, Obj_00378F78 *arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f32 arg8)
{
    s32 h;
    s32 *w;

    if (arg0 == 0)
        return 1;
    if (arg1 == 0)
        return 1;
    h = arg1->unk_3C;
    if (h == 0)
        return 1;
    if (arg7 <= 0)
        arg7 = 1;

    arg0->unk_0 = 0;
    arg0->unk_4 = arg2;
    arg0->unk_C = D_004E0980[arg2];
    arg0->unk_10 = arg1;
    arg0->unk_14 = 0;
    arg0->unk_18 = arg6;
    arg0->unk_3D0 = arg8;
    arg0->unk_1C = arg7;
    arg0->unk_20 = 0x3C;
    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    arg0->unk_2C = 1.0f / (f32)arg7;
    arg0->unk_3DC = 0;
    arg0->unk_3D8 = 0;
    arg0->unk_3D4 = 0;
    arg0->unk_400 = 0;
    arg0->unk_3FC = 0;
    arg0->unk_3F8 = 0;

    arg0->unk_30[0].unk_0 = arg4;
    arg0->unk_30[0].unk_8 = func_00171E40(h, arg4);
    arg0->unk_30[0].unk_180 = func_0016D020(h, arg4);
    arg0->unk_30[0].unk_4 = arg3;
    arg0->unk_30[1].unk_0 = arg5;
    arg0->unk_30[1].unk_8 = func_00171E40(h, arg5);
    arg0->unk_30[1].unk_180 = func_0016D020(h, arg5);
    arg0->unk_30[1].unk_4 = arg3;
    arg0->unk_3E8 = 0;
    arg0->unk_3E4 = 0;
    arg0->unk_3E0 = 0;
    arg0->unk_3F4 = 0;
    arg0->unk_3F0 = 0;
    arg0->unk_3EC = 0;

    w = func_0016D020(h, arg4);
    if (w != 0) {
        *w &= ~0xE00;
        *w |= 0x400000;
    }
    w = func_0016D020(h, arg5);
    if (w != 0) {
        *w &= ~0xE00;
        *w |= 0x400000;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00379100);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00379150);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00379310);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00379510);

void func_00379550(Obj_00379550 *arg0)
{
    arg0->unk_28 += arg0->unk_2C;
    if (!(arg0->unk_28 < 1.0f)) {
        arg0->unk_28 = 1.0f;
        arg0->unk_8 = 2;
    }
}

s32 func_003795A0(Obj_003795A0 *arg0)
{
    if (arg0 == 0)
        return 0;
    if (D_005231C0[0] == 0 && arg0->unk_238C == 0 && arg0->unk_23A8 == 0)
        return 0;
    return 1;
}

s32 func_003795F0(Obj_003795F0 *arg0)
{
    if (arg0 == 0)
        return 0;
    if (arg0->unk_4 == 3)
        arg0->unk_14 = arg0->unk_10;
    else
        func_003784B0();
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00379640);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_003796C0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_003797B0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00379810);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_003798B0);
