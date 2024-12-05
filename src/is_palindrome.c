/*
  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

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