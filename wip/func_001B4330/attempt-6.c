typedef int s32;

void func_001B4330(char *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 i;
    s32 off;
    s32 notmask;
    s32 n = *(s32 *)arg0;

    if (n > 0) {
        i = 0;
        notmask = ~arg3;
        off = 0;
        do {
            char *p = *(char **)(arg0 + 0x2C) + off;
            s32 v = *(s32 *)(p + 0x20);

            if (v & arg1) {
                *(s32 *)(p + 0x20) = v | arg2;
                *(s32 *)(p + 0x20) = *(s32 *)(p + 0x20) & notmask;
            }
            i++;
            off += 0x34;
        } while (i < n);
    }
}
