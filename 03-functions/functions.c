#include <stdio.h>

void sayHello(void)
{
    printf("Hello from a function!\n");
}

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    sayHello();

    int result = add(5, 3);
    printf("Result: %d\n", result);

    return 0;
}
