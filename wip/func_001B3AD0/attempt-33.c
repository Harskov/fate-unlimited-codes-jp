typedef int s32;

void func_001B3AD0(char *arg0, s32 arg1)
{
    s32 i;

    if (arg1 == 0) {
        return;
    }
    for (i = 0; i < 8; i++) {
        if (*(s32 *)(arg0 + i * 0xC8 + 0x5D4) == 0) {
            *(s32 *)(arg0 + i * 0xC8 + 0x5D4) = arg1;
            return;
        }
    }
}
