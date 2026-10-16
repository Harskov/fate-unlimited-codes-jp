#ifndef GAME_00_TBL_0051C858_H
#define GAME_00_TBL_0051C858_H
/* The per-index object lists reached through D_0051C858, agreed by func_001A3E30 and
   func_001A3EA0. The node payload differs between the two walkers (different fields of
   the same object are tested), so Node0051C858.obj stays untyped and each source casts
   it to its own view. */
typedef struct Node0051C858 {
    /* 0x00 */ void *unk_0;
    unsigned char unk_4[8];
    struct Node0051C858 *next;
} Node0051C858;

typedef struct Entry0051C858 {
    unsigned char unk_0[0xC];
    /* 0x0C */ Node0051C858 *unk_C;
} Entry0051C858;

typedef struct Ctx0051C858 {
    unsigned char unk_0[8];
    /* 0x08 */ int unk_8;
} Ctx0051C858;

extern Entry0051C858 *D_0051C858[];
#endif
