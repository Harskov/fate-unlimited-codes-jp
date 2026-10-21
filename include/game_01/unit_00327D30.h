#ifndef GAME_01_UNIT_00327D30_H
#define GAME_01_UNIT_00327D30_H

typedef struct Obj_00328250 {
    u8 unk_0[0x4];
    /* 0x04 */ s32 unk_4;
    u8 unk_8[0x14];
    /* 0x1C */ s32 unk_1C;
    u8 unk_20[0x8];
    /* 0x28 */ s32 unk_28;
    u8 unk_2C[0x28];
    /* 0x54 */ s32 unk_54;
    u8 unk_58[0x14];
    /* 0x6C */ s32 unk_6C;
    u8 unk_70[0x10];
    /* 0x80 */ s32 unk_80;
    u8 unk_84[0x14];
    /* 0x98 */ s32 unk_98;
    u8 unk_9C[0x10];
    /* 0xAC */ s32 unk_AC;
    u8 unk_B0[0x14];
    /* 0xC4 */ s32 unk_C4;
    u8 unk_C8[0x10];
    /* 0xD8 */ s32 unk_D8;
    u8 unk_DC[0x14];
    /* 0xF0 */ f32 unk_F0;
    u8 unk_F4[0x4];
    /* 0xF8 */ s32 unk_F8;
    u8 unk_FC[0x14];
    /* 0x110 */ f32 unk_110;
    u8 unk_114[0x4];
    /* 0x118 */ s32 unk_118;
    u8 unk_11C[0x14];
    /* 0x130 */ f32 unk_130;
    u8 unk_134[0x4];
    /* 0x138 */ s32 unk_138;
    /* 0x13C */ s32 unk_13C;
    u8 unk_140[0x14];
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ s32 unk_158;
    u8 unk_15C[0x14];
    /* 0x170 */ s32 unk_170;
    /* 0x174 */ s32 unk_174;
    u8 unk_178[0x14];
    /* 0x18C */ s32 unk_18C;
    u8 unk_190[0x1C];
    /* 0x1AC */ s32 unk_1AC;
    u8 unk_1B0[0x1C];
    /* 0x1CC */ s32 unk_1CC;
    u8 unk_1D0[0x40];
    /* 0x210 */ s32 unk_210;
    u8 unk_214[0x24];
    /* 0x238 */ s32 unk_238;
    u8 unk_23C[0x24];
    /* 0x260 */ s32 unk_260;
    u8 unk_264[0x24];
    /* 0x288 */ s32 unk_288;
    u8 unk_28C[0x44];
    /* 0x2D0 */ s32 unk_2D0;
    u8 unk_2D4[0x9C];
} Obj_00328250;

/* clears the 0x370-byte record and sets its -1 defaults */
void func_00328250(Obj_00328250 *arg0);

#endif
