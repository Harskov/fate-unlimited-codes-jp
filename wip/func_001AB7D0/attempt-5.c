typedef struct Sub {
    unsigned char pad[0x10];
    int field_10;
} Sub;

typedef struct Obj {
    unsigned char pad[0x2440];
    int field_2440;
    unsigned char pad2[0x2448 - 0x2440 - 4];
    Sub *field_2448;
    unsigned char pad3[0x2508 - 0x2448 - 4];
    int field_2508;
} Obj;

int func_001AB7D0(Obj *p)
{
    int r;

    if (p->field_2440 == 0)
        goto fail;
    if (p->field_2448 == 0)
        goto fail;
    if (p->field_2448->field_10 == 0)
        goto fail;
    goto done;
fail:
    r = p->field_2508;
done:
    return r;
}
