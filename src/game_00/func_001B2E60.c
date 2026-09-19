typedef int s32;

extern s32 D_00523B38[];
void func_001E7D20();

void func_001B2E60(char *arg0, s32 *arg1)
{
    s32 *p;

    if (*(s32 *)(arg0 + 0x1EC) & 0x2000) {
        p = (s32 *)arg1[1];
        *p |= 0x10;
    } else {
        p = (s32 *)arg1[1];
        *p &= ~0x10;
    }
    if (arg1[0] & 2) {
        p = (s32 *)arg1[1];
        *p |= 0x1000;
    } else {
        p = (s32 *)arg1[1];
        *p &= ~0x1000;
    }
    func_001E7D20(arg1[1], *(s32 *)*(s32 *)(arg0 + 0x3C), D_00523B38[*(s32 *)arg0]);
}
