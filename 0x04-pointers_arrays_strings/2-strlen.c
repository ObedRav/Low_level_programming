#include "main.h"
/**
 * _strlen - count chars
 * @s: data from user
 * Return: The result
 */
int _strlen(char *s)
{
	int i = 0, length = 0;

	while (s[i++])
	{
		length++;
	}

	return (length);
}
