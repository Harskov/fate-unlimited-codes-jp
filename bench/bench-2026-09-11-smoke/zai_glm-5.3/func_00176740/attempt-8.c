typedef struct Entry {
    s32 f0;
    s32 pad4[3];
    s32 f10;
    s32 pad14[2];
} Entry;

typedef struct Out {
    s32 v[6];
} Out;

extern Entry D_00528A00[];
extern Out D_00528A08[];

s32 func_00176740(s32 arg0, s32 arg1)
{
    Entry *e;
    int i;

    e = &D_00528A00[arg1];
    for (i = 0; i < 12; i++) {
        if (e->f0 == 1 && e->f10 == arg0)
            return D_00528A08[i].v[arg1];
        e++;
    }
    return 0;
}
