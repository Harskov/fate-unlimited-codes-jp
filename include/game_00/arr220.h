#ifndef GAME_00_ARR220_H
#define GAME_00_ARR220_H
/* The counted 28-byte-element array embedded at +0x220 of its owner, agreed by
   func_001A4960, func_001A49A0 and func_001A5450: unk_0 at +0x0, base at +0x4,
   count at +0x8, index at +0xA and cur at +0xC. */
typedef struct Elem220 {
    unsigned char unk_0[0x18];
    int unk_18;
} Elem220;

typedef struct Sub220 {
    int unk_0;
    unsigned char *base;
    short count;
    short index;
    unsigned char *cur;
} Sub220;

typedef struct Arr220 {
    unsigned char unk_0[0x220];
    Sub220 sub;
} Arr220;
#endif
