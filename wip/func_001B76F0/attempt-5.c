typedef int s32;

s32 func_001B76F0(s32 arg0)
{
    s32 var_a0;

    var_a0 = arg0;
    if (var_a0 != 0xFF) {
        if (var_a0 != 0xFE) {
            if (var_a0 >= 0) {
                if (var_a0 >= 2) {
                    var_a0 = 1;
                }
            } else {
                var_a0 = 0;
            }
            if (var_a0 != 0) {
                var_a0 = 1;
            }
        } else {
            var_a0 = 2;
        }
    } else {
        var_a0 = 3;
    }
    return var_a0;
}
