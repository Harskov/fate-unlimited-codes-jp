#ifndef GAME_00_ADXOWNER_H
#define GAME_00_ADXOWNER_H
#include "types.h"
/* The object whose +0x34 pointer is handed to the CRI ADX library, agreed by
   func_0021DF20 (passes it to func_0013B9C8) and func_0021F320 (passes it to
   func_0013AA00); func_0021F190 passes the same field to func_0013B9C8 and
   func_0013B038. */
typedef struct AdxOwner {
    u8 pad0[0x34];
    void *unk34;
} AdxOwner;
#endif
