#include "stack.h"

/**
 * main - stack function
 * Return: Always 0
 */
int main(void)
{
	int choice, data;

	top = -1;

	while (1)
	{
		printf("\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Print the top element\n");
		printf("4. Print all elements of the stack\n");
		printf("5. Exit\n");
		printf("Please enter a choice: ");
		scanf("%d", &choice);
		printf("\n");

		switch (choice)
		{
		case 1:
			printf("Enter the element to be pushed: ");
			scanf("%d", &data);
			push(data);
			break;
		case 2:
			data = pop();
			printf("Deleted element is %d\n", data);
			break;
		case 3:
			printf("The topmost element is %d\n", peek());
			break;
		case 4:
			print();
			break;
		case 5:
			exit(1);
		default:
			printf("Wrong choice\n");
		}
	}
	return (0);
}
