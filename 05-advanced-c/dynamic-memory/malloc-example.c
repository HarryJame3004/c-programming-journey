#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *number = malloc(sizeof(int));

    if (number == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    *number = 42;

    printf("Value: %d\n", *number);

    free(number);
    number = NULL;

    return 0;
}
