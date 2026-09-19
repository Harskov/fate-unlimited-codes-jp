typedef unsigned char u8;
typedef int s32;

u8 func_001B0410(s32 arg0, s32 arg1, s32 arg2)
{
    s32 i;

    i = 0;
    while (!(arg1 & (1 << i))) {
        i++;
        if (i >= 0x20)
            break;
    }
    return *(u8 *)(arg0 + i + 0x1508) - arg2;
}
