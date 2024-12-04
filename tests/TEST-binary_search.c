#include "../src/binary_search.h"
#include <assert.h>
#include <stdlib.h>

void test_int_cmp(void);
void test_bsearch(void);
void test_binary_search(void);

int main(void) {
    test_int_cmp();
    test_bsearch();
}

void test_int_cmp(void) {
    int int1 = 123;
    int int2 = 456;
    assert(int_cmp(&int1, &int2) < 0);
    assert(int_cmp(&int2, &int1) > 0);
    assert(int_cmp(&int1, &int1) == 0);
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

    for (int i = 0; i < 11; ++i) {
        assert(binary_search(int_arr[i], int_arr, 11) == i);
    }
    assert(binary_search(12345, int_arr, 11) == -1);
}