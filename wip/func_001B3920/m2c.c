void func_001B3920(s32 arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = arg0 + (arg1 * 0xC8);
    if (temp_v1->unk5D4 != 0) {
        temp_v1->unk5D0 = (s32) (temp_v1->unk5D0 | 1);
    }
}
