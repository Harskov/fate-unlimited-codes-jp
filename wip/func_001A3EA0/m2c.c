void func_001A3EA0(void *arg0) {
    void *temp_a0;
    void *var_a1;

    var_a1 = (&D_0051C858)[arg0->unk8]->unkC;
    if (var_a1 != NULL) {
loop_2:
        temp_a0 = var_a1->unk0;
        if (!(temp_a0->unk1F4 & 0x18000)) {
            if (temp_a0->unk24BC > 0) {
                return;
            }
            var_a1 = var_a1->unkC;
            if (var_a1 == NULL) {

            } else {
                goto loop_2;
            }
        }
    }
}
