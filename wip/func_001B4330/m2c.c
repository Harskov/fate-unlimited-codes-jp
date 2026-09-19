void func_001B4330(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a3;
    s32 var_t2;
    s32 var_t3;
    void *temp_t0;

    var_t3 = 0;
    if (arg0->unk0 > 0) {
        var_t2 = 0;
        do {
            temp_t0 = arg0->unk2C + var_t2;
            temp_a3 = temp_t0->unk20;
            if (temp_a3 & arg1) {
                temp_t0->unk20 = (s32) (temp_a3 | arg2);
                temp_t0->unk20 = (s32) (temp_t0->unk20 & ~arg3);
            }
            var_t3 += 1;
            var_t2 += 0x34;
        } while (var_t3 < arg0->unk0);
    }
}
