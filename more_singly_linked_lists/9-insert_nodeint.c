#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a given index
 * @head: Pointer to the first element of the list
 * @idx: Index to insert a node at
 * @n: number to be inserted into the node
 * Return: The address of the newly created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp, *tmp_old;
	unsigned int i;

	tmp = *head;
	if (!head)
		return (NULL);
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
		*head = new_node;
	for (i = 0; i < idx - 1 && tmp && idx != 0; i++)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	if (idx == 0)
		new_node->next = tmp;
	else
	{
		tmp_old = tmp->next;
		tmp->next = new_node;
		new_node->next = tmp_old;
	}
	return (new_node);
}
