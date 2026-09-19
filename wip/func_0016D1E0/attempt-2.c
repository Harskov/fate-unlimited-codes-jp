typedef unsigned int u32;

typedef struct Sub {
    unsigned char pad[0x38];
    u32 count;
} Sub;

typedef struct Entry {
    unsigned char pad[0x8];
    Sub *sub;
} Entry;

typedef struct Root {
    unsigned char pad[0xC];
    u32 count;
    Entry *entries;
} Root;

Sub *func_0016D1E0(Root *r, u32 i, u32 j)
{
    Sub *s;

    if (i >= r->count)
        i = 0;
    s = r->entries[i].sub;
    if (j >= s->count)
        j = 0;
    return s + j;
}
