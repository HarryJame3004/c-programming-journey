#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 5;

    printf("Add: %d\n", a + b);
    printf("Subtract: %d\n", a - b);
    printf("Multiply: %d\n", a * b);

    if (b != 0)
        printf("Divide: %d\n", a / b);

    return 0;
}
