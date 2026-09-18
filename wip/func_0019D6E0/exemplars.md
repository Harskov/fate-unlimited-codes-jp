# Exemplars for func_0019D6E0 — the 3 matched functions nearest by address

## func_0019D6A0 @ 0x0019D6A0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
extern int D_0051C870[];
extern int D_0051C874[];

void func_0019D6A0(int *p)
{
    int i = *p;
    D_0051C870[i * 2] = 0;
    D_0051C874[*p * 2] = 0;
}

```

## func_0019D0B0 @ 0x0019D0B0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
extern int D_0051C874[];

int func_0019D0B0(int i)
{
    if (i < 0)
        goto fail;
    if (i >= 10)
        goto fail;
    return D_0051C874[i * 2];
fail:
    return 0;
}

```

## func_0019CFF0 @ 0x0019CFF0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    unsigned char unk_0[0x24FC];
    int unk_24FC;
} Obj;

int func_0019CFF0(Obj *p)
{
    return p->unk_24FC;
}

```
