/*
  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#include "../src/my_strncat.h"
#include <string.h>
#include <assert.h>

void test_my_strncat(void);

void test_my_strncat(void) {
    char dest1[7 + 5] = "hello ";
    char dest2[7 + 5] = "hello ";
    char src[] = "world";
    strncat(dest1, src, 5);
    my_strncat(dest2, src, 5);
    assert(strcmp(dest1, dest2) == 0);
}

int main(void) {
    test_my_strncat();
}