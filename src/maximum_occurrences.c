#include "maximum_occurrences.h"

// returns the index of the max occurrence
static int get_max_occurrences(Occurrences *occurrences, int num_occurrences);

static void set_frequencies(Occurrences *occurrences, int num_occurrences, int string_len);

void maximum_occurrences(char *string, Occurrences *occurrences, int *max_num_occurrences, char *most_frequent_letter) {
    int len = 0;
    
    for (int i = 0; string[i] != '\0'; ++i) {
        ++occurrences[string[i]].num_occurrences;
        ++len;
    }

    set_frequencies(occurrences, OCCURRENCES_LEN, len);

    *most_frequent_letter = get_max_occurrences(occurrences, OCCURRENCES_LEN);
    *max_num_occurrences = occurrences[*most_frequent_letter].num_occurrences;
}

void init_occurrences(Occurrences *occurrences, int num_occurrences) {
    for (int i = 0; i < num_occurrences; ++i) {
        occurrences[i].num_occurrences = 0;
    }
}

static int get_max_occurrences(Occurrences *occurrences, int num_occurrences) {
    int max = occurrences[0].num_occurrences;
    int max_index = 0;

    for (int i = 1; i < num_occurrences; ++i) {
        if (occurrences[i].num_occurrences > max) {
            max = occurrences[i].num_occurrences;
            max_index = i;
        }
    }
    return max_index;
}

static void set_frequencies(Occurrences *occurrences, int num_occurrences, int string_len) {
    for (int i = 0; i < num_occurrences; ++i) {
        occurrences[i].frequency = (double)occurrences[i].num_occurrences / string_len;
    }
}