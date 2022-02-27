#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Structure to represent a stack
 *
 */
typedef struct stackNode
{
    int data;
    struct stackNode *next;

} stackNode;

/**
 * @brief Initialize stack
 *
 * @param head pointer to the head pointer of the stack
 */
void initStack(stackNode **head);

/**
 * @brief Check whether the stack is empty
 *
 * @param head pointer to the head of the stack
 *
 * @return int 1 - empty, 0 - not empty
 */
int isEmpty(stackNode *head);

/**
 * @brief Display the element from the top of the stack
 *
 * @param head pointer to the head of the stack
 */
void displayTop(stackNode *head);

/**
 * @brief Display all elements  of the stack
 *
 * @param head pointer to the head of the stack
 */
void displayStack(stackNode *head);

/**
 * @brief Push an element onto the stack
 *
 * @param head pointer to the head pointer of the stack
 * @param data value to push onto the stack
 */
void push(stackNode **head, int data);

/**
 * @brief Pop an element from the stack
 *
 * @param head pointer to the head pointer of the stack
 * @param data value to from the stack
 */
void pop(stackNode **head, int *data);

/**
 * @brief Free all stack's elements
 *
 * @param head pointer to the head pointer of the stack
 */
void freeStack(stackNode **head);

#endif // STACK_H
