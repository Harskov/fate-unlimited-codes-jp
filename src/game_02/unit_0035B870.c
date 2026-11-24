#include "common.h"

typedef struct Obj_0035F5D0 {
    u8 pad_0[0xF30];
    /* 0xF30 */ f32 unk_F30;
    /* 0xF34 */ f32 unk_F34;
    /* 0xF38 */ f32 unk_F38;
    u8 pad_F3C[0x1200 - 0xF3C];
    /* 0x1200 */ f32 unk_1200;
    /* 0x1204 */ f32 unk_1204;
    /* 0x1208 */ f32 unk_1208;
    u8 pad_120C[0x1E00 - 0x120C];
    /* 0x1E00 */ s32 counter_1E00;
    u8 pad_1E04[0x1E10 - 0x1E04];
    /* 0x1E10 */ f32 unk_1E10;
    u8 pad_1E14[0x1E30 - 0x1E14];
    /* 0x1E30 */ f32 unk_1E30;
    /* 0x1E34 */ f32 unk_1E34;
    /* 0x1E38 */ f32 unk_1E38;
    u8 pad_1E3C[0x1EF0 - 0x1E3C];
    /* 0x1EF0 */ s32 counter_1EF0;
    u8 pad_1EF4[0x1F00 - 0x1EF4];
    /* 0x1F00 */ f32 unk_1F00;
    u8 pad_1F04[0x1F20 - 0x1F04];
    /* 0x1F20 */ f32 unk_1F20;
    /* 0x1F24 */ f32 unk_1F24;
    /* 0x1F28 */ f32 unk_1F28;
} Obj_0035F5D0;

f32 fabsf(f32 x);

typedef struct Obj_0035FAD0 {
    u8 pad_0[0x998];
    /* 0x998 */ f32 unk_998;
    u8 pad_99C[0xD58 - 0x99C];
    /* 0xD58 */ f32 unk_D58;
    u8 pad_D5C[0xF38 - 0xD5C];
    /* 0xF38 */ f32 unk_F38;
    u8 pad_F3C[0x1028 - 0xF3C];
    /* 0x1028 */ f32 unk_1028;
    u8 pad_102C[0x1208 - 0x102C];
    /* 0x1208 */ f32 unk_1208;
    u8 pad_120C[0x12F8 - 0x120C];
    /* 0x12F8 */ f32 unk_12F8;
    u8 pad_12FC[0x6090 - 0x12FC];
    /* 0x6090 */ s32 counter_6090;
    u8 pad_6094[0x60A0 - 0x6094];
    /* 0x60A0 */ f32 unk_60A0;
    /* 0x60A4 */ f32 unk_60A4;
    u8 pad_60A8[0x60C8 - 0x60A8];
    /* 0x60C8 */ f32 unk_60C8;
    u8 pad_60CC[0x6450 - 0x60CC];
    /* 0x6450 */ s32 counter_6450;
    u8 pad_6454[0x6460 - 0x6454];
    /* 0x6460 */ f32 unk_6460;
    /* 0x6464 */ f32 unk_6464;
    u8 pad_6468[0x6488 - 0x6468];
    /* 0x6488 */ f32 unk_6488;
    u8 pad_648C[0x6540 - 0x648C];
    /* 0x6540 */ s32 counter_6540;
    u8 pad_6544[0x6550 - 0x6544];
    /* 0x6550 */ f32 unk_6550;
    /* 0x6554 */ f32 unk_6554;
    u8 pad_6558[0x6578 - 0x6558];
    /* 0x6578 */ f32 unk_6578;
    u8 pad_657C[0x6630 - 0x657C];
    /* 0x6630 */ s32 counter_6630;
    u8 pad_6634[0x6640 - 0x6634];
    /* 0x6640 */ f32 unk_6640;
    /* 0x6644 */ f32 unk_6644;
    u8 pad_6648[0x6668 - 0x6648];
    /* 0x6668 */ f32 unk_6668;
    u8 pad_666C[0xBD60 - 0x666C];
    /* 0xBD60 */ s32 counter_BD60;
    u8 pad_BD64[0xBD98 - 0xBD64];
    /* 0xBD98 */ f32 unk_BD98;
    u8 pad_BD9C[0xBE50 - 0xBD9C];
    /* 0xBE50 */ s32 counter_BE50;
    u8 pad_BE54[0xBE88 - 0xBE54];
    /* 0xBE88 */ f32 unk_BE88;
} Obj_0035FAD0;

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035B870", func_0035B870);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035B870", func_0035B940);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035B870", func_0035BF60);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035B870", func_0035CA60);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035B870", func_0035CE90);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035B870", func_0035D660);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035B870", func_0035DA90);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035B870", func_0035E450);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035B870", func_0035E880);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035B870", func_0035F1A0);

