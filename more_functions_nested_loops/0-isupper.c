#include "main.h"
/**
 * _isupper - return if c is upper
 * Return: c
 * @c: Data from user
 */

int _isupper(int c)
{
	char b;
	b = (char)c;
		if (b >= 'A' && b <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
