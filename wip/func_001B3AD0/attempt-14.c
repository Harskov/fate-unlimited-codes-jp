typedef int s32;

void func_001B3AD0(char *arg0, s32 arg1)
{
    s32 i = 0;
    char *p = arg0;

    if (arg1 == 0) {
        return;
    }
    while (*(s32 *)(p + 0x5D4) != 0) {
        if (++i >= 8) {
            return;
        }
        p = arg0 + i * 0xC8;
    }
    *(s32 *)(arg0 + i * 0xC8 + 0x5D4) = arg1;
}
