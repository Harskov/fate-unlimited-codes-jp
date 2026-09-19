typedef struct Obj {
    unsigned char pad[0x18];
    int count;
    int slots[8];
    int field_3C;
} Obj;

void func_001AE9F0(Obj *p, int arg1)
{
    int i;

    if (arg1 != 0) {
        i = p->count;
        if (i < 8) {
            p->slots[i] = arg1;
            if (i == 0) {
                p->field_3C = arg1;
            }
            p->count = i + 1;
        }
    }
}
