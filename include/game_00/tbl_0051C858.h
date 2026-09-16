#ifndef GAME_00_TBL_0051C858_H
#define GAME_00_TBL_0051C858_H
/* The per-index object lists reached through D_0051C858, agreed by func_001A3E30 and
   func_001A3EA0. The node payload differs between the two walkers (different fields of
   the same object are tested), so Node0051C858.obj stays untyped and each source casts
   it to its own view. */
typedef struct Node0051C858 {
    void *obj;
    unsigned char unk_4[8];
    struct Node0051C858 *next;
} Node0051C858;

typedef struct Entry0051C858 {
    unsigned char unk_0[0xC];
    Node0051C858 *list;
} Entry0051C858;

typedef struct Ctx0051C858 {
    unsigned char unk_0[8];
    int index;
} Ctx0051C858;

extern Entry0051C858 *D_0051C858[];
#endif
