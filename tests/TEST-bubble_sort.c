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