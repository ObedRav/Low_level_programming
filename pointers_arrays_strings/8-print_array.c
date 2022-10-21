#include "main.h"
/**
 * print - prints int
 * @n: the number
 */

void print(long n)
{
	/**
	 * If number is smaller than 0, put a - sign
	 * and change number to positive
	 */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/**
	 * Remove the last digit and recur
	 */
	if (n / 10)
		print(n / 10);
	/**
	 * Print the last digit
	 */
	_putchar(n % 10 + '0');
}
/**
 * print_array - print an array of int with putchar
 * @a: array of int
 * @n: lenght of array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		if (i < (n - 1))
		{
			print(a[i]);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			print(a[i]);
			_putchar('\n');
		}
	}
}
