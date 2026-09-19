# Exemplars for func_0019C7F0 — the 3 matched functions nearest by address

## func_0019CB40 @ 0x0019CB40 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
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

```

## func_0019C1E0 @ 0x0019C1E0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
extern int D_0051C830[];

int func_0019C1E0(void)
{
    return D_0051C830[0];
}

```

## func_0019C1D0 @ 0x0019C1D0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
extern int D_0051C830[];

void func_0019C1D0(int v)
{
    D_0051C830[0] = v;
}

```
