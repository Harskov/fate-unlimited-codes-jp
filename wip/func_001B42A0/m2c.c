void func_001B42A0(void) {
    s32 temp_a0;
    s32 var_t0;
    s32 var_t1;
    s32 var_v0;
    void *temp_a2;
    void *var_a0;

    var_v0 = 0;
    temp_a2 = *D_0051D748;
    do {
        var_v0 += 1;
        var_t0 = 0;
        var_t1 = D_0051D748;
        var_a0 = temp_a2;
        if (temp_a2 != (void *)1) {
loop_3:
            temp_a0 = var_a0->unk14;
            if ((temp_a0 != -1) && (temp_a0 == var_v0)) {
                var_t0 = 1;
            } else {
                var_t1 = var_t1->unk8;
                var_a0 = *var_t1;
                if (var_a0 != (void *)1) {
                    goto loop_3;
                }
            }
        }
    } while (var_t0 != 0);
    D_0051D728 += 1;
}
