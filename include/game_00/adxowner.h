#ifndef GAME_00_ADXOWNER_H
#define GAME_00_ADXOWNER_H
#include "types.h"
/* The object whose +0x34 pointer is handed to the CRI ADX library, agreed by
   func_0021DF20 (passes it to func_0013B9C8) and func_0021F320 (passes it to
   func_0013AA00); func_0021F190 passes the same field to func_0013B9C8 and
   func_0013B038; func_0021F390 stores it from func_0013A188 or func_0013A7D0. */
typedef struct Obj38 {
    /* 0x00 */ u8 pad_0[4];
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ u8 pad_8[0x2C];
    /* 0x34 */ void *unk_34;
} Obj38;
#endif
