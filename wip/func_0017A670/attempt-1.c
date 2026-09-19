typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Ent0051AC78 {
    struct Ent0051AC78 *next;
    int unk_4;
    unsigned char unk_8[0x8];
    Vec3 unk_10;
    Vec3 unk_1C;
    Vec3 scale;
    unsigned char unk_34[0xC0 - 0x34];
    int unk_C0;
    short unk_C4;
    short unk_C6;
    char unk_C8;
    char unk_C9;
    char unk_CA;
} Ent0051AC78;

extern Ent0051AC78 *D_0051AC78[];
extern unsigned int D_0051AE58[];
extern unsigned int D_0051AE40[];

void func_0017A670(char kind, short id)
{
    Ent0051AC78 *e;
    unsigned int n;

    e = D_0051AC78[0];
    if (e == 0)
        return;

    D_0051AC78[0] = e->next;
    e->next = 0;
    e->unk_C4 = 1;
    e->unk_C9 = 0;
    e->unk_C8 = kind;
    e->unk_10.x = 0.0f;
    e->unk_10.y = 0.0f;
    e->unk_10.z = 0.0f;
    e->unk_1C.x = 0.0f;
    e->unk_1C.y = 0.0f;
    e->unk_1C.z = 0.0f;
    e->scale.x = 1.0f;
    e->scale.y = 1.0f;
    e->scale.z = 1.0f;
    e->unk_C0 = 0;
    e->unk_CA = 0;
    e->unk_4 = 0;
    e->unk_C6 = id;

    n = D_0051AE58[0] + 1;
    D_0051AE58[0] = n;
    if (D_0051AE40[0] < n)
        D_0051AE40[0] = n;
}
