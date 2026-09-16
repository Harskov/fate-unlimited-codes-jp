#ifndef GAME_00_TBL_0051D890_H
#define GAME_00_TBL_0051D890_H
/* Layout of the table based at D_0051D890, agreed by func_001A3790, func_001A37B0,
   func_001A37D0, func_001A3800 and func_001A3820: the index is scaled by 0x18 and the
   accessed fields sit at +0xE8..+0xF4 of the resulting address (run 006 note on
   func_001A3800). No evidence-based name yet; see the ledger notes on those functions. */
typedef struct Rec0051D890 {
    unsigned char unk_0[0x18];
} Rec0051D890;

typedef struct Ent0051D890 {
    unsigned char unk_0[0xE8];
    int unk_E8;
    int unk_EC;
    int unk_F0;
    int unk_F4;
} Ent0051D890;

extern Rec0051D890 D_0051D890[];
#endif
