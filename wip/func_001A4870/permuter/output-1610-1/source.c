
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
  float new_var4;
  float v = 1.0f;
  float new_var3;
  new_var = p->f10;
  new_var4 = p->f14;
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

      new_var3 = p->f10;
      new_var2 = new_var;
      case 2:
        v = p->fC;
        break;

      case 3:
        if (new_var2 > v)
      {
        v = new_var3;
      }
        if (v > 1.2f)
      {
        v = 1.2f;
      }
        break;

      case 4:
        if (new_var4 > v)
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