/* Two parallel updates, each run only while its counter is non-zero: a value
   from the summed magnitudes of two source floats, kept within -0.68..0.68,
   then three quotients of the source floats. */
void func_0035F5D0(Obj_0035F5D0 *o)
{
    if (o->counter_1E00 != 0) {
        if ((fabsf(o->unk_F34) + fabsf(o->unk_F38)) / 300.0f <= -0.68f)
            o->unk_1E10 = -0.68f;
        else
            o->unk_1E10 = (fabsf(o->unk_F34) + fabsf(o->unk_F38)) / 300.0f - 0.68f;
        if (o->unk_1E10 > 0.68f)
            o->unk_1E10 = 0.68f;
        o->unk_1E38 = o->unk_F38 / 2.0f;
        o->unk_1E30 = o->unk_F30 / 3.0f;
        o->unk_1E34 = o->unk_F34 / 2.0f;
        o->counter_1E00++;
    }
    if (o->counter_1EF0 != 0) {
        if ((fabsf(o->unk_1204) + fabsf(o->unk_1208)) / 300.0f <= -0.68f)
            o->unk_1F00 = -0.68f;
        else
            o->unk_1F00 = (fabsf(o->unk_1204) + fabsf(o->unk_1208)) / 300.0f - 0.68f;
        if (o->unk_1F00 > 0.68f)
            o->unk_1F00 = 0.68f;
        o->unk_1F20 = o->unk_1200 / 3.0f;
        o->unk_1F24 = o->unk_1204 / 2.0f;
        o->unk_1F28 = o->unk_1208 / 2.0f;
        o->counter_1EF0++;
    }
}

/* Six parallel updates, each run only while its counter is non-zero: four
   offset values with two quotients each, then two quotients of a source
   float that are held at zero while that float is not positive. */
void func_0035F810(Obj_0035FAD0 *o)
{
    if (o->counter_6090 != 0) {
        o->unk_60A0 = 2.76f + o->unk_998 / -500.0f;
        o->unk_60A4 = o->unk_998 / 700.0f;
        o->unk_60C8 = o->unk_998 / 1.7f;
        o->counter_6090++;
    }
    if (o->counter_6450 != 0) {
        o->unk_6460 = 2.76f + o->unk_D58 / -500.0f;
        o->unk_6464 = o->unk_D58 / 700.0f;
        o->unk_6488 = o->unk_D58 / 1.7f;
        o->counter_6450++;
    }
    if (o->counter_6540 != 0) {
        o->unk_6550 = 4.487f + o->unk_1028 / 350.0f;
        o->unk_6554 = o->unk_1028 / 700.0f;
        o->unk_6578 = o->unk_1028 / 2.0f;
        o->counter_6540++;
    }
    if (o->counter_6630 != 0) {
        o->unk_6640 = 4.487f + o->unk_12F8 / 350.0f;
        o->unk_6644 = o->unk_12F8 / 700.0f;
        o->unk_6668 = o->unk_12F8 / 2.0f;
        o->counter_6630++;
    }
    if (o->counter_BD60 != 0) {
        if (o->unk_F38 <= 0.0f)
            o->unk_BD98 = 0.0f;
        else
            o->unk_BD98 = o->unk_F38 / -1.1f;
        o->counter_BD60++;
    }
    if (o->counter_BE50 != 0) {
        if (o->unk_1208 <= 0.0f)
            o->unk_BE88 = 0.0f;
        else
            o->unk_BE88 = o->unk_1208 / -1.1f;
        o->counter_BE50++;
    }
}

/* Four parallel updates, each run only while its counter is non-zero: an
   offset value scaled from one source float, then two quotients of it. */
void func_0035FAD0(Obj_0035FAD0 *o)
{
    if (o->counter_6090 != 0) {
        o->unk_60A0 = 2.76f + o->unk_998 / -500.0f;
        o->unk_60A4 = o->unk_998 / 700.0f;
        o->unk_60C8 = o->unk_998 / 1.7f;
        o->counter_6090++;
    }
    if (o->counter_6450 != 0) {
        o->unk_6460 = 2.76f + o->unk_D58 / -500.0f;
        o->unk_6464 = o->unk_D58 / 700.0f;
        o->unk_6488 = o->unk_D58 / 1.7f;
        o->counter_6450++;
    }
    if (o->counter_6540 != 0) {
        o->unk_6550 = 4.487f + o->unk_1028 / 350.0f;
        o->unk_6554 = o->unk_1028 / 700.0f;
        o->unk_6578 = o->unk_1028 / 2.0f;
        o->counter_6540++;
    }
    if (o->counter_6630 != 0) {
        o->unk_6640 = 4.487f + o->unk_12F8 / 350.0f;
        o->unk_6644 = o->unk_12F8 / 700.0f;
        o->unk_6668 = o->unk_12F8 / 2.0f;
        o->counter_6630++;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035B870", func_0035FC90);
