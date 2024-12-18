/*
  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/


#include "binary_search.h"

void *my_bsearch(const void *target, const void *values, size_t num_values, size_t value_size, int (*compare)(const void *, const void *)) {
    size_t midpt = num_values / 2;
    int cmp = compare(target, (char *)values + midpt * value_size);
    void *new_val_start;

    if (cmp == 0) {
        return (void *)((char *)values + midpt * value_size);
    }
    if (num_values == 1) {
        return NULL; // if there is only 1 value left, return NULL because at this point nothing has been found
    }

    if (cmp > 0) {
        num_values -= midpt;
        values = (void *)((char *)values + midpt * value_size);
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
    return (int)((char *)bsearch_res - (char *)values) / sizeof(int);
}