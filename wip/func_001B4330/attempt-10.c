typedef int s32;

void func_001B4330(char *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 i = 0;
    s32 off = 0;
    s32 mask = ~arg3;
    s32 count = *(s32 *)arg0;

    while (i < count) {
        char *p = *(char **)(arg0 + 0x2C) + off;
        s32 v = *(s32 *)(p + 0x20);

        if (v & arg1) {
            *(s32 *)(p + 0x20) = v | arg2;
            *(s32 *)(p + 0x20) = *(s32 *)(p + 0x20) & mask;
        }
        i++;
        off += 0x34;
    }
}
