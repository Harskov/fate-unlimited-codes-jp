extern int D_0051D894[];

typedef struct Params {
    unsigned char pad0[8];
    float f8;
    float fC;
    float f10;
    float f14;
} Params;

typedef struct Arr {
    unsigned char pad[0x22C];
    Params *params;
} Arr;

float func_001A4870(Arr *a, int mode)
{
    Params *p;
    float v;
    float t;

    v = 1.0f;
    p = a->params;

    if (D_0051D894[0] != 1) {
        switch (mode) {
        case 0:
            v = p->f8;
            break;
        case 1:
            v = p->f8;
            break;
        case 2:
            v = p->fC;
            break;
        case 3:
            t = p->f10;
            if (t > v)
                v = t;
            if (v > 1.2f)
                v = 1.2f;
            break;
        case 4:
            t = p->f14;
            if (t > v)
                v = t;
            if (v > 1.2f)
                v = 1.2f;
            break;
        default:
            break;
        }
    }
    return v;
}
