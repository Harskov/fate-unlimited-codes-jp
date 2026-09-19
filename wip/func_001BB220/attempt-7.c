typedef int s32;

s32 func_001BB220(char *arg0)
{
    s32 *p;
    s32 v;
    s32 c;

    if (arg0 == 0)
        return 0;
    c = *(s32 *)(arg0 + 0xC);
    if (c != 0xD)
        return 0;
    p = *(s32 **)(arg0 + 0x2508);
    if (p == 0)
        return 0;
    if (c != 0xD)
        return 0;
    v = *(s32 *)((char *)p + 0x53C);
    if (v != 0x10FA)
        return 0;
    return 1;
}
