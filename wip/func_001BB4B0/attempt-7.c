typedef int s32;

s32 func_001BB4B0(char *arg0, s32 arg1)
{
    s32 *p;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 6)
        return 0;
    p = (s32 *)(arg0 + 0x2524);
    if (p == 0)
        return 0;
    if (arg1 == 0x3E) {
        if (*(s32 *)((char *)p + 0xC) != 0)
            return 0;
        return 1;
    }
    if (arg1 == 0x3D) {
        if (*(s32 *)((char *)p + 0x8) != 0)
            return 0;
        return 1;
    }
    if (arg1 == 0x3C) {
        if (*(s32 *)((char *)p + 0x4) != 0)
            return 0;
        return 1;
    }
    if (arg1 == 0x3B) {
        if (*(s32 *)p != 0)
            return 0;
        return 1;
    }
    return 0;
}
