typedef struct Rec {
    unsigned char unk_0[0x18];
} Rec;

extern Rec D_00528A00[];
extern Rec D_00528A08[];
extern Rec D_00528A10[];

int func_001766A0(int arg0, int arg1)
{
    int r = 0;
    int i;
    int *p = (int *)&D_00528A00[0] + arg1;

    for (i = 0; i < 12; i++) {
        if (p[0] == 1 && arg0 == p[4]) {
            r = 1;
            ((int *)&D_00528A00[i])[arg1] = 0;
            ((int *)&D_00528A10[i])[arg1] = 0;
            ((int *)&D_00528A08[i])[arg1] = 0;
            break;
        }
        p += 6;
    }
    return r;
}
