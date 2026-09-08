
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
  float new_var2;
  float new_var;
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
        v = p->fC;
        break;

      new_var = p->f14;
      case 3:
        new_var2 = 1.2f;
        if (p->f10 > v)
      {
        v = p->f10;
      }
        if (v > new_var2)
      {
        v = new_var2;
      }
        break;

      case 4:
        if (new_var > v)
      {
        v = p->f14;
      }
        if (v > 1.2f)
      {
        v = new_var2;
      }
        break;

    }

  }
  return v;
}
