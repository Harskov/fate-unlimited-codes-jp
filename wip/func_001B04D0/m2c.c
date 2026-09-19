void func_001B04D0(s32 arg0, s32 arg1) {
    s32 var_t3;
    void *var_t1;
    void *var_t2;

    var_t3 = 0;
    var_t2 = &D_003D6DA0 + (arg1 * 0x28);
    var_t1 = &D_00523900 + (arg0 * 0x28);
    do {
        var_t3 += 5;
        var_t1->unk18 = (s32) var_t2->unk0;
        var_t1->unk1C = (s32) var_t2->unk4;
        var_t1->unk20 = (s32) var_t2->unk8;
        var_t1->unk24 = (s32) var_t2->unkC;
        var_t1->unk28 = (s32) var_t2->unk10;
        var_t2 += 0x14;
        var_t1 += 0x14;
    } while (var_t3 < 0xA);
}
