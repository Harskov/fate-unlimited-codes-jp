void func_001AE7E0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_t0;
    void *temp_a0;
    void *temp_v0;
    void *var_a3;

    temp_v0 = arg0->unk3C;
    temp_a0 = temp_v0->unk1A0;
    if ((temp_a0 != NULL) && (temp_v1 = temp_v0->unk19C, var_t0 = 0, ((temp_v1 > 0) != 0))) {
        var_a3 = temp_a0;
loop_3:
        if ((arg2 & var_a3->unk0) && (arg1 == var_a3->unk4)) {
            return;
        }
        var_t0 += 1;
        var_a3 += 0x10;
        if (var_t0 >= temp_v1) {

        } else {
            goto loop_3;
        }
    }
}
