#include <ctype.h>
#include "stack.h"
#include "calc.h"

int main(int argc, char **argv)
{
    stackNode *stack; // Create head node of stack

    char sign;
    int number = 0;

    initStack(&stack); // Initialze the head with NULL pointer

    system("clear"); // Clear console

    printf("RPN Caluculator\n");
    printf("For help type \"h\"\n");

    while ((sign = getc(stdin)) != 'q') // Quit the program with 'q'
    {
        if (isdigit(sign)) // If a number is read on stdin
        {
            ungetc(sign, stdin);  // Redirect this number to the standard input
            scanf("%d", &number); // Save this number
            push(&stack, number); // Push this number on the stack
        }
        else // Execute the instructions for handling characters
        {
            switch (sign)
            {
            case '+':

                add(&stack, sign);
                break;

            case '-':

                subtract(&stack, sign);
                break;

            case '*':

                multiply(&stack);
                break;

            case '/':

                divide(&stack);
                break;

            case 'p': // Pop number from the stack

                if (!isEmpty(stack))
                {
                    pop(&stack, &number);
                    printf("\nNumber has been popped from the stack\n\n");
                }
                else
                {
                    printf("\nUnable to perform operation - stack is empty\n\n");
                }
                break;

            case 's': // Swap numbers on the top of the stack

                swap(&stack);
                break;

            case 'd': // Duplicate number on the top of the stack

                duplicate(&stack);
                break;

            case 't': // Display top element of the stack

                displayTop(stack);
                break;

            case 'f': // Display full stack

                displayStack(stack);
                break;

            case 'c': // Clear the stack

                if (!isEmpty(stack))
                {
                    freeStack(&stack);
                    printf("\nStack has been cleared\n\n");
                }
                else
                {
                    printf("\nStack is already empty\n\n");
                }
                break;

            case 'h': // Display help

                printf("\nThe calculator performs the following options on integers:\n\n");
                printf("\"+\" - addition\n");
                printf("\"-\" - subtraction\n");
                printf("\"*\" - multiplication\n");
                printf("\"\\\" - division\n");
                printf("\"p\" - pop the number from the top\n");
                printf("\"s\" - swap two numbers on the top of the stack\n");
                printf("\"d\" - duplicate number on the top of the stack\n");
                printf("\"t\" - display number on the top of the stack\n");
                printf("\"f\" - display full stack\n");
                printf("\"c\" - clear stack\n");
                printf("\"q\" - quit\n");
                printf("\nThe calculator performs math operations on\ntwo consecutive numbers at the top of the stack.\n\nExample:\n\n");
                printf("1\n6\n3\nf\nStack:\n3\n6\n1\nA division operation was performed\nf\nStack:\n2\n1\n");
                printf("\nThe number 6 was divided by the number 3 (6/3).\nThe result of this operation has been placed on top of the stack.\n");
                break;

            case '\n': // Ignore new line sign
                break;

            default:

                printf("\nIncorrect option.\n\n");
                break;
            }
        }
    }

    freeStack(&stack);

    return 0;
}