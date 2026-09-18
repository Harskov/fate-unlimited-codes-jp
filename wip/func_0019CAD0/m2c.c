void func_0019CAD0(void) {
    s32 *var_a1;
    s32 var_a2;
    void *var_a3;

    var_a2 = 0;
    var_a1 = &D_0051C858;
    do {
        var_a3 = (*var_a1)->unkC;
        if (var_a3 != NULL) {
            do {
                if (!(var_a3->unk0->unk1DC & 0x20000000)) {

                }
                var_a3 = var_a3->unkC;
            } while (var_a3 != NULL);
        }
        var_a2 += 1;
        var_a1 += 4;
    } while (var_a2 < 2);
}
