#include "main.h"

/**
 * power - calculates the power pf two numbers
 * @base: base to calcule
 * @powr: the power to calculate
 * Return: the result fo the operation
 */
unsigned int power(int base, unsigned int powr)
{
	unsigned int i, pows = base, current = 0;
	for (i = 1; i <= powr; i++)
	{
		current = pows;
		pows = current*base;
	}
	return ((pows/base));
}

/**
 * _strlen - count chars
 * @s: data from user
 * Return: The result
 */
int _strlen(const char *s)
{
	int i = 0, length = 0;

	while (s[i++])
	{
		length++;
	}

	return (length);
}

/**
 * binary_to_uint - Converters a binary number to an unsigned integer
 * @b: String representing a binary number
 * Return: The converted number or 0 if b is NULL or if there are chars
 * that are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int dec = 0, i = 0, rem, n, j = 0, z;

	if (!b)
		return (0);

	j = _strlen(b);

	for (z = 0; z < j; z++)
	{
		if (b[z] != '0' && b[z] != '1')
			return (0);
	}

	n = atoi(b);

	while (n!=0)
	{
		rem = n % 10;
		n /= 10;
		dec += rem * power(2, i);
		++i;
	}

	return (dec);
}
