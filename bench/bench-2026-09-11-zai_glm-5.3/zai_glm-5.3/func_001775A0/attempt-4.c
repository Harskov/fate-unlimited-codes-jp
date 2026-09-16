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
    char *p;

    if (0 < *(int *)((char *)arg0 + 0x64)) {
        i = 0;
        p = (char *)arg0;
        do {
            e = *(Ent **)(p + 0x3C);
            if (e != 0) {
                flags = *(int **)&e->unk_4;
                if (flags != *(int **)&e->unk_8) {
                    *flags &= 0xFFFDFFFF;
                    e = *(Ent **)(p + 0x3C);
                    flags = *(int **)&e->unk_4;
                    *flags |= 1;
                }
            }
            i++;
            p += 4;
        } while (i < *(int *)((char *)arg0 + 0x64));
    }
}
