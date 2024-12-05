#include "bubble_sort.h"

void bubble_sort_int(int *array, size_t num_elements) {
    bubble_sort(array, num_elements, sizeof(int), &int_cmp);
}

void bubble_sort(void *array, size_t num_elements, size_t width, int (*compare)(const void *, const void *)) {
    void *temp = malloc(width);
    for (size_t end = num_elements; end > 1; --end) {
        for (size_t marker = 0; marker < end; ++marker) {
            if (compare((char *)array + width * marker, (char *)array + width * (marker + 1)) > 0) {
                memcpy(temp, (char *)array + width * marker, width); // temp = array[marker]
                memcpy((char *)array + width * marker, (char *)array + width * (marker + 1), width); // array[marker] = array[marker + 1]
                memcpy((char *)array + width * (marker + 1), temp, width); // array[marker + 1] = temp
            }
        }
    }
    free(temp);
}