#include "stack.h"

void initStack(stackNode **head)
{
    *head = NULL;
}

int isEmpty(stackNode *head)
{
    if (head == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void displayTop(stackNode *head)
{
    if (!isEmpty(head))
    {
        printf("\nElement at the top of the stack: %d\n\n", head->data);
    }
    else
    {
        printf("\nUnable to perform operation - stack is empty\n\n");
    }
}

void displayStack(stackNode *head)
{
    if (!isEmpty(head))
    {
        printf("\nStack: \n");
        while (!isEmpty(head->next))
        {
            printf("%d\n", head->data);
            head = head->next;
        }
        printf("%d\n", head->data);
    }
    else
    {
        printf("\nUnable to perform operation - stack is empty\n\n");
    }
}

void push(stackNode **head, int data)
{
    stackNode *newNode;                  // Create a new node
    newNode = malloc(sizeof(stackNode)); // Allocate a memory for the new node

    if (newNode == NULL) // Unsuccessful memory allocation
    {
        EXIT_FAILURE;
    }

    newNode->data = data; // Assign data to the new node
    newNode->next = NULL; // At the beginning next pointer of the new node points to NULL

    newNode->next = *head; // Now the new node's next pointer points to the head
    *head = newNode;       // Update the head pointer
}

void pop(stackNode **head, int *data)
{
    stackNode *tmp;

    if (!isEmpty(*head))
    {
        tmp = *head;
        *data = tmp->data; // Get data from the head node
        *head = tmp->next; // Now the head pointer points to the next element
        free(tmp);
    }
}

void freeStack(stackNode **head)
{
    stackNode *tmp;

    while (!isEmpty(*head))
    {
        tmp = *head;
        *head = (*head)->next;
        free(tmp);
    }
}