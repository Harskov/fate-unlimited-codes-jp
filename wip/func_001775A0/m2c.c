void func_001775A0(void *arg0) {
    s32 *temp_a1;
    s32 *temp_a1_2;
    s32 var_t0;
    void *temp_v1;
    void *var_a3;

    var_t0 = 0;
    if (arg0->unk64 > 0) {
        var_a3 = arg0;
        do {
            temp_v1 = var_a3->unk3C;
            if (temp_v1 != NULL) {
                temp_a1 = temp_v1->unk4;
                if (temp_a1 != temp_v1->unk8) {
                    *temp_a1 &= 0xFFFDFFFF;
                    temp_a1_2 = var_a3->unk3C->unk4;
                    *temp_a1_2 |= 1;
                }
            }
            var_t0 += 1;
            var_a3 += 4;
        } while (var_t0 < arg0->unk64);
    }
}
