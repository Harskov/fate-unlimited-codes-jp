typedef unsigned short u16;

typedef struct Obj {
    unsigned char pad[0xC0];
    struct Obj *unk_C0;
    u16 unk_C4;
} Obj;

int func_0017A550(Obj *a, Obj *b)
{
    int r = -1;
    if (b != 0 && a != 0 && a->unk_C0 == 0) {
        a->unk_C0 = b;
        b->unk_C4++;
        r = b->unk_C4 & 0xFFFF;
    }
    return r;
}
