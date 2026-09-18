void func_0017A290(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;

    temp_f1 = arg1->unk0;
    if (temp_f1 >= 2.1474836e9f) {
        var_a2 = (bitwise s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    } else {
        var_a2 = 0x4F000000;
    }
    arg0->unk0 = (s8) (var_a2 & 0xFF);
    temp_f1_2 = arg1->unk4;
    if (temp_f1_2 >= 2.1474836e9f) {
        var_a2_2 = (bitwise s32) (temp_f1_2 - 2.1474836e9f) | 0x80000000;
    } else {
        var_a2_2 = 0x4F000000;
    }
    arg0->unk1 = (s8) (var_a2_2 & 0xFF);
    temp_f1_3 = arg1->unk8;
    if (temp_f1_3 >= 2.1474836e9f) {
        var_a2_3 = (bitwise s32) (temp_f1_3 - 2.1474836e9f) | 0x80000000;
    } else {
        var_a2_3 = 0x4F000000;
    }
    arg0->unk2 = (s8) (var_a2_3 & 0xFF);
    temp_f1_4 = arg1->unkC;
    if (temp_f1_4 >= 2.1474836e9f) {
        var_a1 = (bitwise s32) (temp_f1_4 - 2.1474836e9f) | 0x80000000;
    } else {
        var_a1 = 0x4F000000;
    }
    arg0->unk3 = (s8) (var_a1 & 0xFF);
}
