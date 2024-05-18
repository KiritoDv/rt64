#pragma once

#include <cstdint>

#ifdef 64_BIT_DLIST
typedef uint64_t ptr_t;
#else
typedef uint32_t ptr_t;
#endif

#ifdef USE_SEGMENTED_ADDR
#define SEG_ADDR(addr) segments[((segAddress) >> 24) & 0x0F] + ((segAddress) & 0x00FFFFFF)
#else
#define SEG_ADDR(addr) addr
#endif