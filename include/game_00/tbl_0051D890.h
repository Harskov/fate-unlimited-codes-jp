#ifndef GAME_00_TBL_0051D890_H
#define GAME_00_TBL_0051D890_H
/* The 0x18-byte record array based at D_0051D890.
   Stride: every accessor scales its index by 0x18 (`sll 1; addu; sll 3`).
   Base: the target forms the bare symbol and leaves the field offset in the load/store
   operand (`addiu $v1, $v1, %lo(D_0051D890); addu $v1, $v1, i*0x18; sw $a1, 0xE8($v1)`),
   so the source formed the element pointer first and applied a constant step through it;
   writing the step into the index or into a struct member at +0xE8 folds the constant
   into the relocation and scores 98.6 (K1 6.9, remediation 7, func_001A3800).
   The seven accessors therefore reach records i+9 and i+10: +0xE8 = 9*0x18 + 0x10,
   +0xEC = 9*0x18 + 0x14, +0xF0 = 10*0x18 + 0x0, +0xF4 = 10*0x18 + 0x4.
   unk_0 of record 0 is a flag mask: func_0015AA40 sets bit 0x20 into it and clears it
   again at 0x0015AB20 (`ori 0x20` / `and -0x21` around `%lo(D_0051D890)`), func_001A3890
   tests bit 0x400000 and func_0019A9A0 bit 0x02000000.
   What the record array counts from and why the accessors' step is 9 records is not
   settled; that needs a function that walks the array rather than indexing it. */
typedef struct Rec0051D890 {
    int unk_0;
    int unk_4;
    unsigned char unk_8[0x8];
    int unk_10;
    int unk_14;
} Rec0051D890;

extern Rec0051D890 D_0051D890[];
#endif
