typedef int s32;

s32 func_001BB6D0(char *arg0)
{
    s32 *p;
    s32 v;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 2)
        return 0;
    p = (s32 *)(arg0 + 0x2524);
    if (p != 0) {
        v = *(s32 *)((char *)p + 4);
        return (v ^ 0) == 0;
    }
    return 0;
}
