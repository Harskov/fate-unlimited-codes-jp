#ifndef GAME_00_TBL_00531B60_H
#define GAME_00_TBL_00531B60_H
/* The 0x74-byte entries at D_00531B60. func_0019CB40 tests the first two entries and
   func_00176140 returns the base for its case 42. What an entry holds is not known yet. */
typedef struct Ent00531B60 {
    unsigned char unk_0[0x3C];
    int unk_3C;
    int unk_40[4];
    unsigned char unk_50[0x24];
} Ent00531B60;

extern Ent00531B60 D_00531B60[];
#endif
