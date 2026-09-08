# Exemplars for func_00199CF0 — the 3 matched functions nearest by address

## func_001990C0 @ 0x001990C0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
/* calibration candidate func_001990C0: flag bits */
typedef struct Flags { int f0; unsigned char pad[0xC]; int f10; } Flags;

void func_001990C0(Flags *f)
{
    f->f10 |= 4;
    if (f->f0 & 0x20)
        f->f10 |= 0x80;
}

```

## func_001990B0 @ 0x001990B0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
void func_001990B0(void)
{
}

```

## func_001A47A0 @ 0x001A47A0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Timer {
    unsigned char pad[0xC];
    float elapsed;
} Timer;

typedef struct Obj {
    unsigned char pad[0x40];
    Timer *timer;
} Obj;

float func_001A47A0(Obj *o)
{
    return o->timer->elapsed / (1.0f / 60.0f);
}

```
