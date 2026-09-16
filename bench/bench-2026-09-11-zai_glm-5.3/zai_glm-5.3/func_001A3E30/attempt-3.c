typedef struct Holder {
    unsigned char unk_0[0x8];
    int idx;
} Holder;

typedef struct Item {
    unsigned char unk_0[0x1F0];
    u32 unk_1F0;
    unsigned char unk_1F4[0x24C0 - 0x1F4];
    s32 unk_24C0;
} Item;

typedef struct Link {
    struct Item *item;
    unsigned char unk_4[0x8];
    struct Link *next;
} Link;

extern Link *D_0051C858[];

int func_001A3E30(Holder *a)
{
    Link *p = D_0051C858[a->idx]->next;
    while (p != 0) {
        Item *it = p->item;
        if (!(it->unk_1F0 & 0x10)) {
            if (it->unk_24C0 > 0)
                return 0;
            p = p->next;
        } else {
            return 0;
        }
    }
    return 1;
}
