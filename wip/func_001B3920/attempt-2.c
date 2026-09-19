typedef int s32;

void func_001B3920(char *arg0, s32 arg1)
{
    s32 off = arg1 * 0xC8;
    char *p = arg0 + off + 0x5D0;

    if (*(s32 *)(p + 4) == 0) {
        return;
    }
    *(s32 *)p |= 1;
}
