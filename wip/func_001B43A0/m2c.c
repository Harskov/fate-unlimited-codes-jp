void func_001B43A0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_t0;
    s32 var_t1;
    s32 var_t2;
    void *temp_a3;

    var_t2 = 0;
    if (arg0->unk0 > 0) {
        temp_t0 = ~arg3;
        var_t1 = 0;
loop_2:
        temp_a3 = arg0->unk2C + var_t1;
        if (arg1 >= 0) {
            if (arg1 == var_t2) {
                temp_a3->unk20 = (s32) (temp_a3->unk20 | arg2);
                temp_a3->unk20 = (s32) (temp_a3->unk20 & temp_t0);
            } else {
                goto block_5;
            }
        } else {
            temp_a3->unk20 = (s32) (temp_a3->unk20 | arg2);
            temp_a3->unk20 = (s32) (temp_a3->unk20 & temp_t0);
block_5:
            var_t2 += 1;
            var_t1 += 0x34;
            if (var_t2 >= arg0->unk0) {

            } else {
                goto loop_2;
            }
        }
    }
}
