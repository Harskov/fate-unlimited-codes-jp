typedef int s32;

s32 func_001BB140(char *arg0)
{
    s32 *p;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 0x11)
        return 0;
    p = (s32 *)(arg0 + 0x2524);
    if (p != 0)
        return *p > 0;
    return 0;
}
