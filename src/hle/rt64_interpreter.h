//
// RT64
//

#pragma once

#include "rt64_state.h"

#include "gbi/rt64_f3d.h"
#include "gbi/rt64_gbi.h"

namespace RT64 {
    struct Interpreter {
        State *state;
        GBIManager gbiManager;
        GBI *hleGBI;
        uint8_t extendedOpCode = 0;
        GBIFunction extendedFunction = nullptr;

        struct {
            ptr_t textAddress = 0;
            ptr_t dataAddress = 0;
        } UCode;

        Interpreter();
        void setup(State *state);
        void loadUCodeGBI(ptr_t textAddress, ptr_t dataAddress, bool resetFromTask);
        void processRDPLists(ptr_t dlStartAdddress, DisplayList* dlStart, DisplayList* dlEnd);
        void processDisplayLists(ptr_t dlStartAdddress, DisplayList *dlStart);
    };
};