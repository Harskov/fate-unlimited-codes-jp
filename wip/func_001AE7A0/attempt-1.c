typedef struct Sub {
    unsigned char pad[0xC];
    int field_C;
} Sub;

typedef struct Mid {
    unsigned char pad[0x58];
    Sub *field_58;
} Mid;

typedef struct Obj {
    unsigned char pad[0x3C];
    Mid *field_3C;
} Obj;

void func_001AE7A0(Obj *p)
{
    Mid *m = p->field_3C;
    if (m != 0) {
        Sub *s = m->field_58;
        if (s != 0) {
            s->field_C |= 0x2000;
        }
    }
}
