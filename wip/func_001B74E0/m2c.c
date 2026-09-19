void func_001B74E0(s32 arg0) {
    s32 var_a1;
    s32 var_a2;

    if ((arg0 >= 0) && (arg0 < 4)) {
        var_a1 = (&D_0051D7A8)[arg0];
        (&D_0051D750 + (arg0 * 2))->unk50 = 0;
        var_a2 = 0;
        if (D_0051D754 > 0) {
            do {
                *var_a1 = 0;
                var_a2 += 1;
                var_a1 += 0x14;
            } while (var_a2 < D_0051D754);
        }
    }
}
