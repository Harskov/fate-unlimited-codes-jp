typedef struct Obj {
    unsigned char pad[0x18];
    int count;
    int slots[8];
    int field_3C;
} Obj;

void func_001AE9F0(Obj *p, int arg1)
{
    if (arg1 != 0) {
        if (p->count < 8) {
            p->slots[p->count] = arg1;
            if (p->count == 0) {
                p->field_3C = arg1;
            }
            p->count = p->count + 1;
        }
    }
}
