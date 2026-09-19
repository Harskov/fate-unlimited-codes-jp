typedef int s32;

s32 func_001BB3C0(char *arg0)
{
    s32 *p;
    s32 v;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 7)
        return 0;
    p = *(s32 **)(arg0 + 0x2508);
    if (p == 0)
        return 0;
    v = *(s32 *)((char *)p + 0x53C);
    if (v == 0xB4 && v == 0x38)
        return 1;
    return 0;
}
