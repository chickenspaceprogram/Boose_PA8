#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "compare.h"

/**
 * Function name: 
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: 
 * Inputs: 
 * Outputs: 
 */
void bubble_sort_int(int *array, size_t num_elements);

/**
 * Function name: 
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: 
 * Inputs: 
 * Outputs: 
 */
void bubble_sort(void *array, size_t num_elements, size_t width, int (*compare)(const void *, const void *));

#endif