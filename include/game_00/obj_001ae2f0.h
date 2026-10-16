#ifndef GAME_00_OBJ_001AE2F0_H
#define GAME_00_OBJ_001AE2F0_H

/* The elements of Obj_001AE2F0.field_44[] are objects in their own right; func_001AE2F0
 * reads one int out of one at +0x38. */
typedef struct Node {
    unsigned char pad[0x38];
    int field_38;
} Node;

typedef struct Obj_001AE2F0_2 {
    /* 0x00 */ int field_0;
    /* 0x04 */ int field_4;
    /* 0x08 */ int field_8;
    /* 0x0C */ float field_C;
    /* 0x10 */ int field_10;
    /* 0x14 */ int field_14;
    /* 0x18 */ int field_18;
    /* 0x1C */ int field_1C;
    /* 0x20 */ int field_20;
    /* 0x24 */ char field_24[8];
    /* 0x2C */ char field_2C[8];
    /* 0x34 */ unsigned char pad[0x8];
    /* 0x3C */ int field_3C;
} Obj_001AE2F0_2;

typedef struct Obj_001AD300 {
    u8 pad_0[0x38];
    int field_38;
} Obj_001AD300;

/* func_0023E280 passes the same object to func_001AE4D0, which fills field_44[], to
 * func_001AE2F0, which reads it, and to func_001AB330 and func_001AE7D0, which hand
 * field_3C on. */
typedef struct Obj_001AE2F0 {
    unsigned char pad[0xC];
    int field_C;
    unsigned char pad_10[0x2C];
    Obj_001AD300 *field_3C;
    unsigned char pad_40[4];
    Node *field_44[0x40];
    void *field_144[8];
    void *field_164[8];
    /* 0x184 */ Obj_001AE2F0_2 unk_184;
    unsigned char pad3[0x53C - 0x184 - sizeof(Obj_001AE2F0_2)];
    int field_53C;
    unsigned char pad4[0x5C0 - 0x53C - 4];
    float field_5C0;
} Obj_001AE2F0;

#endif
