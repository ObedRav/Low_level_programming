#include "lists.h"

/**
 * len - Calculates the length of a string
 * @s: Constant string
 * Return: The length of the string
 */
int len(const char *s)
{
	unsigned int i = 0;

	if (!s)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: Pointer to head of the linked list
 * @str: String to assigned to the node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new_nodo;

	tmp = *head;
	if (!head)
		return (NULL);
	new_nodo = (list_t *)malloc(sizeof(list_t));
	if (!new_nodo)
		return (NULL);
	new_nodo->str = strdup(str);
	new_nodo->len = len(str);
	new_nodo->next = NULL;

	if (*head == NULL)
	{
		*head = new_nodo;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_nodo;
	return (*head);
}
