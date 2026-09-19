void func_001AE7A0(void *arg0) {
    void *temp_a0;
    void *temp_v1;

    temp_v1 = arg0->unk3C;
    if (temp_v1 != NULL) {
        temp_a0 = temp_v1->unk58;
        if (temp_a0 != NULL) {
            temp_a0->unkC = (s32) (temp_a0->unkC | 0x2000);
        }
    }
}
