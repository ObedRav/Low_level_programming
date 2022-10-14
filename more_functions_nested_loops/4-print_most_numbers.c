#include "main.h"
/**
 * print_most_numbers - print digits 0 to 9 but 2 and 4 are not presents
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
