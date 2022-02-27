#ifndef CALC_H
#define CALC_H

#include "stack.h"

/**
 * @brief Perform an addition of numbers on the stack
 *
 * @param stack pointer to the stack pointer
 * @param sign  input sign
 */
void add(stackNode **stack, char sign);

/**
 * @brief Perform a subtraction of numbers on the stack
 *
 * @param stack pointer to the stack pointer
 * @param sign  input sign
 */
void subtract(stackNode **stack, char sign);

/**
 * @brief Perform a multiplication of numbers on the stack
 *
 * @param stack pointer to the stack pointer
 */
void multiply(stackNode **stack);

/**
 * @brief Perform a division of numbers on the stack
 *
 * @param stack pointer to the stack pointer
 */
void divide(stackNode **stack);

/**
 * @brief Swap two elements on the top of the stack
 *
 * @param stack pointer to the pointer
 */
void swap(stackNode **stack);

/**
 * @brief Duplicate element on the top of the stack
 *
 * @param stack pointer to the pointer
 */
void duplicate(stackNode **stack);

#endif // CALC_H
