/*
 * gcc -shared -fPIC lib.c -Xlinker --version-script lib.ver -o lib.so
 */

#include "lib.h"
#include <stdio.h>

void foobar(int i) {
    printf("Printing from lib.so --> %d\n", i);
    sleep(-1);
}
