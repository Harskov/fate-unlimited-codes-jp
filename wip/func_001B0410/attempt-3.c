typedef unsigned char u8;
typedef int s32;

u8 func_001B0410(s32 arg0, s32 arg1, s32 arg2)
{
    s32 i;
    s32 one;

    i = 0;
    one = 1;
    do {
        if (arg1 & (one << i))
            break;
        i++;
    } while (i < 0x20);
    return *(u8 *)(arg0 + i + 0x1508) - arg2;
}
