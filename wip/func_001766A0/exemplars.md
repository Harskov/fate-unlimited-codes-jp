# Exemplars for func_001766A0 — the 3 matched functions nearest by address

## func_00176BC0 @ 0x00176BC0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
int func_00176BC0(int *table, int i, int v)
{
    table[i] = v;
    return table[i];
}

```

## func_00176BE0 @ 0x00176BE0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int (*Handler)(int, int, unsigned char *);

extern Handler jtbl_003D66B0[];

int func_00176BE0(int a0, int a1, unsigned char *cmd)
{
    return jtbl_003D66B0[*cmd](a0, a1, cmd);
}

```

## func_00176C00 @ 0x00176C00 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
int func_00176C00(int *table, int i)
{
    return table[i];
}

```
