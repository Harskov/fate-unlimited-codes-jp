void func_001B0410(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a3;

    var_a3 = 0;
loop_1:
    if (!(arg1 & (1 << var_a3))) {
        var_a3 += 1;
        if (var_a3 >= 0x20) {

        } else {
            goto loop_1;
        }
    }
}
