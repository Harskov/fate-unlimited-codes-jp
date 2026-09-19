typedef int s32;

void func_001B3AD0(char *arg0, s32 arg1)
{
    s32 i;
    char *p;
    char *dst;

    if (arg1 == 0) {
        return;
    }
    i = 0;
    p = arg0;
    do {
        if (*(s32 *)(p + 0x5D4) == 0) {
            dst = i * 0xC8 + arg0;
            *(s32 *)(dst + 0x5D4) = arg1;
            return;
        }
        i++;
        p += 0xC8;
    } while (i < 8);
}
