#include "queue.h"

/**
 * isEmpty - check if the list is empty
 * Return: 1 if the list is empty, 0 otherwise
 */
int isEmpty(void)
{
	if (!front)
	{
		printf("Queue is empty");
		return (1);
	}
	return (0);
}

/**
 * Enqueue - insert a new item into the queue
 * @data: the data to be inserted
 */
void Enqueue(int data)
{
	struct Node *tmp;

	tmp = malloc(sizeof(struct Node));
	tmp->data = data;
	tmp->next = NULL;

	if (!front && !rear)
	{
		front = rear = tmp;
		return;
	}
	rear->next = tmp;
	rear = tmp;
}

/**
 * Dequeue - deletes the front node from the queue
 * Return: the value of the front node deleted
 */
int Dequeue(void)
{
	int data;

	struct Node *tmp = front;

	if (isEmpty())
		return (0);
	if (front == rear)
		front = rear = NULL;
	else
		front = front->next;

	data = tmp->data;
	free(tmp);
	return (data);
}

/**
 * Front - return the front position
 * Return: the front position
 */
int Front(void)
{
	if (isEmpty())
		return (0);
	return (front->data);
}

/**
 * Print - prints all the queue information
 */
void Print(void)
{
	struct Node *tmp = front;

	while (tmp)
	{
		printf("%d ", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}
