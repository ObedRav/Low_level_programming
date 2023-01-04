#include "stacks.h"

/**
 * push - push the node to the stack
 * @datau: the data to be pushed
 */
void push(int datau)
{
	struct node *tmp;

	tmp = malloc(sizeof(struct node));
	if (!tmp)
	{
		printf("Stack Overflow\n");
		exit(1);
	}
	tmp->data = datau;
	tmp->next = top;

	top = tmp;
}

/**
 * print - print the stack
 */
void print(void)
{
	struct node *tmp;

	tmp = top;

	if (isEmpty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	printf("The stack elements are: ");
	while (tmp)
	{
		printf("%d ", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}

/**
 * pop - pop the first element from the list
 * Return: the value deleted
 */
int pop(void)
{
	struct node *tmp;
	int val;

	if (isEmpty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	tmp = top;
	val = tmp->data;

	top = top->next;
	free(tmp);
	tmp = NULL;
	return (val);
}

/**
 * isEmpty - check if the list is empty
 * Return: 1 if the list is empty, 0 otherwise
 */
int isEmpty(void)
{
	if (!top)
		return (1);
	else
		return (0);
}

/**
 * peek - return the topmost element of the list
 * Return: the topmost element of the list
 */
int peek(void)
{
	if (isEmpty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	return (top->data);
}
