#ifndef GAME_00_UNIT_002240B0_H
#define GAME_00_UNIT_002240B0_H
/* Declared once for the opcode handlers func_00225730 (float) and func_00227080 (integer), which sit in two units. */

typedef struct Obj_002240B0 {
    u8 unk_0[0x8];
    s32 unk_8;
    u8 unk_C[0x50];
    s32 unk_5C;
} Obj_002240B0;

typedef struct Obj_00225720 {
    u8 unk_0[0xC];
    Obj_002240B0 *unk_C;
} Obj_00225720;

typedef struct Obj_00225730 {
    /* 0x00 */ u8 unk_0[0x54];
    /* 0x54 */ s32 unk_54;
} Obj_00225730;

/* an operand slot: the opcodes read and write it as a float, an integer or a halfword */
typedef union Sub_00225730 {
    /* 0x00 */ f32 f0;
    /* 0x00 */ s32 i0;
    /* 0x00 */ s16 h0;
} Sub_00225730;

void func_00223240();

u32 *func_00223250(void *arg0, Obj_00225730 *arg1, Sub_00225730 **dst, Sub_00225730 **src, u32 *pc);

u32 *func_002235A0(void *arg0, Obj_00225730 *arg1, Sub_00225730 **out, u32 *pc);

void func_00223860(void *arg0, char *str);

#endif
