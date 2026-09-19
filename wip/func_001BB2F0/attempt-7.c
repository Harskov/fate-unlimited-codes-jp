typedef int s32;

s32 func_001BB2F0(char *arg0, s32 arg1)
{
    char *p;
    s32 *q;
    s32 v;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 0xB)
        return 0;
    p = arg0 + 0x2524;
    if (p == 0)
        return 0;
    q = (s32 *)(p + 4);
    v = 0;
    if (arg1 == 0x36) {
        if (q[0] == 0)
            v = 1;
    } else if (arg1 == 0x37) {
        if (q[1] == 0)
            v = 1;
    } else if (arg1 == 0x38) {
        if (q[2] == 0)
            v = 1;
    }
    return v;
}
