#ifndef GAME_00_UNIT_0020C4F0_H
#define GAME_00_UNIT_0020C4F0_H
#include "game_00/vec.h"

typedef struct Obj_0020CE80 {
    u8 pad[0x10];
    s32 unk_10;
    u8 pad_14[0xC];
    /* 0x20 */ Vec4 unk_20;
    s32 unk_30;
} Obj_0020CE80;

/* the vector at +0x20; func_001E5860 reads its x, y and z */
Vec4 *func_0020CE90(Obj_0020CE80 *o);

#endif
