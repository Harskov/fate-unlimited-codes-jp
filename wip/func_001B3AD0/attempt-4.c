typedef int s32;

void func_001B3AD0(char *arg0, s32 arg1)
{
    s32 i;
    s32 base;
    char *p;

    if (arg1 != 0) {
        i = 0;
        base = (s32)arg0 + 0x5D4;
        p = arg0;
        do {
            if (*(s32 *)(p + 0x5D4) == 0) {
                *(s32 *)(base + i * 0xC8) = arg1;
                return;
            }
            i++;
            p += 0xC8;
        } while (i < 8);
    }
}
