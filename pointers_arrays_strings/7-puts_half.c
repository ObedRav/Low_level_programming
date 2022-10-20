#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: The string containing characters
 */
void puts_half(char *str)
{
	int i, length = 0;

	for (i = 0; i <= str[i]; i++)
	{
		length++;
	}
	for (i = 0; i <= (length - 1); i++)
	{
		if ((length % 2) == 0)
		{
			if (i >= (length / 2))
			{
				_putchar(str[i]);
			}
		}
		if ((length % 2) != 0)
		{
			if (i >= ((length - 1) / 2))
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n')
}
