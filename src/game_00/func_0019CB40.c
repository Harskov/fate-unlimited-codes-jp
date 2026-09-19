typedef struct Ent00531B60 {
    unsigned char unk_0[0x3C];
    int unk_3C;
    int unk_40[4];
    unsigned char unk_50[0x24];
} Ent00531B60;

extern Ent00531B60 D_00531B60[];

int func_0019CB40(void)
{
    Ent00531B60 *e;
    int i;
    int j;

    for (i = 0; i < 2; i++) {
        e = &D_00531B60[i];
        if (e->unk_3C != 0)
            return 1;
        for (j = 0; j < 4; j++) {
            if (e->unk_40[j] != 0)
                return 1;
        }
    }
    return 0;
}
