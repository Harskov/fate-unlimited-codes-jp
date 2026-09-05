typedef struct Holder { unsigned char pad[0x60]; short *table; } Holder;
int func_001619C0(Holder *h, int i) { short *t = h->table; if (t == 0) return -1; if (i < 0) return -1; if (i >= t[0]) return -1; return t[i + 1]; }
