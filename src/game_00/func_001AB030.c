typedef struct Obj {
    unsigned char unk_0[0x5C8];
    float unk_5C8;
} Obj;

extern float func_00175B10(float v);

float func_001AB030(Obj *o)
{
    return func_00175B10(o->unk_5C8);
}
