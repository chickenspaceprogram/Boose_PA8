#include "compare.h"

int int_cmp(const void *int1, const void *int2) {
    const int int1_val = *(int *)int1;
    const int int2_val = *(int *)int2;
    if (int1_val > int2_val) {
        return 1;
    }

    if (int1_val < int2_val) {
        return -1;
    }
    return 0;
}
