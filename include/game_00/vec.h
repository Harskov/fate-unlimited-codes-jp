#ifndef GAME_00_VEC_H
#define GAME_00_VEC_H
/* The two float vector layouts of the game_00 math helpers.

   Vec4 is the four-float record of func_0016CFD0, func_0016D000, func_0016D070,
   func_0016D0B0, func_0016E8F0, func_0016E9E0, func_0016F680, func_0016F6D0,
   Vec4_GetW and Vec4_GetZ. Some of them leave the fourth float alone
   (func_0016CFD0, func_0016E8F0, func_0016E9E0); all read the same offsets, so it
   is one type.

   Vec3 is the three-float record of func_0017A670, func_001A2E20 and
   func_001B6F00, a layout distinct from Vec4; its members keep their offset names. */
typedef struct Vec4 {
    /* 0x00 */ float x;
    /* 0x04 */ float y;
    /* 0x08 */ float z;
    /* 0x0C */ float w;
} Vec4;

typedef struct Vec3 {
    /* 0x00 */ float unk_0;
    /* 0x04 */ float unk_4;
    /* 0x08 */ float unk_8;
} Vec3;
#endif
