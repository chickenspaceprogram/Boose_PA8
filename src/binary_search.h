#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <stddef.h>
#include "compare.h"

/**
 * Function name: my_bsearch
 * Date created: 
 * Date last modified: 
 * Description: 
 * Inputs: 
 * Outputs: 
 */
void *my_bsearch(const void *target, const void *values, size_t num_values, size_t value_size, int (*compare)(const void *, const void *));

/**
 * Function name: binary_search
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: 
 * Inputs: 
 * Outputs: 
 */
int binary_search(int target, int *values, int num_values);

#endif