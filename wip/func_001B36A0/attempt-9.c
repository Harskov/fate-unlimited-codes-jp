typedef int s32;

void func_001B3700();

void func_001B36A0(char *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    s32 v1;

    v1 = arg1 * 5;
    v1 = v1 * 5;
    v1 = v1 * 8;
    v1 = (s32)arg0 + v1 + 0x5D0;

    switch (arg2) {
    case 2:
        func_001B3700(v1 + 0x5C + 4, arg5, arg3);
        return;
    case 1:
        func_001B3700(v1 + 0x90 + 4, arg5, arg3);
        return;
    case 0:
        func_001B3700(v1 + 0x28 + 4, arg5, arg3);
        return;
    }

    func_001B3700(arg4 + 4, arg5, arg3);
}
