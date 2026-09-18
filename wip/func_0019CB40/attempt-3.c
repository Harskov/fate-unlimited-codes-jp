typedef struct Ent {
    unsigned char pad[0x3C];
    int unk_3C;
    int unk_40;
    int unk_44;
    int unk_48;
    int unk_4C;
} Ent;

extern Ent D_00531B60[];

int func_0019CB40(void)
{
    int i;
    int j;
    Ent *p;
    Ent *q;

    for (i = 0; i < 2; i++) {
        p = &D_00531B60[i];
        if (p->unk_3C != 0)
            return 1;
        q = p;
        for (j = 0; j < 4; j++) {
            if (q->unk_40 != 0)
                return 1;
            q++;
        }
    }
    return 0;
}
