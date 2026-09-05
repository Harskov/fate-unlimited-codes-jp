/* calibration candidate func_001175A8: six guarded stores through pointer fields */
typedef struct Item { unsigned char pad[0x28]; int f28; } Item;
typedef struct Table {
    unsigned char pad0[0x1C8];
    Item *f1C8; Item *f1CC;
    unsigned char pad1[0x8];
    Item *f1D8; Item *f1DC;
    unsigned char pad2[0x8];
    Item *f1E8; Item *f1EC;
} Table;
typedef struct Owner { unsigned char pad[0x40]; Table *tbl; } Owner;

int func_001175A8(Owner *o)
{
    Table *t = o->tbl;
    if (t->f1C8) t->f1C8->f28 = 0;
    if (t->f1D8) t->f1D8->f28 = 0;
    if (t->f1E8) t->f1E8->f28 = 0;
    if (t->f1CC) t->f1CC->f28 = 0;
    if (t->f1DC) t->f1DC->f28 = 0;
    if (t->f1EC) t->f1EC->f28 = 0;
    return 1;
}
