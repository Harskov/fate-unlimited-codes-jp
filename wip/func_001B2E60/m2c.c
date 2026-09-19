void func_001B2E60(void *arg0, void *arg1, s32 *arg2) {
    s32 *temp_a3;
    s32 *temp_v1;
    s32 *temp_v1_2;
    s32 *var_a2;

    var_a2 = arg2;
    if (!(arg0->unk1EC & 0x2000)) {
        var_a2 = arg1->unk4;
        *var_a2 &= ~0x10;
    } else {
        temp_v1 = arg1->unk4;
        *temp_v1 |= 0x10;
    }
    if (!(arg1->unk0 & 2)) {
        var_a2 = arg1->unk4;
        *var_a2 &= ~0x1000;
    } else {
        temp_v1_2 = arg1->unk4;
        *temp_v1_2 |= 0x1000;
    }
    temp_a3 = arg0->unk3C;
    func_001E7D20(arg1->unk4, *temp_a3, var_a2, temp_a3);
}
