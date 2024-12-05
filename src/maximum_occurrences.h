/*
  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#ifndef MAXIMUM_OCCURRENCES_H
#define MAXIMUM_OCCURRENCES_H

#define OCCURRENCES_LEN 256

typedef struct occurrences {
    int num_occurrences;
    double frequency;
} Occurrences;

/**
 * Function name: maximum_occurrences
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: Finds the most-frequently occurring character and the number of times it occurs in `string`.
 * Inputs: 
 * `string` : The string to check
 * `occurrences` : A 256-element-long array of `Occurrences`. Should be instantiated with `init_occurrences` prior to passing it to this function.
 * Outputs: 
 * `max_num_occurrences` : The number of times that `most_frequent_letter` occurred in `string`.
 * `most_frequent_letter` : The most-frequently-occurring letter in `string`.
 */
void maximum_occurrences(char *string, Occurrences *occurrences, int *max_num_occurrences, char *most_frequent_letter);

/**
 * Function name: init_occurrences
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: Instantiates an array of `Occurrences` with the default values.
 * Inputs: 
 * `occurrences` : The array to instantiate
 * `num_occurrences` : The number of elements in `occurrences`
 * Outputs: none
 */
void init_occurrences(Occurrences *occurrences, int num_occurrences);

#endif