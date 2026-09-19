typedef int s32;

s32 func_001BB4B0(char *arg0, s32 arg1)
{
    s32 *p;
    s32 v;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 6)
        return 0;
    p = (s32 *)(arg0 + 0x2524);
    if (p == 0)
        return 0;
    if (arg1 == 0x3E) {
        v = *(s32 *)((char *)p + 0xC);
    } else if (arg1 == 0x3D) {
        v = *(s32 *)((char *)p + 0x8);
    } else if (arg1 == 0x3C) {
        v = *(s32 *)((char *)p + 0x4);
    } else if (arg1 == 0x3B) {
        v = *p;
    } else {
        return 0;
    }
    if (v == 0)
        return 1;
    return 0;
}
