typedef int s32;

void func_001B3A20();

void func_001B3B20(char *arg0)
{
    s32 i;
    char *p;

    i = 0;
    p = arg0;
    do {
        *(s32 *)(p + 0x5D0) = 0;
        i++;
        *(s32 *)(p + 0x5D8) = -1;
        *(s32 *)(p + 0x5E8) = 15;
        *(s32 *)(p + 0x5DC) = -1;
        *(s32 *)(p + 0x5EC) = 15;
        *(s32 *)(p + 0x5E0) = -1;
        *(s32 *)(p + 0x5F0) = 15;
        *(s32 *)(p + 0x5E4) = -1;
        *(s32 *)(p + 0x5F4) = 15;
        p += 0xC8;
    } while (i < 8);
    func_001B3A20();
}
