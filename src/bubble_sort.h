#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <stddef.h>
#include "compare.h"

void bubble_sort(void *arrays, size_t num_elements, size_t width, int (*compare)(const void *, const void *));

#endif