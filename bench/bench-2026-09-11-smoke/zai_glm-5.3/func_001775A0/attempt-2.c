typedef struct Chain {
    u32 pad0;
    u32 *first;
    u32 *last;
} Chain;

void func_001775A0(void *arg0)
{
    Chain *c;
    u8 *e;
    int i;

    if (*(s32 *)((u8 *)arg0 + 0x64) > 0) {
        i = 0;
        e = (u8 *)arg0;
        do {
            c = *(Chain **)(e + 0x3C);
            if (c != 0) {
                if (c->first != c->last) {
                    *c->first &= 0xFFFDFFFF;
                    *(*(Chain **)(e + 0x3C))->first |= 1;
                }
            }
            i++;
            e += 4;
        } while (i < *(s32 *)((u8 *)arg0 + 0x64));
    }
}
