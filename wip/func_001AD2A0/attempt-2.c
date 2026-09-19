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
        return 0;
    if (p->field_23A8 != 0)
        return 0;
    if (p->field_238C != 0)
        return 0;
    if (arg1 == 0)
        return 1;
    if (p->field_2398 == 0)
        return 1;
    return 0;
}
