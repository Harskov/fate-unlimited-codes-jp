/* calibration candidate func_001619C0: bounds-checked short table lookup */
typedef struct Holder { unsigned char pad[0x60]; short *table; } Holder;

int func_001619C0(Holder *h, int i)
{
    short *t = h->table;
    if (t == 0)
        return -1;
    if (i < 0)
        return -1;
    if (i < t[0])
        return t[i + 1];
    return -1;
}
