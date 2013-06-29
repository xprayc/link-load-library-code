#include <stdio.h>
#include <stdlib.h>

size_t maximum = 0;

int main(int argc, char* argv[]) {

    unsigned blocksize[] = { 1024 * 1024 * 1024, 1024 * 1024, 1024, 1 };
    int i, count;

    for (i = 0; i < 3; i++) {
        for (count = 1;; count++) {
            void* block = malloc(maximum + blocksize[i] * count);
            if (block) {
                maximum = maximum + blocksize[i] * count;
                free(block);
            } else {
                break;
            }
        }
    }

    printf("maximum malloc size = %lu bytes\n", maximum);

    return 0;
}
