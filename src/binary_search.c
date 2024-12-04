#include "binary_search.h"

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

void *my_bsearch(const void *target, const void *values, size_t num_values, size_t value_size, int (*compare)(const void *, const void *)) {
    size_t midpt = num_values / 2;
    int cmp = compare(target, values + midpt * value_size);
    void *new_val_start;

    if (cmp == 0) {
        return (void *)values + midpt * value_size;
    }
    if (num_values == 1) {
        return NULL; // if there is only 1 value left, return NULL because at this point nothing has been found
    }

    if (cmp > 0) {
        num_values -= midpt;
        values += midpt * value_size;
    }
    else {
        num_values = midpt;
    }

    return my_bsearch(target, values, num_values, value_size, compare); // tail recursion means that this is just as efficient as an iterative version of this function

}

int binary_search(int target, int *values, int num_values) {
    void *bsearch_res = my_bsearch(&target, values, num_values, sizeof(int), &int_cmp);
    if (bsearch_res == NULL) {
        return -1;
    }
    return (int)(bsearch_res - (void *)values) / sizeof(int);
}