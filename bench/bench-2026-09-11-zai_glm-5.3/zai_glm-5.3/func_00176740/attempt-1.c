typedef struct Ent {
    s32 unk_0;
    s32 pad_4[3];
    s32 unk_10;
} Ent;

extern s32 D_00528A00[];
extern s32 D_00528A08[];

s32 func_00176740(s32 a0, s32 a1)
{
    Ent *e = (Ent *)((s8 *)D_00528A00 + a1 * 4);
    s32 i;

    for (i = 0; i < 12; i++) {
        if (e->unk_0 == 1 && e->unk_10 == a0) {
            return *(s32 *)((s8 *)D_00528A08 + a1 * 4 + i * 24);
        }
        e++;
    }
    return 0;
}
