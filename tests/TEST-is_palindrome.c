#include "../src/is_palindrome.h"
#include <assert.h>
#include <string.h>

void test_is_palindrome(void);

int main(void) {
    test_is_palindrome();
}

void test_is_palindrome(void) {
    char palindrome[] = "hello worlddlrow olleh";
    char not_palindrome[] = "hello world";
    assert(is_palindrome(palindrome, strlen(palindrome)) == 1);
    assert(is_palindrome(not_palindrome, strlen(not_palindrome)) == 0);
}