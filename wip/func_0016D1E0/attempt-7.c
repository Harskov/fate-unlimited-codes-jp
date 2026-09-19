typedef unsigned int u32;

typedef struct Entry {
    unsigned char pad_0[0x8];
    struct EntryList *list;
} Entry;

typedef struct EntryList {
    unsigned char pad_0[0x38];
    u32 count;
    Entry *entries[];
} EntryList;

typedef struct Root {
    unsigned char pad_0[0xC];
    u32 count;
    Entry *entries;
} Root;

Entry *func_0016D1E0(Root *r, u32 i, u32 j)
{
    Entry *e;
    EntryList *list;

    if (i >= r->count)
        i = 0;
    e = r->entries + i;
    list = e->list;
    if (j >= list->count)
        j = 0;
    return list->entries[j];
}
