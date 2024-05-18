//
// RT64
//

#pragma once

#include "rt64_common.h"

namespace RT64 {
    struct DisplayList {
        ptr_t w0;
        ptr_t w1;

        DisplayList();
        ptr_t p0(uint8_t pos, uint8_t bits) const;
        ptr_t p1(uint8_t pos, uint8_t bits) const;
    };
};