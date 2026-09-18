# Exemplars for func_0019D6A0 — the 3 matched functions nearest by address

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

## func_0019C1E0 @ 0x0019C1E0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
extern int D_0051C830[];

int func_0019C1E0(void)
{
    return D_0051C830[0];
}

```
