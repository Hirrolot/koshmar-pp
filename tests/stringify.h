#include "../include/koshmar/stringify.h"

#include <string.h>

{
#define X abc

    assert(strcmp(KOSHMAR_STRINGIFY(X), "abc") == 0);
    assert(strcmp(KOSHMAR_PRIMITIVE_STRINGIFY(X), "X") == 0);

#undef X
}