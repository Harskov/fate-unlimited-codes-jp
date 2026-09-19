typedef int s32;

s32 func_001BB220(char *arg0)
{
    s32 *p;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 0xD)
        return 0;
    p = *(s32 **)(arg0 + 0x2508);
    if (p == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 0xD)
        return 0;
    if (*(s32 *)((char *)p + 0x53C) != 0x10FA)
        return 0;
    return 1;
}
