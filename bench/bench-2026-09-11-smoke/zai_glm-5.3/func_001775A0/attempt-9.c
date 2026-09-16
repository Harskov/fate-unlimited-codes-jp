typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

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

void func_001775A0(Ent *a)
{
    u32 mask;
    int i;
    Ent *e;

    mask = 0xFFFDFFFF;
    e = a;
    for (i = 0; i < a->count; i++) {
        Chain *c = e->chain;
        if (c != 0) {
            if (c->first != c->last) {
                *c->first &= mask;
                *e->chain->first |= 1;
            }
        }
        e = (Ent *)((u8 *)e + 4);
    }
}
