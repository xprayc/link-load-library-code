/*
 * ld will define some special define when linking
 */

#include <stdio.h>

extern char __executable_start[];
extern char etext[], _etext[], __etext[];
extern char edata[], _edata[];
extern char end[], _end[];

int main() {
    printf("Executable Start %p\n", __executable_start);
    printf("Text End %p %p %p\n", etext, _etext, __etext);
    printf("Data End %p %p\n", edata, _edata);
    printf("Executable End %p %p\n", end, _end);

    return 0;
}
