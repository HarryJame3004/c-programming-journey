#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main(void)
{
    Node *first = malloc(sizeof(Node));

    first->data = 10;
    first->next = NULL;

    printf("Node value: %d\n", first->data);

    free(first);

    return 0;
}
