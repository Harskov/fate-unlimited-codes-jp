extern int D_005239C8[];

int func_001A3600(int arg0)
{
    int limit;
    int base;
    int step;
    int diff;

    switch (D_005239C8[0]) {
    case 0:
        limit = 0x7080;
        step = 0x3C;
        base = 15;
        break;
    case 1:
        limit = 0xE100;
        step = 0x78;
        base = 10;
        break;
    case 2:
        limit = 0x15180;
        step = 0xF0;
        base = 5;
        break;
    default:
        limit = 0;
        break;
    }

    if (arg0 >= limit)
        return 0;

    diff = limit - arg0;
    return (diff * (base + diff / step)) / 10 + 30000;
}
