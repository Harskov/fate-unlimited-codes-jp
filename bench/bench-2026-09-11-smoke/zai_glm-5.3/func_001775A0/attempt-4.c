typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

typedef struct Chain {
    u32 pad0;
    u32 *first;
    u32 *last;
} Chain;

typedef struct Ent {
    u8 pad0[0x3C];
    Chain *chain;
    u8 pad40[0x24];
    s32 count;
} Ent;

void func_001775A0(Ent *arg0)
{
    u32 mask = 0xFFFDFFFF;
    Ent *e;
    int i;

    if (arg0->count > 0) {
        i = 0;
        e = arg0;
        do {
            Chain *c = e->chain;
            if (c != 0) {
                if (c->first != c->last) {
                    *c->first &= mask;
                    *e->chain->first |= 1;
                }
            }
            i++;
            e++;
        } while (i < arg0->count);
    }
}
