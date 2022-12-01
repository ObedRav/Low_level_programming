#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t
 *            list.
 * @h: Pointer to a linked list head.
 * Return: The number of total nodes in the linked list.
 */

size_t list_len(const list_t *h)
{
	unsigned int nodes_number = 0;

	if (!h)
	{
		return (nodes_number);
	}

	while (h->next != NULL)
	{
		nodes_number += 1;
		h = h->next;
	}
	nodes_number += 1;
	return (nodes_number);
}
