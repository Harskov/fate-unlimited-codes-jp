typedef struct Sub {
    unsigned char pad[0x2];
    u8 field_2;
} Sub;

typedef struct Entry {
    u32 field_0;
    unsigned char pad[0x4];
    s16 field_4;
    unsigned char pad2[0x6];
    Sub *field_C;
} Entry;

typedef struct Mid {
    unsigned char pad[0x19C];
    s32 field_19C;
    Entry *field_1A0;
} Mid;

typedef struct Obj {
    unsigned char pad[0x3C];
    Mid *field_3C;
} Obj;

void func_001AE860(Obj *p, s32 arg1, s32 arg2, u32 arg3)
{
    Mid *m = p->field_3C;
    Entry *e = m->field_1A0;
    s32 i;
    if (e == 0)
        return;
    if (m->field_19C <= 0)
        return;
    i = 0;
    do {
        if (arg3 & e->field_0) {
            Sub *s = e->field_C;
            u8 v = s->field_2;
            if (arg1 == e->field_4) {
                if (arg2 != 0)
                    v |= 4;
                else
                    v &= ~4;
            } else if (arg2 == 0) {
                v &= ~4;
            }
            s->field_2 = v;
        }
        i++;
        e++;
    } while (i < p->field_3C->field_19C);
}
