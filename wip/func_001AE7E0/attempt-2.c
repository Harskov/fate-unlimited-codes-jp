typedef struct Entry {
    int field_0;
    short field_4;
    unsigned char pad[0xA];
    void *field_C;
} Entry;

typedef struct Sub {
    unsigned char pad[0x19C];
    int field_19C;
    Entry *field_1A0;
} Sub;

typedef struct Obj {
    unsigned char pad[0x3C];
    Sub *field_3C;
} Obj;

int func_001AE7E0(Obj *p, int arg1, int arg2)
{
    Sub *s = p->field_3C;
    Entry *e = s->field_1A0;
    int n;
    int i;

    if (e == 0)
        return 0;
    n = s->field_19C;
    if (n <= 0)
        return 0;
    for (i = 0; i < n; i++) {
        if ((arg2 & e->field_0) && (arg1 == e->field_4)) {
            return (*(unsigned char *)((char *)e->field_C + 2) & 4) != 0;
        }
        e++;
    }
    return 0;
}
