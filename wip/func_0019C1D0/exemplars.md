# Exemplars for func_0019C1D0 — the 3 matched functions nearest by address

## func_0019B470 @ 0x0019B470 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    unsigned int flags;
    unsigned char unk_4[0x284];
    int unk_288;
    int unk_28C;
    int unk_290;
    int unk_294;
    int unk_298;
} Obj;

void func_0019B470(Obj *p)
{
    p->flags &= 0xFF7FFFFF;
    p->unk_288 = 0;
    p->unk_28C = 0;
    p->unk_290 = 0;
    p->unk_294 = 0;
    p->unk_298 = 0;
}

```

## func_0019AEA0 @ 0x0019AEA0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
extern int D_0051C804[];

void func_0019AEA0(int v)
{
    D_0051C804[0] = v;
}

```

## func_0019AE90 @ 0x0019AE90 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
extern int D_0051C804[];

int func_0019AE90(void)
{
    return D_0051C804[0];
}

```
