#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: Pointer to a linked list head.
 * Return: The number of total nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	unsigned int nodes_number = 0;

	if (!h)
	{
		return (nodes_number);
	}

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			nodes_number += 1;
		}
		else
		{
			printf("[%u] %s\n", (*h).len, h->str);
			nodes_number += 1;
		}

		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	nodes_number += 1;
	return (nodes_number);
}
