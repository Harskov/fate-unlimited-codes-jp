void func_0017A830(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    u8 temp_a1;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 temp_t0_3;
    u8 temp_t0_4;
    u8 temp_t1;
    u8 temp_t1_2;
    u8 temp_t1_3;
    u8 var_v1;
    u8 var_v1_2;

    temp_f2 = arg0->unk28;
    if (temp_f2 == 0.0f) {
        var_v1 = arg0->unk43;
        arg1->unk0 = (u8) arg0->unk40;
        arg1->unk1 = (u8) arg0->unk41;
        arg1->unk2 = (u8) arg0->unk42;
    } else {
        temp_t1 = arg0->unkAC;
        temp_f0 = 65536.0f * (arg0->unk9C / temp_f2);
        arg1->unk0 = (u8) ((s32) ((temp_t1 << 0x10) + ((bitwise s32) temp_f0 * (arg0->unk40 - temp_t1))) >> 0x10);
        temp_t1_2 = arg0->unkAD;
        arg1->unk1 = (u8) ((s32) ((temp_t1_2 << 0x10) + ((bitwise s32) temp_f0 * (arg0->unk41 - temp_t1_2))) >> 0x10);
        temp_t1_3 = arg0->unkAE;
        arg1->unk2 = (u8) ((s32) ((temp_t1_3 << 0x10) + ((bitwise s32) temp_f0 * (arg0->unk42 - temp_t1_3))) >> 0x10);
        temp_t0 = arg0->unkAF;
        var_v1 = (u8) ((s32) ((temp_t0 << 0x10) + ((bitwise s32) temp_f0 * (arg0->unk43 - temp_t0))) >> 0x10);
    }
    arg1->unk3 = var_v1;
    temp_f2_2 = arg0->unk2C;
    if (temp_f2_2 == 0.0f) {
        var_v1_2 = arg0->unk47;
        arg2->unk0 = (u8) arg0->unk44;
        arg2->unk1 = (u8) arg0->unk45;
        arg2->unk2 = (u8) arg0->unk46;
    } else {
        temp_t0_2 = arg0->unkB0;
        temp_f0_2 = 65536.0f * (arg0->unkA0 / temp_f2_2);
        arg2->unk0 = (u8) ((s32) ((temp_t0_2 << 0x10) + ((bitwise s32) temp_f0_2 * (arg0->unk44 - temp_t0_2))) >> 0x10);
        temp_t0_3 = arg0->unkB1;
        arg2->unk1 = (u8) ((s32) ((temp_t0_3 << 0x10) + ((bitwise s32) temp_f0_2 * (arg0->unk45 - temp_t0_3))) >> 0x10);
        temp_t0_4 = arg0->unkB2;
        arg2->unk2 = (u8) ((s32) ((temp_t0_4 << 0x10) + ((bitwise s32) temp_f0_2 * (arg0->unk46 - temp_t0_4))) >> 0x10);
        temp_a1 = arg0->unkB3;
        var_v1_2 = (u8) ((s32) ((temp_a1 << 0x10) + ((bitwise s32) temp_f0_2 * (arg0->unk47 - temp_a1))) >> 0x10);
    }
    arg2->unk3 = var_v1_2;
}
