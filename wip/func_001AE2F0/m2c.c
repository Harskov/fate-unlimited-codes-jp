void func_001AE2F0(void *arg0, s32 arg1) {
    void *temp_a2;
    void *temp_v1;

    temp_a2 = arg0 + 0x184;
    if (arg1 >= 0) {
        arg0->unk184 = arg1;
        temp_a2->unk4 = 0;
        temp_a2->unk8 = 0;
        temp_a2->unkC = (f32) arg0->unk5C0;
        temp_a2->unk18 = (s32) arg0->unk53C;
        if (arg1 < 0x40) {
            temp_v1 = ((arg1 * 4) + arg0)->unk44;
            if (temp_v1 != NULL) {
                temp_a2->unk3C = (s32) temp_v1->unk38;
            }
        }
    }
}
