/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		if (((n % 2) != 0) && ((n % 3) != 0) && ((n % 5) != 0)
		    && ((n % 7) != 0) && ((n % 11) != 0) && ((n % 13)))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
