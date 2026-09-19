typedef struct Obj {
    unsigned char pad[0x238C];
    int field_238C;
    unsigned char pad2[0x2398 - 0x238C - 4];
    int field_2398;
    unsigned char pad3[0x23A8 - 0x2398 - 4];
    int field_23A8;
} Obj;

int func_001AD250(Obj *p, int arg1)
{
    int r = 0;
    if (p->field_23A8 != 0) {
        r = 1;
    } else if (p->field_238C != 0) {
        r = 1;
    } else if (arg1 != 0 && p->field_2398 != 0) {
        r = 1;
    }
    return r;
}
