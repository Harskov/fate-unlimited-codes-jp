typedef int s32;

typedef struct {
    s32 count;      /* 0x0 */
    char pad[0x28];
    char *base;     /* 0x2C */
} Holder;

void func_001B43A0(Holder *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 i;
    s32 off;
    s32 mask;
    char *p;

    i = 0;
    if (arg0->count > 0) {
        mask = ~arg3;
        off = 0;
        do {
            p = arg0->base + off;
            if (arg1 >= 0) {
                if (arg1 == i) {
                    *(s32 *)(p + 0x20) |= arg2;
                    *(s32 *)(p + 0x20) &= mask;
                }
                i++;
                off += 0x34;
            } else {
                *(s32 *)(p + 0x20) |= arg2;
                *(s32 *)(p + 0x20) &= mask;
                i++;
                off += 0x34;
            }
        } while (i < arg0->count);
    }
}
