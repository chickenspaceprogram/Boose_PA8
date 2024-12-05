/*
  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#include "../src/bubble_sort.h"
#include <assert.h>

void test_bubble_sort(void);

int main(void) {
    test_bubble_sort();
}

void test_bubble_sort(void) {
    int arr[] = {9, 3, 2, 7, 8, 1, 6, 0, 4, 5};
    bubble_sort_int(arr, 10);
    for (int i = 0; i < 9; ++i) {
        assert(arr[i] < arr[i + 1]);
    }
}