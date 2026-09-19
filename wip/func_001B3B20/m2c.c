void func_001B3B20(void *arg0) {
    s32 var_a3;
    void *var_a2;

    var_a3 = 0;
    var_a2 = arg0;
    do {
        var_a2->unk5D0 = 0;
        var_a3 += 1;
        var_a2->unk5D8 = -1;
        var_a2->unk5E8 = 0xF;
        var_a2->unk5DC = -1;
        var_a2->unk5EC = 0xF;
        var_a2->unk5E0 = -1;
        var_a2->unk5F0 = 0xF;
        var_a2->unk5E4 = -1;
        var_a2->unk5F4 = 0xF;
        var_a2 += 0xC8;
    } while (var_a3 < 8);
    func_001B3A20(-1, var_a2, var_a3);
}
