void func_00176740(s32 arg0, s32 arg1) {
    s32 *var_a2;
    s32 var_a3;

    var_a3 = 0;
    var_a2 = &(&D_00528A00)[arg1];
loop_1:
    if ((var_a2->unk0 == 1) && (arg0 == var_a2->unk10)) {
        return;
    }
    var_a3 += 1;
    var_a2 += 0x18;
    if (var_a3 >= 0xC) {
        return;
    }
    goto loop_1;
}
