typedef unsigned char u8;
typedef int s32;

u8 func_001B0410(s32 arg0, s32 arg1, s32 arg2)
{
    s32 i;
    s32 one;

    i = 0;
    one = 1;
    while (1) {
        if (arg1 & (one << i))
            break;
        i++;
        if (i >= 0x20)
            break;
    }
    i = arg0 + i;
    return *(u8 *)(i + 0x1508) - arg2;
}
