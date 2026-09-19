void func_0016D100(void *arg0, void *arg1) {
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;

    temp_v1 = arg1->unk0;
    if ((s32) temp_v1 < 0) {
        var_f0 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
    } else {
        var_f0 = (f32) temp_v1;
    }
    arg0->unk0 = var_f0;
    temp_v1_2 = arg1->unk1;
    if ((s32) temp_v1_2 < 0) {
        var_f0_2 = 2.0f * (f32) ((temp_v1_2 >> 1) | (temp_v1_2 & 1));
    } else {
        var_f0_2 = (f32) temp_v1_2;
    }
    arg0->unk4 = var_f0_2;
    temp_v1_3 = arg1->unk2;
    if ((s32) temp_v1_3 < 0) {
        var_f0_3 = 2.0f * (f32) ((temp_v1_3 >> 1) | (temp_v1_3 & 1));
    } else {
        var_f0_3 = (f32) temp_v1_3;
    }
    arg0->unk8 = var_f0_3;
    temp_v1_4 = arg1->unk3;
    if ((s32) temp_v1_4 < 0) {
        var_f0_4 = 2.0f * (f32) ((temp_v1_4 >> 1) | (temp_v1_4 & 1));
    } else {
        var_f0_4 = (f32) temp_v1_4;
    }
    arg0->unkC = var_f0_4;
}
