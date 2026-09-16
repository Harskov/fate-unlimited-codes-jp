typedef struct Entry {
    s32 state;
    s32 pad4[3];
    s32 id;
    s32 pad14;
} Entry;

extern s32 D_00528A00[];
extern s32 D_00528A08[];

s32 func_00176740(s32 arg0, s32 arg1)
{
    Entry *e = (Entry *)&D_00528A00[arg1];
    int i;

    for (i = 0; i < 12; i++) {
        if (e->state == 1 && e->id == arg0)
            return *(s32 *)((char *)&D_00528A08 + i * 24 + arg1 * 4);
        e++;
    }
    return 0;
}
