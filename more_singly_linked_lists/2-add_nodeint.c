#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @n: the integer value of singly list
 * @head: the head of the linked lint
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	if (!*head)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->n = n;
	*head = new_node;

	return (*head);
}
