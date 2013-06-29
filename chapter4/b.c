int shared = 1;
int test = 3;

void swap(int* a, int* b) {
    *a ^= *b ^= *a ^= *b;
}
