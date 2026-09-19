typedef int s32;

s32 func_001B76F0(s32 arg0)
{
    if (arg0 == 0xFF) {
        return 3;
    }
    if (arg0 == 0xFE) {
        return 2;
    }
    if (arg0 < 0) {
        arg0 = 0;
    } else if (arg0 < 2) {
        return 1;
    } else {
        arg0 = 1;
    }
    if (arg0 != 0) {
        arg0 = 1;
    }
    return arg0;
}
