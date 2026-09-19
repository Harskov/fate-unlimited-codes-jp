void func_001AE860(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_t4;
    u8 var_t5;
    void *temp_t2;
    void *temp_v1;
    void *var_t3;

    temp_v1 = arg0->unk3C;
    var_t3 = temp_v1->unk1A0;
    if (var_t3 != NULL) {
        var_t4 = 0;
        if (temp_v1->unk19C > 0) {
            do {
                if (arg3 & var_t3->unk0) {
                    temp_t2 = var_t3->unkC;
                    var_t5 = temp_t2->unk2;
                    if (arg1 == var_t3->unk4) {
                        if (arg2 != 0) {
                            var_t5 |= 4;
                        } else {
                            var_t5 &= ~4;
                        }
                    } else if (M2C_ERROR(/* Read from unset register $t0 */) == 0) {
                        var_t5 &= ~4;
                    }
                    temp_t2->unk2 = var_t5;
                }
                var_t4 += 1;
                var_t3 += 0x10;
            } while (var_t4 < arg0->unk3C->unk19C);
        }
    }
}
