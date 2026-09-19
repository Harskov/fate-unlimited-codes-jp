typedef int s32;

s32 func_001BB140(char *arg0)
{
    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 0x11)
        return 0;
    if (arg0 + 0x2524 == 0)
        return 0;
    return *(s32 *)(arg0 + 0x2524) > 0;
}
