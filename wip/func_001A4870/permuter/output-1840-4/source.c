
extern int D_0051D894[];
typedef struct Params
{
  unsigned char pad0[8];
  float f8;
  float fC;
  float f10;
  float f14;
} Params;
typedef struct Arr
{
  unsigned char pad[0x22C];
  Params *params;
} Arr;
float func_001A4870(Arr *a, int mode)
{
  int new_var;
  Params *p = a->params;
  float v = 1.0f;
  if (D_0051D894[0] != 1)
  {
    switch (mode)
    {
      case 0:
        v = p->f8;
        break;

      case 1:
        v = p->f8;
        break;

      case 2:
 do { v = p->fC; break; } while (0);

      case 3:
        if (p->f10 > v)
      {
        v = p->f10;
      }
        if (v > 1.2f)
      {
        v = 1.2f;
      }
        break;

      new_var = p->f14 > v;
      case 4:
        if (new_var)
      {
        v = p->f14;
      }
        if (v > 1.2f)
      {
        v = 1.2f;
      }
        break;

    }

  }
  return v;
}
