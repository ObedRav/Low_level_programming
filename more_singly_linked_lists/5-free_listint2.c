#include "lists.h"

/**
 * free_listint -  function that frees a linked list.
 * @head: the head of the linked lint
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *actual;
	listint_t *tmp;

	tmp = *head;
	if (!head)
		return;

	while (tmp->next)
	{
		actual = tmp->next;
		free(tmp);
		tmp = actual;
	}
	free(tmp);
	*head = NULL;
}
