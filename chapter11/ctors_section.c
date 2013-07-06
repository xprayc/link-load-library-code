#include <stdio.h>

void my_init(void)
{
    printf("hello from my_init\n");
}

typedef void (*ctor_func)(void);
ctor_func __attribute__((section (".ctors"))) my_init_p = &my_init;

int main()
{
    printf("hello from main...\n");
    printf("%p\n", &my_init_p);
    return 0;
}
