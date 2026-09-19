typedef int s32;

void func_001B3700();

void func_001B36A0(char *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    s32 v1;

    v1 = arg1 * 5;
    v1 = v1 * 5;
    v1 = v1 * 8;
    v1 = (s32)arg0 + v1 + 0x5D0;

    if (arg2 == 1) {
        arg4 = v1 + 0x90;
    } else if (arg2 == 0) {
        arg4 = v1 + 0x28;
    } else if (arg2 == 2) {
        arg4 = v1 + 0x5C;
    }

    func_001B3700(arg4 + 4, arg5, arg3);
}
