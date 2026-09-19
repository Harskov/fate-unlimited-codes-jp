typedef int s32;

void func_001B3AD0(char *arg0, s32 arg1)
{
    s32 i;
    char *p;
    char *base;

    if (arg1 == 0) {
        return;
    }
    i = 0;
    base = arg0;
    p = base;
    do {
        if (*(s32 *)(p + 0x5D4) == 0) {
            break;
        }
        i++;
        p += 0xC8;
    } while (i < 8);

    if (i < 8 && *(s32 *)(p + 0x5D4) == 0) {
        *(s32 *)(base + i * 0xC8 + 0x5D4) = arg1;
    }
}
