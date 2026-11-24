#include "common.h"

typedef struct Obj_00360350 {
    u8 pad_0[0x8A0];
    /* 0x8A0 */ f32 unk_8A0;
    /* 0x8A4 */ f32 unk_8A4;
    /* 0x8A8 */ f32 unk_8A8;
    u8 pad_8AC[0x3B4];
    /* 0xC60 */ f32 unk_C60;
    /* 0xC64 */ f32 unk_C64;
    /* 0xC68 */ f32 unk_C68;
    u8 pad_C6C[0xFB4];
    /* 0x1C20 */ s32 counter_1C20;
    u8 pad_1C24[0xC];
    /* 0x1C30 */ f32 unk_1C30;
    /* 0x1C34 */ f32 unk_1C34;
    u8 pad_1C38[0x18];
    /* 0x1C50 */ f32 unk_1C50;
    /* 0x1C54 */ f32 unk_1C54;
    /* 0x1C58 */ f32 unk_1C58;
    u8 pad_1C5C[0xB4];
    /* 0x1D10 */ s32 counter_1D10;
    u8 pad_1D14[0xC];
    /* 0x1D20 */ f32 unk_1D20;
    /* 0x1D24 */ f32 unk_1D24;
    u8 pad_1D28[0x18];
    /* 0x1D40 */ f32 unk_1D40;
    /* 0x1D44 */ f32 unk_1D44;
    /* 0x1D48 */ f32 unk_1D48;
} Obj_00360350;

f32 fabsf(f32);

/* Two parallel updates, each run only while its counter is non-zero: a scale
   from the larger of two magnitudes, then four quotients of the source floats. */
void func_00360350(Obj_00360350 *o)
{
    if (o->counter_1C20 != 0) {
        if (fabsf(o->unk_8A8) > fabsf(o->unk_8A4))
            o->unk_1C30 = 1.083f + fabsf(o->unk_8A8) / -300.0f;
        else
            o->unk_1C30 = 1.083f + fabsf(o->unk_8A4) / -300.0f;
        o->unk_1C34 = o->unk_8A8 / 600.0f;
        o->unk_1C54 = o->unk_8A4 / 2.0f;
        o->unk_1C50 = o->unk_8A0 / 4.0f;
        o->unk_1C58 = o->unk_8A8 / 1.75f;
        o->counter_1C20++;
    }
    if (o->counter_1D10 != 0) {
        if (fabsf(o->unk_C68) > fabsf(o->unk_C64))
            o->unk_1D20 = 1.083f + fabsf(o->unk_C68) / -300.0f;
        else
            o->unk_1D20 = 1.083f + fabsf(o->unk_C64) / -300.0f;
        o->unk_1D24 = o->unk_C68 / 600.0f;
        o->unk_1D40 = o->unk_C60 / 4.0f;
        o->unk_1D44 = o->unk_C64 / 2.0f;
        o->unk_1D48 = o->unk_C68 / 1.75f;
        o->counter_1D10++;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00360350", func_00360560);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00360350", func_00360980);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00360350", func_00360DA0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00360350", func_003611C0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00360350", func_00361920);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00360350", func_003625E0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00360350", func_00362A10);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00360350", func_00363770);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00360350", func_00363B80);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00360350", func_00364660);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00360350", func_00364A80);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00360350", func_00365530);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00360350", func_00365950);
