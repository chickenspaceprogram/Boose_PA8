#include "../src/maximum_occurrences.h"
#include <assert.h>

void test_maximum_occurrences(void);

int main(void) {

}

void test_maximum_occurrences(void) {
    int max_occurrences;
    char most_frequent_char;
    Occurrences occs[OCCURRENCES_LEN];
    init_occurrences(occs, OCCURRENCES_LEN);
    maximum_occurrences("hello world", occs, &max_occurrences, &most_frequent_char);
    assert(max_occurrences == 3);
    assert(most_frequent_char == 'l');

    assert(occs['h'].num_occurrences == 1);
    assert(occs['h'].frequency == (double) 1 / 11);

    assert(occs['e'].num_occurrences == 1);

    assert(occs['l'].num_occurrences == 3);

    assert(occs['o'].num_occurrences == 2);

    assert(occs['w'].num_occurrences == 1);

    assert(occs['r'].num_occurrences == 1);

    assert(occs['d'].num_occurrences == 1);

    assert(occs['x'].num_occurrences == 0);
}