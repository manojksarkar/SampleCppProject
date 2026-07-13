#pragma once
#include "Core.h"

// Header-only component (3.2 test fixture): this function is DEFINED in a header that
// no .cpp includes. Without header parsing it is invisible to the model; with .h files
// parsed as their own TUs it is captured. Uses PUBLIC so it would reach the interface table
// once header-backed units are allowed (see the .cpp-only unit gate note).
PUBLIC inline int coreInlineTriple(int x) {
    if (x < 0) {
        return -x * 3;
    }
    return x * 3;
}
