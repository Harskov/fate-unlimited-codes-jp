typedef struct Slot {
    int used[2];
    int unk_8[2];
    int id[2];
} Slot;

extern Slot D_00528A00[];

int func_001766A0(int id, int side)
{
    int i;

    for (i = 0; i < 12; i++) {
        if (D_00528A00[i].used[side] == 1 && D_00528A00[i].id[side] == id) {
            D_00528A00[i].used[side] = 0;
            D_00528A00[i].id[side] = 0;
            D_00528A00[i].unk_8[side] = 0;
            return 1;
        }
    }
    return 0;
}
