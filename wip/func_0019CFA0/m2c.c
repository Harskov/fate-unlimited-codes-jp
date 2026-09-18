void func_0019CFA0(void *arg0, s32 arg1) {
    s32 *var_a0;
    s32 var_v1;

    if (arg0 == NULL) {
        return;
    }
    var_a0 = arg0->unk24F0->unk8;
    var_v1 = 0;
    if (arg1 > 0) {
loop_4:
        if (var_a0 != NULL) {
            var_v1 += 1;
            var_a0 = var_a0->unk8;
            if (var_v1 >= arg1) {

            } else {
                goto loop_4;
            }
        }
    }
    if (var_a0 == NULL) {

    }
}
