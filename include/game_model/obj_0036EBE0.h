#ifndef GAME_MODEL_OBJ_0036EBE0_H
#define GAME_MODEL_OBJ_0036EBE0_H

typedef struct Obj_0036EBE0_B {
    /* 0x00 */ u8 pad_0[0x3C];
    /* 0x3C */ s32 unk_3C;
} Obj_0036EBE0_B;

/* the first argument every caller in game_model hands on to func_0036DC20, with its
 * unk_4->unk_3C as the third */
typedef struct Obj_0036EBE0_A {
    /* 0x00 */ u8 pad_0[4];
    /* 0x04 */ Obj_0036EBE0_B *unk_4;
} Obj_0036EBE0_A;

#endif
