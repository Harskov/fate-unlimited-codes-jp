#ifndef GAME_00_OBJ2524_H
#define GAME_00_OBJ2524_H
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
   agrees with this layout, so neither is typed here. */
typedef struct Obj53C {
    unsigned char unk_0[0x53C];
    int unk_53C;
} Obj53C;

typedef struct Sub2524 {
    int unk_0;
    int unk_4;
} Sub2524;

typedef struct Cache2448 {
    unsigned char unk_0[0x10];
    struct Obj53C *unk_10;
} Cache2448;

typedef struct Obj2524 {
    unsigned char unk_0[0xC];
    int unk_C;
    unsigned char unk_10[0x2448 - 0x10];
    Cache2448 *unk_2448;
    unsigned char unk_244C[0x2508 - 0x2448 - 4];
    Obj53C *unk_2508;
    unsigned char unk_250C[0x2524 - 0x2508 - 4];
    Sub2524 sub;
} Obj2524;
#endif
