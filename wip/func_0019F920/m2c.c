void func_0019F920(void *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_a1;
    void *temp_a2;

    temp_v1 = arg0->unk231C;
    temp_a2 = arg0 + 0xC10;
    if (!(temp_v1 & 0x100000)) {
        if (!(temp_v1 & 0x4000)) {
            if (temp_a2->unk24 & 4) {

            }
        } else {
            temp_v1_2 = arg0->unk1E4;
            temp_a1 = arg0->unk250C;
            if ((temp_v1_2 & 0x40) && (temp_a1 != NULL)) {
                if (!(temp_a1->unk1E0 & 0x18) && !(temp_v1_2 & 4)) {

                } else if ((temp_a2->unk24 & 8) && !(temp_a2->unk118 < (f32) temp_a2->unkAC)) {
                    arg0->unk1E4 = (s32) (arg0->unk1E4 | 0x400000);
                }
            }
        }
    }
}
