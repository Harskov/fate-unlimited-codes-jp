typedef struct Slot {
    int unk_0;
    int unk_4;
    int unk_8;
    int unk_C;
    int unk_10;
    int unk_14;
} Slot;

typedef struct Root {
    unsigned char unk_0[0xE8];
    Slot slots[16];
} Root;

extern Root D_0051D890;

void func_001A3800(int i, int v)
{
    D_0051D890.slots[i].unk_0 = v;
}
