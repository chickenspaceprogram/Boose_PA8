#include "../src/compare.h"
#include <assert.h>

void test_int_cmp(void);

int main(void) {
    test_int_cmp();
}

void test_int_cmp(void) {
    int int1 = 123;
    int int2 = 456;
    assert(int_cmp(&int1, &int2) < 0);
    assert(int_cmp(&int2, &int1) > 0);
    assert(int_cmp(&int1, &int1) == 0);
}