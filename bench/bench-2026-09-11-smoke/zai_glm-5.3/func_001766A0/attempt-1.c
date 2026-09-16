typedef struct {
    s32 a[2];
    s32 b[2];
    s32 c[2];
} Ent;

extern Ent D_00528A00[12];

int func_001766A0(int arg0, int arg1)
{
    int i;

    for (i = 0; i < 12; i++) {
        if (D_00528A00[i].a[arg1] == 1 && D_00528A00[i].c[arg1] == arg0) {
            D_00528A00[i].a[arg1] = 0;
            D_00528A00[i].c[arg1] = 0;
            D_00528A00[i].b[arg1] = 0;
            return 1;
        }
    }
    return 0;
}
