void func_001B3F70(s32 arg0) {
    f32 var_f3;
    s32 var_v0;

    var_f3 = 0.0f;
    var_v0 = 0;
loop_1:
    if ((bitwise s32) (0.5f + var_f3) < arg0) {
        var_v0 += 1;
        var_f3 += 25.5f;
        if (var_v0 >= 0xA) {

        } else {
            goto loop_1;
        }
    }
}
