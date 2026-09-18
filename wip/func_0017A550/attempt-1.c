typedef unsigned short u16;

typedef struct Obj {
    unsigned char pad[0xC0];
    struct Obj *unk_C0;
    u16 unk_C4;
} Obj;

int func_0017A550(Obj *a, Obj *b)
{
    if (b == 0)
        return -1;
    if (a == 0)
        return -1;
    if (a->unk_C0 != 0)
        return -1;
    a->unk_C0 = b;
    b->unk_C4 = b->unk_C4 + 1;
    return b->unk_C4 & 0xFFFF;
}
