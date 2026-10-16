#ifndef GAME_00_TBL_00522E90_H
#define GAME_00_TBL_00522E90_H
/* The 0x64-byte records at D_00522E90. func_0019D4E0 sets or clears bit 8 of the
   halfword at +0 in the record its argument's +4 selects; func_00176140 returns the
   base for its case 35. */
typedef struct Rec00522E90 {
    /* 0x00 */ short unk_0;
    unsigned char unk_2[0x62];
} Rec00522E90;

extern Rec00522E90 D_00522E90[];
#endif
