#include "sum_primes.h"

/**
 * Function name: 
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: 
 * Inputs: 
 * Outputs: 
 */
static inline int is_prime(int num);

/**
 * Function name: 
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: 
 * Inputs: 
 * Outputs: 
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
