typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Src {
    unsigned char unk_0[0x460];
    float unk_460;
    float unk_464;
    float unk_468;
} Src;

typedef struct Other {
    float unk_0;
    float unk_4;
} Other;

int func_001A2E20(Src *s, Vec3 *dst, float *out, Other *o, int i, float w)
{
    dst[i].x = s->unk_460;
    dst[i].y = o->unk_4;
    dst[i].z = s->unk_468;
    out[i] = w;
    return i + 1;
}
