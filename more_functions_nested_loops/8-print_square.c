#include "main.h"
/**
 * print_square - prints square n times
 * @size: n times
 */
void print_square(int size)
{
	int i, j;

	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
