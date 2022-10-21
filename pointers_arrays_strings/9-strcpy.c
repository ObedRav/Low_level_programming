#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including the terminating
 *           null byte (\0), to the buffer pointed to by dest.
 * @dest: destiny pointer
 * @src: origin pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	if (src != "/0")
	{
		dest = src;
		_putchar('\n');
	}
	return (dest);
}
