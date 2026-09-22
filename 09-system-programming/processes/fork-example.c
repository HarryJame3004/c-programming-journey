#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t pid = fork();

    if (pid == 0)
    {
        printf("Child process running\n");
    }
    else if (pid > 0)
    {
        printf("Parent process running\n");
    }
    else
    {
        printf("Fork failed\n");
    }

    return 0;
}
