typedef int s32;

void func_001B3A20();

void func_001B3B20(char *arg0)
{
    char *p;
    s32 i;

    p = arg0;
    i = 0;
    do {
        *(s32 *)(p + 0x5D0) = 0;
        i += 1;
        *(s32 *)(p + 0x5D8) = -1;
        *(s32 *)(p + 0x5E8) = 0xF;
        *(s32 *)(p + 0x5DC) = -1;
        *(s32 *)(p + 0x5EC) = 0xF;
        *(s32 *)(p + 0x5E0) = -1;
        *(s32 *)(p + 0x5F0) = 0xF;
        *(s32 *)(p + 0x5E4) = -1;
        *(s32 *)(p + 0x5F4) = 0xF;
        p += 0xC8;
    } while (i < 8);
    func_001B3A20();
}
