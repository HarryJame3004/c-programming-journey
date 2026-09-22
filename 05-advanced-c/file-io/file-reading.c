#include <stdio.h>

int main(void)
{
    FILE *file = fopen("example.txt", "r");

    if (file == NULL)
    {
        printf("Cannot open file\n");
        return 1;
    }

    char buffer[100];

    while (fgets(buffer, sizeof(buffer), file))
    {
        printf("%s", buffer);
    }

    fclose(file);

    return 0;
}
