typedef int s32;

void func_001B3AD0(char *arg0, s32 arg1)
{
    s32 i;
    s32 off;

    if (arg1 == 0) {
        return;
    }
    for (i = 0; i < 8; i++) {
        off = i * 0xC8;
        if (*(s32 *)(off + (s32)arg0 + 0x5D4) == 0) {
            *(s32 *)(off + (s32)arg0 + 0x5D4) = arg1;
            return;
        }
    }
}
