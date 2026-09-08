void func_001766A0(s32 arg0, s32 arg1) {
    s32 *var_a2;
    s32 temp_a2;
    s32 temp_a3;
    s32 var_t0;

    temp_a3 = arg1 * 4;
    var_t0 = 0;
    var_a2 = &(&D_00528A00)[arg1];
loop_1:
    if ((var_a2->unk0 == 1) && (arg0 == var_a2->unk10)) {
        temp_a2 = var_t0 * 0x18;
        *(temp_a3 + (&D_00528A00 + temp_a2)) = 0;
        *(temp_a3 + (&D_00528A10 + temp_a2)) = 0;
        *(temp_a3 + (&D_00528A08 + temp_a2)) = 0;
        return;
    }
    var_t0 += 1;
    var_a2 += 0x18;
    if (var_t0 >= 0xC) {
        return;
    }
    goto loop_1;
}
