#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <stddef.h>

int int_cmp(const void *int1, const void *int2);

void *my_bsearch(const void *target, const void *values, size_t num_values, size_t value_size, int (*compare)(const void *, const void *));

int binary_search(int target, int *values, int num_values);

#endif