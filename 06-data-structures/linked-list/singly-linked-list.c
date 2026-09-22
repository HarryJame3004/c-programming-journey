#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int value)
{
    Node *node = malloc(sizeof(Node));

    if (node == NULL)
        return NULL;

    node->data = value;
    node->next = NULL;

    return node;
}

void printList(Node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }

    printf("NULL\n");
}

int main(void)
{
    Node *head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);

    printList(head);

    return 0;
}
