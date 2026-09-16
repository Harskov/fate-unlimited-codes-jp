#ifndef GAME_00_TBL_00528A00_H
#define GAME_00_TBL_00528A00_H
/* The 12-entry, two-sided table based at D_00528A00, agreed by func_001766A0 and
   func_00176740: a record of stride 0x18 holding used[side] at +0x0, unk_8[side] at
   +0x8 and id[side] at +0x10, with the parallel rows D_00528A08 and D_00528A10
   addressed through their own symbols (that is what makes the relocations match). */
typedef struct Slot00528A00 {
    int used[2];
    int unk_8[2];
    int id[2];
} Slot00528A00;

typedef struct Row00528A00 {
    int v[2];
    int pad[4];
} Row00528A00;

extern Slot00528A00 D_00528A00[];
extern Row00528A00 D_00528A08[];
extern Row00528A00 D_00528A10[];
#endif
