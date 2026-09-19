typedef int s32;

void func_001B38F0(char *arg0, s32 arg1)
{
    s32 off = arg1 * 0xC8;

    *(s32 *)(off + (s32)arg0 + 0x5D0) &= ~1;
}
