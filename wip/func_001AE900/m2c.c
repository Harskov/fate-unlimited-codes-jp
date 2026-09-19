void func_001AE900(void *arg0, s64 arg1, s32 arg2, s32 arg3) {
    s32 var_t4;
    u8 temp_a3;
    u8 var_v1;
    void *temp_t0;
    void *temp_v1;
    void *var_t3;

    temp_v1 = arg0->unk3C;
    var_t3 = temp_v1->unk1A0;
    if (var_t3 != NULL) {
        var_t4 = 0;
        if (temp_v1->unk19C > 0) {
            do {
                if (((arg3 == 0) ? 0x80 : 0x40) & var_t3->unk0) {
                    temp_t0 = var_t3->unkC;
                    temp_a3 = temp_t0->unk2;
                    if (((s64) (arg1 << 0x30) >> 0x30) == var_t3->unk4) {
                        if (arg2 != 0) {
                            var_v1 = temp_a3 | 4;
                        } else {
                            var_v1 = temp_a3 & ~4;
                        }
                    } else {
                        var_v1 = temp_a3 & ~4;
                    }
                    temp_t0->unk2 = var_v1;
                }
                var_t4 += 1;
                var_t3 += 0x10;
            } while (var_t4 < arg0->unk3C->unk19C);
        }
    }
}
