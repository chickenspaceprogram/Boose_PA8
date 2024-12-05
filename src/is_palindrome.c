#include "is_palindrome.h"

int is_palindrome(char *str, size_t len) {
    if (len < 2) {
        return 1;
    }
    if (str[0] != str[len - 1]) {
        return 0;
    }
    return is_palindrome(str + 1, len - 2);
}