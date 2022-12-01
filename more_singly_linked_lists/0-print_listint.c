#include "lists.h"

/**
 * print_listint - Write a function that prints all the elements of a listint_t
 * @h: the head pf the listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int actual = 0;

	if (!h)
		return (actual);

	while (h->next)
	{
		printf("%d \n", h->n);
		actual += 1;
		h = h->next;
	}
	printf("%d\n", h->n);
	actual += 1;
	return (actual);

}
