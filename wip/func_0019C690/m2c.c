void func_0019C690(void) {
    s32 *var_v1;
    s32 temp_v0;
    s32 var_a0;
    void *var_v0;

    var_a0 = 0;
    var_v1 = &D_0051C858;
    do {
        temp_v0 = *var_v1;
        if (temp_v0 != 0) {
            var_v0 = temp_v0->unkC;
            if (var_v0 != NULL) {
                do {
                    var_v0 = var_v0->unkC;
                } while (var_v0 != NULL);
            }
        }
        var_a0 += 1;
        var_v1 += 4;
    } while (var_a0 < 2);
}
