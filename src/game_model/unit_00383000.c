#include "common.h"

/* the object func_0037FF00 hands each of these */
typedef struct Obj_003830F0 {
    /* 0x000 */ u8 unk_0[0x60];
    /* 0x060 */ s32 unk_60;
    /* 0x064 */ u8 unk_64[4];
    /* 0x068 */ u8 unk_68[0xE8];
    /* 0x150 */ s32 unk_150;
    /* 0x154 */ u8 unk_154[4];
} Obj_003830F0;

void func_0015D130(u8 *arg0);

typedef struct Obj_003833C0 {
    /* 0x000 */ u8 unk_0[0xC];
    /* 0x00C */ s32 unk_C;
    /* 0x010 */ u8 unk_10[0x294];
} Obj_003833C0;

void func_00382960();

#include "libc.h"

typedef struct Obj_00383370 {
    /* 0x000 */ u8 unk_0[0x60];
    /* 0x060 */ s32 unk_60;
    /* 0x064 */ f32 unk_64;
    /* 0x068 */ u8 unk_68[0xC8];
    /* 0x130 */ s32 unk_130;
} Obj_00383370;

extern s32 D_005361C8[];

extern s32 D_005239EC[];

extern s16 D_00508010[][22];

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_00383000);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_00383020);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_003830D0);

void func_003830F0(Obj_003830F0 *arg0)
{
    arg0->unk_150 = 2;
    func_0015D130(arg0->unk_154);
}

void func_00383100(Obj_003830F0 *arg0)
{
    arg0->unk_150 = 1;
    func_0015D130(arg0->unk_154);
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_00383110);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_00383220);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_003832A0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_003832C0);

void func_00383370(Obj_00383370 *arg0, s32 arg1, f32 arg2)
{
    arg0->unk_60 = 2;
    arg0->unk_130 = arg1;
    arg0->unk_64 = arg2;
}

void func_00383390(Obj_003830F0 *arg0)
{
    arg0->unk_60 = 1;
    func_0015D130(arg0->unk_64);
}

Obj_003833C0 *func_003833A0(s32 arg0)
{
    return (Obj_003833C0 *)D_005361C8[0] + arg0;
}

void func_003833C0(Obj_003833C0 *arg0)
{
    s32 saved;

    func_00382960();
    saved = arg0->unk_C;
    memset(arg0, 0, 0x2A4);
    arg0->unk_C = saved;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_00383410);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_00383470);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_003834B0);

s16 func_00383500(s32 arg0)
{
    return D_00508010[D_005239EC[0]][arg0];
}
