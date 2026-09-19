void func_001AB770(void *arg0, s32 arg1) {
    void *temp_v1;

    if (arg0 != NULL) {
        arg0->unk2508 = arg1;
        temp_v1 = arg0->unk2448;
        if (temp_v1 != NULL) {
            temp_v1->unk10 = arg1;
        }
    }
}
