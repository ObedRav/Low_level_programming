#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first
 *         character, followed by a new line.
 * @str: String
 */
void puts2(char *str)
{
	int i, length;

	length = _strlen(str);
	for (i = 0; i <= length; i++)
	{
		if((i % 2) == 0){
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
