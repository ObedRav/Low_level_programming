#include "queue.h"

/**
 * isEmpty - check if the queue is empty
 * Return: 1 if the queue is empty and 0 otherwise
 */
int isEmpty(void)
{
	if (front == -1 && back == -1)
		return (1);
	return (0);
}

/**
 * isFull - check if the queue is full
 * Return: 1 if the queue is full and 0 otherwise
 */
int isFull(void)
{
	if (back == MAX - 1)
		return (1);
	return (0);
}

/**
 * enqueue - insert a new item into the queue
 * @data: queue data to be inserted
 */
void enqueue(int data)
{
	if (isFull())
	{
		printf("Queue is Overflow");
		return;
	}
	if (front == -1)
		front += 1;
	if (back == MAX - 1)
		back = 0;
	back += 1;
	queue[back] = data;
}

/**
 * print - prints all the queue information
 */
void print(void)
{
	int i;

	if (isEmpty())
	{
		printf("Underflow\n");
		exit(1);
	}

	for (i = front; i <= back; i++)
		printf("%d. %d\n", i, queue[i]);
	printf("\n");
}

/**
 * dequeue - pop the first item from the queue
 * Return: the item deleted
 */
int dequeue(void)
{
	int data;

	if (isEmpty())
	{
		printf("The queue is empty");
		exit(1);
	}
	data = queue[front];
	front += 1;
	return (data);
}
