#include <stdio.h>

int main(void)
{
    int number = 42;
    int *pointer = &number;

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", (void *)&number);
    printf("Value stored in pointer: %p\n", (void *)pointer);
    printf("Value through pointer: %d\n", *pointer);

    return 0;
}
