#include "calc.h"

void add(stackNode **stack, char sign)
{
    int component = 0, component2 = 0;
    int number_after_sign = 0;

    // Allows you to enter numbers in the form +3, +5

    ungetc(sign, stdin); // Redirect this sign to the standard input

    scanf("%d", &number_after_sign); // Save this number

    if (number_after_sign > 0)
    {
        push(stack, number_after_sign); // Push this number on the stack
    }
    else
    {
        if (!isEmpty(*stack)) // If stack is not empty then
        {
            pop(stack, &component); // Pop number from the stack

            if (!isEmpty(*stack)) // If stack is not empty then
            {
                pop(stack, &component2);             // Pop next number from the stack
                push(stack, component + component2); // Push the result on the stack
                printf("\nA addidtion operation was performed\n\n");
            }
            else
            {
                push(stack, component); // Push back taken number
                printf("\nThere must be at least two numbers in the stack\n\n");
            }
        }
        else
        {
            printf("\nUnable to perform operation - stack is empty\n\n");
        }
    }
}

void subtract(stackNode **stack, char sign)
{
    int component = 0, component2 = 0;
    int number_after_sign = 0;

    // Allows you to enter numbers in the form -3, -5

    ungetc(sign, stdin); // Redirect this sign to the standard input

    scanf("%d", &number_after_sign); // Save this number

    if (number_after_sign < 0)
    {
        push(stack, number_after_sign); // Push this number on the stack
    }
    else
    {
        if (!isEmpty(*stack)) // If stack is not empty then
        {
            pop(stack, &component); // Pop number from the stack

            if (!isEmpty(*stack)) // If stack is not empty then
            {
                pop(stack, &component2);             // Pop next number from the stack
                push(stack, component2 - component); // Push the result on the stack
                printf("\nA subtraction operation was performed\n\n");
            }
            else
            {
                push(stack, component); // Push back taken number
                printf("\nThere must be at least two numbers in the stack\n\n");
            }
        }
        else
        {
            printf("\nUnable to perform operation - stack is empty\n\n");
        }
    }
}

void multiply(stackNode **stack)
{
    int component = 0, component2 = 0;

    if (!isEmpty(*stack)) // If stack is not empty then
    {
        pop(stack, &component); // Pop number from the stack

        if (!isEmpty(*stack)) // If stack is not empty then
        {
            pop(stack, &component2);             // Pop next number from the stack
            push(stack, component2 * component); // Push the result on the stack
            printf("\nA multiplication operation was performed\n\n");
        }
        else
        {
            push(stack, component); // Push back taken number
            printf("\nThere must be at least two numbers in the stack\n\n");
        }
    }
    else
    {
        printf("\nUnable to perform operation - stack is empty\n\n");
    }
}

void divide(stackNode **stack)
{
    int component = 0, component2 = 0;

    if (!isEmpty(*stack)) // If stack is not empty then
    {
        pop(stack, &component); // Pop number from the stack

        if (!isEmpty(*stack)) // If stack is not empty then
        {
            pop(stack, &component2); // Pop number from the stack

            if (component == 0) // Division by zero
            {
                push(stack, component2); // Push back taken number
                push(stack, component);  // Push back taken number
                printf("\nDivision by zero is not allowed\n\n");
            }
            else
            {
                push(stack, component2 / component); // Push the result on the stack
                printf("\nA division operation was performed\n\n");
            }
        }
        else
        {
            push(stack, component); // Push back taken number
            printf("\nThere must be at least two numbers in the stack\n\n");
        }
    }
    else
    {
        printf("\nUnable to perform operation - stack is empty\n\n");
    }
}

void swap(stackNode **stack)
{
    int component = 0, component2 = 0;

    if (!isEmpty(*stack)) // If stack is not empty then
    {
        pop(stack, &component); // Pop next number from the stack

        if (!isEmpty(*stack)) // If stack is not empty then
        {
            pop(stack, &component2); // Pop next number from the stack

            push(stack, component); // Swap numbers
            push(stack, component2);

            printf("\nA swap operation was performed\n\n");
        }
        else
        {
            push(stack, component); // Push back taken number
            printf("\nThere must be at least two numbers in the stack\n\n");
        }
    }
    else
    {
        printf("\nUnable to perform operation - stack is empty\n\n");
    }
}

void duplicate(stackNode **stack)
{
    int component = 0;

    if (!isEmpty(*stack)) // If stack is not empty then
    {
        pop(stack, &component); // Pop next number from the stack

        push(stack, component); // Duplicate number
        push(stack, component);

        printf("\nA duplication operation was performed\n\n");
    }
    else
    {
        printf("\nUnable to perform operation - stack is empty\n\n");
    }
}