typedef int s32;

void func_001B3AD0(char *arg0, s32 arg1)
{
    s32 i;
    char *p;

    if (arg1 != 0) {
        i = 0;
        p = arg0;
loop:
        if (*(s32 *)(p + 0x5D4) != 0) {
            i++;
            p = arg0 + i * 0xC8;
            if (i < 8) {
                goto loop;
            }
            return;
        }
        *(s32 *)(arg0 + i * 0xC8 + 0x5D4) = arg1;
    }
}
