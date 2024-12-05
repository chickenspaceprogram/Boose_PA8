/*
  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#include <assert.h>
#include "../src/max_consecutive_integers.h"

void test_max_consec_ints(void);

int main(void) {
    test_max_consec_ints();
}

void test_max_consec_ints(void) {
    int *max_consec;
    int num_consec;

    int arr[][5] = {
        {-5, 6, 0, 2, 2},
        {2, 2, 2, 9, 3},
        {3, 3, 2, 1, -8},
        {7, -2, 6, 0, 4}
    };

    max_consecutive_integers(&arr[0][0], 4, 5, &max_consec, &num_consec);
    assert(num_consec == 5);
    assert(max_consec == &(arr[0][3]));
}