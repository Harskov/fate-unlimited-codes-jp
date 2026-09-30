#ifndef GAME_00_TBL_0051E444_H
#define GAME_00_TBL_0051E444_H
/* The object pointer table at D_0051E444. func_00166F60 and func_0019AE60 both read
   entry 0 and, when it is set, return the word at +0x334 of the object it points to;
   when it is null they return D_00524798[0] instead. Both functions reach the same
   object through the same table entry, so they share this one layout. */
typedef struct Obj0051E444 {
    unsigned char unk_0[0x334];
    int unk_334;
} Obj0051E444;

extern Obj0051E444 *D_0051E444[];
extern int D_00524798[];
#endif
