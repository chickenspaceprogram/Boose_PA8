#include "max_consecutive_integers.h"

void max_consecutive_integers(int *array, int rows, int cols, int **max_consecutive_seq, int *num_consecutive) {
    int *current_seq_start = &(array[0]);
    int current_num_consec = 0;
    *num_consecutive = 0;


    for (int i = 0; i < rows * cols; ++i) {

        if (array[i] == *current_seq_start) {
            ++current_num_consec;
            continue;
        }

        if (current_num_consec > *num_consecutive) {
            *num_consecutive = current_num_consec;
            *max_consecutive_seq = current_seq_start;
        }
        current_seq_start = &(array[i]);
        current_num_consec = 1;
    }
}