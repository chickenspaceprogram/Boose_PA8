/*
  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#ifndef IS_PALINDROME_H
#define IS_PALINDROME_H

#include <stddef.h>

/**
 * Function name: is_palindrome
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: Checks whether `str` is a palindrome.
 * Inputs: 
 * `str` : The string to check
 * `len` : The length of `str`
 * Outputs: 1 if `str` is a palindrome, 0 otherwise.
 */
int is_palindrome(char *str, size_t len);

#endif