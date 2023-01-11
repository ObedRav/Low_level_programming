#include "search_algos.h"
/**
 * print_array - prints array
 * @array: sorted array of ints
 * @high: upper bound
 * @low: lower bound
 */
void print_array(int *array, size_t high, size_t low)
{
	if (low > high)
		return;

	printf("Searching in array: ");
	if (low == high)
	{
		printf("%u\n", array[high]);
		return;
	}

	while (low <= high)
	{
		printf("%u", array[low]);
		if (low != high)
			printf(", ");
		low++;
	}
	printf("\n");
}
/**
 * bina_search - binary search helper function
 * Recursively searches for value based on midpoint
 * @array: sorted array of ints
 * @high: top end of array
 * @low: lower bound of array
 * @value: value to search for
 * Return: postion or otherwise -1
 */
int bina_search(int *array, size_t high, size_t low, int value)
{
	int mid = low + (high - low) / 2;

	print_array(array, high, low);

	if (array[mid] == value)
		return (mid);
	if (high >= low)
	{
		if (array[mid] > value)
			return (bina_search(array, mid - 1, low, value));
		else
			return (bina_search(array, high, mid + 1, value));
	}
	return (-1);
}
/**
 * binary_search - binary search algorithm
 * @array: array of sorted ints
 * @size: size of array
 * @value: value to serach for
 * Return: position or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t ret;

	if (!array)
		return (-1);

	ret = bina_search(array, size - 1, 0, value);
	return (ret);
}