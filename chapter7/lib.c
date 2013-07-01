#include "lib.h"
#include <stdio.h>

void foobar(int i) {
    printf("Printing from lib.so --> %d\n", i);
    sleep(-1);
}
