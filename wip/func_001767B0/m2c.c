void func_001767B0(s32 arg0, s32 arg1, s32 arg2) {
    s32 *var_a3;
    s32 *var_t0;
    s32 temp_t0;
    s32 temp_t1;
    s32 var_a2;
    s32 var_t2;

    temp_t1 = arg2 * 4;
    var_t0 = &(&D_00528A00)[arg2];
    var_t2 = 0;
    var_a3 = var_t0;
    do {
        if ((var_a3->unk0 == 1) && (arg0 == var_a3->unk10)) {
            M2C_ERROR(/* unknown instruction: sdr $zero, 0x1($zero) */);
            M2C_ERROR(/* unknown instruction: sdl $zero, 0x8($zero) */);
        }
        var_t2 += 1;
        var_a3 += 0x18;
    } while (var_t2 < 0xC);
    var_a2 = 0;
loop_6:
    if (*var_t0 != 0) {
        var_a2 += 1;
        var_t0 += 0x18;
        if (var_a2 >= 0xC) {
            return;
        }
        goto loop_6;
    }
    temp_t0 = var_a2 * 0x18;
    *(temp_t1 + (&D_00528A00 + temp_t0)) = 1;
    *(temp_t1 + (&D_00528A10 + temp_t0)) = arg0;
    *(temp_t1 + (&D_00528A08 + temp_t0)) = arg1;
}
