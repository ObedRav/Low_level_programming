#include "main.h"
/**
 * print_numbers - print all numbers 0-9
 * Return: digits 0 to 9;
 */
void print_numbers(void)
{
	int i;
	char j;
	for (i = 0; i <= 9; i++)
	{
		j = (char)i;
		_putchar(i);
	}
}
