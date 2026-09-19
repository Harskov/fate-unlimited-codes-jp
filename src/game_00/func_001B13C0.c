typedef int s32;

s32 func_001B13C0(char *arg0)
{
    s32 a1 = *(s32 *)(arg0 + 0x1E0);

    if (a1 & 0x05008000)
        return 0;
    if (*(s32 *)(arg0 + 0x1EC) & 0xC00000)
        return 0;
    if (*(s32 *)(arg0 + 0x24B8) > 0)
        return 0;
    if (*(s32 *)(arg0 + 0x1E4) & 0xA00)
        return 0;
    if ((a1 & 0x02120000) && (*(s32 *)(arg0 + 0x53C) != 0x38))
        return 0;
    return 1;
}
