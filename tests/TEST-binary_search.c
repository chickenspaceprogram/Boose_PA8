/*
  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#include "../src/binary_search.h"
#include "../src/compare.h"
#include <assert.h>
#include <stdlib.h>


void test_bsearch(void);
void test_binary_search(void);

int main(void) {
    test_bsearch();
    test_binary_search();
}

void test_bsearch(void) {
    int int_arr[] = {0, 1, 1, 2, 3, 4, 6, 8, 9, 9, 10};

    int target = 3;
    void *out = my_bsearch(&target, int_arr, 11, sizeof(int), &int_cmp);
    assert(out == bsearch(&target, int_arr, 11, sizeof(int), &int_cmp));

    target = 0;
    out = my_bsearch(&target, int_arr, 11, sizeof(int), &int_cmp);
    assert(out == bsearch(&target, int_arr, 11, sizeof(int), &int_cmp));

    target = 10;
    out = my_bsearch(&target, int_arr, 11, sizeof(int), &int_cmp);
    assert(out == bsearch(&target, int_arr, 11, sizeof(int), &int_cmp));

    target = 12345;
    out = my_bsearch(&target, int_arr, 11, sizeof(int), &int_cmp);
    assert(out == NULL);
    assert(out == bsearch(&target, int_arr, 11, sizeof(int), &int_cmp));
}

void test_binary_search(void) {
    int int_arr[] = {0, 1, 1, 2, 3, 4, 6, 8, 9, 9, 10};

    
    assert(binary_search(0, int_arr, 11) == 0);
    assert(binary_search(2, int_arr, 11) == 3);
    assert(binary_search(3, int_arr, 11) == 4);
    assert(binary_search(10, int_arr, 11) == 10);
    
    assert(binary_search(12345, int_arr, 11) == -1);
}