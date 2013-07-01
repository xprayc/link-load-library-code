#include <stdio.h>
#include <elf.h>

int main(int argc, char* argv[])
{
    void** p = (void**)argv;
    printf("%p\n", p);
    
    printf("Argument count: %d\n", *((int*)p - 1));

    int i;
    for (i = 0; i < argc; ++i)
    {
        printf("Argument %d: %s\n", i, (char*)*p);
        p++;
    }

    // skip 0
    p++;

    printf("Environment:\n");
    while (*p) {
        printf("%s\n", (char*)*p);
        p++;
    }

    // skip 0
    p++;

    printf("Auxiliary Vectors:\n");
    Elf64_auxv_t* aux = (Elf64_auxv_t*)p;
    while (aux->a_type != AT_NULL) {
        printf("Type: %02ld Value: %#lx\n", aux->a_type, aux->a_un.a_val);
        aux++;
    }

    return 0;
}
