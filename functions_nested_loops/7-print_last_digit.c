#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @c: data from user
 * Return: Always 0.
 */

int print_last_digit(int c)
{
int j;
char z;
for (j = 0; j <= c; j++)
z = ((j % 10) + '0')
_putchar(z);
}
