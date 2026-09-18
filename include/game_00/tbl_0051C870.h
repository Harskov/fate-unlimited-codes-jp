#ifndef GAME_00_TBL_0051C870_H
#define GAME_00_TBL_0051C870_H
/* The 10-entry, 8-byte slot table based at D_0051C870, agreed by func_0019D0B0,
   func_0019D6A0 and func_0019D6E0: a used flag at +0x0 and the owner pointer at +0x4.
   func_0019D6E0 walks the table for the first entry whose used word is 0, sets it to 1,
   stores its caller's pointer in the owner word and writes the index back through that
   pointer; func_0019D6A0 clears both words of the entry that index names; func_0019D0B0
   range-checks 0..9 and returns the owner word. The bound 10 is the loop limit of
   func_0019D6E0 and the range check of func_0019D0B0.
   The two words are addressed through their own symbols: func_0019D6E0 materializes
   %hi/%lo(D_0051C870) and %hi/%lo(D_0051C874) separately and adds the same i*8 to each,
   which is what makes the relocations match (as for D_00528A08/D_00528A10). */
typedef struct Slot0051C870 {
    int used;
    int *owner;
} Slot0051C870;

/* the owner column, addressed through its own symbol */
typedef struct Own0051C874 {
    int *owner;
    int pad_4;
} Own0051C874;

extern Slot0051C870 D_0051C870[];
extern Own0051C874 D_0051C874[];
#endif
