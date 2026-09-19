typedef struct Slot {
    unsigned char pad[0x3C];
    int unk_3C;
    int unk_40;
} Slot;

typedef struct Group {
    Slot slots[4];
} Group;

extern Group D_00531B60[];

int func_0019CB40(void)
{
    int i;
    int j;
    Slot *s;
    Group *g;

    for (i = 0; i < 2; i++) {
        g = D_00531B60 + i;
        if (g->slots[0].unk_3C != 0)
            return 1;
        s = g->slots;
        for (j = 0; j < 4; j++) {
            if (s->unk_40 != 0)
                return 1;
            s++;
        }
    }
    return 0;
}
