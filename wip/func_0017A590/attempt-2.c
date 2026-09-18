typedef unsigned short u16;

typedef struct Obj {
    unsigned char pad[0xC4];
    u16 count;
    unsigned char pad2[0xA];
    struct Obj *link;
} Obj;

int func_0017A590(Obj *a, Obj *b)
{
    int r = -1;
    if (b != 0 && a != 0 && a->link == 0) {
        a->link = b;
        b->count = b->count + 1;
        r = b->count;
    }
    return r;
}
