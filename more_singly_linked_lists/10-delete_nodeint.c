#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a designated index
 * @head: Pointer to the beginning of the list
 * @index: Index of the node to be freed
 * Return: 1 if susccessful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *node;

	tmp = *head;
	if (!head || !*head)
		return (-1);
	for (i = 0; i < index - 1 && tmp && index != 0; i++)
		tmp = tmp->next;
	if (!tmp)
		return (-1);
	if (index == 0)
	{
		node = tmp->next;
		free(tmp);
		*head = node;
	}
	else
	{
		if (!tmp->next)
			node = tmp->next;
		else
			node = tmp->next->next;
		free(tmp->next);
		tmp->next = node;
	}
	return (1);
}
