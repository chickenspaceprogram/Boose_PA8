#include "my_strlen.h"

 
static size_t my_strlen(char *str);

char *my_strncat(char *dest, char *src, size_t max_chars_to_append) {
    size_t dest_len = my_strlen(dest);
    size_t src_len = my_strlen(src);
    for (size_t i = 0; (i < max_chars_to_append) && (*(src + i * sizeof(char)) != '\0'); ++i) {
        *(dest + (i + dest_len) * sizeof(char)) = *(src + i * sizeof(char));
    }
    *(dest + (src_len + dest_len) * sizeof(char)) = '\0';
    return dest;
}

static size_t my_strlen(char *str) {
    size_t i = 0;
    while (*(str + i * sizeof(char)) != '\0') {
        ++i;
    }
    return i;
}