void func_0019CB40(void) {
    s32 *var_a0;
    s32 *var_v1;
    s32 var_a1;
    s32 var_a2;

    var_a2 = 0;
    var_a0 = &D_00531B60;
loop_1:
    if (var_a0->unk3C == 0) {
        var_a1 = 0;
        var_v1 = var_a0;
loop_6:
        if (var_v1->unk40 == 0) {
            var_a1 += 1;
            var_v1 += 4;
            if (var_a1 >= 4) {
                var_a2 += 1;
                var_a0 += 0x74;
                if (var_a2 >= 2) {
                    return;
                }
                goto loop_1;
            }
            goto loop_6;
        }
    }
}
