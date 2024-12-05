/*
  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#include "sum_primes.h"

/**
 * Function name: is_prime
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: Returns 1 if `num` is prime, 0 otherwise.
 * Inputs:
 * `num` : The number to test the primality of
 * Outputs: 1 if `num` is prime, 0 otherwise.
 */
static inline int is_prime(int num);

/**
 * Function name: is_prime_recursive
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: A recursive function that checks whether a number is prime.
 * Inputs: 
 * `num` : The number to test the primality of
 * `iter` : The smallest prime number (always should be 2).
 * Outputs: 1 if `num` is prime, 0 otherwise.
 */
static int is_prime_recursive(int num, int iter);

unsigned int sum_primes(unsigned int num) {
    if (num == 2) {
        return 2;
    }

    if (is_prime(num)) {
        return num + sum_primes(num - 1);
    }
    return sum_primes(num - 1);
}


static inline int is_prime(int num) {
    return is_prime_recursive(num, 2);
}

static int is_prime_recursive(int num, int iter) {
    if (num % iter == 0 && iter != num) {
        return 0;
    }

    if (iter * iter >= num) {
        return 1;
    }

    return is_prime_recursive(num, iter + 1);
}
