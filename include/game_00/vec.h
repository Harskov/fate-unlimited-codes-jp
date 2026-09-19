#ifndef GAME_00_VEC_H
#define GAME_00_VEC_H
/* The two float vector layouts of the game_00 math helpers.

   Vec4 is the four-float record agreed by func_0016CFD0, func_0016D000,
   func_0016D070, func_0016D0B0, func_0016E8F0, func_0016E9E0, func_0016F680,
   func_0016F6D0, func_00175070 and func_00175080, which had carried ten identical
   copies of it. The helpers divide into two groups over the same layout: some touch
   unk_0..unk_8 and leave unk_C alone (func_0016CFD0, func_0016E8F0, func_0016E9E0),
   the rest touch all four. Both groups read the same offsets, so this is one type.

   Vec3 is the three-float x/y/z record agreed by func_0017A670 and func_001A2E20,
   which name the fields, and func_001B6F00, which had called its own copy "Vec" —
   the same name the four-float record carries in the files above. The two layouts
   are distinct; the collision was in the per-file copies, not in the game.

   The field names stay systematic: no string, caller, SDK pattern or Ghidra hint
   names these offsets, and the arithmetic alone is not evidence under the naming
   rule. Vec3's x/y/z come from the copies being consolidated, which already used
   them. */
typedef struct Vec4 {
    float unk_0;
    float unk_4;
    float unk_8;
    float unk_C;
} Vec4;

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;
#endif
