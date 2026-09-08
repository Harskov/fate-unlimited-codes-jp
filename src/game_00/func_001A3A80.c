typedef struct Obj {
    unsigned char unk_0[0x230];
    int flags;
} Obj;

int func_001A3A80(Obj *o, unsigned short mask)
{
    return o->flags & mask;
}
