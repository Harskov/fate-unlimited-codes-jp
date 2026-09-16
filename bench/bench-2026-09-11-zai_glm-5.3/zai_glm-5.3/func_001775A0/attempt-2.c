typedef struct Ent {
    unsigned char unk_0[0x4];
    int unk_4;
    int unk_8;
} Ent;

void func_001775A0(void *arg0)
{
    Ent *e;
    int *flags;
    int i;
    int *p;

    if (0 < *(int *)((char *)arg0 + 0x64)) {
        p = (int *)arg0;
        i = 0;
        do {
            e = *(Ent **)(p + 15);
            if (e != 0) {
                flags = *(int **)&e->unk_4;
                if (flags != *(int **)&e->unk_8) {
                    *flags &= 0xFFFDFFFF;
                    e = *(Ent **)(p + 15);
                    flags = *(int **)&e->unk_4;
                    *flags |= 1;
                }
            }
            i++;
            p++;
        } while (i < *(int *)((char *)arg0 + 0x64));
    }
}
