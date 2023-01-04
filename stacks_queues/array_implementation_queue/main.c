#include "queue.h"

/**
 * peek - return the top element from the queue
 * Return: the top element
 */
int peek(void)
{
	if (isEmpty())
	{
		printf("Underflow\n");
		exit(1);
	}
	return (queue[front]);
}

/**
 * main - main function
 * Return: Aways 0
 */
int main(void)
{
	int choice, data;

	front = -1, back = -1;

	while (1)
	{
		printf("\n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Print the top element\n");
		printf("4. Print all elements of the queue\n");
		printf("5. Exit\n");
		printf("Please enter a choice: ");
		scanf("%d", &choice);
		printf("\n");

		switch (choice)
		{
		case 1:
			printf("Enter the element to be inserted: ");
			scanf("%d", &data);
			enqueue(data);
			break;
		case 2:
			data = dequeue();
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
}
