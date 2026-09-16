typedef struct Ent {
    int unk_0;
    int *unk_4;
    int *unk_8;
} Ent;

typedef struct H {
    unsigned char pad_0[0x3C];
    Ent *sub;
    unsigned char pad_40[0x24];
    int count;
} H;

void func_001775A0(H *arg0)
{
    H *p;
    int i;

    i = 0;
    if (i < arg0->count) {
        p = arg0;
        do {
            Ent *e = p->sub;
            if (e != 0) {
                int *q = e->unk_4;
                if (q != e->unk_8) {
                    *q &= 0xFFFDFFFF;
                    q = p->sub->unk_4;
                    *q |= 1;
                }
            }
            i = i + 1;
            p = (H *)((char *)p + 4);
        } while (i < arg0->count);
    }
}
