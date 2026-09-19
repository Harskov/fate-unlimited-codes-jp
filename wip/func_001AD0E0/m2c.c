void func_001AD0E0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_t3;
    s32 var_a1;
    s32 var_t4;
    void *var_t5;

    var_a1 = arg1;
    if (var_a1 < 0) {
        var_a1 = 0;
        var_t4 = 2;
    } else {
        var_t4 = var_a1 + 1;
    }
    arg0->unk1F8 = (s32) (arg0->unk1F8 | 1);
    if (arg0->unk23D4 <= 0) {
        arg0->unk23D4 = arg2;
    }
    if (var_a1 < var_t4) {
        var_t3 = &(&D_0051C858)[var_a1];
        do {
            if ((arg0 != NULL) && (arg3 & 4)) {
                if (var_a1 != arg0->unk8) {
                    goto block_12;
                }
            } else {
block_12:
                var_t5 = (*var_t3)->unkC;
                if (var_t5 != NULL) {
                    do {
                        if (arg3 & 2) {
                            if (arg0 != var_t5->unk0) {
                                goto block_16;
                            }
                        } else {
block_16:
                            (var_t5->unk0 + (arg0->unk0 * 4))->unk23AC = arg2;
                            var_t5->unk0->unk23A4 = arg3;
                        }
                        var_t5 = var_t5->unkC;
                    } while (var_t5 != NULL);
                }
            }
            var_a1 += 1;
            var_t3 += 4;
        } while (var_a1 < var_t4);
    }
}
