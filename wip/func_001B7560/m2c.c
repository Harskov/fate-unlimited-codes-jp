void func_001B7560(s32 arg0) {
    s32 var_a1;
    s32 var_a2;

    if ((arg0 >= 0) && (arg0 < 4)) {
        D_0051D758 = 0;
        D_0051D75C = 0;
        D_0051D764 = 0;
        D_0051D760 = -1;
        D_0051D768 = 0x47C34F80;
        var_a1 = (&D_0051D77C)[arg0];
        var_a2 = 0;
        if (D_0051D754 > 0) {
            do {
                *var_a1 = 0;
                var_a2 += 1;
                var_a1 += 0x30;
            } while (var_a2 < D_0051D754);
        }
    }
}
