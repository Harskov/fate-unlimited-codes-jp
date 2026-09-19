typedef int s32;
typedef short s16;

s32 func_001BB380(char *arg0)
{
    s16 *p;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 8)
        return 0;
    p = (s16 *)(arg0 + 0x220);
    if (p == 0)
        return 0;
    return (p[5] ^ 1) == 0;
}
