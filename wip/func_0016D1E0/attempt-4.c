typedef unsigned int u32;

typedef struct Entry {
    unsigned char pad[0x8];
    struct Entry **sub;
} Entry;

typedef struct Root {
    unsigned char pad[0xC];
    u32 count;
    Entry *entries;
} Root;

void *func_0016D1E0(Root *r, u32 i, u32 j)
{
    Entry *e;
    Entry **arr;

    if (i >= r->count)
        i = 0;
    e = r->entries + i;
    if (j >= e->sub[0x38 / 4])
        j = 0;
    arr = e->sub;
    return arr[j];
}
