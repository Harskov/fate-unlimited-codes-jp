void func_0019D6E0(s32 *arg0) {
    s32 *var_a1;
    s32 temp_a3;
    s32 var_t0;

    var_t0 = 0;
    var_a1 = &D_0051C870;
loop_1:
    if (*var_a1 == 0) {
        temp_a3 = var_t0 * 8;
        *(&D_0051C870 + temp_a3) = 1;
        *(&D_0051C874 + temp_a3) = arg0;
        *arg0 = var_t0;
        return;
    }
    var_t0 += 1;
    var_a1 += 8;
    if (var_t0 >= 0xA) {
        return;
    }
    goto loop_1;
}
