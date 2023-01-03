#include "stack.h"

/**
 * isFull - check if the stack is full
 * Return: 1 if the stack is full or 0 otherwise
 */
int isFull(void)
{
	if (top == MAX - 1)
		return (1);
	else
		return (0);
}

/**
 * isEmpty - check if the stack is empty
 * Return: 1 if the stack is empty or 0 otherwise
 */
int isEmpty(void)
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
 * Return: the element popped
 */
int pop(void)
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
 * Return: the top element
 */
int peek(void)
{
	if (isEmpty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	return (stack_arr[top]);
}
