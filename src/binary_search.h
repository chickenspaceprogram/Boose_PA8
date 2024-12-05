/*
  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <stddef.h>
#include "compare.h"

/**
 * Function name: my_bsearch
 * Date created: 
 * Date last modified: 
 * Description: An implementation of the `bsearch` function found in <stdlib.h>.
 *              Uses binary search to find `target` in values, and returns a pointer to it.
 *              If `target` is not found, returns NULL.
 * Inputs: 
 * `target` : The thing to search for
 * `values` : An array, sorted from lowest to highest, in which to search
 * `num_values` : The number of elements in `values`
 * `value_size` : The size (in bytes) of `target` and of each element in `values`.
 * `compare` :  A pointer to a comparison function that can compare `target` with elements in `values`.
 *              This function should return a value less than 0 if the first parameter is less than the second, a value greater than 0 if the first parameter is greater than the second, and 0 if the first and second parameters are equal.
 * Outputs: A pointer to the location of `target` as it exists in `values`, or NULL if `target` is not in `values`.
 */
void *my_bsearch(const void *target, const void *values, size_t num_values, size_t value_size, int (*compare)(const void *, const void *));

/**
 * Function name: binary_search
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: Searches for `target` in `values` using binary search.
 *              `values` must be sorted in ascending order.
 * Inputs: 
 * `target` : The value to look for
 * `values` : The array to look in
 * `num_values` : The length of `values`
 * Outputs: The index of `target` in `values`, or -1 if not found.
 */
int binary_search(int target, int *values, int num_values);

#endif