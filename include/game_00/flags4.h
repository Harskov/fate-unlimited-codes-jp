#ifndef GAME_00_FLAGS4_H
#define GAME_00_FLAGS4_H
/* The flag word at +0x4 tested by func_001BBC20, func_001BBC50 and func_001BBC80:
   each loads it once and returns 1 when bits 0x1 and 0x2 are both set. */
typedef struct Flags4 {
    int unk_0;
    int unk_4;
} Flags4;
#endif
