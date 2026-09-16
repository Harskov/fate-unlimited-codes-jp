# Exemplars for func_001990C0 — the 3 matched functions nearest by address

## func_001990B0 @ 0x001990B0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
void func_001990B0(void)
{
}

```

## func_00199CF0 @ 0x00199CF0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    unsigned char unk_0[0x13C];
    int unk_13C;
    unsigned char unk_140[0x28];
    int unk_168;
} Obj;

void func_00199CF0(Obj *o)
{
    o->unk_168 = 0;
    o->unk_13C = 0;
}

```

## func_001A36D0 @ 0x001A36D0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
int func_001A36D0(int arg0, int arg1)
{
    if (arg1 == 0)
        return 50000;
    return (arg0 - arg1) * 1000;
}

```
