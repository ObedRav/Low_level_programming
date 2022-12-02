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
	listint_t *new_node, *current, *tmp;
	unsigned int i;

	tmp = *head;
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	for (i = 0; i <= idx; i++)
	{
		if (!head || !(*head))
			return (NULL);

		current = (tmp);

		if (i == (idx - 1))
		{
			new_node->next = current->next;
			(tmp)->next = new_node;
			(tmp) = (tmp)->next;
		}
		else
			(tmp) = (tmp)->next;
	}

	return (new_node);
}
