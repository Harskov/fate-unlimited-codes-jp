#ifndef GAME_00_OBJ2524_H
#define GAME_00_OBJ2524_H
#include "game_00/arr220.h"
/* The object the func_001BB* predicate family tests, agreed by func_001BB140,
   func_001BB220, func_001BB270, func_001BB2B0, func_001BB3C0, func_001BB5B0,
   func_001BB690 and func_001BB6D0: every one of them rejects a null argument,
   compares the int at +0xC against a constant, and then reads either the object
   pointed to from +0x2508 or the pair at +0x2524. func_001AB770 reaches +0x2448
   and +0x2508 of the same object and extends the struct with unk_2448.

   unk_2508 is typed Obj53C * because func_001BB220 and func_001BB3C0 load it and
   dereference it at +0x53C; func_001AB770 stores its second argument there and in
   unk_2448->unk_10, so that argument is the same pointer.

   Unconfirmed: func_001AE2F0 and func_001B13C0 each read an int at +0x53C of their
   own argument, which would make it an Obj53C, but no second offset of either
   agrees with this layout, so neither is typed here.

   Run 2026-09-23-016 extended the layout from func_001BB710 (sub220 at +0x220,
   the Sub220 of arr220.h, read at +0xA), func_001BB7A0 (flags at +0x1F4),
   func_001BB890 (+0x3C, and the list at +0x23E8 of the Obj53C), and
   func_001BB7F0 / func_001BB840 (the member struct at +0x14C of unk_2448). */
typedef struct Item150 {
    unsigned char unk_0[0x150];
    int unk_150;
} Item150;

typedef struct Node23E8 {
    Item150 *unk_0;
    int unk_4;
    struct Node23E8 *unk_8;
} Node23E8;

typedef struct Obj53C {
    unsigned char unk_0[0x53C];
    int unk_53C;
    unsigned char unk_540[0x23E8 - 0x540];
    Node23E8 *unk_23E8;
} Obj53C;

typedef struct Sub2524 {
    int unk_0;
    int unk_4;
} Sub2524;

typedef struct Sub14C {
    unsigned char unk_0[0x1C];
    float unk_1C;
    unsigned char unk_20[0x6C - 0x20];
    float unk_6C;
    unsigned char unk_70[0x7C - 0x70];
    float unk_7C;
} Sub14C;

typedef struct Cache2448 {
    unsigned char unk_0[0x10];
    struct Obj53C *unk_10;
    unsigned char unk_14[0x14C - 0x14];
    Sub14C sub14C;
} Cache2448;

typedef struct Obj2524 {
    unsigned char unk_0[0xC];
    int unk_C;
    unsigned char unk_10[0x3C - 0x10];
    int unk_3C;
    unsigned char unk_40[0x1F4 - 0x40];
    int unk_1F4;
    unsigned char unk_1F8[0x220 - 0x1F8];
    Sub220 sub220;
    unsigned char unk_230[0x2448 - 0x230];
    Cache2448 *unk_2448;
    unsigned char unk_244C[0x2508 - 0x2448 - 4];
    Obj53C *unk_2508;
    unsigned char unk_250C[0x2524 - 0x2508 - 4];
    Sub2524 sub;
} Obj2524;
#endif
