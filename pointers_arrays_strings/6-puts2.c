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

/**
 * puts2 - prints every other character of a string, starting with the first
 *         character, followed by a new line.
 * @str: String
 */
void puts2(char *str)
{
	int i, length;

	length = _strlen(str);
	for (i = 0; i <= (length-1); i++)
	{
		if((i % 2) == 0){
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
