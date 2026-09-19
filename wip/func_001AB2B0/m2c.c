void func_001AB2B0(void *arg0) {
    s32 *var_a0;
    s32 temp_a1;
    s32 var_a2;
    void *var_a3;

    if (D_0051D8B4 != 0) {
        temp_a1 = D_0051D8B4->unkB4;
        if (arg0 != NULL) {
            arg0->unk23FC = temp_a1;
        } else {
            var_a2 = 0;
            var_a0 = &D_0051C858;
            do {
                var_a3 = (*var_a0)->unkC;
                if (var_a3 != NULL) {
                    do {
                        var_a3->unk0->unk23FC = temp_a1;
                        var_a3 = var_a3->unkC;
                    } while (var_a3 != NULL);
                }
                var_a2 += 1;
                var_a0 += 4;
            } while (var_a2 < 2);
        }
    }
}
