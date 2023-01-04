#include "queue.h"

/**
 * free_list - Frees a list of nodes
 */
void free_list(void)
{
	struct Node *tmp;

	if (!front)
		return;
	while (front->next)
	{
		tmp = front->next;
		free(front);
		front = NULL;
		front = tmp;
	}
	free(front);
	front = NULL;
}

/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	int choice, data;

	front = NULL, rear = NULL;
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
			Enqueue(data);
			break;
		case 2:
			data = Dequeue();
			printf("The element deleted: %d\n", data);
			break;
		case 3:
			printf("The topmost element is: %d\n", Front());
			break;
		case 4:
			Print();
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
