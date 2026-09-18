void func_0019D4E0(void *arg0, s32 arg1) {
    s16 *temp_a2;
    s16 var_v1;

    if (arg0->unk0 < 2) {
        temp_a2 = &D_00522E90 + (arg0->unk4 * 0x64);
        if (arg1 != 0) {
            var_v1 = *temp_a2 & ~8;
        } else {
            var_v1 = *temp_a2 | 8;
        }
        *temp_a2 = var_v1;
    }
}
