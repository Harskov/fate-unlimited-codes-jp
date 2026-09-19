typedef struct Sub {
    unsigned char pad[0xC];
    int unkC;
} Sub;

typedef struct Obj {
    unsigned char pad[0x2510];
    Sub *unk2510;
} Obj;

int func_0019DCC0(Obj *arg0)
{
    Sub *s = arg0->unk2510;
    if (s == 0)
        return 0x282;
    if (s->unkC != 1)
        return 0x282;
    return 0x284;
}
