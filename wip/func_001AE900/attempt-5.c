typedef struct Sub {
    unsigned char pad[0x19C];
    int field_19C;
    void *field_1A0;
} Sub;

typedef struct Obj {
    unsigned char pad[0x3C];
    Sub *field_3C;
} Obj;

typedef struct Ent {
    int field_0;
    short field_4;
    unsigned char pad[6];
    unsigned char *field_C;
} Ent;

void func_001AE900(Obj *p, int arg1, int arg2, int arg3)
{
    Sub *s = p->field_3C;
    Ent *e = s->field_1A0;
    int i;
    int mask;
    int v;

    if (e != 0) {
        mask = 0x40;
        i = 0;
        if (s->field_19C > 0) {
            mask = arg3 ? 0x80 : 0x40;
            arg1 = (short)arg1;
            do {
                if ((mask & e->field_0) != 0) {
                    v = e->field_C[2];
                    if (arg1 == e->field_4) {
                        if (arg2 != 0)
                            v |= 4;
                        else
                            v &= ~4;
                    } else {
                        v &= ~4;
                    }
                    e->field_C[2] = v;
                }
                i++;
                e = (Ent *)((char *)e + 0x10);
            } while (i < s->field_19C);
        }
    }
}
