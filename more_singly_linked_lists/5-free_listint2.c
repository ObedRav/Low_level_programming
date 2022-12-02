#include "lists.h"

/**
 * free_listint -  function that frees a linked list.
 * @head: the head of the linked lint
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *actual;

	if (!head || !*head)
		return;

	while ((*head)->next)
	{
		actual = (*head)->next;
		free(*head);
		*(head) = actual;
	}
	free(*head);
	*head = NULL;
}
