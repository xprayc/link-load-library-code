/*
 * Tiny hello world.
 * gcc -c -fno-builtin hello.c
 * ld -static -T hello.lds -o hello hello.o
 */

char* str = "Hello world!\n";

void print() {
    asm("movl $13, %%edx\n\t"
        "movq %0, %%rcx\n\t"
        "movl $0, %%ebx\n\t"
        "movl $4, %%eax\n\t"
        "int $0x80 \n\t"
        ::"r"(str):"edx","ecx","ebx");
}

void exit() {
    asm("movl $42,%ebx\n\t"
        "movl $1, %eax\n\t"
        "int $0x80 \n\t");
}

void nomain() {
    print();
    exit();
}
