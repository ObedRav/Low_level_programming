#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list.
 * @n: the integer value of singly list
 * @head: the head of the linked lint
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp;

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
		return (*head);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_node;
	return (*head);
}
