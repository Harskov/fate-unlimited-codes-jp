# Exemplars for func_0019B470 — the 3 matched functions nearest by address

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

## func_0019AE60 @ 0x0019AE60 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    unsigned char unk_0[0x334];
    int unk_334;
} Obj;

extern Obj *D_0051E444[];
extern int D_00524798[];

int func_0019AE60(void)
{
    Obj *p = D_0051E444[0];
    if (p != 0)
        return p->unk_334;
    return D_00524798[0];
}

```
