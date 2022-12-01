#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list.
 * @h: the head element of listint_t
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int number = 0;

	if (!h)
		return (number);

	while (h->next)
	{
		number += 1;
		h = h->next;
	}

	number += 1;
	return (number);
}
