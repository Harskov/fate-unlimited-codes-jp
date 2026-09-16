typedef struct Ent {
    int unk_0;
    int pad_4[3];
    int unk_10;
    int pad_14[2];
} Ent;

extern unsigned char D_00528A00[];
extern unsigned char D_00528A08[];

int func_00176740(int a0, int a1)
{
    Ent *e = (Ent *)&D_00528A00[a1 * 4];
    int i = 0;

    do {
        if (e->unk_0 == 1 && e->unk_10 == a0)
            return *(int *)&D_00528A08[a1 * 4 + i * 24];
        i++;
        e++;
    } while (i < 12);
    return 0;
}
