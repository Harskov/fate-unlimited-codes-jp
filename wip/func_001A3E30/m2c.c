void func_001A3E30(void *arg0) {
    void *temp_v1;
    void *var_a0;

    var_a0 = (&D_0051C858)[arg0->unk8]->unkC;
    if (var_a0 != NULL) {
loop_1:
        temp_v1 = var_a0->unk0;
        if (!(temp_v1->unk1F0 & 0x10)) {
            if (temp_v1->unk24C0 > 0) {
                return;
            }
            var_a0 = var_a0->unkC;
            if (var_a0 == NULL) {

            } else {
                goto loop_1;
            }
        }
    }
}
