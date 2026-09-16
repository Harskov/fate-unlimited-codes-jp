typedef unsigned char u8;
typedef unsigned int u32;

typedef struct Chain {
    u32 pad0;
    u32 *first;
    u32 *last;
} Chain;

void func_001775A0(u8 *arg0)
{
    u32 mask = 0xFFFDFFFF;
    u8 *e;
    int i;

    if (*(s32 *)(arg0 + 0x64) > 0) {
        i = 0;
        e = arg0;
        do {
            Chain *c = *(Chain **)(e + 0x3C);
            if (c != 0) {
                if (c->first != c->last) {
                    *c->first &= mask;
                    *(*(Chain **)(e + 0x3C))->first |= 1;
                }
            }
            i++;
            e += 4;
        } while (i < *(s32 *)(arg0 + 0x64));
    }
}
