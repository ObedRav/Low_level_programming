#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory area pointed
 *           to by @src into that pointed to by @dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 * Return: A pointer to a character
 */
char *rev_string(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to interpret as binary
 */
void print_binary(unsigned long int n)
{
	int i;
	char *str;
	char *rev_str;

	if (!n)
	{
		printf("%d", 0);
		return;
	}

	for (i = 0; n > 0; i++)
	{
		if (n % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		n = n / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	printf("%s", rev_str);
}
