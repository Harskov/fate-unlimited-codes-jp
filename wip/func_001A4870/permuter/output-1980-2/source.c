
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
  float v = 1.0f;
  float new_var;
  if (D_0051D894[0] != 1)
  {
    if (1)
    {
      switch (mode)
      {
        case 0:
          v = p->f8;
          break;
          if (p->f14)
        {
        }

        case 1:
          v = p->f8;
          break;

        case 2:
          v = p->fC;
          v = p->f14;
          break;

        new_var = p->f10;
        case 3:
          if (new_var > v)
        {
          v = new_var;
        }
          if (v > 1.2f)
        {
          v = 1.2f;
        }
          break;

        case 4:
          if (p->f14 > v)
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
  }
  return v;
}
