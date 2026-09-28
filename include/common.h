#ifndef COMMON_H
#define COMMON_H
/* shared declarations grow here in consolidate steps */
#include "types.h"

/* A translation unit names each function not yet matched with an INCLUDE_ASM line; mwccgap
   puts the function's assembly in its place before the compiler reads the file, and
   these empty definitions keep the file readable to everything else that reads it. */
#ifndef INCLUDE_ASM
#define INCLUDE_ASM(FOLDER, NAME)
#endif
#ifndef INCLUDE_RODATA
#define INCLUDE_RODATA(FOLDER, NAME)
#endif
#endif
