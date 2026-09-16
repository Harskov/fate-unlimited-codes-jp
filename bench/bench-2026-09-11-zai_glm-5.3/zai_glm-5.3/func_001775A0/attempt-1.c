typedef struct Slot {
    unsigned char unk_0[0x3C];
    int unk_3C;
} Slot;

typedef struct Ent {
    int unk_0;
    int unk_4;
    int unk_8;
} Ent;

void func_001775A0(void *arg0)
{
    Slot *p;
    int i;
    int count;
    Ent *e;
    int *flags;

    count = *(int *)((char *)arg0 + 0x64);
    if (count > 0) {
        p = (Slot *)arg0;
        i = 0;
        do {
            e = (Ent *)p->unk_3C;
            if (e != 0) {
                flags = (int *)e->unk_4;
                if (flags != (int *)e->unk_8) {
                    *flags &= 0xFFFDFFFF;
                    flags = (int *)((Ent *)p->unk_3C)->unk_4;
                    *flags |= 1;
                }
            }
            i++;
            p++;
        } while (i < *(int *)((char *)arg0 + 0x64));
    }
}
