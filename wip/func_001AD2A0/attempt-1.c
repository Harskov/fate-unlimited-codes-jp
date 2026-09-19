typedef struct Obj {
    unsigned char pad[0x1DC];
    int field_1DC;
    unsigned char pad2[0x238C - 0x1DC - 4];
    int field_238C;
    unsigned char pad3[0x2398 - 0x238C - 4];
    int field_2398;
    unsigned char pad4[0x23A8 - 0x2398 - 4];
    int field_23A8;
} Obj;

int func_001AD2A0(Obj *p, int arg1)
{
    if (p->field_1DC & 0x80)
        goto ret0;
    if (p->field_23A8 != 0)
        goto ret0;
    if (p->field_238C != 0)
        goto ret0;
    if (arg1 == 0)
        goto ret1;
    if (p->field_2398 == 0)
        goto ret1;
ret0:
    return 0;
ret1:
    return 1;
}
