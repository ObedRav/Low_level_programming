#include "stack.h"

/**
 * isFull - check if the stack is full
 * return: 1 if the stack is full or 0 otherwise
 */
int isFull()
{
    if (top == MAX - 1)
        return (1);
    else
        return (0);
}

/**
 * isEmpty - check if the stack is empty
 * return: 1 if the stack is empty or 0 otherwise
 */
int isEmpty()
{
    if (top == -1)
        return (1);
    else
        return (0);
}

/**
 * push - push an element onto the stack
 * @data: the element to push
 */
void push(int data)
{
    if (isFull())
    {
        printf("Stack Overflow");
        return;
    }
    top += 1;
    stack_arr[top] = data;
}

/**
 * pop - pop an element from the stack
 * return: the element popped
 */
int pop()
{
    int value;

    if (isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    value = stack_arr[top];
    top -= 1;
    return (value);
}

/**
 * peek - return the top element from the stack
 * return: the top element
 */
int peek()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return (stack_arr[top]);
}