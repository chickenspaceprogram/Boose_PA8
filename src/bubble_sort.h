#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "compare.h"

/**
 * Function name: bubble_sort_int
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: Sorts an array of integers using BubbleSort.
 *              BubbleSort runs in O(n^2) time.
 * Inputs: 
 * `array` : The array to sort
 * `num_elements` : The number of elements in `array`
 * Outputs: none
 */
void bubble_sort_int(int *array, size_t num_elements);

/**
 * Function name: bubble_sort
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: Sorts an array using BubbleSort.
 *               BubbleSort runs in O(n^2) time, just use `qsort` from <stdlib.h> instead
 * Inputs: 
 * `array` : The array to be sorted
 * `num_elements` : The number of elements in `array`
 * `width` : The size of each element in `array`
 * `compare` :  A pointer to a comparison function that can compare two elements in `array`.
 *              This function should return a value less than 0 if the first parameter is less than the second, a value greater than 0 if the first parameter is greater than the second, and 0 if the first and second parameters are equal.
 * Outputs: none
 */
void bubble_sort(void *array, size_t num_elements, size_t width, int (*compare)(const void *, const void *));

#endif