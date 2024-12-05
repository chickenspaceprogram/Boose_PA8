#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "compare.h"

void bubble_sort_int(int *array, size_t num_elements);

void bubble_sort(void *array, size_t num_elements, size_t width, int (*compare)(const void *, const void *));

#endif