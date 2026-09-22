#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top < MAX - 1)
    {
        stack[++top] = value;
    }
}

int pop(void)
{
    if (top >= 0)
    {
        return stack[top--];
    }

    return -1;
}

int main(void)
{
    push(10);
    push(20);

    printf("Pop: %d\n", pop());

    return 0;
}
