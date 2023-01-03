#include "stacks.h"

/**
 * free_list - Frees a list of nodes
 */
void free_list(void)
{
	struct node *tmp;

	if (!top)
		return;
	while (top->next)
	{
		tmp = top->next;
		free(top);
		top = NULL;
		top = tmp;
	}
	free(top);
	top = NULL;
}

/**
 * main - stack function
 * Return: Always 0
 */
int main(void)
{
	int choice, data;

	top = NULL;
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
			printf("The element deleted: %d\n", data);
			break;
		case 3:
			printf("The topmost element is: %d\n", peek());
			break;
		case 4:
			print();
			break;
		case 5:
			free_list();
			exit(1);
		default:
			printf("Wrong choice\n");
		}
	}
	return (0);
}
