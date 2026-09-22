#include <stdio.h>
#include <string.h>

int main(void)
{
    char command[100];

    while (1)
    {
        printf("mini-shell> ");
        fgets(command, sizeof(command), stdin);

        if (strncmp(command, "exit", 4) == 0)
            break;

        printf("Command received: %s", command);
    }

    return 0;
}
