void func_001AD3D0(s32 arg0) {
    s32 *var_a1;
    s32 var_a0;
    s32 var_a2;
    void *var_a3;

    var_a0 = arg0;
    if (var_a0 >= 0) {
        var_a2 = var_a0 + 1;
    } else {
        var_a0 = 0;
        var_a2 = 2;
    }
    if (var_a0 < var_a2) {
        var_a1 = &(&D_0051C858)[var_a0];
        do {
            var_a3 = (*var_a1)->unkC;
            if (var_a3 != NULL) {
                do {
                    var_a3->unk0->unk2390 = 0;
                    var_a3->unk0->unk238C = 0;
                    var_a3 = var_a3->unkC;
                } while (var_a3 != NULL);
            }
            var_a0 += 1;
            var_a1 += 4;
        } while (var_a0 < var_a2);
    }
}
