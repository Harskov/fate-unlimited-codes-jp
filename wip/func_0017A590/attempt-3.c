typedef unsigned short u16;

typedef struct Obj {
    unsigned char pad[0xC4];
    u16 count;
    unsigned char pad2[0xA];
    struct Obj *link;
} Obj;

int func_0017A590(Obj *a, Obj *b)
{
    if (b == 0)
        goto fail;
    if (a == 0)
        goto fail;
    if (a->link != 0)
        goto fail;
    a->link = b;
    b->count = b->count + 1;
    return b->count;
fail:
    return -1;
}
