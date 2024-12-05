/*
  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#include "../src/sum_primes.h"
#include <assert.h>

void test_sum_primes(void);

int main(void) {

}

void test_sum_primes(void) {
    assert(sum_primes(20) == 77);
}