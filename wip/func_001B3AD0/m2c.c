void func_001B3AD0(void *arg0, s32 arg1) {
    s32 var_a3;
    void *var_a2;

    if (arg1 != 0) {
        var_a3 = 0;
        var_a2 = arg0;
loop_2:
        if (var_a2->unk5D4 != 0) {
            var_a3 += 1;
            var_a2 += 0xC8;
            if (var_a3 >= 8) {

            } else {
                goto loop_2;
            }
        } else {
            ((var_a3 * 0xC8) + arg0)->unk5D4 = arg1;
        }
    }
}
