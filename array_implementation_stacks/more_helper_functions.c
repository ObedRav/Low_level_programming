#include "stack.h"

/**
 * print - prints all the stack information
 */
void print(void)
{
	int i;

	if (isEmpty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}

	for (i = 0; i <= top; i++)
		printf("%d. %d\n", i, stack_arr[i]);
	printf("\n");
}
