void func_00172F60(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_f2;
    s32 temp_a1;
    s32 temp_a3;

    temp_a3 = (s32) (arg1 + 2) >> 2;
    temp_a1 = (s32) (arg2 + 2) >> 2;
    temp_f2 = *(D_00522D98 + ((temp_a3 & 0x3FFF) * 4));
    arg0->unk0 = (f32) *(D_00522D98 + (((temp_a3 + 0x1000) & 0x3FFF) * 4));
    arg0->unk4 = (f32) (temp_f2 * *(D_00522D98 + ((temp_a1 & 0x3FFF) * 4)));
    arg0->unk8 = (f32) (-temp_f2 * *(D_00522D98 + (((temp_a1 + 0x1000) & 0x3FFF) * 4)));
}
