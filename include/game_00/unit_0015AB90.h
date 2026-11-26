#ifndef GAME_00_UNIT_0015AB90_H
#define GAME_00_UNIT_0015AB90_H

typedef struct Rec0051A424 {
    /* 0x00 */ s32 flags;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ s32 unk_C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 pad_18[8];
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ u8 pad_24[0xC];
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
} Rec0051A424;

extern Rec0051A424 D_0051A420[4];

Rec0051A424 *func_0015BB20(s32 arg0);

void func_0015AF90(s32 i, s32 arg1);
s32 func_0015ACE0(s32 arg0, s32 arg1);

#endif
