typedef int s32;

void func_001B35C0(char *arg0, s32 arg1, s32 arg2)
{
    char *p = arg0 + arg1 * 0xC8;

    *(s32 *)(p + 0x694) = arg2;
}
