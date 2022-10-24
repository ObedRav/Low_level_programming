#include "main.h"

/**
 * findmultiplies - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @multiplies: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int findmulplies(int number, int multiplies)
{
	int x = number;

	if (multiplies == x / 2)
	{
		return (-1);
	}

	if (((x % multiplies) == 0) && ((multiplies * multiplies) == x))
	{
		return (multiplies);
	}
	else
	{
		return (findmulplies(x, multiplies + 1));
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	int multiplies = 1;

	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		return (findmulplies(n, multiplies));
	}
}
