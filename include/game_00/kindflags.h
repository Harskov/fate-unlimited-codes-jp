#ifndef GAME_00_KINDFLAGS_H
#define GAME_00_KINDFLAGS_H
/* An object whose first word selects a variant and whose second word is a flag set.
   func_001A6300, func_001AA180 and func_001AA2A0 each switch on the word at +0x0
   (values 1, 2, 3) and pass the object to a per-variant function that tests, clears or
   sets bits 0x1 and 0x2 of the word at +0x4. func_001CBA10 passes one pointer to both
   func_001A6300 and func_001AA2A0 and updates +0x4 of it itself, so the variants in
   unit_001A5D70 and unit_001AA110 work on the same object. */
typedef struct KindFlags {
    int kind;
    unsigned int flags;
} KindFlags;
#endif
