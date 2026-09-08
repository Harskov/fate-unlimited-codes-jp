
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
  Params *p = a->params;
  float new_var;
  float v = 1.0f;
  if (D_0051D894[0] != 1)
  {
    switch (mode)
    {
      new_var = p->f8;
      case 0:
        break;

      v = new_var;
      case 1:
        v = new_var;
        break;

      case 2:
        p->f8 += 0;
        v = p->fC;
        break;

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

      case 4:
        if (p->f14 > v)
      {
        new_var = p->f14;
        v = new_var;
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
