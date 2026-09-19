typedef unsigned int u32;

typedef struct Table {
    unsigned char pad[0x38];
    u32 count;
} Table;

typedef struct Entry {
    u32 pad_0;
    u32 pad_4;
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
    t = (Table *)e->table->pad;
    if (j >= t->count)
        j = 0;
    return ((void **)t)[j];
}
