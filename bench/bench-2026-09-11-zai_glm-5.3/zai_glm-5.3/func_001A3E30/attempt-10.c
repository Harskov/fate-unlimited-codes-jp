typedef struct Item {
    unsigned char unk_0[0x1F0];
    unsigned int unk_1F0;
    unsigned char unk_1F4[0x24C0 - 0x1F4];
    int unk_24C0;
} Item;

typedef struct Link {
    Item *item;
    unsigned char unk_4[0x8];
    struct Link *next;
} Link;

typedef struct Holder {
    unsigned char unk_0[0x8];
    int idx;
} Holder;

extern Link *D_0051C858[];

int func_001A3E30(Holder *h)
{
    Link *p;
    Item *it;

    p = D_0051C858[h->idx]->next;
    while (p != 0) {
        it = p->item;
        if (it->unk_1F0 & 0x10)
            return 0;
        if (it->unk_24C0 > 0)
            return 0;
        p = p->next;
    }
    return 1;
}
