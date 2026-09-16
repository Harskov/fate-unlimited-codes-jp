typedef struct Chain {
    u8 pad0[4];
    u32 *first;
    u32 *last;
} Chain;

void func_001775A0(void *arg0)
{
    u8 *e;
    int i;

    if (*(s32 *)((u8 *)arg0 + 0x64) > 0) {
        i = 0;
        e = (u8 *)arg0;
        do {
            Chain **slot = (Chain **)(e + 0x3C);
            if (*slot != 0) {
                if ((*slot)->first != (*slot)->last) {
                    *(*slot)->first &= 0xFFFDFFFFu;
                    *(*slot)->first |= 1;
                }
            }
            i++;
            e += 4;
        } while (i < *(s32 *)((u8 *)arg0 + 0x64));
    }
}
