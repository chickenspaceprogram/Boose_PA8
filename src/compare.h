/*
  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#ifndef COMPARE_H
#define COMPARE_H

/**
 * Function name: int_cmp
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: Compares two integers.
 * Inputs: 
 * `int1` : The first integer to compare
 * `int2` : The second integer to compare
 * Outputs: 1 if int1 > int2, -1 if int1 < int2, 0 if int1 == int2
 */
int int_cmp(const void *int1, const void *int2);

#endif