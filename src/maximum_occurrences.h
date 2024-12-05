#ifndef MAXIMUM_OCCURRENCES_H
#define MAXIMUM_OCCURRENCES_H

#define OCCURRENCES_LEN 256

typedef struct occurrences {
    int num_occurrences;
    double frequency;
} Occurrences;

void maximum_occurrences(char *string, Occurrences *occurrences, int *max_num_occurrences, char *most_frequent_letter);

void init_occurrences(Occurrences *occurrences, int num_occurrences);

#endif