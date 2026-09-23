typedef int s32;
typedef unsigned char u8;

typedef struct Slot {
    s32 unk_0;
    u8 pad_4[0xC4];
} Slot;

typedef struct Obj {
    u8 pad_0[0x5D4];
    Slot slots[8];
} Obj;

void func_001B3AD0(Obj *o, s32 v)
{
    s32 i;

    if (v != 0) {
        for (i = 0; i < 8; i++) {
            if (o->slots[i].unk_0 == 0) {
                o->slots[i].unk_0 = v;
                return;
            }
        }
    }
}
