#ifndef MY_STRNCAT_H
#define MY_STRNCAT_H

#include <stddef.h>

/**
 * Function name: my_strncat
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: My implementation of `strncat` from <string.h>.
 *              Concatenates `dest` and at most `max_chars_to_append` characters from `src`.
 * Inputs: 
 * `dest` : The destination to concatenate `src` onto.
 * `src` : The string to append to `dest`.
 * `max_chars_to_append` : The maximum number of characters to append to `dest`.
 * Outputs: Returns the value of `dest`.
 */
char *my_strncat(char *dest, char *src, size_t max_chars_to_append);

#endif