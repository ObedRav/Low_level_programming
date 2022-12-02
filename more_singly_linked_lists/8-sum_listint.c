#include "lists.h"

/**
 * sum_listint - Calculates the sum of the integers in a list
 * @head: Pointer to the first element of a list
 * Return: An integer representing the sum of values
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (!head)
		return (sum);

	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}

	sum += head->n;
	return (sum);
}
