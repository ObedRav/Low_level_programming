#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: Pointer to the first element of the list
 * Return: the head node’s data (n),
 *         if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	tmp = *head;
	(*head) = (*head)->next;

	free(tmp);

	return (n);
}
