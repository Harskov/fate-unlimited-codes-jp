typedef struct Sub {
    unsigned char pad[0x10];
    int field_10;
} Sub;

typedef struct Obj {
    unsigned char pad[0x2448];
    Sub *field_2448;
    unsigned char pad2[0x2508 - 0x2448 - 4];
    int field_2508;
} Obj;

void func_001AB770(Obj *p, int v)
{
    if (p != 0) {
        p->field_2508 = v;
        if (p->field_2448 != 0) {
            p->field_2448->field_10 = v;
        }
    }
}
