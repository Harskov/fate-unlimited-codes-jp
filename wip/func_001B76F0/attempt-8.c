typedef int s32;

s32 func_001B76F0(s32 arg0)
{
    s32 var_a0;

    if (arg0 == 0xFF) {
        var_a0 = 3;
    } else if (arg0 == 0xFE) {
        var_a0 = 2;
    } else if (arg0 < 0) {
        var_a0 = 0;
    } else if (arg0 >= 2) {
        var_a0 = 1;
    } else {
        var_a0 = 1;
    }
    if (var_a0 != 0) {
        var_a0 = 1;
    }
    return var_a0;
}
