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
    Ent *e;
    int i;

    if (arg0->count > 0) {
        i = 0;
        p = arg0;
        do {
            e = p->sub;
            if (e != 0) {
                if (e->unk_4 != e->unk_8) {
                    *e->unk_4 &= 0xFFFDFFFF;
                    e = p->sub;
                    *e->unk_4 |= 1;
                }
            }
            i++;
            p = (H *)((char *)p + 4);
        } while (i < arg0->count);
    }
}
