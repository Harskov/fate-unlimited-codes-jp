# Exemplars for func_001A27C0 — the 3 matched functions nearest by address

## func_001A2E20 @ 0x001A2E20 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
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

```

## func_001A3560 @ 0x001A3560 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
#include "game_00/tbl_0051D890.h"

void func_001A3560(int i)
{
    ((Ent0051D890 *)&D_0051D890[i])->unk_EC = 0;
}

```

## func_001A35D0 @ 0x001A35D0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
#include "game_00/tbl_0051D890.h"

int func_001A35D0(int i, int v)
{
    ((Ent0051D890 *)&D_0051D890[i])->unk_F0 = v;
    return 0;
}

```
