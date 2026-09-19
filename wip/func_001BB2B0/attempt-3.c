typedef int s32;

s32 func_001BB2B0(char *arg0)
{
    s32 *p;
    s32 v;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 5)
        return 0;
    p = (s32 *)(arg0 + 0x2524);
    if (p != 0) {
        v = *p;
        v = v ^ 0;
        return v < 1u;
    }
    return 0;
}
