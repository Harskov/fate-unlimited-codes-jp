typedef unsigned int u32;

typedef struct Root {
    unsigned char pad_0[0xC];
    u32 count;
    u32 *table;
} Root;

typedef struct Entry {
    unsigned char pad_0[0x8];
    u32 *list;
} Entry;

u32 *func_0016D1E0(Root *r, u32 i, u32 j)
{
    u32 *t;

    if (i >= r->count)
        i = 0;
    t = ((Entry *)(r->table + i))->list;
    if (j >= t[0xE])
        j = 0;
    return &t[j * 0x84];
}
