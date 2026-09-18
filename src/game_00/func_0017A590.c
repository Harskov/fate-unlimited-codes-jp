typedef unsigned short u16;

typedef struct Obj {
    unsigned char pad[0xC4];
    u16 count;
    unsigned char pad2[0xA];
    struct Obj *link;
} Obj;

int func_0017A590(Obj *a, Obj *b)
{
    u16 c;
    if (b == 0)
        goto fail;
    if (a == 0)
        goto fail;
    if (a->link != 0)
        goto fail;
    a->link = b;
    c = b->count + 1;
    b->count = c;
    return c;
fail:
    return -1;
}
