typedef int s32;

s32 func_001BB2F0(char *arg0, s32 arg1)
{
    s32 v;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 0xB)
        return 0;
    if (arg0 + 0x2524 == 0)
        return 0;
    if (arg1 == 0x36) {
        v = *(s32 *)(arg0 + 0x2528);
        if (v != 0)
            return 0;
        return 1;
    }
    if (arg1 == 0x37) {
        v = *(s32 *)(arg0 + 0x252C);
        if (v != 0)
            return 0;
        return 1;
    }
    if (arg1 == 0x38) {
        v = *(s32 *)(arg0 + 0x2530);
        if (v != 0)
            return 0;
        return 1;
    }
    return 0;
}
