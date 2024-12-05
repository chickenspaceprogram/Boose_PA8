#ifndef MAXIMUM_OCCURRENCES_H
#define MAXIMUM_OCCURRENCES_H

#define OCCURRENCES_LEN 256

typedef struct occurrences {
    int num_occurrences;
    double frequency;
} Occurrences;

/**
 * Function name: 
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: 
 * Inputs: 
 * Outputs: 
 */
void maximum_occurrences(char *string, Occurrences *occurrences, int *max_num_occurrences, char *most_frequent_letter);

/**
 * Function name: 
 * Date created: 2024-12-04
 * Date last modified: 2024-12-04
 * Description: 
 * Inputs: 
 * Outputs: 
 */
void init_occurrences(Occurrences *occurrences, int num_occurrences);

#endif