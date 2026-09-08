void func_001A5450(s32 arg0, s32 arg1, s32 arg2) {
    s16 var_t1;
    s32 var_a1;
    s32 var_t0;
    void *temp_a3;

    var_a1 = arg1;
    temp_a3 = arg0 + 0x220;
    if (var_a1 >= 0) {
        if (var_a1 < temp_a3->unk8) {
            var_t1 = var_a1 + 1;
            goto block_3;
        }
    } else {
        var_t1 = temp_a3->unk8;
        var_a1 = 0;
block_3:
        if (var_a1 < var_t1) {
            var_t0 = var_a1 * 0x1C;
            do {
                var_a1 += 1;
                (temp_a3->unk4 + var_t0)->unk18 = arg2;
                var_t0 += 0x1C;
            } while (var_a1 < var_t1);
        }
    }
}
