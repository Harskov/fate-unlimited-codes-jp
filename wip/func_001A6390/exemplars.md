# Exemplars for func_001A6390 — the 3 matched functions nearest by address

## func_001A5450 @ 0x001A5450 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
#include "game_00/arr220.h"

void func_001A5450(Arr220 *a, int i, int val)
{
    Sub220 *s = &a->sub;
    int end;

    if (i < 0) {
        end = s->count;
        i = 0;
    } else {
        if (i >= s->count)
            return;
        end = i + 1;
    }

    for (; i < end; i++)
        ((Elem220 *)s->base)[i].unk_18 = val;
}

```

## func_001A49A0 @ 0x001A49A0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
#include "game_00/arr220.h"

void func_001A49A0(Arr220 *a, int i)
{
    Sub220 *s = &a->sub;

    if (i >= s->count)
        return;

    s->index = i;
    s->cur = s->base + i * 28;
}

```

## func_001A4960 @ 0x001A4960 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
#include "game_00/arr220.h"

unsigned char *func_001A4960(Arr220 *a, int i)
{
    Sub220 *s = &a->sub;

    if (i >= s->count)
        return 0;
    return s->base + i * 28;
}

```
