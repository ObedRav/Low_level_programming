#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first
 *         character, followed by a new line.
 * @str: String
 */
void puts2(char *str)
{
	int i;
	for (i = 0; i <= str[i]; i++)
	{
		if((i % 2) == 0){
			putchar(str[i]);
		}
	}
	putchar('\n');
}
