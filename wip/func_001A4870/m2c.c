void func_001A4870(void *arg0, s32 arg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f0;
    void *temp_a0;

    var_f0 = 1.0f;
    temp_a0 = arg0->unk22C;
    if (D_0051D894 != 1) {
        switch (arg1) {                             /* irregular */
        case 0:
            return;
        case 1:
            return;
        case 2:
            return;
        case 3:
            temp_f1 = temp_a0->unk10;
            if (!(temp_f1 <= 1.0f)) {
                var_f0 = temp_f1;
            }
            if (!(var_f0 <= 1.2f)) {

            }
            break;
        case 4:
            temp_f1_2 = temp_a0->unk14;
            if (!(temp_f1_2 <= 1.0f)) {
                var_f0 = temp_f1_2;
            }
            if (!(var_f0 <= 1.2f)) {

            }
            break;
        }
    }
}
