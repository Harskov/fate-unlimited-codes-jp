typedef struct Obj {
    unsigned int flags;
    unsigned char unk_4[0x284];
    int unk_288;
    int unk_28C;
    int unk_290;
    int unk_294;
    int unk_298;
} Obj;

void func_0019B470(Obj *p)
{
    p->flags &= 0xFF7FFFFF;
    p->unk_288 = 0;
    p->unk_28C = 0;
    p->unk_290 = 0;
    p->unk_294 = 0;
    p->unk_298 = 0;
}
