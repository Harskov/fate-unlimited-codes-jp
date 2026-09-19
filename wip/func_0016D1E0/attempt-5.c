typedef unsigned int u32;

typedef struct Table {
    unsigned char pad[0x38];
    u32 count;
    void *items[];
} Table;

typedef struct Entry {
    unsigned char pad[0x8];
    Table *table;
} Entry;

typedef struct Root {
    unsigned char pad[0xC];
    u32 count;
    Entry *entries;
} Root;

void *func_0016D1E0(Root *r, u32 i, u32 j)
{
    Entry *e;
    Table *t;

    if (i >= r->count)
        i = 0;
    e = r->entries + i;
    t = e->table;
    if (j >= t->count)
        j = 0;
    return t->items[j];
}
