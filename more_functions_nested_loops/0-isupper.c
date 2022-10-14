#include "main.h"
/**
 * _isupper - return if c is upper
 * Return: c
 * @c: Data from user
 */

int _isupper(int c)
{
	c = (c + '0');
		if (c >= 'A' && c <= 'Z')
		{
			c = (c - '0');
			return (c);
		}
		else
		{
			return (0);
		}
}
