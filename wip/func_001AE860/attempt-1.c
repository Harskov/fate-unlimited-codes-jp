typedef struct Sub001AE860 {
    unsigned char unk_0[2];
    unsigned char flags;
    unsigned char unk_3;
} Sub001AE860;

typedef struct Item001AE860 {
    int mask;
    short id;
    unsigned char unk_6[6];
    Sub001AE860 *sub;
    unsigned char unk_10[4];
} Item001AE860;

typedef struct Group001AE860 {
    unsigned char unk_0[0x19C];
    int count;
    Item001AE860 *items;
} Group001AE860;

typedef struct Ctx001AE860 {
    unsigned char unk_0[0x3C];
    Group001AE860 *group;
} Ctx001AE860;

void func_001AE860(Ctx001AE860 *c, int id, int on, int mask, int keep)
{
    Item001AE860 *it;
    Sub001AE860 *s;
    unsigned char f;
    int i;

    it = c->group->items;
    if (it == 0)
        return;

    for (i = 0; i < c->group->count; i++, it++) {
        if ((mask & it->mask) != 0) {
            s = it->sub;
            f = s->flags;
            if (id == it->id) {
                if (on != 0) {
                    f |= 4;
                } else {
                    f &= ~4;
                }
            } else if (keep == 0) {
                f &= ~4;
            }
            s->flags = f;
        }
    }
}
